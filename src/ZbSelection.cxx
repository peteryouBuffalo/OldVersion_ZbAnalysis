#define ZbSelection_cxx

#include <math.h>

#include "TList.h"
#include "TParameter.h"
#include "TLorentzVector.h"

#include "ZbSelection.h"
#include "Global.h"
#include "Obj.cxx"

#include <iostream>
#include "TH1.h"

using namespace std;
float PI = M_PI;

ZbSelection::ZbSelection(bool isData) : Selector(isData), h_zee_jet(0), h_zmm_jet(0) {}

ZbSelection::~ZbSelection() {
  if (h_zee_jet) delete h_zee_jet;
  if (h_zmm_jet) delete h_zmm_jet;
} 

void ZbSelection::SlaveBegin(Reader* r) {
  h_zee_jet = new ZbPlots("Zee_jet") ;
  h_zmm_jet = new ZbPlots("Zmm_jet") ;

  h_dR_je = new TH1D("h_dR_je","",500,0,5) ;
  h_dR_jm = new TH1D("h_dR_jm","",500,0,5) ;

  h_nMuon = new TH1D("h_nMuon","",10,-0.5,9.5) ;
  h_nEle = new TH1D("h_nEle","",10,-0.5,9.5) ;
  h_nJet = new TH1D("h_nJet","",10,-0.5,9.5) ;

  h_ele_cutflow = new TH1D("ele_cutflow","",10,-0.5,9.5) ;
  h_muon_cutflow = new TH1D("muon_cutflow","",10,-0.5,9.5) ;
  h_Jet_cutflow = new TH1D("Jet_cutflow","",10,-0.5,9.5) ;
  h_zee_cutflow = new TH1D("zee_cutflow","",10,-0.5,9.5) ;
  h_zmm_cutflow = new TH1D("zmm_cutflow","",10,-0.5,9.5) ;

  h_pt_jet_after_ele_rem = new TH1D("jet_pt_after_ele_rem","",200,0.0,200) ;

  


  //Add histograms to fOutput so they can be saved in Processor::SlaveTerminate
  std::vector<TH1*> tmp = h_zee_jet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zmm_jet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  r->GetOutputList()->Add(h_dR_je) ;
  r->GetOutputList()->Add(h_dR_jm) ;
  //r->GetOutputList()->Add(h_nMuon) ;
  //r->GetOutputList()->Add(h_nEle) ;
  //r->GetOutputList()->Add(h_nJet) ;
  r->GetOutputList()->Add(h_ele_cutflow) ;
  r->GetOutputList()->Add(h_muon_cutflow) ;
  r->GetOutputList()->Add(h_Jet_cutflow) ;
  r->GetOutputList()->Add(h_zee_cutflow) ;
  r->GetOutputList()->Add(h_zmm_cutflow) ;
  r->GetOutputList()->Add(h_pt_jet_after_ele_rem) ;
  const Int_t nx = 2, yx= 4, nzee=3, nzmm=3;
  const char *ele_cut[nx] = {"not cut","loose MVA"};
  const char *muon_cut[nx] = {"not cut","loose muon ID"};
  const char *jet_cut[yx] = {"not cut","ele overlap removal","muon overlap removal","loose jet ID"};
  const char *zee_cut[nzee] = {"all event (not cut)","pass electron  cuts","pass jet  cuts"};
  const char *zmm_cut[nzmm] = {"all event (not cut)","pass muon  cuts","pass jet  cuts"};
  for (int i=1;i<=nx;i++) h_ele_cutflow->GetXaxis()->SetBinLabel(i+1.5,ele_cut[i-1]);
  for (int i=1;i<=nx;i++) h_muon_cutflow->GetXaxis()->SetBinLabel(i+1.5,muon_cut[i-1]);
  for (int i=1;i<=yx;i++) h_Jet_cutflow->GetXaxis()->SetBinLabel(i+1.5,jet_cut[i-1]);
  for (int i=1;i<=nzee;i++) h_zee_cutflow->GetXaxis()->SetBinLabel(i+1.5,zee_cut[i-1]);
  for (int i=1;i<=nzmm;i++) h_zmm_cutflow->GetXaxis()->SetBinLabel(i+1.5,zmm_cut[i-1]);

}

void ZbSelection::Process(Reader* r) {
  //std::cout << "\n Data type: " << m_isData ;
  //std::cout << "\n Number of jets: " << *(r->nJet) ;
  //if (*(r->nJet)>0) std::cout << "\n First jet: " << (r->Jet_eta)[0] ;

  //=============Get objects============= 
  //electrons
  std::vector<LepObj> eles ;
  
  for (unsigned int i = 0 ; i < *(r->nElectron) ; ++i) {
    h_ele_cutflow->Fill(1) ;
    LepObj ele((r->Electron_pt)[i],(r->Electron_eta)[i],(r->Electron_phi)[i],(r->Electron_mass)[i],0) ;
    if (r-> Electron_mvaFall17V1Iso_WP90[i] <= 0) continue;
    h_ele_cutflow->Fill(2)  ;
    if (ele.m_lvec.Pt() > CUTS.Get<float>("lep_pt") && fabs(ele.m_lvec.Eta()) < CUTS.Get<float>("lep_eta")) 
	eles.push_back(ele) ;
    //h_nEle->Fill(eles.size()) ;
  }
  
  //muons
  std::vector<LepObj> muons ;
  for (unsigned int i = 0 ; i < *(r->nMuon) ; ++i) {
    h_muon_cutflow->Fill(1) ;
    LepObj muon((r->Muon_pt)[i],(r->Muon_eta)[i],(r->Muon_phi)[i],(r->Muon_mass)[i],(r->Muon_pfRelIso03_all)[i]) ;
    if (r-> Muon_looseId[i] <= 0) continue;
    h_muon_cutflow->Fill(2) ;
    if (muon.m_lvec.Pt() > CUTS.Get<float>("lep_pt") && fabs(muon.m_lvec.Eta()) < CUTS.Get<float>("lep_eta")) 
	muons.push_back(muon) ;
    //h_nMuon->Fill(muons.size()) ;
  }
  
  //jets
  std::vector<JetObj> jets ;
  std::vector<JetObj> jets_ele_removal ;
  for (unsigned int i = 0 ; i < *(r->nJet) ; ++i) {
    h_Jet_cutflow->Fill(1) ;
    JetObj jet((r->Jet_pt)[i],(r->Jet_eta)[i],(r->Jet_phi)[i],(r->Jet_mass)[i],(r->Jet_btagDeepB)[i]) ;
    if (jet.IsLepton(eles)) continue ;
     jets_ele_removal.push_back(jet) ;
     
    h_Jet_cutflow->Fill(2) ;
    if (jet.IsLepton(muons)) continue ;
    h_Jet_cutflow->Fill(3) ;
    if (r->Jet_jetId[i] <= 0 ) continue ;
    h_Jet_cutflow->Fill(4) ;
    //if (r->Jet_btagCSVV2[i] <= 0.8484) continue;
    //if (r->SV_mass[i] < 0) continue;
    if (jet.m_lvec.Pt() > CUTS.Get<float>("jet_pt") && fabs(jet.m_lvec.Eta()) < CUTS.Get<float>("jet_eta")) 
	jets.push_back(jet) ;
    //h_nJet->Fill(jets.size()) ;
  }
  
  //Zee + jets
   h_zee_cutflow->Fill(1); //all events (not cut)
  if (eles.size() >= 2) {
	h_zee_cutflow->Fill(2) ; //pass electron  cuts
    if (jets.size() >= 1) {
	h_zee_cutflow->Fill(3) ; //pass jet cuts

      ZObj Z(eles[0],eles[1]) ;
      JetObj J(jets[0]) ;
      
      // isolation
      float deltaRelelep0 = Z.m_lep0.m_lvec.DeltaR(J.m_lvec);
      float deltaRelelep1 = Z.m_lep1.m_lvec.DeltaR(J.m_lvec);
      
      h_zee_jet->Fill(Z, J) ;
      
      h_dR_je->Fill(std::min(deltaRelelep0,deltaRelelep1)) ;
	
    }

  }

     JetPlot J_cut1(jets_ele_removal[0]);
     h_pt_jet_after_ele_rem->Fill(J_cut1.m_lvec.Pt());

  //Zmm + jets
  h_zmm_cutflow->Fill(1); //all events (not cut)
  if (muons.size() >= 2) {
	h_zmm_cutflow->Fill(2) ; //pass muon  cuts
    if (jets.size() >= 1) {
	h_zmm_cutflow->Fill(3) ; //pass jet cuts

      ZObj Z(muons[0],muons[1]) ;
      JetObj J(jets[0]) ;
      float deltaRmuonlep0 = Z.m_lep0.m_lvec.DeltaR(J.m_lvec);
      float deltaRmuonlep1 = Z.m_lep1.m_lvec.DeltaR(J.m_lvec);
      
      h_zmm_jet->Fill(Z, J) ;
      h_dR_jm->Fill(std::min(deltaRmuonlep0,deltaRmuonlep1)) ;

    }

  }

  
  

} //end Process



void ZbSelection::Terminate(TList* mergedList, std::string outFileName) {
  
  TList* aList = new TList() ;
  TParameter<double>* a = new TParameter<double>("lep_eta",CUTS.Get<float>("lep_eta")) ;
  aList->Add(a) ;
  a = new TParameter<double>("lep_pt",CUTS.Get<float>("lep_pt")) ;
  aList->Add(a) ;
  a = new TParameter<double>("jet_pt",CUTS.Get<float>("jet_pt")) ;
  aList->Add(a) ;
  a = new TParameter<double>("jet_eta",CUTS.Get<float>("jet_eta")) ;
  aList->Add(a) ;
  
  TFile* f = new TFile(outFileName.c_str(), "UPDATE") ;
  aList->Write("ZbSelectionCuts",TObject::kSingleKey) ;

  f->Close() ;

}

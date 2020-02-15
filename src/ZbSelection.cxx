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
ZbSelection::ZbSelection(bool isData) : Selector(isData), h_zee_jet(0), h_zmm_jet(0) {}

ZbSelection::~ZbSelection() {
  if (h_zee_jet) delete h_zee_jet;
  if (h_zmm_jet) delete h_zmm_jet;
} 

void ZbSelection::SlaveBegin(Reader* r) {
  h_zee_jet = new ZbPlots("Zee_jet") ;
  h_zmm_jet = new ZbPlots("Zmm_jet") ;

  h_jet_pt = new TH1D("h_jet_pt","",500,0,500) ;

  //Add histograms to fOutput so they can be saved in Processor::SlaveTerminate
  std::vector<TH1*> tmp = h_zee_jet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zmm_jet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  r->GetOutputList()->Add(h_jet_pt) ;

}
//------------ method called  -----------
float DR(float x, float y){return (sqrt(pow(x,2.0) + pow(y,2.0)));}
float Deta(float x, float y){return (x-y);}
float Dphi(float x, float y){return (x-y);}
const double PI = M_PI;
float DphiC(float x){
if (x<=PI && x>=0)
return x;
else if (x > PI)
return DphiC (x-PI);
else if (x <= -PI)
return DphiC(x + PI);
else if (x<0 && x> -PI)
return DphiC(x = -x);
return 0;
}
//TFile* outFile = new TFile("930.root", "RECREATE");
//TH1F *h_nmum = new TH1F("nmum","negative muon multiplicity", 11.,-0.5,10.5);

void ZbSelection::Process(Reader* r) {
  //std::cout << "\n Data type: " << m_isData ;
  //std::cout << "\n Number of jets: " << *(r->nJet) ;
  //if (*(r->nJet)>0) std::cout << "\n First jet: " << (r->Jet_eta)[0] ;

  //=============Get objects============= 
  std::vector<LepObj> eles ;
  for (unsigned int i = 0 ; i < *(r->nElectron) ; ++i) {
    LepObj ele((r->Electron_pt)[i],(r->Electron_eta)[i],(r->Electron_phi)[i],(r->Electron_mass)[i],0) ;
    //if (r-> Electron_mvaFall17V1Iso_WP90[i] <= 0) continue;
    //if (ele.m_lvec.Pt() > CUTS.Get<float>("lep_pt") && fabs(ele.m_lvec.Eta()) < CUTS.Get<float>("lep_eta")) 
	eles.push_back(ele) ;
  }

  std::vector<LepObj> muons ;
  for (unsigned int i = 0 ; i < *(r->nMuon) ; ++i) {
    LepObj muon((r->Muon_pt)[i],(r->Muon_eta)[i],(r->Muon_phi)[i],(r->Muon_mass)[i],(r->Muon_pfRelIso03_all)[i]) ;
    //if (r-> Muon_looseId[i] <= 0) continue;
    //if (muon.m_lvec.Pt() > CUTS.Get<float>("lep_pt") && fabs(muon.m_lvec.Eta()) < CUTS.Get<float>("lep_eta")) 
	muons.push_back(muon) ;
  }

  std::vector<JetObj> jets ;
  for (unsigned int i = 0 ; i < *(r->nJet) ; ++i) {
    JetObj jet((r->Jet_pt)[i],(r->Jet_eta)[i],(r->Jet_phi)[i],(r->Jet_mass)[i],(r->Jet_btagDeepB)[i]) ;
    //if (r->Jet_jetId[i] <= 0 ) continue;
    //if (r->Jet_btagCSVV2[i] <= 0.8484) continue;
    //if (r->SV_mass[i] < 0) continue;
    //if (jet.m_lvec.Pt() > CUTS.Get<float>("jet_pt") && fabs(jet.m_lvec.Eta()) < CUTS.Get<float>("jet_eta")) 
	jets.push_back(jet) ;
  }
  
  //Zee + jets
  if (eles.size() >= 2) {
    if (jets.size() >= 1) {
      ZObj Z(eles[0],eles[1]) ;
      JetObj J(jets[0]) ;
	
      // Delta R for leading electron
      float deltaphielelep0 = Dphi(Z.m_lep0.m_lvec.Phi(), J.m_lvec.Phi());
      float deltaetaelelep0 = Deta(Z.m_lep0.m_lvec.Eta() , J.m_lvec.Eta());
      float deltaphiCelelep0 = DphiC(deltaphielelep0);
      float deltaRelelep0 = DR (deltaetaelelep0, deltaphiCelelep0);    //calling the function
      //h_nmum->Fill(deltaetaelelep0);
	
      // Delta R for sub-leading electron
      float deltaphielelep1 = Dphi(Z.m_lep1.m_lvec.Phi(), J.m_lvec.Phi());
      float deltaetaelelep1 = Deta(Z.m_lep1.m_lvec.Eta() , J.m_lvec.Eta());
      float deltaphiCelelep1 = DphiC(deltaphielelep1);
      float deltaRelelep1 = DR (deltaetaelelep1, deltaphiCelelep1);    //calling the function

      // isolation
      //if (deltaRelelep0 > 0.4 && deltaRelelep1 > 0.4){
      h_zee_jet->Fill(Z, J) ;
	//}
    }

  }

  //Zmm + jets
  if (muons.size() >= 2) {
    if (jets.size() >= 1) {
      ZObj Z(muons[0],muons[1]) ;
      JetObj J(jets[0]) ;
      // Delta R for leading muon
      float deltaphimuonlep0 = Dphi(Z.m_lep0.m_lvec.Phi(), J.m_lvec.Phi());
      float deltaetamuonlep0 = Deta(Z.m_lep0.m_lvec.Eta() , J.m_lvec.Eta());
      float deltaphiCmuonlep0 = DphiC(deltaphimuonlep0);
      float deltaRmuonlep0 = DR (deltaetamuonlep0, deltaphiCmuonlep0);    //calling the function
	
      // Delta R for sub-leading muon
      float deltaphimuonlep1 = Dphi(Z.m_lep1.m_lvec.Phi(), J.m_lvec.Phi());
      float deltaetamuonlep1 = Deta(Z.m_lep1.m_lvec.Eta() , J.m_lvec.Eta());
      float deltaphiCmuonlep1 = DphiC(deltaphimuonlep1);
      float deltaRmuonlep1 = DR (deltaetamuonlep1, deltaphiCmuonlep1);    //calling the function

      //if (deltaRmuonlep1 > 0.4 && deltaRmuonlep0 > 0.4) {
      h_zmm_jet->Fill(Z, J) ;
      h_jet_pt->Fill((r->Jet_pt)[0]) ;
	//}
    }

  }
//h_nmum->Draw();
//h_nmum->Write();
//outFile->Close();


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

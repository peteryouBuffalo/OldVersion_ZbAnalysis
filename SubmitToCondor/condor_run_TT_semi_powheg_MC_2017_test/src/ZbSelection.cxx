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

//#include "BTagCalibrationStandalone.h"
//#include "BTagCalibrationStandalone.cpp"

using namespace std;
float PI = M_PI;

//ZbSelection::ZbSelection(bool isData, std::string year) : Selector(isData, year), h_zee_jet(0), h_zmm_jet(0) {}

ZbSelection::~ZbSelection() {
  //if (h_zee_jet) delete h_zee_jet;
  //if (h_zmm_jet) delete h_zmm_jet;
} 

void ZbSelection::SlaveBegin(Reader* r) {
  h_evt = new TH1D("Nevt","",3,-1.5,1.5) ;
  h_zee_jet = new ZbPlots("Zee_jet") ;
  h_zee_bjet = new ZbPlots("Zee_bjet") ;
  h_zee_2bjet = new Z2bPlots("Zee_2bjet") ;
  h_zee_bjet_deepJet = new ZbPlots("Zee_bjetDeepJet") ;
  h_zee_2bjet_deepJet = new Z2bPlots("Zee_2bjetDeepJet") ;
  
  h_zmm_jet = new ZbPlots("Zmm_jet") ;
  h_zmm_bjet = new ZbPlots("Zmm_bjet") ;
  h_zmm_2bjet = new Z2bPlots("Zmm_2bjet") ;
  h_zmm_bjet_deepJet = new ZbPlots("Zmm_bjetDeepJet") ;
  h_zmm_2bjet_deepJet = new Z2bPlots("Zmm_2bjetDeepJet") ;
 
  h_zem_jet = new ZbPlots("Zem_jet");
  h_zem_2bjet_elec = new Z2bPlots("Zem_2bjet_elecTrig");
  h_zem_2bjet_muon = new Z2bPlots("Zem_2bjet_muonTrig");

  unsigned nBins = 9 ;
  float bins[10] = {20, 30, 50, 70, 100, 140, 200, 300, 600, 1000} ;
  h_eff_b = new EffPlots("b", nBins, bins) ;
  h_eff_c = new EffPlots("c", nBins, bins) ;
  h_eff_l = new EffPlots("l", nBins, bins) ;
  h_eff_bdj = new EffPlots("bdj", nBins, bins) ;
  h_eff_cdj = new EffPlots("cdj", nBins, bins) ;
  h_eff_ldj = new EffPlots("ldj", nBins, bins) ;

  h_dR_je = new TH1D("h_dR_je","",500,0,5) ;
  h_dR_jm = new TH1D("h_dR_jm","",500,0,5) ;

  h_Zee_ZmassFull = new TH1D("Zee_ZmassFull","",300,0,300) ;
  h_Zmm_ZmassFull = new TH1D("Zmm_ZmassFull","",300,0,300) ;
  h_Zem_ZmassFull = new TH1D("Zem_ZmassFull","",300,0,300) ;

  h_Zee_ZMass_bjet = new TH1D("Zee_ZmassFull_bjet", "", 300, 0, 300);
  h_Zee_ZMass_2bjet = new TH1D("Zee_ZmassFull_2bjet", "", 300, 0, 300);
  h_Zmm_ZMass_bjet = new TH1D("Zmm_ZmassFull_bjet", "", 300, 0, 300);
  h_Zmm_ZMass_2bjet = new TH1D("Zmm_ZmassFull_2bjet", "", 300, 0, 300);
  h_Zem_ZMass_bjet = new TH1D("Zem_ZmassFull_bjet", "", 300, 0, 300);
  //h_Zem_ZMass_2bjet_elec = new TH1D("Zem_ZmassFull_2bjet_elecTrig", "", 300, 0, 300);
  //h_Zem_ZMass_2bjet_muon = new TH1D("Zem_ZmassFull_2bjet_muonTrig", "", 300, 0, 300);

  h_Zee_MET_2bjet = new TH1D("Zee_MET_2bjet", "", 300, 0, 300);
  h_Zmm_MET_2bjet = new TH1D("Zmm_MET_2bjet", "", 300, 0, 300);
  h_Zem_MET_2bjet_elec = new TH1D("Zem_MET_2bjet_elec", "", 300, 0, 300);
  h_Zem_MET_2bjet_muon = new TH1D("Zem_MET_2bjet_muon", "", 300, 0, 300);

  h_Zee_METsig_2bjet = new TH1D("Zee_METsig_2bjet", "", 300, 0, 300);
  h_Zmm_METsig_2bjet = new TH1D("Zmm_METsig_2bjet", "", 300, 0, 300);
  h_Zem_METsig_2bjet_elec = new TH1D("Zem_METsig_2bjet_elec", "", 300, 0, 300);
  h_Zem_METsig_2bjet_muon = new TH1D("Zem_METsig_2bjet_muon", "", 300, 0, 300); 

  h_Zee_fullMET_2bjet = new TH1D("Zee_fullMET_2bjet", "", 300, 0, 300);
  h_Zmm_fullMET_2bjet = new TH1D("Zmm_fullMET_2bjet", "", 300, 0, 300);
  h_Zem_fullMET_2bjet_elec = new TH1D("Zem_fullMET_2bjet_elec", "", 300, 0, 300);
  h_Zem_fullMET_2bjet_muon = new TH1D("Zem_fullMET_2bjet_muon", "", 300, 0, 300);

  h_Zee_fullMETsig_2bjet = new TH1D("Zee_fullMETsig_2bjet", "", 300, 0, 300);
  h_Zmm_fullMETsig_2bjet = new TH1D("Zmm_fullMETsig_2bjet", "", 300, 0, 300);
  h_Zem_fullMETsig_2bjet_elec = new TH1D("Zem_fullMETsig_2bjet_elec", "", 300, 0, 300);
  h_Zem_fullMETsig_2bjet_muon = new TH1D("Zem_fullMETsig_2bjet_muon", "", 300, 0, 300);

  h_Zee_fullPuppiMET_2bjet = new TH1D("Zee_fullPuppiMET_2bjet", "", 300, 0, 300);
  h_Zmm_fullPuppiMET_2bjet = new TH1D("Zmm_fullPuppiMET_2bjet", "", 300, 0, 300);

  h_Zee_sidebar = new TH1D("Zee_sidebar", "", 300,0,300);
  h_Zee_sidebar_bjet = new TH1D("Zee_sidebar_bjet", "", 300, 0, 300);

  h_Zmm_sidebar = new TH1D("Zmm_sidebar", "", 300,0,300);
  h_Zmm_sidebar_bjet = new TH1D("Zmm_sidebar_bjet", "", 300,0,300);

  h_nMuon = new TH1D("h_nMuon","",10,-0.5,9.5) ;
  h_nEle = new TH1D("h_nEle","",10,-0.5,9.5) ;
  h_nJet = new TH1D("h_nJet","",10,-0.5,9.5) ;

  h_ele_cutflow = new TH1D("ele_cutflow","",10,-0.5,9.5) ;
  h_muon_cutflow = new TH1D("muon_cutflow","",10,-0.5,9.5) ;
  h_Jet_cutflow = new TH1D("Jet_cutflow","",10,-0.5,9.5) ;
  h_zee_cutflow = new TH1D("zee_cutflow","",10,-0.5,9.5) ;
  h_zmm_cutflow = new TH1D("zmm_cutflow","",10,-0.5,9.5) ;

  h_pt_jet_after_ele_rem = new TH1D("jet_pt_after_ele_rem","",200,0.0,200) ;
  
  //Sumw2
  h_Zee_ZmassFull->Sumw2() ;
  h_Zmm_ZmassFull->Sumw2() ;
  h_Zem_ZmassFull->Sumw2() ;

  //Add histograms to fOutput so they can be saved in Processor::SlaveTerminate
  r->GetOutputList()->Add(h_evt) ;

  std::vector<TH1*> tmp = h_zee_jet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zmm_jet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
 
  tmp = h_zem_jet->returnHisto();
  for(size_t i=0;i<tmp.size();++i) r->GetOutputList()->Add(tmp[i]); 

  tmp = h_zee_bjet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_zmm_bjet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zem_2bjet_elec->returnHisto() ;
  for(size_t i=0;i<tmp.size();++i) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zem_2bjet_muon->returnHisto() ;
  for(size_t i=0; i<tmp.size(); ++i) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zee_2bjet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_zmm_2bjet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zee_bjet_deepJet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_zmm_bjet_deepJet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zee_2bjet_deepJet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_zmm_2bjet_deepJet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_eff_b->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_eff_c->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_eff_l->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_eff_bdj->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_eff_cdj->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_eff_ldj->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  r->GetOutputList()->Add(h_Zee_MET_2bjet);
  r->GetOutputList()->Add(h_Zmm_MET_2bjet);
  r->GetOutputList()->Add(h_Zem_MET_2bjet_elec);
  r->GetOutputList()->Add(h_Zem_MET_2bjet_muon);
  r->GetOutputList()->Add(h_Zee_METsig_2bjet);
  r->GetOutputList()->Add(h_Zmm_METsig_2bjet);
  r->GetOutputList()->Add(h_Zem_METsig_2bjet_elec);
  r->GetOutputList()->Add(h_Zem_METsig_2bjet_muon);

  r->GetOutputList()->Add(h_Zee_fullMET_2bjet);
  r->GetOutputList()->Add(h_Zmm_fullMET_2bjet);
  r->GetOutputList()->Add(h_Zem_fullMET_2bjet_elec);
  r->GetOutputList()->Add(h_Zem_fullMET_2bjet_muon);
  r->GetOutputList()->Add(h_Zee_fullMETsig_2bjet);
  r->GetOutputList()->Add(h_Zmm_fullMETsig_2bjet);
  r->GetOutputList()->Add(h_Zem_fullMETsig_2bjet_elec);
  r->GetOutputList()->Add(h_Zem_fullMETsig_2bjet_muon);

  r->GetOutputList()->Add(h_Zee_fullPuppiMET_2bjet);
  r->GetOutputList()->Add(h_Zmm_fullPuppiMET_2bjet);

  r->GetOutputList()->Add(h_Zee_sidebar);
  r->GetOutputList()->Add(h_Zee_sidebar_bjet);
  r->GetOutputList()->Add(h_Zmm_sidebar);
  r->GetOutputList()->Add(h_Zmm_sidebar_bjet);

  r->GetOutputList()->Add(h_Zee_ZMass_bjet);
  r->GetOutputList()->Add(h_Zee_ZMass_2bjet);
  r->GetOutputList()->Add(h_Zmm_ZMass_bjet);
  r->GetOutputList()->Add(h_Zmm_ZMass_2bjet);
  r->GetOutputList()->Add(h_Zem_ZMass_bjet);
  //r->GetOutputList()->Add(h_Zem_ZMass_2bjet_elec);
  //r->GetOutputList()->Add(h_Zem_ZMass_2bjet_muon);

  r->GetOutputList()->Add(h_dR_je) ;
  r->GetOutputList()->Add(h_dR_jm) ;
  //r->GetOutputList()->Add(h_nMuon) ;
  //r->GetOutputList()->Add(h_nEle) ;
  //r->GetOutputList()->Add(h_nJet) ;
  r->GetOutputList()->Add(h_Zee_ZmassFull) ;
  r->GetOutputList()->Add(h_Zmm_ZmassFull) ;
  r->GetOutputList()->Add(h_Zem_ZmassFull) ;
  r->GetOutputList()->Add(h_ele_cutflow) ;
  r->GetOutputList()->Add(h_muon_cutflow) ;
  r->GetOutputList()->Add(h_Jet_cutflow) ;
  r->GetOutputList()->Add(h_zee_cutflow) ;
  r->GetOutputList()->Add(h_zmm_cutflow) ;
  r->GetOutputList()->Add(h_pt_jet_after_ele_rem) ;
  
  const Int_t nx = 3, nx1 = 4, yx= 5, nzee=7, nzmm=7;
  const char *ele_cut[nx] = {"all","kine","ID"};
  const char *muon_cut[nx1] = {"all","kine","loose muon ID", "iso"};
  const char *jet_cut[yx] = {"all", "kine", "ele overlap removal","muon overlap removal","loose jet ID"};
  const char *zee_cut[nzee] = {"all event (not cut)","trigger","pass electron  cuts","pass Z mass cuts`", "pass jet cuts", "pass b-jet", "pass 2 b-jets"};
  const char *zmm_cut[nzmm] = {"all event (not cut)","trigger","pass muon  cuts", "pass Z mass cuts", "pass jet cuts", "pass b-jet", "pass 2 b-jets"};
  for (int i=1;i<=nx;i++) h_ele_cutflow->GetXaxis()->SetBinLabel(i+1.5,ele_cut[i-1]);
  for (int i=1;i<=nx1;i++) h_muon_cutflow->GetXaxis()->SetBinLabel(i+1.5,muon_cut[i-1]);
  for (int i=1;i<=yx;i++) h_Jet_cutflow->GetXaxis()->SetBinLabel(i+1.5,jet_cut[i-1]);
  for (int i=1;i<=nzee;i++) h_zee_cutflow->GetXaxis()->SetBinLabel(i+1.5,zee_cut[i-1]);
  for (int i=1;i<=nzmm;i++) h_zmm_cutflow->GetXaxis()->SetBinLabel(i+1.5,zmm_cut[i-1]);

}

void ZbSelection::Process(Reader* r) {
  //Weights
  float genWeight = 1. ;
#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
  if (*(r->genWeight) < 0) genWeight = -1. ;
  if (*(r->genWeight) == 0) h_evt->Fill(0) ; 
  if (*(r->genWeight) < 0) h_evt->Fill(-1) ; 
  if (*(r->genWeight) > 0) h_evt->Fill(1) ; 
#endif

  float evtW = 1. ;
  
  if (!m_isData) evtW *= genWeight ;
  
  //=============Get objects============= 
  //electrons
  std::vector<LepObj> eles ;
  std::vector<LepObj> eles_jetOverlap ;
  for (unsigned int i = 0 ; i < *(r->nElectron) ; ++i) {
    
    h_ele_cutflow->Fill(1) ;
    
    LepObj ele((r->Electron_pt)[i],(r->Electron_eta)[i],(r->Electron_phi)[i],(r->Electron_mass)[i],0) ;

    //electron for electron jet overlap removal
    if (ele.m_lvec.Pt() > CUTS.Get<float>("lep_jetOverlap_pt") && fabs(ele.m_lvec.Eta()) < CUTS.Get<float>("lep_jetOverlap_eta")) {
      int eleId = r->Electron_cutBased[i] ; 
      if (eleId >= 2) {
        eles_jetOverlap.push_back(ele) ;
      }
    }

    if (ele.m_lvec.Pt() < CUTS.Get<float>("lep_pt1") || fabs(ele.m_lvec.Eta()) > CUTS.Get<float>("lep_eta")) continue ; //use lower pt threshold to select both leading and subleading lepton
    float etaSC = ele.m_lvec.Eta()-(r->Electron_deltaEtaSC[i]) ;
    if (fabs(etaSC) < 1.566 && fabs(etaSC) > 1.442) continue ;

    h_ele_cutflow->Fill(2)  ;

    int eleId = r->Electron_cutBased[i] ; 
    //if (r-> Electron_mvaFall17V1Iso_WP90[i] <= 0) continue;
    if (eleId < 2) continue; //loose electron id
    h_ele_cutflow->Fill(3)  ;

	  eles.push_back(ele) ;
    //h_nEle->Fill(eles.size()) ;
  }
  
  //muons
  std::vector<LepObj> muons ;
  std::vector<LepObj> muons_jetOverlap ;
  for (unsigned int i = 0 ; i < *(r->nMuon) ; ++i) {

    h_muon_cutflow->Fill(1) ;
    
    LepObj muon((r->Muon_pt)[i],(r->Muon_eta)[i],(r->Muon_phi)[i],(r->Muon_mass)[i],(r->Muon_pfRelIso04_all)[i]) ;
    
    //muon for muon jet overlap removal
    if (muon.m_lvec.Pt() > CUTS.Get<float>("lep_jetOverlap_pt") && fabs(muon.m_lvec.Eta()) < CUTS.Get<float>("lep_jetOverlap_eta")) {
      if (r-> Muon_looseId[i] > 0 && r->Muon_pfRelIso04_all[i] < CUTS.Get<float>("muon_iso")) {
        muons_jetOverlap.push_back(muon) ;
      }
    }
    
    if (muon.m_lvec.Pt() < CUTS.Get<float>("lep_pt1") || fabs(muon.m_lvec.Eta()) > CUTS.Get<float>("lep_eta")) continue ; 
    h_muon_cutflow->Fill(2) ;
    
    if (r-> Muon_looseId[i] <= 0) continue;
    h_muon_cutflow->Fill(3) ;
	  
    if (muon.m_iso > CUTS.Get<float>("muon_iso")) continue ; 
    h_muon_cutflow->Fill(4) ;

    muons.push_back(muon) ;
    //h_nMuon->Fill(muons.size()) ;
  }
  
  //sv
  std::vector<TLorentzVector> lvec_SVs ;
  for (unsigned i = 0 ; i < *(r->nSV) ; ++i) {
    TLorentzVector tmp ;
    tmp.SetPtEtaPhiM((r->SV_pt)[i], (r->SV_eta)[i], (r->SV_phi)[i], (r->SV_mass)[i]) ;
    lvec_SVs.push_back(tmp);
  }
  
  /////////////////////////////////
  //jets
  /////////////////////////////////
  std::vector<JetObj> jets ;
  std::vector<JetObj> jets_ele_removal ;
  std::vector<JetObj> bjets ;
  std::vector<JetObj> bjets_deepJet ;
  
  float btagM_cut = CUTS.Get<float>("jet_deepCSVM_"+m_year) ;
  float btagDeepJetM_cut = CUTS.Get<float>("jet_deepJetM_"+m_year) ;

  for (unsigned int i = 0 ; i < *(r->nJet) ; ++i) {
    
    h_Jet_cutflow->Fill(1) ;
    
    int jetFlav = -1 ;
#if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
    jetFlav = (r->Jet_hadronFlavour)[i];
#endif 
    JetObj jet((r->Jet_pt)[i],(r->Jet_eta)[i],(r->Jet_phi)[i],(r->Jet_mass)[i],jetFlav,(r->Jet_btagDeepB)[i],(r->Jet_btagDeepFlavB)[i]) ;
    jet.SetSV(lvec_SVs);

    if (jet.m_lvec.Pt() < CUTS.Get<float>("jet_pt") || fabs(jet.m_lvec.Eta()) > CUTS.Get<float>("jet_eta")) continue ;
    h_Jet_cutflow->Fill(2) ;
    
    if (jet.IsLepton(eles_jetOverlap)) continue ;
    jets_ele_removal.push_back(jet) ;
    h_Jet_cutflow->Fill(3) ;
      
    if (jet.IsLepton(muons_jetOverlap)) continue ;
    h_Jet_cutflow->Fill(4) ;
    
    if (r->Jet_jetId[i] <= 0 ) continue ;
    h_Jet_cutflow->Fill(5) ;
	  
    jets.push_back(jet) ;

    if (jet.m_deepCSV >= btagM_cut) bjets.push_back(jet) ;
    if (jet.m_deepJet >= btagDeepJetM_cut) bjets_deepJet.push_back(jet) ;

  }


  //calculate SF for eletron, muon and btagging
  float eleSF_w(1.);
  float muonSF_w(1.);
  float btag_w(1.);
  if (!m_isData) {
    btag_w = CalBtagWeight(jets) ;
    if (eles.size()>=2) eleSF_w = CalEleSF(eles[0],eles[1]) ;
    if (muons.size()>=2) muonSF_w = CalMuonSF_id_iso(muons[0],muons[1]);
  }
  //if (bjets.size()>=1) std::cout << "\n btagWeight: " << btagWeight ;

  
  bool eleTrig(false) ;
  bool muonTrig(false) ;

#if defined(MC_2016) || defined(DATA_2016) 
  if (*(r->HLT_Ele27_WPTight_Gsf)) eleTrig = true ;
  if (*(r->HLT_IsoMu24) || *(r->HLT_IsoTkMu24)) muonTrig = true ;
#endif

#if defined(MC_2017) || defined(DATA_2017) 
  if (*(r->HLT_Ele35_WPTight_Gsf)) eleTrig = true ;
  if (*(r->HLT_IsoMu27)) muonTrig = true ;
#endif

#if defined(MC_2018) || defined(DATA_2018) 
  if (*(r->HLT_Ele32_WPTight_Gsf)) eleTrig = true ;
  if (*(r->HLT_IsoMu24)) muonTrig = true ;
#endif

  //TEMP
  //eleTrig = true ;
  ////////////////////////////////////
  //Zee + jets
  ////////////////////////////////////
  h_zee_cutflow->Fill(1); //all events (not cut)
  if (eleTrig) {
    h_zee_cutflow->Fill(2); //trigger

    if (eles.size() >= 2 && eles[0].m_lvec.Pt() >= CUTS.Get<float>("lep_pt0")
        && eles[1].m_lvec.Pt() >= CUTS.Get<float>("lep_pt1")) {

	    h_zee_cutflow->Fill(3) ; //pass electron  cuts
      
      float zee_w = evtW*eleSF_w ;
      float zeeb_w = zee_w*btag_w;
      
      ZObj Z(eles[0],eles[1]) ;
    
      if (bjets.size() >= 1)
      { h_Zee_ZMass_bjet->Fill(Z.m_lvec.M(), zee_w) ; }
      if (bjets.size() >= 2)// && *(r->MET_pt) > 80.0)
      { 
        if (*(r->MET_pt) > 80.0) {
          h_Zee_ZMass_2bjet->Fill(Z.m_lvec.M(), zee_w);
          h_Zee_MET_2bjet->Fill(*(r->MET_pt), zee_w);
          h_Zee_METsig_2bjet->Fill(*(r->MET_significance), zee_w);
        }
        h_Zee_fullMET_2bjet->Fill(*(r->MET_pt), zee_w);
        h_Zee_fullPuppiMET_2bjet->Fill(*(r->PuppiMET_pt), zee_w);
        h_Zee_fullMETsig_2bjet->Fill(*(r->MET_significance), zee_w);
      } 

      if (Z.m_lvec.M() >= CUTS.Get<float>("ZMassL") && Z.m_lvec.M() <= CUTS.Get<float>("ZMassH")) { 
      
        h_zee_cutflow->Fill(4) ; //pass Z mass cuts

        h_zee_jet->FillNjet(jets.size(), zee_w) ;
        
        //at least on jet
        if (jets.size() >= 1) {

          h_zee_cutflow->Fill(5) ; //pass jet cuts

          h_zee_jet->Fill(Z, jets[0], zee_w) ;
          h_zee_jet->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zee_w);
        
          // isolation
          float deltaRelelep0 = Z.m_lep0.m_lvec.DeltaR(jets[0].m_lvec);
          float deltaRelelep1 = Z.m_lep1.m_lvec.DeltaR(jets[0].m_lvec); 
          h_dR_je->Fill(std::min(deltaRelelep0,deltaRelelep1), zee_w) ;

          //tagging efficiency
          Fill_btagEffi(jets,zee_w) ;

        } //end at least one jet
        
        //at least one b-tagged jets
        h_zee_bjet->FillNjet(bjets.size(),evtW) ; 
        if (bjets.size() >=1) {
           
          h_zee_cutflow->Fill(6) ;

          h_zee_bjet->Fill(Z, bjets[0], zeeb_w) ;
          h_zee_bjet->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zeeb_w);
        }

        //at least two b-tagged jets
        if (bjets.size() >=2) {
          
          h_zee_cutflow->Fill(7) ;

          h_zee_2bjet->Fill(Z, bjets[0], bjets[1], zeeb_w) ;
          h_zee_2bjet->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zeeb_w);
        }

        //at least one b-tagged jets using deepJet
        h_zee_bjet_deepJet->FillNjet(bjets_deepJet.size(),evtW) ; //FIXME 
        if (bjets_deepJet.size() >=1) {
          
          h_zee_cutflow->Fill(8) ;

          h_zee_bjet_deepJet->Fill(Z, bjets_deepJet[0], evtW) ; //FIXME
          h_zee_bjet_deepJet->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), evtW); //FIXME
        }

        //at least two b-tagged jets using deepJet
        if (bjets_deepJet.size() >=2) {
          
          h_zee_cutflow->Fill(9) ;

          h_zee_2bjet_deepJet->Fill(Z, bjets_deepJet[0], bjets_deepJet[1], evtW) ; //FIXME
          h_zee_2bjet_deepJet->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), evtW); //FIXME
        }

      }//end Z mass
    } //end two electrons
  } //end ele. trigger
  
  if (jets_ele_removal.size() > 0) {
    JetPlot J_cut1(jets_ele_removal[0]);
    h_pt_jet_after_ele_rem->Fill(J_cut1.m_lvec.Pt(), evtW);
  }
  
  

  ///////////////////////////
  //Zmm + jets
  ///////////////////////////
  h_zmm_cutflow->Fill(1); //all events (not cut)
  //trigger cuts
  if (muonTrig) {
    h_zmm_cutflow->Fill(2); //trigger
    
    // Fill the sidebar information
    if (muons.size() >= 2)
    {
      ZObj Z(muons[0], muons[1]);
      float zMass = Z.m_lvec.M();
      if (zMass < 86 || zMass > 100)
      {
        if (jets.size() >= 1) h_Zmm_sidebar->Fill(zMass);
        if (bjets.size() >= 1) h_Zmm_sidebar_bjet->Fill(zMass);   
      }
    }
    

    if (muons.size() >= 2 && muons[0].m_lvec.Pt() >= CUTS.Get<float>("lep_pt0") 
        && muons[1].m_lvec.Pt() >= CUTS.Get<float>("lep_pt1")) {
	    h_zmm_cutflow->Fill(3) ; //pass muon  cuts

      float zmm_w = evtW*muonSF_w ;
      float zmmb_w = zmm_w*btag_w;
      
      ZObj Z(muons[0],muons[1]) ;
      
      //h_Zmm_ZmassFull->Fill(Z.m_lvec.M(), zmm_w) ;
      if (bjets.size() >= 1)
      { h_Zmm_ZMass_bjet->Fill(Z.m_lvec.M(), zmm_w) ; }
      if (bjets.size() >= 2)// && *(r->MET_pt) > 80.0)
      {
        if (*(r->MET_pt) > 80.0) {
          h_Zmm_ZMass_2bjet->Fill(Z.m_lvec.M(), zmm_w);
          h_Zmm_MET_2bjet->Fill(*(r->MET_pt), zmm_w);
          h_Zmm_METsig_2bjet->Fill(*(r->MET_significance), zmm_w);
        }
        h_Zmm_fullMET_2bjet->Fill(*(r->MET_pt), zmm_w);
        h_Zmm_fullPuppiMET_2bjet->Fill(*(r->PuppiMET_pt), zmm_w);
        h_Zmm_fullMETsig_2bjet->Fill(*(r->MET_significance), zmm_w);
      }
     
      if (Z.m_lvec.M() >= CUTS.Get<float>("ZMassL") && Z.m_lvec.M() <= CUTS.Get<float>("ZMassH")) { 
      
        h_zmm_cutflow->Fill(4) ; //pass Z mass cuts
        
        h_zmm_jet->FillNjet(jets.size(), zmm_w) ;
        
        if (jets.size() >= 1) {

          h_zmm_cutflow->Fill(5) ; //pass jet cuts

          float deltaRmuonlep0 = Z.m_lep0.m_lvec.DeltaR(jets[0].m_lvec);
          float deltaRmuonlep1 = Z.m_lep1.m_lvec.DeltaR(jets[0].m_lvec);
        
          h_zmm_jet->Fill(Z, jets[0], zmm_w) ;
          h_zmm_jet->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zmm_w);

          h_dR_jm->Fill(std::min(deltaRmuonlep0,deltaRmuonlep1), zmm_w) ;
 
          //tagging efficiency
          Fill_btagEffi(jets,zmm_w) ;

        } //end at least one jet
        
        //Zmm+bjets
        h_zmm_bjet->FillNjet(bjets.size(),zmmb_w) ; 
        if (bjets.size() >= 1) {
          
          h_zmm_cutflow->Fill(6) ;
          
          h_zmm_bjet->Fill(Z, bjets[0], zmmb_w) ; 
          h_zmm_bjet->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zmmb_w);
        }
      
        //Zmm+2bjets
        if (bjets.size() >= 2) {

          h_zmm_cutflow->Fill(7) ;
          
          h_zmm_2bjet->Fill(Z, bjets[0], bjets[1], zmmb_w) ; 
          h_zmm_2bjet->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zmmb_w);
        }

        //at least one b-tagged jets using deepJet
        h_zmm_bjet_deepJet->FillNjet(bjets_deepJet.size(),evtW) ; //FIXME 
        if (bjets_deepJet.size() >=1) {
          
          h_zmm_cutflow->Fill(8) ;

          h_zmm_bjet_deepJet->Fill(Z, bjets_deepJet[0], evtW) ; //FIXME
          h_zmm_bjet_deepJet->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), evtW); //FIXME
        }

        //at least two b-tagged jets using deepJet
        if (bjets_deepJet.size() >=2) {
          
          h_zmm_cutflow->Fill(9) ;

          h_zmm_2bjet_deepJet->Fill(Z, bjets_deepJet[0], bjets_deepJet[1], evtW) ; //FIXME
          h_zmm_2bjet_deepJet->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), evtW); //FIXME
        }


      } //end Z mass cut

    } //end two muons
  } //end trigger

  ////////////////////////////////////////
  // Zem + 2b-jets (electron trigger)
  ////////////////////////////////////////
  
  // We want to be able to have the background estimation for the Z->ee
  // case and we need to use the electron trigger.
  if (eleTrig)
  {
    // make sure we have at least one of each lepton
    if (eles.size() >= 1 && muons.size() >= 1)
    {
      // make sure the masses meet our cuts
      if (eles[0].m_lvec.Pt() >= CUTS.Get<float>("lep_pt0") &&
          muons[0].m_lvec.Pt() >= CUTS.Get<float>("lep_pt1"))
      {
        // get the Z mass and store it appropriately
        ZObj Z(eles[0], muons[0]);
        if (bjets.size() >= 2)// && *(r->MET_pt) > 80.0)
        {
          if (*(r->MET_pt) > 80.0) {
          h_zem_2bjet_elec->Fill(Z, bjets[0], bjets[1], 1.);
          h_Zem_MET_2bjet_elec->Fill(*(r->MET_pt), 1.);
          h_Zem_METsig_2bjet_elec->Fill(*(r->MET_significance), 1.);
          }
          h_Zem_fullMET_2bjet_elec->Fill(*(r->MET_pt), 1.);
          h_Zem_fullMETsig_2bjet_elec->Fill(*(r->MET_significance), 1.);
        }
        
      }//end-pt-cut

    }//end-size
  }//end-trig
  
  //////////////////////////////////////////////
  // Zem + 2-bjets (muon trigger)
  //////////////////////////////////////////////

  // We want to be able to have the background estimation for the Z->mm
  // case and we need to use the muon trigger.
  if (muonTrig)
  {
    // make sure we have at least one of each lepton
    if (eles.size() >= 1 && muons.size() >= 1)
    {
      // make sure the masses meet our cuts
      if (eles[0].m_lvec.Pt() >= CUTS.Get<float>("lep_pt1") &&
          muons[0].m_lvec.Pt() >= CUTS.Get<float>("lep_pt0"))
      {
        // get the Z mass and store it appropriately
        ZObj Z(eles[0], muons[0]);
        if (bjets.size() >= 2)// && *(r->MET_pt) > 80.0)
        {
          if (*(r->MET_pt) > 80.0) {
          h_zem_2bjet_muon->Fill(Z, bjets[0], bjets[1], 1.0);
          h_Zem_MET_2bjet_muon->Fill(*(r->MET_pt), 1.);
          h_Zem_METsig_2bjet_muon->Fill(*(r->MET_significance), 1.);
          }
          h_Zem_fullMET_2bjet_muon->Fill(*(r->MET_pt), 1.);
          h_Zem_fullMETsig_2bjet_muon->Fill(*(r->MET_significance), 1.);
        }

      }//end-pt-cut

    }//end-size
  }//end-trig

} //end Process



void ZbSelection::Terminate(TList* mergedList, std::string outFileName) {
  
  TList* aList = new TList() ;
  TParameter<double>* a = new TParameter<double>("lep_eta",CUTS.Get<float>("lep_eta")) ;
  aList->Add(a) ;
  a = new TParameter<double>("lep_pt0",CUTS.Get<float>("lep_pt0")) ;
  aList->Add(a) ;
  a = new TParameter<double>("lep_pt1",CUTS.Get<float>("lep_pt1")) ;
  aList->Add(a) ;
  a = new TParameter<double>("ZMassL",CUTS.Get<float>("ZMassL")) ;
  aList->Add(a) ;
  a = new TParameter<double>("ZMassH",CUTS.Get<float>("ZMassH")) ;
  aList->Add(a) ;
  a = new TParameter<double>("muon_iso",CUTS.Get<float>("muon_iso")) ;
  aList->Add(a) ;
  a = new TParameter<double>("lep_jetOverlap_pt",CUTS.Get<float>("lep_jetOverlap_pt")) ;
  aList->Add(a) ;
  a = new TParameter<double>("lep_jetOverlap_eta",CUTS.Get<float>("lep_jetOverlap_eta")) ;
  aList->Add(a) ;
  a = new TParameter<double>("jet_pt",CUTS.Get<float>("jet_pt")) ;
  aList->Add(a) ;
  a = new TParameter<double>("jet_eta",CUTS.Get<float>("jet_eta")) ;
  aList->Add(a) ;
  std::string name = "jet_deepCSVM_" + m_year ;
  a = new TParameter<double>(name.c_str(),CUTS.Get<float>(name)) ;
  aList->Add(a) ;
  name = "jet_deepJetM_" + m_year ;
  a = new TParameter<double>(name.c_str(),CUTS.Get<float>(name)) ;
  aList->Add(a) ;

  
  TFile* f = new TFile(outFileName.c_str(), "UPDATE") ;
  aList->Write("ZbSelectionCuts",TObject::kSingleKey) ;

  f->Close() ;

}

void ZbSelection::Fill_btagEffi(std::vector<JetObj> jets, float w) {

}     

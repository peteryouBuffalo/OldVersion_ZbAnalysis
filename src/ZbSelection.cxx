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

  // Initialize the histograms
  h_evt = new TH1D("Nevt","",3,-1.5,1.5) ;
  h_pdfW = new TH2D("iPdf_vs_pdfW","",120,0,120,2000,0,2);
  h_scaleW = new TH2D("iScale_vs_scaleW","",10,0,10,500,0,5);
  h_zee_jet = new ZbPlots("Zee_jet") ;
  h_zee_bjet = new ZbPlots("Zee_bjet") ;
  h_zee_bjet_afterMET = new ZbPlots("Zee_bjet_afterMET") ;
  h_zee_2bjet = new Z2bPlots("Zee_2bjet") ;

  h_zee_2bjet_bb = new Z2bPlots("Zee_2bjet_bb") ; //two tagged bjets are bb
  h_zee_2bjet_bX = new Z2bPlots("Zee_2bjet_bX") ; //two tagged bjets are bb
  h_zee_2bjet_XX = new Z2bPlots("Zee_2bjet_XX") ; //two tagged bjets are bb
  h_zee_bjet_deepJet = new ZbPlots("Zee_bjetDeepJet") ;
  h_zee_2bjet_deepJet = new Z2bPlots("Zee_2bjetDeepJet") ;
  
  h_zmm_jet = new ZbPlots("Zmm_jet") ;
  h_zmm_bjet = new ZbPlots("Zmm_bjet") ;
  h_zmm_bjet_afterMET = new ZbPlots("Zmm_bjet_afterMET") ;
  h_zmm_2bjet = new Z2bPlots("Zmm_2bjet") ;
  h_zmm_2bjet_bb = new Z2bPlots("Zmm_2bjet_bb") ; //two tagged bjets are bb
  h_zmm_2bjet_bX = new Z2bPlots("Zmm_2bjet_bX") ; //two tagged bjets are bb
  h_zmm_2bjet_XX = new Z2bPlots("Zmm_2bjet_XX") ; //two tagged bjets are bb
  h_zmm_bjet_deepJet = new ZbPlots("Zmm_bjetDeepJet") ;
  h_zmm_2bjet_deepJet = new Z2bPlots("Zmm_2bjetDeepJet") ;

  h_emu_2bjet_eleTrig = new ElMu2bPlots("ElMu_2bjet_eleTrig");
  h_emu_2bjet_muTrig = new ElMu2bPlots("ElMu_2bjet_muTrig");  
  
  // Initialize the efficiency plots
  unsigned nBins = 9 ;
  float bins[10] = {20, 30, 50, 70, 100, 140, 200, 300, 600, 1000} ;
  h_eff_b = new EffPlots("b", nBins, bins) ;
  h_eff_c = new EffPlots("c", nBins, bins) ;
  h_eff_l = new EffPlots("l", nBins, bins) ;
  h_eff_bdj = new EffPlots("bdj", nBins, bins) ;
  h_eff_cdj = new EffPlots("cdj", nBins, bins) ;
  h_eff_ldj = new EffPlots("ldj", nBins, bins) ;

  // Initialize the single histograms
  h_dR_je = new TH1D("h_dR_je","",500,0,5) ;
  h_dR_jm = new TH1D("h_dR_jm","",500,0,5) ;

  h_Zee_ZmassFull = new TH1D("Zee_ZmassFull","",300,0,300) ;
  h_Zmm_ZmassFull = new TH1D("Zmm_ZmassFull","",300,0,300) ;

  h_nMuon = new TH1D("h_nMuon","",10,-0.5,9.5) ;
  h_nEle = new TH1D("h_nEle","",10,-0.5,9.5) ;
  h_nJet = new TH1D("h_nJet","",10,-0.5,9.5) ;

  h_ele_cutflow = new TH1D("ele_cutflow","",10,-0.5,9.5) ;
  h_muon_cutflow = new TH1D("muon_cutflow","",10,-0.5,9.5) ;
  h_Jet_cutflow = new TH1D("Jet_cutflow","",10,-0.5,9.5) ;
  h_zee_cutflow = new TH1D("zee_cutflow","",10,-0.5,9.5) ;
  h_zmm_cutflow = new TH1D("zmm_cutflow","",10,-0.5,9.5) ;

  h_pt_jet_after_ele_rem = new TH1D("jet_pt_after_ele_rem","",200,0.0,200) ;
  h_dR1_muonTrig = new TH1D("dR1_muonTrig","",100,0,10) ;
  h_dR2_muonTrig = new TH1D("dR2_muonTrig","",100,0,10) ;
  h_pt1_muonTrig = new TH1D("pt1_muonTrig","",200,0,200) ;
  h_pt2_muonTrig = new TH1D("pt2_muonTrig","",200,0,200) ;
  
  h_dR1_eleTrig = new TH1D("dR1_eleTrig","",100,0,10) ;
  h_dR2_eleTrig = new TH1D("dR2_eleTrig","",100,0,10) ;
  h_pt1_eleTrig = new TH1D("pt1_eleTrig","",200,0,200) ;
  h_pt2_eleTrig = new TH1D("pt2_eleTrig","",200,0,200) ;

  // Sumw2
  h_Zee_ZmassFull->Sumw2() ;
  h_Zmm_ZmassFull->Sumw2() ;

  // Add histograms to fOutput so they can be saved in Processor::SlaveTerminate
  r->GetOutputList()->Add(h_evt) ;
  r->GetOutputList()->Add(h_pdfW);
  r->GetOutputList()->Add(h_scaleW);

  std::vector<TH1*> tmp = h_zee_jet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zmm_jet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_zee_bjet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_zee_bjet_afterMET->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_zmm_bjet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_zmm_bjet_afterMET->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zee_2bjet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_zee_2bjet_bb->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_zee_2bjet_bX->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zee_2bjet_XX->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_zmm_2bjet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zmm_2bjet_bb->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_zmm_2bjet_bX->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zmm_2bjet_XX->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_zee_bjet_deepJet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_zmm_bjet_deepJet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);

  tmp = h_zee_2bjet_deepJet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_zmm_2bjet_deepJet->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  
  tmp = h_emu_2bjet_eleTrig->returnHisto() ;
  for(size_t i=0;i<tmp.size();i++) r->GetOutputList()->Add(tmp[i]);
  tmp = h_emu_2bjet_muTrig->returnHisto() ;
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

  r->GetOutputList()->Add(h_dR_je) ;
  r->GetOutputList()->Add(h_dR_jm) ;
  r->GetOutputList()->Add(h_Zee_ZmassFull) ;
  r->GetOutputList()->Add(h_Zmm_ZmassFull) ;
  r->GetOutputList()->Add(h_ele_cutflow) ;
  r->GetOutputList()->Add(h_muon_cutflow) ;
  r->GetOutputList()->Add(h_Jet_cutflow) ;
  r->GetOutputList()->Add(h_zee_cutflow) ;
  r->GetOutputList()->Add(h_zmm_cutflow) ;
  r->GetOutputList()->Add(h_pt_jet_after_ele_rem) ;
  r->GetOutputList()->Add(h_dR1_muonTrig) ;
  r->GetOutputList()->Add(h_dR2_muonTrig) ;
  r->GetOutputList()->Add(h_pt1_muonTrig) ;
  r->GetOutputList()->Add(h_pt2_muonTrig) ;
  r->GetOutputList()->Add(h_dR1_eleTrig) ;
  r->GetOutputList()->Add(h_dR2_eleTrig) ;
  r->GetOutputList()->Add(h_pt1_eleTrig) ;
  r->GetOutputList()->Add(h_pt2_eleTrig) ;


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
  float ptThr_ele(0);
  float ptThr_muon(0);
  TLorentzVector muon_trigObj;
  TLorentzVector ele_trigObj;
  unsigned ele_bits;
  unsigned muon_bits;

#if defined(MC_2016) || defined(DATA_2016) 
  if (*(r->HLT_Ele27_WPTight_Gsf)) eleTrig = true ;
  if (*(r->HLT_IsoMu24) || *(r->HLT_IsoTkMu24)) muonTrig = true ;
  muon_bits(2+8); // iso + IsoTkMu
  ele_bits = (2);
  ptThr_ele = 27;
  ptThr_muon = 24;
#endif

#if defined(MC_2017) || defined(DATA_2017) 
  if (*(r->HLT_Ele35_WPTight_Gsf)) eleTrig = true ;
  if (*(r->HLT_IsoMu27)) muonTrig = true ;
  ele_bits = (2);
  muon_bits = (2);
  ptThr_ele = 32;
  ptThr_muon = 27;
#endif

#if defined(MC_2018) || defined(DATA_2018) 
  if (*(r->HLT_Ele32_WPTight_Gsf)) eleTrig = true ;
  if (*(r->HLT_IsoMu24)) muonTrig = true ;
  ele_bits = (2);
  muon_bits = (2);
  ptThr_ele = 32;
  ptThr_muon = 24;
#endif

  TLorentzVector trigObj_ele = GetTrigObj(r, 11, ele_bits, ptThr_ele);
  TLorentzVector trigObj_muon = GetTrigObj(r, 13, muon_bits, ptThr_muon);

  float trigSF_ele(1.0);
  if (!m_isData && eles.size() >= 2) {
    trigSF_ele =  CalTrigSF(11,eles[0], eles[1], trigObj_ele, h_dR1_eleTrig, h_dR2_eleTrig, h_pt1_eleTrig, h_pt2_eleTrig) ;
  }

  float trigSF_muon(1.0);
  if (!m_isData && muons.size() >= 2) {
    trigSF_muon =  CalTrigSF(13,muons[0], muons[1], trigObj_muon, h_dR1_muonTrig, h_dR2_muonTrig, h_pt1_muonTrig, h_pt2_muonTrig) ;
  }

  /////////////////////////////////////////////////
  // Zee + jets
  /////////////////////////////////////////////////

  if (eleTrig) 
  {
    
    // make sure that we have at least 2 electrons and the pt meets our cut
    if (eles.size() >= 2 && eles[0].m_lvec.Pt() >= CUTS.Get<float>("lep_pt0")) {
      
      float zee_w = evtW*eleSF_w*trigSF_ele;
      float zeeb_w = zee_w*btag_w;
      
      // Determine the Z mass & make sure we fall into the mass window
      ZObj Z(eles[0], eles[1]);
      h_Zee_ZmassFull->Fill(Z.m_lvec.M(), zee_w);
      if (Z.m_lvec.M() >= CUTS.Get<float>("ZMassL") && 
          Z.m_lvec.M() <= CUTS.Get<float>("ZMassH")) {

        // fill the no. jets
        h_zee_jet->FillNjet(jets.size(), zee_w);


        // If we have at least one jet...
        if (jets.size() >= 1) {
  
          // record the mass & MET
          h_zee_jet->Fill(Z, jets[0], zee_w);
          h_zee_jet->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zee_w);

          // record the isolation
          float dRele0 = Z.m_lep0.m_lvec.DeltaR(jets[0].m_lvec);
          float dRele1 = Z.m_lep1.m_lvec.DeltaR(jets[0].m_lvec);
          h_dR_je->Fill(std::min(dRele0,dRele1), zee_w);
        }//end one-jet

        h_zee_bjet->FillNjet(bjets.size(), zee_w);


        // If we have at least one b-tagged jet...
        if (bjets.size() >= 1) {

          // record the mass & MET
          h_zee_bjet->Fill(Z, bjets[0], zeeb_w);
          h_zee_bjet->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zeeb_w);
          
          // record again if we meet a MET cut
          if (*(r->MET_pt) < CUTS.Get<float>("MET")) {
            h_zee_bjet_afterMET->Fill(Z, bjets[0], zeeb_w);
            h_zee_bjet_afterMET->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zeeb_w);
          }
        }//end one-b jet


        // If we have at least two b-tagged jets...
        if (bjets.size() >= 2) {
          
          // if the MET cut is met...
          if (*(r->MET_pt) < CUTS.Get<float>("MET")) {

            // Record the mass & MET
            h_zee_2bjet->Fill(Z, bjets[0], bjets[1], zeeb_w);
            h_zee_2bjet->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zeeb_w);
             
            // if we are using MC, let's record bb, bX, XX

  #if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)
            
            if (bjets[0].m_flav == 5 && bjets[1].m_flav == 5) {     // bb
              h_zee_2bjet_bb->Fill(Z, bjets[0], bjets[1], zeeb_w);
              h_zee_2bjet_bb->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zeeb_w);
            }
            else if ((bjets[0].m_flav == 5 && bjets[1].m_flav != 5) || // bX
                     bjets[0].m_flav != 5 && bjets[1].m_flav == 5) {
              h_zee_2bjet_bX->Fill(Z, bjets[0], bjets[1], zeeb_w);
              h_zee_2bjet_bX->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zeeb_w);
            }
            else { // XX
              h_zee_2bjet_XX->Fill(Z, bjets[0], bjets[1], zeeb_w);
              h_zee_2bjet_XX->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zeeb_w);
            }

  #endif

          }// end MET cut
        }//end two b jets

      }//end z mass cut

    }//end two electrons

  }//end ele. trigger
     
  

  ///////////////////////////////////////////
  // Zmm + jets
  ///////////////////////////////////////////

  if (muonTrig)
  {

    // make sure that we have at least 2 electrons and the pt meets our cut
    if (muons.size() >= 2 && muons[0].m_lvec.Pt() >= CUTS.Get<float>("lep_pt0")) {
    
      float zmm_w = evtW*muonSF_w*trigSF_muon;
      float zmmb_w = zmm_w*btag_w;
    
      // Determine the Z mass & make sure we fall into the mass window
      ZObj Z(muons[0], muons[1]);
      h_Zmm_ZmassFull->Fill(Z.m_lvec.M(), zmm_w);
      if (Z.m_lvec.M() >= CUTS.Get<float>("ZMassL") &&
          Z.m_lvec.M() <= CUTS.Get<float>("ZMassH")) {
    
        // fill the no. jets
        h_zmm_jet->FillNjet(jets.size(), zmm_w);
    
       // If we have at least one jet...
       if (jets.size() >= 1) {
   
         // record the mass & MET
         h_zmm_jet->Fill(Z, jets[0], zmm_w);
         h_zmm_jet->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zmm_w);
   
         // record the isolation
         float dRele0 = Z.m_lep0.m_lvec.DeltaR(jets[0].m_lvec);
         float dRele1 = Z.m_lep1.m_lvec.DeltaR(jets[0].m_lvec);
         h_dR_je->Fill(std::min(dRele0,dRele1), zmm_w);
       }//end one-jet
   
       h_zmm_bjet->FillNjet(bjets.size(), zmm_w);

       // If we have at least one b-tagged jet...
       if (bjets.size() >= 1) {
       
         // record the mass & MET
         h_zmm_bjet->Fill(Z, bjets[0], zmmb_w);
         h_zmm_bjet->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zmmb_w);
       
         // record again if we meet a MET cut
         if (*(r->MET_pt) < CUTS.Get<float>("MET")) {
           h_zmm_bjet_afterMET->Fill(Z, bjets[0], zmmb_w);
           h_zmm_bjet_afterMET->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zmmb_w);
         }
       }//end one-b jet

      
       // If we have at least two b-tagged jets...
       if (bjets.size() >= 2) {

         // if the MET cut is met...
         if (*(r->MET_pt) < CUTS.Get<float>("MET")) {

            // Record the mass & MET
            h_zmm_2bjet->Fill(Z, bjets[0], bjets[1], zmmb_w);
            h_zmm_2bjet->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zmmb_w);
            
            // if we are using MC, let's record bb, bX, XX
   #if defined(MC_2016) || defined(MC_2017) || defined(MC_2018)

            if (bjets[0].m_flav == 5 && bjets[1].m_flav == 5) {     // bb
              h_zmm_2bjet_bb->Fill(Z, bjets[0], bjets[1], zmmb_w);
              h_zmm_2bjet_bb->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zmmb_w);
            }
            else if ((bjets[0].m_flav == 5 && bjets[1].m_flav != 5) || // bX
                     (bjets[0].m_flav != 5 && bjets[1].m_flav == 5)) {
              h_zmm_2bjet_bX->Fill(Z, bjets[0], bjets[1], zmmb_w);
              h_zmm_2bjet_bX->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zmmb_w);
            }
            else { // XX
              h_zmm_2bjet_XX->Fill(Z, bjets[0], bjets[1], zmmb_w);
              h_zmm_2bjet_XX->FillMet(*(r->MET_pt), *(r->PuppiMET_pt), zmmb_w);
            }

  #endif
         }//end MET cut
       }//end two b jets      
     }//end z mass cut
   }//end two muons
  }//end muon trigger  


  /////////////////////////////////////////////////////////////////
  // Zem + 2b-jets 
  /////////////////////////////////////////////////////////////////

  if (eles.size() >= 1 && muons.size() >= 1)
  {
    if ((eles[0].m_lvec.Pt() >= CUTS.Get<float>("lep_pt0") && muons[0].m_lvec.Pt() >= CUTS.Get<float>("lep_pt1")) ||
        (eles[0].m_lvec.Pt() >= CUTS.Get<float>("lep_pt1") && muons[0].m_lvec.Pt() >= CUTS.Get<float>("lep_pt0")))
    {
      if (bjets.size() >= 2)
      {
        if (*(r->MET_pt) > 80.0) {
          if (eleTrig) h_emu_2bjet_eleTrig->Fill(eles[0],muons[0],bjets[0],bjets[1],*(r->MET_pt),1.0);
          if (muonTrig) h_emu_2bjet_muTrig->Fill(eles[0],muons[0],bjets[0],bjets[1],*(r->MET_pt),1.0);
        }
      }
      
    }//end-pt-cut
  } 
                                 
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
  a = new TParameter<double>("MET",CUTS.Get<float>("MET"));
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

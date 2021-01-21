#ifndef ZbSelection_h
#define ZbSelection_h

#include "Reader.h"
#include "Selector.h"
#include "Plots.cxx"


//The Selection does not have Begin, since we do not have anything to do at the begining (overall) at client
//The histograms, ..., are booked and added to output list at SlaveBegin
//We need to have terminate since we might want to do overall tasks related to this selection only. At termination, all inforamtion from slaves is added. Example task is cutflow for this selection, which need information from all slaves.
//SlaveTerminate and Terminate are here for reservation now. histograms are written back in SlaveTerminate of Processor class

class ZbSelection : public Selector {
public:
  ZbSelection() {} ;
  virtual ~ZbSelection() ;
    // These methods are called at the corresponding stage of processing of TSelector
  virtual void SlaveBegin(Reader* r) ;
  virtual void Process(Reader* r) ;
  virtual void SlaveTerminate(Reader* r) {} ;
  virtual void Terminate(TList* mergedList, std::string outFileName) ;
  virtual void Fill_btagEffi(std::vector<JetObj> jets, float w=1) ;

private:

  // Z + >= 1 histograms
  ZbPlots* h_zee_jet;			// Z->ee (all jets)
  ZbPlots* h_zmm_jet;			// Z->mm (all jets)
  ZbPlots* h_zee_bjet;			// Z->ee (b jets)
  ZbPlots* h_zee_bjet_afterMET;		// Z->ee (b jets, MET cut)
  ZbPlots* h_zmm_bjet;			// Z->mm (b jets)
  ZbPlots* h_zmm_bjet_afterMET;		// Z->mm (b jets, MET cut)
  
  // Z + >= 2 histograms
  Z2bPlots* h_zee_2bjet;		// Z->ee (2 b jets)
  Z2bPlots* h_zmm_2bjet;		// Z->mm (2 b jets)
  Z2bPlots* h_zee_2bjet_bb;		// Z->ee (both tagged as b)
  Z2bPlots* h_zee_2bjet_bX;             // Z->ee (one tagged as b)
  Z2bPlots* h_zee_2bjet_XX;		// Z->ee (none tagged as b)
  Z2bPlots* h_zmm_2bjet_bb;		// Z->mm (both tagged as b)
  Z2bPlots* h_zmm_2bjet_bX;		// Z->mm (one tagged as b)
  Z2bPlots* h_zmm_2bjet_XX;		// Z->mm (none tagged as b)

  // DeepJet histograms
  ZbPlots* h_zee_bjet_deepJet;		// Z->ee (b jets)
  ZbPlots* h_zmm_bjet_deepJet;		// Z->mm (b jets)
  Z2bPlots* h_zee_2bjet_deepJet;	// Z->ee (2 b jets)
  Z2bPlots* h_zmm_2bjet_deepJet;	// Z->mm (2 b jets)
 
  // "emu" histograms
  ElMu2bPlots* h_emu_2bjet_eleTrig;	// Z->em (elec trig)
  ElMu2bPlots* h_emu_2bjet_muTrig;	// Z->em (muon trig)

  // efficiency plots
  EffPlots* h_eff_b;			// Efficiency b jets
  EffPlots* h_eff_c;			// Efficiency c jets
  EffPlots* h_eff_l;			// Efficiency l jets
  EffPlots* h_eff_bdj;			// Efficiency b jets (deep jet)
  EffPlots* h_eff_cdj;			// Efficiency c jets (deep jet)
  EffPlots* h_eff_ldj;			// Efficiency l jets (deep jet)

  TH1D* h_evt ;
  TH2D* h_pdfW;
  TH2D* h_scaleW;
  TH1D* h_dR_je ;
  TH1D* h_dR_jm ;
  TH1D* h_nMuon ;
  TH1D* h_nEle ;
  TH1D* h_nJet ;
  TH1D* h_ele_cutflow ;
  TH1D* h_muon_cutflow ;
  TH1D* h_Jet_cutflow ;
  TH1D* h_zee_cutflow ;
  TH1D* h_zmm_cutflow ;
  TH1D* h_pt_jet_after_ele_rem ;
 
  TH1D* h_Zee_ZmassFull ;
  TH1D* h_Zmm_ZmassFull ;

  // check trigger matching
  TH1D* h_dR1_muonTrig ;
  TH1D* h_dR2_muonTrig ;
  TH1D* h_pt1_muonTrig ;
  TH1D* h_pt2_muonTrig ;
           
  TH1D* h_dR1_eleTrig ;
  TH1D* h_dR2_eleTrig ;
  TH1D* h_pt1_eleTrig ;
  TH1D* h_pt2_eleTrig ;
} ;

#endif

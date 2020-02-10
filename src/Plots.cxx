#ifndef Plots_cxx
#define Plots_cxx

#include "Obj.cxx"
#include "TString.h"
#include "TH1.h"
#include "TH1D.h"

class ZbPlots 
{
  public:
    ZbPlots(TString name) : m_name(name) {
      h_pt_lep0 = new TH1D(name + "_pt_lep0","",200,0,200) ;
      h_phi_lep0 = new TH1D(name + "_phi_lep0","",400,-4.0,4.0) ;
      h_eta_lep0 = new TH1D(name + "_eta_lep0","",300,-3.0,3.0) ;
      h_pt_lep0->Sumw2() ;
      h_phi_lep0->Sumw2() ;
      h_eta_lep0->Sumw2() ;
      h_pt_lep1 = new TH1D(name + "_pt_lep1","",200,0,200) ;
      h_phi_lep1 = new TH1D(name + "_phi_lep1","",400,-4.0,4.0) ;
      h_eta_lep1 = new TH1D(name + "_eta_lep1","",300,-3.0,3.0) ;
      h_pt_lep1->Sumw2() ;
      h_phi_lep1->Sumw2() ;
      h_eta_lep1->Sumw2() ;
      h_pt_jet = new TH1D(name + "_pt_jet","",300,0,300) ;
      h_phi_jet = new TH1D(name + "_phi_jet","",400,-4.0,4.0) ;
      h_eta_jet = new TH1D(name + "_eta_jet","",300,-3.0,3.0) ;
      h_pt_jet->Sumw2() ;
      h_phi_jet->Sumw2() ;
      h_eta_jet->Sumw2() ;
    } ;
    
    void Fill(ZObj& Z, JetObj& J, float w=1) {
      h_pt_lep0->Fill(Z.m_lep0.m_lvec.Pt(), w) ;
      h_phi_lep0->Fill(Z.m_lep0.m_lvec.Phi(), w) ;
      h_eta_lep0->Fill(Z.m_lep0.m_lvec.Eta(), w) ;
      h_pt_lep1->Fill(Z.m_lep1.m_lvec.Pt(), w) ;
      h_phi_lep1->Fill(Z.m_lep1.m_lvec.Phi(), w) ;
      h_eta_lep1->Fill(Z.m_lep1.m_lvec.Eta(), w) ;
      h_pt_jet->Fill(J.m_lvec.Pt(), w) ;
      h_phi_jet->Fill(J.m_lvec.Phi(), w) ;
      h_eta_jet->Fill(J.m_lvec.Eta(), w) ;
    } ;

    std::vector<TH1*> returnHisto(){
      std::vector<TH1*> histolist ;
      
      histolist.push_back(h_pt_lep0) ;
      histolist.push_back(h_phi_lep0) ;
      histolist.push_back(h_eta_lep0) ;     
      histolist.push_back(h_pt_lep1) ;
      histolist.push_back(h_phi_lep1) ;
      histolist.push_back(h_eta_lep1) ;
      histolist.push_back(h_pt_jet) ;
      histolist.push_back(h_phi_jet) ;
      histolist.push_back(h_eta_jet) ;      
      
      return histolist ; 
    }

  protected:
    TString m_name ;
    TH1D* h_pt_lep0 ;
    TH1D* h_phi_lep0 ;
    TH1D* h_eta_lep0 ;
    TH1D* h_pt_lep1 ;
    TH1D* h_phi_lep1 ;
    TH1D* h_eta_lep1 ;
    TH1D* h_pt_jet ;
    TH1D* h_phi_jet ;
    TH1D* h_eta_jet ;
} ;

#endif

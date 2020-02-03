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
      h_pt_lep0->Sumw2() ;
    } ;
    
    void Fill(ZObj& Z, float w=1) {
      h_pt_lep0->Fill(Z.m_lep0.m_lvec.Pt(), w) ;
    } ;

    std::vector<TH1*> returnHisto(){
      std::vector<TH1*> histolist ;
      
      histolist.push_back(h_pt_lep0) ;
      
      return histolist ; 
    }

  protected:
    TString m_name ;
    TH1D* h_pt_lep0 ;
} ;

#endif

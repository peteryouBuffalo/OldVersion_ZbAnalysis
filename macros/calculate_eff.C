/******************************************************************************
*                                                                             *
*  This routine calculates the ratio (of two histograms) with asymmetric      *
*  errors. Created: July 2008, Avto Kharchilava                               *
*          Modified: October 2020, Peter Young                                *
*                                                                             *
******************************************************************************/

void calculate(TH1 *num, TH1 *denom, TGraphAsymmErrors *result)
{
  
  //--- make sure the histograms have the same amount of bins -------------//
  
  Int_t nbins = num->GetNbinsX();
  Int_t nbins_den = denom->GetNbinsX();
  if (nbins != nbins_den) 
  {
    cout << ">>> ERROR in calculate: unequal # of bins <<<" << endl;
    return 1;
  }

  //--- make copies of the histograms & modify them -----------------------//
  
  TH1F *nom=(TH1F*)num->Clone();
  TH1F *den=(TH1F*)denom->Clone();
  nom->Reset(); den->Reset();
  nom->Sumw2(); den->Sumw2();
  
  //--- get the bin contents for use --------------------------------------//

  Double_t x[99999] = {0};
  Double_t cont_n[99999] = {0};
  Double_t cont_d[99999] = {0};

  for (Int_t j = 1; j <= nbins; ++j)
  {
    x[j] = num->GetBinLowEdge(j);
    cont_n[j] = num->GetBinContent(j);
    cont_d[j] = denom->GetBinContent(j);
  }

  //--- fill the histograms with a weight of 1 ----------------------------//

  for (Int_t j = 1; j <= nbins; ++j)
  {
    for (Int_t i = 1; i <= cont_n[j]; ++i) nom->Fill(x[j],1);
    for (Int_t k = 1; k <= cont_d[j]; ++k) den->Fill(x[j],1);
  }

  result->BayesDivide(nom,den,"w");
}
// END OF FILE ////////////////////////////////////////////////////////////////

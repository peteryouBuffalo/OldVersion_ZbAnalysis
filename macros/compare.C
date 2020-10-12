/******************************************************************************
*                                                                             *
*  The following program takes two histograms and creates a ratio plot.       *
*  	Created: October, 2020	Peter Young                                   *
*  	                                                                      *
******************************************************************************/

#include "tdrstyle.C"

void compare(std::string filename, std::string hist1, std::string hist2)
{
  //--- Get the file & retrieve the original histograms from it. ------------//

  TFile *f = new TFile(filename.c_str());
  TH1F* h1 = (TH1F*)f->Get(hist1.c_str());
  TH1F* h2 = (TH1F*)f->Get(hist2.c_str());;

  //--- Convert the histograms to the preferred bins. The current pref is ---//
  //--- approximately 4 GeV per bin. ----------------------------------------//

  Float_t bins[] = {0, 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52,
                     56, 60, 64, 68, 72, 76, 80, 86, 100, 104, 108, 112,
                     116, 120, 124, 128, 132, 136, 140, 144, 148, 152, 156,
                     160, 164, 168, 172, 176, 180, 184, 188, 192, 196, 200};
  Int_t binnum = sizeof(bins)/sizeof(Float_t) - 1;

  TH1F* nHist1 = new TH1F("n1", "", binnum, bins);
  nHist1->SetLineColor(kBlue); nHist1->SetMarkerColor(kBlue);
  nHist1->GetXaxis()->SetTitle("M_Z");
  nHist1->GetYaxis()->SetTitle("Events/4 GeV");
  nHist1->SetTitle("Ttbar Background Estimation");
  TH1F* nHist2 = new TH1F("n2", "", binnum, bins);
  nHist2->SetLineColor(kBlack); nHist2->SetMarkerColor(kBlack);
  
  //--- Now, let's take the data from the old histogram and fill the new ----//
  //--- ones. ---------------------------------------------------------------//

  // Fill the first histogram.
  int n1 = h1->GetNbinsX();
  for (int i = 0; i < n1; ++i)
  {
    int size = h1->GetBinContent(i);
    int val = h1->GetBinCenter(i);
    if (val > 86 && val < 100) continue;

    for (int j = 0; j < size; ++j)
    { nHist1->Fill(val); }
  }//end-for

  // Fill the second histogram.
  int n2 = h2->GetNbinsX();
  for (int i = 0; i < n2; ++i)
  {
    int size = h2->GetBinContent(i);
    int val = h2->GetBinCenter(i);
    if (val > 86 && val < 100) continue;
    
    for (int j = 0; j < size; ++j)
    { nHist2->Fill(val); }
  }//end-for

  //--- Now, create the ratio plot with the new style. ----------------------//
  
  auto c1 = new TCanvas("c1", "");
  
  setTDRStyle();
  auto rat = new TRatioPlot(nHist1, nHist2, "pois");  
  rat->Draw();
  gPad->Modified(); gPad->Update();
  TPad *pad = rat->GetUpperPad();
  TLegend *l = pad->BuildLegend();
  
  // Add our own custom labels to the legend
  TList *p = l->GetListOfPrimitives();
  TIter next(p); TObject *obj;
  TLegendEntry *le; int i = 0;

  std::string lbl[] = { "Z_{ee} + b-jet", "Z_{e#mu} + b-jet"};
  while ((obj = next())) {
    le = (TLegendEntry*)obj; i++;
    le->SetLabel(lbl[i-1].c_str());
  }

  float x1_l = 0.92, y1_l = 0.60;
  float dx_l = 0.30, dy_l = 0.18;
  float x0_l = x1_l-dx_l;
  float y0_l = y1_l-dy_l;
 
  gPad->Update(); pad->Update();
  l->SetX1NDC(x0_l); l->SetX2NDC(x1_l);
  l->SetY1NDC(y0_l); l->SetY2NDC(y1_l);
  gPad->Modified(); pad->Modified();

  //pad->Modified(); pad->Update();
  c1->Update();
}

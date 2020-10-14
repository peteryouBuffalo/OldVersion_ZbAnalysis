/******************************************************************************
*                                                                             *
*  The following program takes two histograms and creates a ratio plot.       *
*  	Created: October, 2020	Peter Young                                       *
*  	                                                                          *
******************************************************************************/

#include "tdrstyle.C"
#include <math.h>

std::string round(float val, int n)
{
  std::string num_text = std::to_string(val);
  std::string rounded = num_text.substr(0, num_text.find(".") + n+1);
  return rounded;
}

void compare(std::string filename, std::string hist1, std::string hist2)
{  
  //--- Get the file & retrieve the original histograms from it. ------------//
  
  setTDRStyle();
  TFile *f = new TFile(filename.c_str());
  TH1F* h1 = (TH1F*)f->Get(hist1.c_str());
  TH1F* h2 = (TH1F*)f->Get(hist2.c_str());;

  //--- Convert the histograms to the preferred bins. The current pref is ---//
  //--- approximately 4 GeV per bin. ----------------------------------------//

  Float_t bins[] = { 50, 54, 58, 62, 66, 70, 74, 78, 82, 86, 100, 104, 108, 112,
                     116, 120, 124, 128, 132, 136, 140, 144, 148, 152, 156,
                     160, 164, 168, 172, 176, 180, 184, 188, 192, 196, 200};
  Int_t binnum = sizeof(bins)/sizeof(Float_t) - 1;

  TH1F* nHist1 = new TH1F("n1", "", binnum, bins);
  nHist1->SetLineColor(kBlue); nHist1->SetMarkerColor(kBlue);
  //nHist1->GetXaxis()->SetTitle("M_{#ell #ell}");
  nHist1->GetXaxis()->SetLabelSize(0.02);
  //nHist1->GetYaxis()->SetTitle("Events/4 GeV");
  nHist1->GetYaxis()->SetLabelSize(0.02);
  //nHist1->SetTitle("Ttbar Background Estimation");
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

  //--- Let's get the bin ratio between each & average it. ------------------//
  int n = nHist2->GetNbinsX();
  float binRats[n];
  float sum = 0.f;

  for (int i = 0; i < n; ++i)
  {
    if (bins[i] == 100) continue; 

    // Get the size of i'th bin from hist #1
    int size1 = nHist1->GetBinContent(i);
    // Get the size of i'th bin from hist #2
    int size2 = nHist2->GetBinContent(i);
 
    // Now calculate the ratio at i'th bin
    float val = size1/(size2*1.0f);
    binRats[i] = val;
    sum += val;
  }

  // Now calculate the average, std dev, & error
  float avg = sum/n;
  float temp = 0.f;

  for (int i = 0; i < n; ++i)
  { 
    if (bins[i] == 100) continue;
    temp += (binRats[i]-avg)*(binRats[i]-avg);
  }
  float stdev = sqrt(temp/(n-2)); // -2 b/c empty bin in middle ignored
  float err = stdev/sqrt(n-1);    // -1 b/c --"-- 
  
  nHist2->Scale(avg);
  std::string avgStr = round(avg, 3);
  std::string errStr = round(err, 3);
  std::cout << "c_t +/- err = " << avgStr << " +/- " << errStr << std::endl; 
  
  std::string ct = "c_{t} = " + avgStr + " #pm " + errStr; 

  //--- Now, create the ratio plot with the new style. ----------------------//
  
  int W = 800; int H = 600;
  float T = 0.08*H; 	float B = 0.12*H;
  float L = 0.12*W;	float R = 0.04*W;
  
  TString canvName = "TTbarBackgroundEstimation_";
  canvName += W; canvName += "-";
  canvName += H; 
  canvName += "-out";
 
  TCanvas* canv = new TCanvas(canvName, canvName, 50, 50, W, H);
  canv->SetFillColor(0);
  canv->SetBorderMode(0);
  canv->SetFrameFillStyle(0);
  canv->SetFrameBorderMode(0);
  canv->SetLeftMargin( L/W );
  canv->SetRightMargin( R/W );
  canv->SetTopMargin( T/H );
  canv->SetBottomMargin( B/H );
  canv->SetTickx(0);
  canv->SetTicky(0);

  nHist2->GetYaxis()->SetTitle("Events/4 GeV");
  nHist2->GetXaxis()->SetTitle("M_{Z}");

  TRatioPlot *rat = new TRatioPlot(nHist1, nHist2, "pois");  
  rat->Draw();

  gPad->Modified(); gPad->Update();
  TPad *pad = rat->GetUpperPad();
  rat->GetUpperRefYaxis()->SetTitle("Events/4 GeV");
  rat->GetLowerRefXaxis()->SetTitle("M_Z");
  rat->GetUpperRefYaxis()->SetLabelSize(0.03);
  rat->GetLowerRefXaxis()->SetLabelSize(0.03);
 
  TLegend *l = pad->BuildLegend();
  l->SetLineColor(kWhite);
  l->SetBorderSize(0);
  TList *p = l->GetListOfPrimitives();

  TIter next(p); TObject *obj;
  TLegendEntry *le; int i = 0;

  std::string lbl[] = { "Z(#rightarrow e^{+}e^{-}) + b-jets",
                        "Z(#rightarrow e#mu ) + b-jets"};

  while ((obj=next()))
  {
    le = (TLegendEntry*)obj;
    i++;
    le->SetLabel(lbl[i-1].c_str());
  }
  l->AddEntry((TObject*)0, ct.c_str(), "");

  pad->Modified(); pad->Update();
  canv->Update();
}

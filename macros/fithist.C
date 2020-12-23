/******************************************************************************
*                                                                             *
* fithist.C - The following program takes two histograms and creates a ratio  *
*             plot between them. It also determines the normalization         *
*             coefficient between the two.                                    *
*                                                                             *
*  Created: October, 2020 - Peter Young                                       *
*  Updated: December, 2020 - --"--                                            *
*                                                                             *
******************************************************************************/

#include <math.h>

// global variables ///////////////////////////////////////////////////////////

TH1F* background;

// Round method ///////////////////////////////////////////////////////////////
std::string round(float val, int n)
{
  std::string num_text = std::to_string(val);
  std::string rounded = num_text.substr(0, num_text.find(".") + n+1);
  return rounded;
}

// ftotal method //////////////////////////////////////////////////////////////
Double_t ftotal(Double_t *x, Double_t *par)
{
  Double_t xx = x[0];
  Int_t bin = background->GetXaxis()->FindBin(xx);
  Double_t br = par[0]*background->GetBinContent(bin);
  return br;
}

// fithist method /////////////////////////////////////////////////////////////
void fithist()
{
  //-- Get the files & retrieve the original histograms. --------------------//
  gStyle->SetOptStat(0);
  TFile *f = new TFile("../output_withTrig/SingleMuon_DATA_2018.root");
  TH1F* h1 = (TH1F*)f->Get("Zmm_fullMET_2bjet");
  TH1F* h2 = (TH1F*)f->Get("Zem_fullMET_2bjet_muon");
  
  int eeORmm = 0;   // 0 = ee, 1 = mm (this one is purely aesthetic)
  int type = 1;     // 0 = mass, 1 = MET, 2 = METsig (this one isn't)
 
  //-- Convert the histograms to the preferred bins. The current preference -//
  //-- is 2 GeV per bin. ----------------------------------------------------//

  // zMass bins
  Float_t massBins[] = {
    40, 42, 44, 46, 48, 50, 52, 54, 56, 126, 128, 
    130, 132, 134, 136, 138, 140, 142, 144, 146, 148,
    150, 152, 154, 156, 158, 160, 162, 164, 166, 168,
    170, 172, 174, 176, 178, 180, 182, 184, 186, 188,
    190, 192, 194, 196, 198, 200
  };

  // MET/METsig bins
  Float_t metBins[] = { 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100,
    102, 104, 106, 108, 110, 112, 114, 116, 118, 120, 122, 124, 126,
    128, 130, 132, 134, 136, 138, 140, 142, 144, 146, 148, 150, 152,
    154, 156, 158, 160, 162, 164, 166, 168, 170, 172, 174, 176, 178,
    180, 182, 184, 186, 188, 190, 192, 194, 196, 198, 200 };

  Float_t sigBins[] = { 10, 12, 14, 16, 18,
    20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40,
    42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72,
    74, 76, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98, 100,
    102, 104, 106, 108, 110, 112, 114, 116, 118, 120, 122, 124, 126};

  Float_t *bins;
  Float_t binL = 56, binH = 126;
  Int_t binnum = 0;

  switch(type)
  {
    case 0: // mass
      bins = massBins; binL = 56; binH = 126;
      binnum = sizeof(massBins)/sizeof(Float_t)-1; break;
    case 1: // met
      bins = metBins;  binL = 0; binH = 80;
      binnum = sizeof(metBins)/sizeof(Float_t)-1; break;
    case 2: // met sig
      bins = sigBins;  binL = 0; binH = 10;
      binnum = sizeof(sigBins)/sizeof(Float_t)-1; break;
  }
  
  TH1F* nHist1 = new TH1F("n1", "", binnum, bins);
  nHist1->SetLineColor(kBlue); nHist1->SetMarkerColor(kBlue);
  nHist1->GetYaxis()->SetTitle("Events/2 GeV");
  //nHist1->GetXaxis()->SetTitle("M_{Z}");

  TH1F* nHist2 = new TH1F("n2", "", binnum, bins);
  nHist2->SetLineColor(kBlack); nHist2->SetMarkerColor(kBlack);
  nHist2->GetYaxis()->SetTitle("Events/2 GeV");
  //nHist2->GetXaxis()->SetTitle("M_{Z}");

  std::string xLbl = "";
  switch(type)
  {
    case 0: xLbl = "M_{Z}"; break;
    case 1: xLbl = "MET"; break;
    case 2: xLbl = "MET Significance"; break;
  }

  nHist1->GetXaxis()->SetTitle(xLbl.c_str());
  nHist2->GetXaxis()->SetTitle(xLbl.c_str());
  
  //-- Now, let's take the data from the old histogram and fill the new. ----//

  long N_ll_low = 0L;  long N_ll_high = 0L;
  long N_emu_low = 0L; long N_emu_high = 0L;

  // Fill the first histogram
  int n1 = h1->GetNbinsX();
  for (int i = 0; i < n1; ++i)
  {
    // get the size and center of the i'th bin
    int size = h1->GetBinContent(i);
    int val = h1->GetBinCenter(i);
    if (val >= binL && val <= binH) continue;

    // use the value to properly fill the new one
    for (int j = 0; j < size; ++j)
    {
      nHist1->Fill(val);
      if (val < binL) N_ll_low++;
      if (val > binH) N_ll_high++;
    }
  }//end-for

  // Fill the second histogram
  int n2 = h2->GetNbinsX();
  for (int i = 0; i < n2; ++i)
  {
    // get the size of center of the i'th bin
    int size = h2->GetBinContent(i);
    int val = h2->GetBinCenter(i);
    if (val >= binL && val <= binH) continue;

    // use the value to properly fill the new one
    for (int j = 0; j < size; ++j)
    {
      nHist2->Fill(val);
      if (val < binL) N_emu_low++;
      if (val > binH) N_emu_high++;
    }
  }//end-for

  background = nHist2;
  long N_ll_side = N_ll_low + N_ll_high;
  long N_emu_side = N_emu_low + N_emu_high;

  std::cout << "\n\tlow \thigh \tside (total)\n";
  std::cout << "-----\t----\t-----\t------------\n";
  std::cout << "N_ll\t" << N_ll_low << "\t" << N_ll_high << "\t" << N_ll_side << "\n";
  std::cout << "N_emu\t" << N_emu_low << "\t" << N_emu_high << "\t" << N_emu_side << "\n";

  //-- fit method #1 - the fit function -------------------------------------//
  float ct1 = 0.0; float err1 = 0.0;
  TF1 *ftot = new TF1("ftot", ftotal, 40, 200, 1);
  nHist1->Fit("ftot", "0q");
  ct1 = ftot->GetParameter(0);
  err1 = ftot->GetParError(0);

  float chi2 = ftot->GetChisquare();
  float ndf = ftot->GetNDF();
 
  std::cout << "\n(method #1) fit function: c_t = " << ct1 << " +/- " << err1 << "\n";  
  std::cout << "\t chi2/ndf = " << chi2 << "/" << ndf << " = " << 
               (chi2/ndf) << "\n";
  //-- fit method #2 - compare the total events -----------------------------//

  float ct2 = N_ll_side / (1.0 * N_emu_side);
  std::cout << "(method #2) comparing total events: c_t = " << ct2 << "\n";

  //-- fit method #3 - compare the number of events in each region ----------//

  float ct_low = N_ll_low / (1.0 * N_emu_low);
  float ct_high = N_ll_high / (1.0 * N_emu_high);
  std::cout << "\ncomparing total low side: c_t = " << ct_low << "\n";
  std::cout << "comparing total high side: c_t = " << ct_high << "\n";
  
  float ct3 = (ct_low + ct_high)/2;
  float err3 = abs(ct_low - ct_high)/sqrt(2);
  std::cout << "(method #3) average of these: c_t = " << ct3 << " +/- " << err3 << "\n";

  //-- fit method #4 - average per bin --------------------------------------//
  int n = nHist2->GetNbinsX();
  float binRats[n];
  float sum = 0.f;

  for (int i = 0; i < n; ++i)
  {
    if (bins[i] == binH) continue;
    int size1 = nHist1->GetBinContent(i);
    int size2 = nHist2->GetBinContent(i);
    float val = size1/(size2*1.0);
    binRats[i] = val;
    sum += val;
  }

  float avg = sum/n; float temp = 0.f;
  for (int i = 0; i < n; ++i)
  {
    if (bins[i] == binH) continue;
    temp += (binRats[i]-avg)*(binRats[i]-avg);
  }
  float stdev = sqrt(temp/(n-2)); // -2 b/c empty bin in the middle ignored
  float err = stdev/sqrt(n-1);    // -1 b/c --"--

  float ct4 = avg;
  std::cout << "(method #4) averaged per bin: c_t = " << ct4 << " +/- " << err << "\n\n";

  //-- Now, let's properly scale the second histogram & draw. ---------------//

  int method = 4;
  switch(method)
  {
    case 1: nHist2->Scale(ct1); break;
    case 2: nHist2->Scale(ct2); break;
    case 3: nHist2->Scale(ct3); break;
    case 4: nHist2->Scale(ct4); break;
  }

  std::string ctStr = round(ct1, 3);
  std::string errStr = round(err1, 3);
  std::string ctOut = "c_{t} = " + ctStr + " #pm " + errStr;

  float chi = chi2/ndf;
  std::string chiStr = round(chi, 3);
  std::string chiOut = "#chi^{2}/ndf = " + chiStr;

  int W = 800; int H = 600;
  float T = 0.08*H;    float B = 0.12*H;
  float L = 0.12*W;    float R = 0.04*W;

  TString canvName = "TTbarBackgroundEstimation_";
  canvName += W; canvName += "-";
  canvName += H; canvName += "-out";

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

  TRatioPlot *rat = new TRatioPlot(nHist1, nHist2, "pois");
  rat->Draw();

  gPad->Modified(); gPad->Update();
  TPad *pad = rat->GetUpperPad();
  rat->GetUpperRefYaxis()->SetTitle("Events/2 GeV");
  rat->GetLowerRefXaxis()->SetTitle("M_Z");
  rat->GetLowerRefYaxis()->SetTitle("ratio");
  rat->GetUpperRefYaxis()->SetLabelSize(0.03);
  rat->GetLowerRefXaxis()->SetLabelSize(0.03);
  rat->GetLowerRefYaxis()->SetRangeUser(0.,2.);

  TLegend *l = pad->BuildLegend();
  l->SetLineColor(kWhite);
  l->SetBorderSize(0);
  TList *p = l->GetListOfPrimitives();

  TIter next(p); TObject *obj;
  TLegendEntry *le; int i = 0;
  
  std::string lbl1 = "";
  switch(eeORmm)
  {
    case 0: lbl1 = "Z(#rightarrow e^{+}e^{-}) + #geq 2 b-jets"; break;
    case 1: lbl1 = "Z(#rightarrow #mu^{+}#mu^{-}) + #geq 2 b-jets"; break;
  }
  std::string lbl[] = { lbl1.c_str(), "Z(#rightarrow e#mu) + #geq 2 b-jets" };
 
  while ((obj=next()))
  {
    le = (TLegendEntry*)obj; i++;
    le->SetLabel(lbl[i-1].c_str());
  }
  //l->AddEntry((TObject*)0, ct.c_str(), "");
  //l->AddEntry((TObject*)0, chiOut.c_str(), "");
  l->AddEntry((TObject*)0, ctOut.c_str(), "");
  l->AddEntry((TObject*)0, chiOut.c_str(), "");
  pad->Modified(); pad->Update();
  canv->Update();
}

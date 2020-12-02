TH1F* background;

Double_t ftotal(Double_t *x, Double_t *par)
{
  Double_t xx = x[0];
  Int_t bin = background->GetXaxis()->FindBin(xx);
  Double_t br = par[0]*background->GetBinContent(bin);
  return br;
}

void fithist(std::string file, std::string hist1, std::string hist2)
{
  //--- Get the file & retrieve the original histograms. --------------------//
  gStyle->SetOptStat(0);
  TFile *f = new TFile(file.c_str());
  TH1F* h1 = (TH1F*)f->Get(hist1.c_str());
  TH1F* h2 = (TH1F*)f->Get(hist2.c_str());

  //--- Convert the histogram to the preferred bins. The current pref -------//
  //--- is approximately 2 GeV per bin. -------------------------------------//

  Float_t bins[] = { 40, 42, 44, 46, 48, 50, 52, 54, 56,
                     126, 128, 130, 132, 134, 136, 138, 140,
                     142, 144, 146, 148, 150, 152, 154, 156,
                     158, 160, 162, 164, 166, 168, 170, 172,
                     174, 176, 178, 180, 182, 184, 186, 188,
                     190, 192, 194, 196, 198, 200 };
  					   
  Float_t binL = 56, binH = 126;
  Int_t binnum = sizeof(bins)/sizeof(Float_t) - 1;

  TH1F* nHist1 = new TH1F("n1", "", binnum, bins);
  nHist1->SetLineColor(kBlue); nHist1->SetMarkerColor(kBlue);
  nHist1->GetYaxis()->SetTitle("Events/2 GeV");
  nHist1->GetXaxis()->SetTitle("M_{Z}");
  
  TH1F* nHist2 = new TH1F("n2", "", binnum, bins);
  nHist2->SetLineColor(kBlack); nHist2->SetMarkerColor(kBlack);
  nHist2->GetYaxis()->SetTitle("Events/2 GeV");
  nHist2->GetXaxis()->SetTitle("M_{Z}");

  //--- Now, let's take the data from the old histogram and fill the new. ---//

  long N_ll_low = 0L; long N_ll_high = 0L;
  long N_emu_low = 0L; long N_emu_high = 0L;

  // Fill the first histogram
  int n1 = h1->GetNbinsX();
  for (int i = 0; i < n1; ++i)
  {
    // get the size and center of the i'th bin
    int size = h1->GetBinContent(i);
    int val = h1->GetBinCenter(i);
    if (val >= binL && val <= binH) continue;
    //if (val <= binL) continue; 
 
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
    // get the size & center of the i'th bin
    int size = h2->GetBinContent(i);
    int val = h2->GetBinCenter(i);
    if (val >= binL && val <= binH) continue;
    //if (val <= binL) continue;

    // use the value to properly fill the new one
    for (int j = 0; j < size; ++j)
    { 
      nHist2->Fill(val);
      if (val < binL) N_emu_low++;
      if (val > binH) N_emu_high++;
    }
  }//end-for

  std::cout << "\n\nN_ll_low = " << N_ll_low << "\n";
  std::cout << "N_ll_high = " << N_ll_high << "\n";
  std::cout << "N_ll_side = " << (N_ll_low+N_ll_high) << "\n\n";
  std::cout << "N_emu_low = " << N_emu_low << "\n";
  std::cout << "N_emu_high = " << N_emu_high << "\n";
  std::cout << "N_emu_side = " << (N_emu_low+N_emu_high) << "\n";

  background = nHist2;

  //--- Fit the data --------------------------------------------------------//
  TF1 *ftot = new TF1("ftot", ftotal, 40, 200, 1);
  nHist1->Fit("ftot", "");
}

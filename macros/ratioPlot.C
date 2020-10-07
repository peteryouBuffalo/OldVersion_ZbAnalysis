#include <string>

void ratioPlot(std::string filename, std::string h1Name, std::string h2Name)
{
  gStyle->SetOptStat(0);
  
  // Create a canvas
  TCanvas* c = new TCanvas("c1", "Ratio Plot");

  // Get the file
  TFile *f = new TFile(filename.c_str(), "UPDATE");

  // Get the histograms
  TH1D* h1 = (TH1D*)f->Get(h1Name.c_str());
  TH1D* h2 = (TH1D*)f->Get(h2Name.c_str());

  h1->Fit("gaus"); h1->SetLineColor(kBlue);
  h2->Fit("gaus"); h2->SetLineColor(kBlack);
  h1->GetFunction("gaus")->SetLineColor(kRed);
  h2->GetFunction("gaus")->SetLineColor(kGreen);

  Int_t n1 = h1->GetEntries();
  Int_t n2 = h2->GetEntries();
  std::cout << "n1 = " << n1 << std::endl;
  std::cout << "n2 = " << n2 << std::endl;
  //h2->Scale(n1/n2);

  TF1 * f1 = (TF1*)h1->GetFunction("gaus");
  TF1 * f2 = (TF1*)h2->GetFunction("gaus");

  float c1 = f1->GetParameter(0);
  float c2 = f2->GetParameter(0); 
  float d1 = f1->GetParError(0);
  float d2 = f2->GetParError(0);

  float avgRatio = c1/c2;
  float err = sqrt((d1/c1)*(d1/c1) + (d2/c2)*(d2/c2));

  std::cout << "c_t = " << avgRatio << " +/- " << err << std::endl;

  Int_t nBins = 0;
  for (int i =0; i < 300; ++i)
  {
    Int_t n1 = h1->GetBinContent(i);
    Int_t n2 = h2->GetBinContent(i);
    if (n1 > n2) nBins++; 
  }

  std::cout << nBins << " have more data." << std::endl;

  auto gr = new TGraphAsymmErrors(h1, h2, "pois");
  std::cout << " ng = " << gr->GetN() << std::endl;
  gr->Draw(); 

  //auto rp = new TRatioPlot(h1, h2);
  //c->SetTicks(0, 1);
  //rp->Draw();
  //rp->GetLowerRefYaxis()->SetRange(0,1);
  c->Update();
}

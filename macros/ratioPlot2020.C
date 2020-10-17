#include "tdrstyle.C"
#include "d02004style.C"

void ratioPlot2020()
{
	gStyle->SetOptStat(0);
	setTDRStyle();
	auto c1 = new TCanvas("c1", "fit residual simple");
    auto h1 = new TH1D("h1", "h1", 50, -5, 5);
    h1->FillRandom("gaus", 2000);
    h1->Fit("gaus", "0");
    h1->GetXaxis()->SetTitle("x");
    auto rp1 = new TRatioPlot(h1);
    rp1->Draw();
    rp1->GetLowerRefYaxis()->SetTitle("ratio");
    rp1->GetUpperRefYaxis()->SetTitle("entries");
}

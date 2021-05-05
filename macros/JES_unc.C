// inclusion statements //////////////////////////////////////////////////////
#include <math.h>

// uncertainty method ////////////////////////////////////////////////////////

float get_rel_unc(float relUnc1, float relUnc2)
{
	return sqrt(pow(relUnc1,2.0) + pow(relUnc2,2.0) - 2*relUnc1*relUnc2);
}

// main method ///////////////////////////////////////////////////////////////

void JES_unc()
{
	//-- let's get the proper file and the histograms ----------------------//
	
	TFile *f = new TFile("forPeter.root", "UPDATE");
	
	TH1F* xSec1 = (TH1F*)f->Get("pt_b1_NOM_z1b_Combined");
	TH1F* xSec2 = (TH1F*)f->Get("pt_b1_NOM_z2b_Combined");
	TH1F* rat = (TH1F*)f->Get("pt_b1_NOM_rat_Combined");
	
	TH1F* relUnc1_up = (TH1F*)f->Get("pt_b1_JESU_rel_z1b_Combined");
	relUnc1_up->SetLineColor(kBlue);
	
	TH1F* relUnc1_down = (TH1F*)f->Get("pt_b1_JESD_rel_z1b_Combined");
	relUnc1_down->SetLineColor(kBlue); relUnc1_down->SetLineStyle(kDashed);
	
	TH1F* relUnc2_up = (TH1F*)f->Get("pt_b1_JESU_rel_z2b_Combined");
	relUnc2_up->SetLineColor(kRed); 
	
	TH1F* relUnc2_down = (TH1F*)f->Get("pt_b1_JESD_rel_z2b_Combined");
	relUnc2_down->SetLineColor(kRed); relUnc2_down->SetLineStyle(kDashed);
	
	TH1F* relRat = (TH1F*)f->Get("pt_b1_JESC_rel_rat_Combined");
	relRat->SetLineColor(kBlack); relRat->SetLineWidth(2);
	
	//-- calculate Z+2b/Z+1b up --------------------------------------------//
	
	// We need to create the histogram with the same bins
	// as the original histograms.
	Float_t bins[] = { 30, 50, 70, 90, 110, 150, 200 };
	Int_t nBins = sizeof(bins)/sizeof(Float_t) - 1;
	
	// Now that we've got the histogram created with proper
	// binning, let's calculate and fill it.
	TH1F* rat_up = new TH1F("rat_up", "JES", nBins, bins);
	rat_up->SetLineColor(kGreen+2);
	rat_up->GetXaxis()->SetTitle("Jet pt [GeV]");
	rat_up->GetYaxis()->SetTitle("Relative uncertainty");
	for (Int_t i = 0; i < nBins+1; ++i)
	{
		float relUnc1 = relUnc1_up->GetBinContent(i);
		float relUnc2 = relUnc2_up->GetBinContent(i);
		float ratio = get_rel_unc(relUnc1, relUnc2);
		rat_up->SetBinContent(i, ratio);
	}
	
	// Now let's do the same for Z+2b/Z+1b down.
	TH1F* rat_down = new TH1F("rat_down", "JES", nBins, bins);
	rat_down->SetLineColor(kGreen+2); rat_down->SetLineStyle(kDashed);
	for (Int_t i = 0; i < nBins+1; ++i)
	{
		float relUnc1 = relUnc1_down->GetBinContent(i);
		float relUnc2 = relUnc2_down->GetBinContent(i);
		float ratio = get_rel_unc(relUnc1, relUnc2);
		rat_down->SetBinContent(i, ratio);
	}
	
	// Now let's do the same for Z+2b/Z+1b combined
	TH1F* combo = new TH1F("combo", "JES_CALC", nBins, bins);
	combo->SetLineColor(kBlack); combo->SetLineStyle(kDashed);
	combo->SetLineWidth(2);
	for (Int_t i = 0; i < nBins+1; ++i)
	{
		float upUnc1 = relUnc1_up->GetBinContent(i);
		float upUnc2 = relUnc2_up->GetBinContent(i);
		float downUnc1 = relUnc1_down->GetBinContent(i);
		float downUnc2 = relUnc2_down->GetBinContent(i);
		float relUnc1 = max(abs(upUnc1), abs(downUnc1));
		float relUnc2 = max(abs(upUnc2), abs(downUnc2));
		float ratio = get_rel_unc(relUnc1, relUnc2);
		combo->SetBinContent(i, ratio);
	}
	
	// Now, let's draw everything.
	gStyle->SetOptStat(0);
	TCanvas* c = new TCanvas("c", "c");	c->cd();
	rat_up->GetYaxis()->SetRangeUser(-0.3, 0.3);
	rat_up->Draw();		rat_down->Draw("same");
	relUnc1_up->Draw("same");	relUnc1_down->Draw("same");
	relUnc2_up->Draw("same");	relUnc2_down->Draw("same");	
	relRat->Draw("same");		combo->Draw("same");		
	c->Update();	c->Draw();
	
	// Draw the legend
	TLegend *legend = new TLegend(0.4, 0.7, 0.9, 0.9);
	legend->SetHeader("", "C");
	legend->SetNColumns(2);
	legend->AddEntry(relUnc1_up, "Z+1b up", "l");
	legend->AddEntry(relUnc1_down, "Z+1b down", "l");
	legend->AddEntry(relUnc2_up, "Z+2b up", "l");
	legend->AddEntry(relUnc2_down, "Z+2b down", "l");
	legend->AddEntry(rat_up, "Z+2b/Z+1b up", "l");
	legend->AddEntry(rat_down, "Z+2b/Z+1b down", "l");
	legend->AddEntry(relRat, "Z+2b/Z+1b combined", "l");
	legend->AddEntry(combo, "Z+2b/Z+1b calculated", "l");
	legend->Draw();
}

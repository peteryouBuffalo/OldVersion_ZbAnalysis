/******************************************************************************
*                                                                             *
* ratio2020.C - The following program takes two histograms and creates a 	  *
* 				ratio plot between them. It also determines the normalization *
*				coefficient between the two.							      *
*                                                                             *
*	Created: October, 2020 - Peter Young								      *
*                                                                             *
******************************************************************************/

#include <math.h>

// Round method ///////////////////////////////////////////////////////////////
std::string round(float val, int n)
{
  std::string num_text = std::to_string(val);
  std::string rounded = num_text.substr(0, num_text.find(".") + n+1);
  return rounded;
}

// Main Method ////////////////////////////////////////////////////////////////
void ratio2020(std::string file, std::string hist1, std::string hist2)
{
	//--- Get the file & retrieve the original histograms. ------------------//
	
	TFile *f = new TFile(file.c_str());
	TH1F* h1 = (TH1F*)f->Get(hist1.c_str());
  	TH1F* h2 = (TH1F*)f->Get(hist2.c_str());
  	
  	//--- Convert the histograms to the preferred bins. The current pref ----//
  	//--- is approximately 2 GeV per bin. -----------------------------------//
  	
  	Float_t bins[] = { 50, 52, 54, 56, 58, 60, 62, 64, 66, 
  					   115, 117, 119, 121, 123, 125, 127,
  					   129, 131, 133, 135, 137, 139, 141, 143,
  					   145, 147, 149, 151, 153, 155, 157, 159,
  					   161, 163, 165, 167, 169, 171, 173, 175,
  					   177, 179, 181, 183, 185, 187, 189, 191,
  					   193, 195, 197, 199, 201 };
   Int_t binnum = sizeof(bins)/sizeof(Float_t) - 1;
   
   TH1F* nHist1 = new TH1F("n1", "", binnum, bins);
   nHist1->SetLineColor(kBlue); nHist1->SetMarkerColor(kBlue);
   nHist1->GetYaxis()->SetTitle("Events/2 GeV");
   nHist1->GetXaxis()->SetTitle("M_{Z}");
   
   TH1F* nHist2 = new TH1F("n2", "", binnum, bins);
   nHist2->SetLineColor(kBlack); nHist2->SetMarkerColor(kBlack);
   nHist2->GetYaxis()->SetTitle("Events/2 GeV");
   nHist2->GetXaxis()->SetTitle("M_{Z}");
   
   //--- Now, let's take the data from the old histogram and fill the new. --//
   
   // Fill the first histogram
   int n1 = h1->GetNbinsX();
   for (int i = 0; i < n1; ++i)
   {
   		// get the size & center of the i'th bin
   		int size = h1->GetBinContent(i);
   		int val = h1->GetBinCenter(i);
   		if (val >= 66 && val <= 115) continue;
   		
   		// use the value to properly fill the new one
   		for (int j = 0; j < size; ++j)
   		{ nHist1->Fill(val); }
   }//end-for
   
   // Fill the second histogram
   int n2 = h2->GetNbinsX();
   for (int i = 0; i < n2; ++i)
   {
   		// get the size & center of the i'th bin
   		int size = h2->GetBinContent(i);
   		int val = h2->GetBinCenter(i);
   		if (val >= 66 && val <= 115) continue;
   		
   		// use the value to properly fill the new one
   		for (int j = 0; j < size; ++j)
   		{ nHist2->Fill(val); }
   }//end-for
   
   //--- Let's fit the histograms and get the normalization coefficient. ----//
   
   TF1 *f1 = new TF1("f1", "gaus", 50, 200);
   TF1 *f2 = new TF1("f2", "gaus", 50, 200);
   nHist1->Fit("f1", "0"); nHist2->Fit("f2", "0");
   
   float p1 = f1->GetParameter(0), p2 = f2->GetParameter(0);
   float err1 = f1->GetParError(0), err2 = f2->GetParError(0);
   float ct = p1/p2;
   float err = sqrt(pow(err1/p1,2.0) + pow(err2/p2,2.0)) * ct;
   
   std::cout << "-------------------------------------------" << std::endl;
   std::cout << "c_t +/- err = " << ct << " +/- " << err << std::endl;
   std::cout << "-------------------------------------------" << std::endl;
   
   nHist2->Scale(ct);
   
   //--- Now, create the ratio plot with the proper style. ------------------//
   
   TCanvas* canv = new TCanvas("name", "name");
   TRatioPlot *rat = new TRatioPlot(nHist1, nHist2, "pois");
   rat->Draw();
}
// END OF FILE ////////////////////////////////////////////////////////////////

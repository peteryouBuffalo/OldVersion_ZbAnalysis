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
void ratio2020(std::string file, std::string hist1, std::string hist2, float ct)
{
	//--- Get the file & retrieve the original histograms. ------------------//
        gStyle->SetOptStat(0);	
	TFile *f = new TFile(file.c_str());
	TH1F* h1 = (TH1F*)f->Get(hist1.c_str());
  	TH1F* h2 = (TH1F*)f->Get(hist2.c_str());
  	
  	//--- Convert the histograms to the preferred bins. The current pref ----//
  	//--- is approximately 2 GeV per bin. -----------------------------------//
  	
  	Float_t bins[] = { 40, 42, 44, 46, 48, 50, 52, 54, 56,
                           126, 128, 130, 132, 134, 136, 138,
                           140, 142, 144, 146, 148, 150, 152,
                           154, 156, 158, 160, 162, 164, 166,
                           168, 170, 172, 174, 176, 178, 180,
                           182, 184, 186, 188, 190, 192, 194,
                           196, 198, 200 };
   Int_t binnum = sizeof(bins)/sizeof(Float_t) - 1;
   Int_t binL = 56; Int_t binH = 126;   

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
   		if (val >= binL && val <= binH) continue;
   		
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
   		if (val >= binL && val <= binH) continue;
   		
   		// use the value to properly fill the new one
   		for (int j = 0; j < size; ++j)
   		{ nHist2->Fill(val); }
   }//end-for
   
   //--- Let's fit the histograms and get the normalization coefficient. ----//
   
   TF1 *f1 = new TF1("f1", "gaus", 50, 200);
   TF1 *f2 = new TF1("f2", "gaus", 50, 200);
   nHist1->Fit("f1", "0"); nHist2->Fit("f2", "0");
   
   //float p1 = f1->GetParameter(0), p2 = f2->GetParameter(0);
   //float err1 = f1->GetParError(0), err2 = f2->GetParError(0);
  // float ct = p1/p2;
   //float err = sqrt(pow(err1/p1,2.0) + pow(err2/p2,2.0)) * ct;
  
  // std::string avgStr = round(ct, 3);
  // std::string errStr = round(err, 3);
  //std::cout << "c_t +/- err = " << avgStr << " +/- " << errStr << std::endl;

   //std::string c_t = "c_{t} = " + avgStr + " #pm " + errStr;
 
  // std::cout << "-------------------------------------------" << std::endl;
  // std::cout << "c_t +/- err = " << ct << " +/- " << err << std::endl;
  // std::cout << "-------------------------------------------" << std::endl;
   
   nHist2->Scale(ct);
   
   //--- Now, create the ratio plot with the proper style. ------------------//
   
   TCanvas* canv = new TCanvas("name", "name");
   TRatioPlot *rat = new TRatioPlot(nHist1, nHist2, "pois");
   rat->Draw();

   /*gPad->Modified(); gPad->Update();
   TPad *pad = rat->GetUpperPad();

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
   l->AddEntry((TObject*)0, c_t.c_str(), "");

   pad->Modified(); pad->Update();
   */
}
// END OF FILE ////////////////////////////////////////////////////////////////

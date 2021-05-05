// inclusion statements //////////////////////////////////////////////////////
#include <math.h>

// uncertainty method ////////////////////////////////////////////////////////

float get_rel_unc(float relUnc1, float relUnc2, float rho)
{
	return sqrt(pow(relUnc1,2.0) + pow(relUnc2,2.0) - 2*rho*relUnc1*relUnc2);
}

// main method ///////////////////////////////////////////////////////////////

void abseta_unc()
{
	//-- let's get the proper file and the histograms ----------------------//
	
	TFile *f1 = new TFile("ratio_all_withIntXsec_amcatnlo_2016_theoUnc.root", 
	"UPDATE");
	TFile *f2 = new TFile("ratio_unc_all_withIntXsec_amcatnlo_2016_theoUnc.root",
	 "UPDATE");
	
	TH1F* pdf1 = (TH1F*)f2->Get("abseta_b1_PDF_z1b_Combined");
	TH1F* pdf2 = (TH1F*)f2->Get("abseta_b1_PDF_z2b_Combined");
	TH1F* scale1 = (TH1F*)f2->Get("abseta_b1_SCALE_z1b_Combined");
	TH1F* scale2 = (TH1F*)f2->Get("abseta_b2_SCALE_z2b_Combined");
	
	TH1F* pdfscale = (TH1F*)f1->Get("abseta_b1_PDFSCALE_gen_amcatnlo_rat_Combined");
	
	//-- calculate Z+2b/Z+1b up --------------------------------------------//
	
	pdfscale->Draw();
}

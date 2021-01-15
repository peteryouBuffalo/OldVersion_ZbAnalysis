void dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo()
{
//=========Macro generated from canvas: dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo/dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo
//=========  (Thu Jan 14 10:43:07 2021) by ROOT version 6.14/09
   TCanvas *dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo = new TCanvas("dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo", "dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo",0,0,600,600);
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->SetHighLightColor(2);
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->Range(0,0,1,1);
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->SetFillColor(0);
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->SetFillStyle(4000);
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->SetBorderMode(0);
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->SetBorderSize(2);
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->SetFrameFillStyle(1000);
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.628459,6.314516,2635.83);
   topPad->SetFillColor(0);
   topPad->SetBorderMode(0);
   topPad->SetBorderSize(2);
   topPad->SetLeftMargin(0.12709);
   topPad->SetRightMargin(0.0434783);
   topPad->SetBottomMargin(0.001);
   topPad->SetFrameBorderMode(0);
   topPad->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(0.01);
   st->SetMaximum(2259.033);
   
   TH1F *st_stack_329 = new TH1F("st_stack_329","",25,0,10);
   st_stack_329->SetMinimum(0.01);
   st_stack_329->SetMaximum(2371.984);
   st_stack_329->SetDirectory(0);
   st_stack_329->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_329->SetLineColor(ci);
   st_stack_329->GetXaxis()->SetRange(1,15);
   st_stack_329->GetXaxis()->SetLabelFont(42);
   st_stack_329->GetXaxis()->SetLabelSize(0.035);
   st_stack_329->GetXaxis()->SetTitleSize(0.035);
   st_stack_329->GetXaxis()->SetTitleFont(42);
   st_stack_329->GetYaxis()->SetTitle("Events/0.4");
   st_stack_329->GetYaxis()->SetLabelFont(42);
   st_stack_329->GetYaxis()->SetLabelSize(0.05);
   st_stack_329->GetYaxis()->SetTitleSize(0.057);
   st_stack_329->GetYaxis()->SetTitleOffset(1.2);
   st_stack_329->GetYaxis()->SetTitleFont(42);
   st_stack_329->GetZaxis()->SetLabelFont(42);
   st_stack_329->GetZaxis()->SetLabelSize(0.035);
   st_stack_329->GetZaxis()->SetTitleSize(0.035);
   st_stack_329->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_329);
   
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_1 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_1","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(1,0.2029122);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(2,1.645017);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(3,3.207998);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(4,5.709531);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(5,7.862911);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(6,6.171514);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(7,9.974075);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(8,4.031778);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(9,0.8579471);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(10,0.3718606);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(1,0.1839156);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(2,0.5541982);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(3,0.7771204);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(4,1.03004);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(5,1.231931);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(6,1.073933);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(7,1.388626);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(8,0.8804664);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(9,0.3862468);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(10,0.2629513);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetEntries(230);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_dRmin_Z2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_1->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_1,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_2 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_2","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(1,0.2817771);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(2,3.585383);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(3,5.68362);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(4,8.873466);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(5,15.61528);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(6,20.54746);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(7,21.51956);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(8,15.87095);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(9,2.53609);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(10,2.428433);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(11,0.8226881);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(12,0.8515855);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(1,0.2817771);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(2,1.037128);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(3,1.32146);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(4,1.597956);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(5,2.146311);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(6,2.428013);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(7,2.537068);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(8,2.158337);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(9,0.8349661);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(10,0.8665542);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(11,0.4760655);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(12,0.4917117);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetEntries(357);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dRmin_Z2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_2->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_2,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_3 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_3","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(1,33.15583);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(2,98.2903);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(3,184.9763);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(4,312.1913);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(5,387.9564);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(6,380.1236);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(7,245.7057);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(8,103.3042);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(9,18.56935);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(10,5.765346);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(11,1.498216);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(12,0.781399);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(13,0.5496441);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(1,2.514462);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(2,4.357201);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(3,5.960278);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(4,7.75524);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(5,8.629555);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(6,8.52573);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(7,6.842935);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(8,4.419401);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(9,1.857528);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(10,1.03015);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(11,0.5284943);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(12,0.3892868);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(13,0.3174018);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetEntries(9796);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dRmin_Z2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_3->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_dRmin_Z2b_stack_4 = new TH1D("Zmm_2bjet_XX_dRmin_Z2b_stack_4","",25,0,10);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(1,0.4607156);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(2,3.478277);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(3,6.090071);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(4,6.177888);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(5,12.52315);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(6,4.3495);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(7,10.40251);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(8,-0.1525258);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(9,5.093166);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(10,6.808833);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(11,12.20531);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(12,7.920675);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(13,4.495097);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(14,10.34816);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(1,0.4607156);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(2,3.002393);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(3,3.291778);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(4,3.463947);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(5,4.667638);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(6,2.803318);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(7,5.550073);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(8,2.224129);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(9,3.533422);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(10,4.439899);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(11,5.325934);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(12,4.43221);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(13,4.916062);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(14,4.986242);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetEntries(188);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_dRmin_Z2b_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_dRmin_Z2b_stack_5 = new TH1D("Zmm_2bjet_bX_dRmin_Z2b_stack_5","",25,0,10);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(1,0.7649878);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(2,0.9645622);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(3,9.961971);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(4,13.14151);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(5,11.89928);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(6,11.58466);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(7,17.23077);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(8,17.79764);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(9,0.6663676);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(10,2.699607);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(11,0.585445);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(12,2.09572);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(13,-0.5016073);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(14,0.4786356);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(15,0.5190137);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(1,1.427406);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(2,2.489994);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(3,3.639783);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(4,4.150231);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(5,4.930448);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(6,5.265339);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(7,5.345116);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(8,4.686893);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(9,2.96557);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(10,2.036846);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(11,1.543695);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(12,1.042615);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(13,0.5016073);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(14,0.4786356);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(15,0.5190137);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetEntries(637);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_dRmin_Z2b_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_dRmin_Z2b_stack_6 = new TH1D("Zmm_2bjet_bb_dRmin_Z2b_stack_6","",25,0,10);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(1,70.05744);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(2,169.2878);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(3,333.9449);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(4,500.5115);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(5,645.4766);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(6,819.6911);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(7,849.9421);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(8,618.991);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(9,165.6047);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(10,51.69066);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(11,22.63288);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(12,8.80704);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(13,4.267247);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(14,2.298867);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(15,0.3820129);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(18,-0.3625956);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(19,-0.5376612);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(1,9.409725);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(2,15.87194);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(3,21.19549);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(4,26.98449);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(5,32.47277);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(6,35.70035);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(7,35.86103);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(8,31.57113);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(9,16.23002);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(10,9.613357);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(11,6.026976);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(12,5.317945);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(13,3.458791);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(14,1.512337);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(15,0.8508455);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(18,0.4755088);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(19,0.5376612);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetEntries(27989);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_dRmin_Z2b_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dRmin_Z2b__657 = new TH1D("Zmm_2bjet_dRmin_Z2b__657","",25,0,10);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(1,83);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(2,254);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(3,425);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(4,715);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(5,955);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(6,1105);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(7,951);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(8,710);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(9,184);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(10,63);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(11,25);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(12,10);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(13,11);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(14,7);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(15,1);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(16,3);
   Zmm_2bjet_dRmin_Z2b__657->SetBinContent(17,1);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(1,9.110434);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(2,15.93738);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(3,20.61553);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(4,26.73948);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(5,30.90307);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(6,33.24154);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(7,30.83829);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(8,26.64583);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(9,13.56466);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(10,7.937254);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(11,5);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(12,3.162278);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(13,3.316625);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(14,2.645751);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(15,1);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(16,1.732051);
   Zmm_2bjet_dRmin_Z2b__657->SetBinError(17,1);
   Zmm_2bjet_dRmin_Z2b__657->SetEntries(5503);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b__657->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b__657->SetLineWidth(2);
   Zmm_2bjet_dRmin_Z2b__657->SetMarkerStyle(20);
   Zmm_2bjet_dRmin_Z2b__657->SetMarkerSize(1.2);
   Zmm_2bjet_dRmin_Z2b__657->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b__657->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b__657->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b__657->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b__657->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b__657->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b__657->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b__657->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b__657->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b__657->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b__657->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b__657->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b__657->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b__657->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b__657->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fx1657[25] = {
   0.2,
   0.6,
   1,
   1.4,
   1.8,
   2.2,
   2.6,
   3,
   3.4,
   3.8,
   4.2,
   4.6,
   5,
   5.4,
   5.8,
   6.2,
   6.6,
   7,
   7.4,
   7.8,
   8.2,
   8.6,
   9,
   9.4,
   9.8};
   Double_t Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fy1657[25] = {
   104.9237,
   277.2513,
   543.8648,
   846.6052,
   1081.334,
   1242.468,
   1154.775,
   759.843,
   193.3276,
   69.76474,
   37.74453,
   20.45642,
   8.81038,
   13.12567,
   0.9010265,
   0,
   0,
   -0.3625956,
   -0.5376612,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fex1657[25] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2};
   Double_t Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fey1657[25] = {
   9.860447,
   16.95585,
   22.60991,
   28.65561,
   34.36817,
   37.28048,
   37.4243,
   32.38232,
   16.99971,
   10.87011,
   8.220642,
   7.028897,
   6.040137,
   5.232482,
   0.996651,
   0,
   0,
   0.4755088,
   0.5376612,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fx1657,Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fy1657,Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fex1657,Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fey1657);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dRmin_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657","",100,0,11);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657->SetMinimum(-129.1577);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657->SetMaximum(1407.831);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1657);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_dRmin_Z2b_stack_6","Z+bb","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bX_dRmin_Z2b_stack_5","Z+bX","F");

   ci = TColor::GetColor("#cc0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_XX_dRmin_Z2b_stack_4","Z+XX","F");

   ci = TColor::GetColor("#0000cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_3","t#bar{t}","F");

   ci = TColor::GetColor("#cccc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_2","Diboson","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_1","Single top","F");

   ci = TColor::GetColor("#00cccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_dRmin_Z2b","MC unc. (stat.)","fl");

   ci = TColor::GetColor("#333333");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
   bottomPad->SetFillColor(0);
   bottomPad->SetBorderMode(0);
   bottomPad->SetBorderSize(2);
   bottomPad->SetTickx(1);
   bottomPad->SetTicky(1);
   bottomPad->SetLeftMargin(0.12709);
   bottomPad->SetRightMargin(0.0434783);
   bottomPad->SetTopMargin(0.03);
   bottomPad->SetBottomMargin(0.35);
   bottomPad->SetFrameBorderMode(0);
   bottomPad->SetFrameBorderMode(0);
   
   TH1D *data_mc_ratio__658 = new TH1D("data_mc_ratio__658","",25,0,10);
   data_mc_ratio__658->SetBinContent(1,0.7910514);
   data_mc_ratio__658->SetBinContent(2,0.9161364);
   data_mc_ratio__658->SetBinContent(3,0.7814442);
   data_mc_ratio__658->SetBinContent(4,0.8445495);
   data_mc_ratio__658->SetBinContent(5,0.8831687);
   data_mc_ratio__658->SetBinContent(6,0.889359);
   data_mc_ratio__658->SetBinContent(7,0.8235372);
   data_mc_ratio__658->SetBinContent(8,0.9344035);
   data_mc_ratio__658->SetBinContent(9,0.9517523);
   data_mc_ratio__658->SetBinContent(10,0.9030349);
   data_mc_ratio__658->SetBinContent(11,0.6623476);
   data_mc_ratio__658->SetBinContent(12,0.4888441);
   data_mc_ratio__658->SetBinContent(13,1.248527);
   data_mc_ratio__658->SetBinContent(14,0.5333063);
   data_mc_ratio__658->SetBinContent(15,1.109845);
   data_mc_ratio__658->SetBinError(1,0.08682917);
   data_mc_ratio__658->SetBinError(2,0.05748351);
   data_mc_ratio__658->SetBinError(3,0.03790561);
   data_mc_ratio__658->SetBinError(4,0.03158436);
   data_mc_ratio__658->SetBinError(5,0.02857867);
   data_mc_ratio__658->SetBinError(6,0.02675445);
   data_mc_ratio__658->SetBinError(7,0.02670502);
   data_mc_ratio__658->SetBinError(8,0.03506754);
   data_mc_ratio__658->SetBinError(9,0.07016411);
   data_mc_ratio__658->SetBinError(10,0.1137717);
   data_mc_ratio__658->SetBinError(11,0.1324695);
   data_mc_ratio__658->SetBinError(12,0.1545861);
   data_mc_ratio__658->SetBinError(13,0.3764451);
   data_mc_ratio__658->SetBinError(14,0.2015708);
   data_mc_ratio__658->SetBinError(15,1.109845);
   data_mc_ratio__658->SetMinimum(0.4);
   data_mc_ratio__658->SetMaximum(1.6);
   data_mc_ratio__658->SetEntries(42.13197);
   data_mc_ratio__658->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__658->SetLineColor(ci);
   data_mc_ratio__658->SetLineWidth(2);
   data_mc_ratio__658->SetMarkerStyle(20);
   data_mc_ratio__658->SetMarkerSize(1.2);
   data_mc_ratio__658->GetXaxis()->SetTitle("min[#Delta R(Z,b)]");
   data_mc_ratio__658->GetXaxis()->SetRange(1,15);
   data_mc_ratio__658->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__658->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__658->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__658->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__658->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__658->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__658->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__658->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__658->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__658->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__658->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__658->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__658->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__658->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__658->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__658->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__658->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1658[25] = {
   0.2,
   0.6,
   1,
   1.4,
   1.8,
   2.2,
   2.6,
   3,
   3.4,
   3.8,
   4.2,
   4.6,
   5,
   5.4,
   5.8,
   6.2,
   6.6,
   7,
   7.4,
   7.8,
   8.2,
   8.6,
   9,
   9.4,
   9.8};
   Double_t Graph_from_mc_statistical_error_fy1658[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1658[25] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2};
   Double_t Graph_from_mc_statistical_error_fey1658[25] = {
   0.09397735,
   0.06115697,
   0.04157266,
   0.03384767,
   0.03178313,
   0.03000518,
   0.03240831,
   0.04261712,
   0.08793211,
   0.155811,
   0.2177969,
   0.3436035,
   0.6855705,
   0.3986451,
   1.106128,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1658,Graph_from_mc_statistical_error_fy1658,Graph_from_mc_statistical_error_fex1658,Graph_from_mc_statistical_error_fey1658);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1658 = new TH1F("Graph_Graph_from_mc_statistical_error1658","",100,0,11);
   Graph_Graph_from_mc_statistical_error1658->SetMinimum(-0.327354);
   Graph_Graph_from_mc_statistical_error1658->SetMaximum(2.327354);
   Graph_Graph_from_mc_statistical_error1658->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1658->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1658->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1658->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1658->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1658->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1658->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1658->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1658->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1658->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1658->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1658->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1658->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1658->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1658->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1658->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1658);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->Modified();
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo->SetSelected(dRmin_Z2b_Z_2bjet_Zmm_16_amcnlo);
}

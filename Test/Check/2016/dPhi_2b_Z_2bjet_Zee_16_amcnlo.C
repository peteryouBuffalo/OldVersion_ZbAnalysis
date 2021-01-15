void dPhi_2b_Z_2bjet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: dPhi_2b_Z_2bjet_Zee_16_amcnlo/dPhi_2b_Z_2bjet_Zee_16_amcnlo
//=========  (Thu Jan 14 10:42:51 2021) by ROOT version 6.14/09
   TCanvas *dPhi_2b_Z_2bjet_Zee_16_amcnlo = new TCanvas("dPhi_2b_Z_2bjet_Zee_16_amcnlo", "dPhi_2b_Z_2bjet_Zee_16_amcnlo",0,0,600,600);
   dPhi_2b_Z_2bjet_Zee_16_amcnlo->SetHighLightColor(2);
   dPhi_2b_Z_2bjet_Zee_16_amcnlo->Range(0,0,1,1);
   dPhi_2b_Z_2bjet_Zee_16_amcnlo->SetFillColor(0);
   dPhi_2b_Z_2bjet_Zee_16_amcnlo->SetFillStyle(4000);
   dPhi_2b_Z_2bjet_Zee_16_amcnlo->SetBorderMode(0);
   dPhi_2b_Z_2bjet_Zee_16_amcnlo->SetBorderSize(2);
   dPhi_2b_Z_2bjet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   dPhi_2b_Z_2bjet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4813718,-0.5227018,3.306273,532.1791);
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
   st->SetMaximum(456.1037);
   Double_t xAxis1[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1F *st_stack_225 = new TH1F("st_stack_225","",31, xAxis1);
   st_stack_225->SetMinimum(0.01);
   st_stack_225->SetMaximum(478.9089);
   st_stack_225->SetDirectory(0);
   st_stack_225->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_225->SetLineColor(ci);
   st_stack_225->GetXaxis()->SetRange(1,31);
   st_stack_225->GetXaxis()->SetLabelFont(42);
   st_stack_225->GetXaxis()->SetLabelSize(0.035);
   st_stack_225->GetXaxis()->SetTitleSize(0.035);
   st_stack_225->GetXaxis()->SetTitleFont(42);
   st_stack_225->GetYaxis()->SetTitle("Events/0.10000000149");
   st_stack_225->GetYaxis()->SetLabelFont(42);
   st_stack_225->GetYaxis()->SetLabelSize(0.05);
   st_stack_225->GetYaxis()->SetTitleSize(0.057);
   st_stack_225->GetYaxis()->SetTitleOffset(1.2);
   st_stack_225->GetYaxis()->SetTitleFont(42);
   st_stack_225->GetZaxis()->SetLabelFont(42);
   st_stack_225->GetZaxis()->SetLabelSize(0.035);
   st_stack_225->GetZaxis()->SetTitleSize(0.035);
   st_stack_225->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_225);
   
   Double_t xAxis2[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_dPhi_2b_stack_1 = new TH1D("Zee_2bjet_dPhi_2b_stack_1","",31, xAxis2);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(1,0.3676184);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(2,0.3734568);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(3,0.5382112);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(4,0.3567206);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(5,0.5775354);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(6,0.334147);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(7,0.5878261);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(8,0.7481437);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(9,0.1618635);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(10,0.1768742);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(11,0.5450845);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(12,0.1996706);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(13,0.307739);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(14,0.3427971);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(15,0.1651218);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(16,0.184818);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(17,0.8924927);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(18,0.3912325);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(19,0.8106904);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(20,0.7918312);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(21,0.7820242);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(22,0.7835152);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(24,0.712409);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(25,1.351607);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(26,0.7504567);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(27,0.7899588);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(28,0.6587582);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(29,0.6642885);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(30,0.5967182);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(31,2.293078);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(1,0.2543994);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(2,0.2643625);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(3,0.3111271);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(4,0.2527683);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(5,0.3345728);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(6,0.1993749);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(7,0.3093659);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(8,0.37432);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(9,0.1536049);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(10,0.1768742);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(11,0.3152533);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(12,0.1996706);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(13,0.2186982);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(14,0.2424172);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(15,0.1651218);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(16,0.184818);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(17,0.3998249);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(18,0.2766951);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(19,0.3687887);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(20,0.3653477);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(21,0.3918566);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(22,0.3651628);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(24,0.3569388);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(25,0.4995723);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(26,0.3755351);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(27,0.3632151);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(28,0.3323589);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(29,0.332991);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(30,0.3129942);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(31,0.6375374);
   Zee_2bjet_dPhi_2b_stack_1->SetEntries(109);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_dPhi_2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_2b_stack_1->SetLineColor(ci);
   Zee_2bjet_dPhi_2b_stack_1->GetXaxis()->SetRange(1,31);
   Zee_2bjet_dPhi_2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_2b_stack_1,"");
   Double_t xAxis3[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_dPhi_2b_stack_2 = new TH1D("Zee_2bjet_dPhi_2b_stack_2","",31, xAxis3);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(1,0.5142668);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(2,0.7843748);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(3,0.8453731);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(4,1.44922);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(5,1.664906);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(6,2.529815);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(7,0.8263293);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(8,1.507808);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(9,1.448685);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(10,1.680161);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(11,2.55841);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(12,0.8056222);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(13,2.174497);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(14,0.9933222);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(15,0.5455869);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(16,1.658247);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(17,1.408292);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(18,1.546519);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(19,1.469683);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(20,0.9369372);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(21,0.7855721);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(22,1.067613);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(23,1.574247);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(24,1.489473);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(25,1.607255);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(26,2.042187);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(27,3.155528);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(28,1.791461);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(29,0.8387843);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(30,0.5346328);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(31,1.337564);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(1,0.3636452);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(2,0.4537082);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(3,0.4583333);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(4,0.6485887);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(5,0.6869165);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(6,0.845197);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(7,0.4772741);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(8,0.6329646);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(9,0.6300305);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(10,0.6865064);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(11,0.8482052);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(12,0.4659347);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(13,0.7698173);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(14,0.5022709);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(15,0.3880978);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(16,0.6668814);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(17,0.6099025);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(18,0.63214);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(19,0.6284387);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(20,0.4862574);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(21,0.4547037);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(22,0.5344217);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(23,0.6451391);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(24,0.6141293);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(25,0.6571601);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(26,0.7249662);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(27,0.9129984);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(28,0.6800608);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(29,0.4742375);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(30,0.3803434);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(31,0.5992612);
   Zee_2bjet_dPhi_2b_stack_2->SetEntries(170);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dPhi_2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_2b_stack_2->SetLineColor(ci);
   Zee_2bjet_dPhi_2b_stack_2->GetXaxis()->SetRange(1,31);
   Zee_2bjet_dPhi_2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_2b_stack_2,"");
   Double_t xAxis4[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_dPhi_2b_stack_3 = new TH1D("Zee_2bjet_dPhi_2b_stack_3","",31, xAxis4);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(1,7.064631);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(2,9.366684);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(3,9.608768);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(4,9.883771);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(5,10.48146);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(6,13.77956);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(7,13.5146);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(8,16.74006);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(9,14.20101);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(10,13.96473);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(11,13.63377);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(12,16.14282);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(13,17.15301);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(14,17.31552);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(15,20.36178);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(16,23.49179);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(17,22.87025);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(18,27.57897);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(19,26.79398);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(20,27.66792);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(21,24.75156);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(22,28.76096);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(23,32.59752);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(24,37.12269);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(25,38.64074);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(26,38.26693);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(27,40.61497);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(28,40.5563);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(29,53.31678);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(30,45.70923);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(31,71.87091);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(1,1.107102);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(2,1.270029);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(3,1.302385);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(4,1.315193);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(5,1.334305);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(6,1.545863);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(7,1.539119);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(8,1.706788);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(9,1.586406);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(10,1.54625);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(11,1.533349);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(12,1.67787);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(13,1.722898);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(14,1.743736);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(15,1.885327);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(16,2.010857);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(17,2.004905);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(18,2.183702);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(19,2.1672);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(20,2.203198);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(21,2.086267);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(22,2.250517);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(23,2.398513);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(24,2.563742);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(25,2.606424);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(26,2.610346);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(27,2.675988);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(28,2.682177);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(29,3.066986);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(30,2.838124);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(31,3.583907);
   Zee_2bjet_dPhi_2b_stack_3->SetEntries(4701);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dPhi_2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_2b_stack_3->SetLineColor(ci);
   Zee_2bjet_dPhi_2b_stack_3->GetXaxis()->SetRange(1,31);
   Zee_2bjet_dPhi_2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_2b_stack_3,"");
   Double_t xAxis5[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_XX_dPhi_2b_stack_4 = new TH1D("Zee_2bjet_XX_dPhi_2b_stack_4","",31, xAxis5);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(1,0.4023746);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(4,0.01299028);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(5,1.309838);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(6,0.423685);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(7,1.371015);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(8,-0.6539082);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(9,0.5194663);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(10,0.4980503);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(12,-0.3216503);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(13,1.042103);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(15,1.325651);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(16,-0.5689269);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(17,0.630004);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(18,-0.8601188);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(19,0.329328);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(22,-0.4561232);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(23,0.4713868);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(24,0.01624367);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(25,1.173506);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(26,-1.066604);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(27,0.4020475);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(28,1.912966);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(29,0.3627327);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(30,-0.02961086);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(31,1.822979);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(1,0.4023746);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(4,0.6864578);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(5,0.7568171);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(6,0.7900764);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(7,0.7938132);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(8,0.6543097);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(9,0.4868788);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(10,0.4980503);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(12,0.3216503);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(13,0.6073446);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(15,0.9732724);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(16,0.7562428);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(17,0.630004);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(18,0.6088991);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(19,1.225855);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(22,0.4561232);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(23,0.4713868);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(24,0.6763276);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(25,0.8304632);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(26,0.7667336);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(27,0.4020475);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(28,1.473245);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(29,0.457323);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(30,0.9569219);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(31,0.9127621);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetEntries(60);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_dPhi_2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_dPhi_2b_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetRange(1,31);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_dPhi_2b_stack_4,"");
   Double_t xAxis6[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_bX_dPhi_2b_stack_5 = new TH1D("Zee_2bjet_bX_dPhi_2b_stack_5","",31, xAxis6);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(1,2.081795);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(2,-0.3217782);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(3,3.139879);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(4,0.7205437);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(5,1.111293);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(6,1.051501);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(7,-1.55722);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(8,1.404358);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(9,1.371669);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(10,0.02617013);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(11,1.234659);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(12,0.4876994);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(13,-0.4633378);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(14,0.8898255);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(15,-0.859071);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(16,0.3174957);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(17,1.293372);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(18,1.715155);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(19,2.89239);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(20,0.5236134);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(21,1.907579);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(22,2.783644);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(23,2.756442);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(24,2.265442);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(25,-0.9031682);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(26,0.2488653);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(27,3.462521);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(28,1.323673);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(29,-0.6100672);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(30,1.416543);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(31,5.851287);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(1,1.041436);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(2,1.631436);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(3,1.231121);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(4,0.7205437);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(5,1.725701);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(6,0.7344479);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(7,0.9125906);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(8,1.076412);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(9,0.7953245);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(10,0.6847794);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(11,1.107138);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(12,0.878682);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(13,1.202324);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(14,1.024833);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(15,1.070801);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(16,0.7642679);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(17,1.237011);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(18,1.178695);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(19,1.507602);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(20,0.4901434);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(21,1.330511);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(22,1.349249);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(23,1.517803);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(24,1.208887);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(25,1.479437);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(26,1.471932);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(27,1.838905);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(28,2.070358);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(29,1.259135);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(30,1.709669);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(31,2.224584);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetEntries(253);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_dPhi_2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_dPhi_2b_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetRange(1,31);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_dPhi_2b_stack_5,"");
   Double_t xAxis7[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_bb_dPhi_2b_stack_6 = new TH1D("Zee_2bjet_bb_dPhi_2b_stack_6","",31, xAxis7);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(1,45.76376);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(2,40.15983);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(3,48.41389);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(4,34.17633);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(5,47.83047);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(6,56.82814);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(7,59.0856);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(8,62.11834);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(9,36.46932);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(10,43.60236);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(11,41.04137);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(12,42.78259);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(13,48.7598);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(14,50.05701);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(15,47.10897);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(16,35.0741);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(17,52.88169);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(18,43.36012);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(19,61.66757);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(20,62.1327);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(21,73.31839);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(22,60.80555);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(23,54.15809);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(24,80.76226);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(25,72.13268);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(26,93.29448);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(27,91.91327);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(28,102.0259);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(29,107.2322);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(30,113.5076);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(31,167.6812);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(1,7.295751);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(2,7.27861);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(3,6.9257);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(4,7.486442);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(5,8.28647);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(6,7.999288);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(7,7.918816);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(8,7.817515);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(9,7.899047);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(10,8.258781);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(11,7.773203);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(12,7.911287);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(13,8.456292);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(14,7.798415);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(15,8.210329);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(16,8.213056);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(17,8.511071);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(18,8.532876);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(19,9.122204);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(20,9.149942);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(21,9.676795);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(22,9.664032);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(23,10.02785);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(24,10.91272);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(25,10.65935);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(26,11.70594);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(27,11.15692);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(28,11.79098);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(29,11.52668);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(30,11.8887);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(31,14.53805);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetEntries(13604);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_dPhi_2b_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_dPhi_2b_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetRange(1,31);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_dPhi_2b_stack_6,"");
   st->Draw("hist");
   Double_t xAxis8[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_dPhi_2b__449 = new TH1D("Zee_2bjet_dPhi_2b__449","",31, xAxis8);
   Zee_2bjet_dPhi_2b__449->SetBinContent(1,38);
   Zee_2bjet_dPhi_2b__449->SetBinContent(2,52);
   Zee_2bjet_dPhi_2b__449->SetBinContent(3,58);
   Zee_2bjet_dPhi_2b__449->SetBinContent(4,50);
   Zee_2bjet_dPhi_2b__449->SetBinContent(5,50);
   Zee_2bjet_dPhi_2b__449->SetBinContent(6,68);
   Zee_2bjet_dPhi_2b__449->SetBinContent(7,62);
   Zee_2bjet_dPhi_2b__449->SetBinContent(8,72);
   Zee_2bjet_dPhi_2b__449->SetBinContent(9,51);
   Zee_2bjet_dPhi_2b__449->SetBinContent(10,45);
   Zee_2bjet_dPhi_2b__449->SetBinContent(11,60);
   Zee_2bjet_dPhi_2b__449->SetBinContent(12,62);
   Zee_2bjet_dPhi_2b__449->SetBinContent(13,67);
   Zee_2bjet_dPhi_2b__449->SetBinContent(14,58);
   Zee_2bjet_dPhi_2b__449->SetBinContent(15,69);
   Zee_2bjet_dPhi_2b__449->SetBinContent(16,62);
   Zee_2bjet_dPhi_2b__449->SetBinContent(17,84);
   Zee_2bjet_dPhi_2b__449->SetBinContent(18,71);
   Zee_2bjet_dPhi_2b__449->SetBinContent(19,82);
   Zee_2bjet_dPhi_2b__449->SetBinContent(20,96);
   Zee_2bjet_dPhi_2b__449->SetBinContent(21,76);
   Zee_2bjet_dPhi_2b__449->SetBinContent(22,90);
   Zee_2bjet_dPhi_2b__449->SetBinContent(23,100);
   Zee_2bjet_dPhi_2b__449->SetBinContent(24,112);
   Zee_2bjet_dPhi_2b__449->SetBinContent(25,96);
   Zee_2bjet_dPhi_2b__449->SetBinContent(26,98);
   Zee_2bjet_dPhi_2b__449->SetBinContent(27,109);
   Zee_2bjet_dPhi_2b__449->SetBinContent(28,119);
   Zee_2bjet_dPhi_2b__449->SetBinContent(29,128);
   Zee_2bjet_dPhi_2b__449->SetBinContent(30,150);
   Zee_2bjet_dPhi_2b__449->SetBinContent(31,214);
   Zee_2bjet_dPhi_2b__449->SetBinError(1,6.164414);
   Zee_2bjet_dPhi_2b__449->SetBinError(2,7.211103);
   Zee_2bjet_dPhi_2b__449->SetBinError(3,7.615773);
   Zee_2bjet_dPhi_2b__449->SetBinError(4,7.071068);
   Zee_2bjet_dPhi_2b__449->SetBinError(5,7.071068);
   Zee_2bjet_dPhi_2b__449->SetBinError(6,8.246211);
   Zee_2bjet_dPhi_2b__449->SetBinError(7,7.874008);
   Zee_2bjet_dPhi_2b__449->SetBinError(8,8.485281);
   Zee_2bjet_dPhi_2b__449->SetBinError(9,7.141428);
   Zee_2bjet_dPhi_2b__449->SetBinError(10,6.708204);
   Zee_2bjet_dPhi_2b__449->SetBinError(11,7.745967);
   Zee_2bjet_dPhi_2b__449->SetBinError(12,7.874008);
   Zee_2bjet_dPhi_2b__449->SetBinError(13,8.185353);
   Zee_2bjet_dPhi_2b__449->SetBinError(14,7.615773);
   Zee_2bjet_dPhi_2b__449->SetBinError(15,8.306624);
   Zee_2bjet_dPhi_2b__449->SetBinError(16,7.874008);
   Zee_2bjet_dPhi_2b__449->SetBinError(17,9.165151);
   Zee_2bjet_dPhi_2b__449->SetBinError(18,8.42615);
   Zee_2bjet_dPhi_2b__449->SetBinError(19,9.055385);
   Zee_2bjet_dPhi_2b__449->SetBinError(20,9.797959);
   Zee_2bjet_dPhi_2b__449->SetBinError(21,8.717798);
   Zee_2bjet_dPhi_2b__449->SetBinError(22,9.486833);
   Zee_2bjet_dPhi_2b__449->SetBinError(23,10);
   Zee_2bjet_dPhi_2b__449->SetBinError(24,10.58301);
   Zee_2bjet_dPhi_2b__449->SetBinError(25,9.797959);
   Zee_2bjet_dPhi_2b__449->SetBinError(26,9.899495);
   Zee_2bjet_dPhi_2b__449->SetBinError(27,10.44031);
   Zee_2bjet_dPhi_2b__449->SetBinError(28,10.90871);
   Zee_2bjet_dPhi_2b__449->SetBinError(29,11.31371);
   Zee_2bjet_dPhi_2b__449->SetBinError(30,12.24745);
   Zee_2bjet_dPhi_2b__449->SetBinError(31,14.62874);
   Zee_2bjet_dPhi_2b__449->SetEntries(2549);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_2b__449->SetLineColor(ci);
   Zee_2bjet_dPhi_2b__449->SetLineWidth(2);
   Zee_2bjet_dPhi_2b__449->SetMarkerStyle(20);
   Zee_2bjet_dPhi_2b__449->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_2b__449->GetXaxis()->SetRange(1,31);
   Zee_2bjet_dPhi_2b__449->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b__449->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b__449->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b__449->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b__449->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b__449->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b__449->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b__449->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_2b__449->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b__449->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b__449->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b__449->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b__449->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b__449->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dPhi_2b_fx1449[31] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95,
   1.05,
   1.15,
   1.25,
   1.35,
   1.45,
   1.55,
   1.65,
   1.75,
   1.85,
   1.95,
   2.05,
   2.15,
   2.25,
   2.35,
   2.45,
   2.55,
   2.65,
   2.75,
   2.85,
   2.95,
   3.070796};
   Double_t Graph_from_Zee_2bjet_bb_dPhi_2b_fy1449[31] = {
   56.19445,
   50.36257,
   62.54613,
   46.59957,
   62.9755,
   74.94685,
   73.82815,
   81.8648,
   54.17202,
   59.94834,
   59.01329,
   60.09675,
   68.97381,
   69.59847,
   68.64804,
   60.15753,
   79.9761,
   73.73188,
   93.96364,
   92.053,
   101.5451,
   93.74516,
   91.55769,
   122.3685,
   114.0026,
   133.5363,
   140.3383,
   148.2691,
   161.8047,
   161.7351,
   250.857};
   Double_t Graph_from_Zee_2bjet_bb_dPhi_2b_fex1449[31] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05000001,
   0.04999998,
   0.05000001,
   0.04999998,
   0.05000001,
   0.05000001,
   0.05000001,
   0.04999995,
   0.05000001,
   0.05000001,
   0.05000001,
   0.05000001,
   0.04999995,
   0.05000001,
   0.05000001,
   0.04999995,
   0.05000007,
   0.04999995,
   0.05000007,
   0.04999995,
   0.04999995,
   0.05000007,
   0.04999995,
   0.05000007,
   0.04999995,
   0.07079637};
   Double_t Graph_from_Zee_2bjet_bb_dPhi_2b_fey1449[31] = {
   7.476437,
   7.584751,
   7.175239,
   7.6975,
   8.636004,
   8.264142,
   8.17698,
   8.133524,
   8.136445,
   8.474544,
   8.050989,
   8.156974,
   8.771098,
   8.075717,
   8.557787,
   8.551767,
   8.883519,
   8.933912,
   9.603015,
   9.443818,
   10.00617,
   10.04519,
   10.45241,
   11.3174,
   11.13441,
   12.13524,
   11.66818,
   12.37946,
   12.0167,
   12.3886,
   15.19035};
   TGraphErrors *gre = new TGraphErrors(31,Graph_from_Zee_2bjet_bb_dPhi_2b_fx1449,Graph_from_Zee_2bjet_bb_dPhi_2b_fy1449,Graph_from_Zee_2bjet_bb_dPhi_2b_fex1449,Graph_from_Zee_2bjet_bb_dPhi_2b_fey1449);
   gre->SetName("Graph_from_Zee_2bjet_bb_dPhi_2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449->SetMinimum(16.18754);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449->SetMaximum(288.7619);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1449);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dPhi_2b","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_dPhi_2b_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_dPhi_2b_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_dPhi_2b_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_dPhi_2b","MC unc. (stat.)","fl");

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
   dPhi_2b_Z_2bjet_Zee_16_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.4813718,-0.2774193,3.306273,1.658065);
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
   Double_t xAxis9[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *data_mc_ratio__450 = new TH1D("data_mc_ratio__450","",31, xAxis9);
   data_mc_ratio__450->SetBinContent(1,0.6762234);
   data_mc_ratio__450->SetBinContent(2,1.032513);
   data_mc_ratio__450->SetBinContent(3,0.9273156);
   data_mc_ratio__450->SetBinContent(4,1.072971);
   data_mc_ratio__450->SetBinContent(5,0.7939596);
   data_mc_ratio__450->SetBinContent(6,0.9073096);
   data_mc_ratio__450->SetBinContent(7,0.8397881);
   data_mc_ratio__450->SetBinContent(8,0.8794989);
   data_mc_ratio__450->SetBinContent(9,0.9414455);
   data_mc_ratio__450->SetBinContent(10,0.7506463);
   data_mc_ratio__450->SetBinContent(11,1.01672);
   data_mc_ratio__450->SetBinContent(12,1.03167);
   data_mc_ratio__450->SetBinContent(13,0.9713833);
   data_mc_ratio__450->SetBinContent(14,0.8333516);
   data_mc_ratio__450->SetBinContent(15,1.005127);
   data_mc_ratio__450->SetBinContent(16,1.030627);
   data_mc_ratio__450->SetBinContent(17,1.050314);
   data_mc_ratio__450->SetBinContent(18,0.9629485);
   data_mc_ratio__450->SetBinContent(19,0.872678);
   data_mc_ratio__450->SetBinContent(20,1.042877);
   data_mc_ratio__450->SetBinContent(21,0.7484358);
   data_mc_ratio__450->SetBinContent(22,0.9600496);
   data_mc_ratio__450->SetBinContent(23,1.092208);
   data_mc_ratio__450->SetBinContent(24,0.9152681);
   data_mc_ratio__450->SetBinContent(25,0.842086);
   data_mc_ratio__450->SetBinContent(26,0.7338827);
   data_mc_ratio__450->SetBinContent(27,0.7766946);
   data_mc_ratio__450->SetBinContent(28,0.8025948);
   data_mc_ratio__450->SetBinContent(29,0.7910773);
   data_mc_ratio__450->SetBinContent(30,0.9274423);
   data_mc_ratio__450->SetBinContent(31,0.8530755);
   data_mc_ratio__450->SetBinError(1,0.1096979);
   data_mc_ratio__450->SetBinError(2,0.1431838);
   data_mc_ratio__450->SetBinError(3,0.1217625);
   data_mc_ratio__450->SetBinError(4,0.151741);
   data_mc_ratio__450->SetBinError(5,0.1122828);
   data_mc_ratio__450->SetBinError(6,0.1100275);
   data_mc_ratio__450->SetBinError(7,0.1066532);
   data_mc_ratio__450->SetBinError(8,0.1036499);
   data_mc_ratio__450->SetBinError(9,0.1318287);
   data_mc_ratio__450->SetBinError(10,0.1118997);
   data_mc_ratio__450->SetBinError(11,0.131258);
   data_mc_ratio__450->SetBinError(12,0.1310222);
   data_mc_ratio__450->SetBinError(13,0.1186734);
   data_mc_ratio__450->SetBinError(14,0.1094244);
   data_mc_ratio__450->SetBinError(15,0.1210031);
   data_mc_ratio__450->SetBinError(16,0.1308898);
   data_mc_ratio__450->SetBinError(17,0.1145986);
   data_mc_ratio__450->SetBinError(18,0.114281);
   data_mc_ratio__450->SetBinError(19,0.09637116);
   data_mc_ratio__450->SetBinError(20,0.1064382);
   data_mc_ratio__450->SetBinError(21,0.08585147);
   data_mc_ratio__450->SetBinError(22,0.1011981);
   data_mc_ratio__450->SetBinError(23,0.1092208);
   data_mc_ratio__450->SetBinError(24,0.08648471);
   data_mc_ratio__450->SetBinError(25,0.08594504);
   data_mc_ratio__450->SetBinError(26,0.07413335);
   data_mc_ratio__450->SetBinError(27,0.07439385);
   data_mc_ratio__450->SetBinError(28,0.07357375);
   data_mc_ratio__450->SetBinError(29,0.06992201);
   data_mc_ratio__450->SetBinError(30,0.07572535);
   data_mc_ratio__450->SetBinError(31,0.05831504);
   data_mc_ratio__450->SetMinimum(0.4);
   data_mc_ratio__450->SetMaximum(1.6);
   data_mc_ratio__450->SetEntries(1091.559);
   data_mc_ratio__450->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__450->SetLineColor(ci);
   data_mc_ratio__450->SetLineWidth(2);
   data_mc_ratio__450->SetMarkerStyle(20);
   data_mc_ratio__450->SetMarkerSize(1.2);
   data_mc_ratio__450->GetXaxis()->SetTitle("dPhi_{bb}");
   data_mc_ratio__450->GetXaxis()->SetRange(1,31);
   data_mc_ratio__450->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__450->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__450->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__450->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__450->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__450->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__450->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__450->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__450->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__450->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__450->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__450->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__450->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__450->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__450->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__450->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__450->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1450[31] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95,
   1.05,
   1.15,
   1.25,
   1.35,
   1.45,
   1.55,
   1.65,
   1.75,
   1.85,
   1.95,
   2.05,
   2.15,
   2.25,
   2.35,
   2.45,
   2.55,
   2.65,
   2.75,
   2.85,
   2.95,
   3.070796};
   Double_t Graph_from_mc_statistical_error_fy1450[31] = {
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
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1450[31] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05000001,
   0.04999998,
   0.05000001,
   0.04999998,
   0.05000001,
   0.05000001,
   0.05000001,
   0.04999995,
   0.05000001,
   0.05000001,
   0.05000001,
   0.05000001,
   0.04999995,
   0.05000001,
   0.05000001,
   0.04999995,
   0.05000007,
   0.04999995,
   0.05000007,
   0.04999995,
   0.04999995,
   0.05000007,
   0.04999995,
   0.05000007,
   0.04999995,
   0.07079637};
   Double_t Graph_from_mc_statistical_error_fey1450[31] = {
   0.1330458,
   0.150603,
   0.1147192,
   0.1651839,
   0.1371328,
   0.1102667,
   0.1107569,
   0.09935313,
   0.1501965,
   0.1413641,
   0.1364267,
   0.1357307,
   0.1271656,
   0.116033,
   0.1246618,
   0.1421562,
   0.1110772,
   0.1211676,
   0.1021993,
   0.1025911,
   0.09853915,
   0.1071542,
   0.114162,
   0.09248621,
   0.09766802,
   0.09087592,
   0.08314322,
   0.08349321,
   0.07426671,
   0.07659809,
   0.0605538};
   gre = new TGraphErrors(31,Graph_from_mc_statistical_error_fx1450,Graph_from_mc_statistical_error_fy1450,Graph_from_mc_statistical_error_fex1450,Graph_from_mc_statistical_error_fey1450);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1450 = new TH1F("Graph_Graph_from_mc_statistical_error1450","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1450->SetMinimum(0.8017793);
   Graph_Graph_from_mc_statistical_error1450->SetMaximum(1.198221);
   Graph_Graph_from_mc_statistical_error1450->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1450->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1450->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1450->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1450->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1450->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1450->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1450->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1450->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1450->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1450->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1450->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1450->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1450->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1450->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1450->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1450);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.141593,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_2b_Z_2bjet_Zee_16_amcnlo->cd();
   dPhi_2b_Z_2bjet_Zee_16_amcnlo->Modified();
   dPhi_2b_Z_2bjet_Zee_16_amcnlo->cd();
   dPhi_2b_Z_2bjet_Zee_16_amcnlo->SetSelected(dPhi_2b_Z_2bjet_Zee_16_amcnlo);
}

void dRmin_Z2b_Z_2bjet_Zee_All_amcnlo()
{
//=========Macro generated from canvas: dRmin_Z2b_Z_2bjet_Zee_All_amcnlo/dRmin_Z2b_Z_2bjet_Zee_All_amcnlo
//=========  (Thu Jan 14 10:42:53 2021) by ROOT version 6.14/09
   TCanvas *dRmin_Z2b_Z_2bjet_Zee_All_amcnlo = new TCanvas("dRmin_Z2b_Z_2bjet_Zee_All_amcnlo", "dRmin_Z2b_Z_2bjet_Zee_All_amcnlo",0,0,600,600);
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->SetHighLightColor(2);
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->Range(0,0,1,1);
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->SetFillColor(0);
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->SetFillStyle(4000);
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->SetBorderMode(0);
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->SetBorderSize(2);
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->SetFrameFillStyle(1000);
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-5.22416,6.314516,5228.936);
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
   st->SetMaximum(4481.447);
   
   TH1F *st_stack_244 = new TH1F("st_stack_244","",25,0,10);
   st_stack_244->SetMinimum(0.01);
   st_stack_244->SetMaximum(4705.52);
   st_stack_244->SetDirectory(0);
   st_stack_244->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_244->SetLineColor(ci);
   st_stack_244->GetXaxis()->SetRange(1,15);
   st_stack_244->GetXaxis()->SetLabelFont(42);
   st_stack_244->GetXaxis()->SetLabelSize(0.035);
   st_stack_244->GetXaxis()->SetTitleSize(0.035);
   st_stack_244->GetXaxis()->SetTitleFont(42);
   st_stack_244->GetYaxis()->SetTitle("Events/0.4");
   st_stack_244->GetYaxis()->SetLabelFont(42);
   st_stack_244->GetYaxis()->SetLabelSize(0.05);
   st_stack_244->GetYaxis()->SetTitleSize(0.057);
   st_stack_244->GetYaxis()->SetTitleOffset(1.2);
   st_stack_244->GetYaxis()->SetTitleFont(42);
   st_stack_244->GetZaxis()->SetLabelFont(42);
   st_stack_244->GetZaxis()->SetLabelSize(0.035);
   st_stack_244->GetZaxis()->SetTitleSize(0.035);
   st_stack_244->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_244);
   
   
   TH1D *Zee_2bjet_dRmin_Z2b_all_stack_1 = new TH1D("Zee_2bjet_dRmin_Z2b_all_stack_1","",25,0,10);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(1,1.436518);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(2,5.132248);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(3,6.982304);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(4,11.70339);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(5,15.34797);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(6,20.11392);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(7,15.64983);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(8,8.48609);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(9,1.019408);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(10,0.939796);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(11,1.31408);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(1,0.5040089);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(2,1.111433);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(3,1.194942);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(4,1.607502);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(5,1.819193);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(6,2.164347);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(7,1.915514);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(8,1.307043);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(9,0.4670009);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(10,0.4597439);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetBinError(11,0.6551922);
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetEntries(475);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_all_stack_1->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_all_stack_1,"");
   
   TH1D *Zee_2bjet_dRmin_Z2b_all_stack_2 = new TH1D("Zee_2bjet_dRmin_Z2b_all_stack_2","",25,0,10);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(1,0.5221991);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(2,4.079272);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(3,12.11993);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(4,17.7531);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(5,36.41465);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(6,43.00528);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(7,46.6959);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(8,29.66474);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(9,7.542162);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(10,3.359656);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(11,2.365338);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(12,1.335586);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(13,0.3861215);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(14,0.7367634);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(16,0.2981495);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(1,0.3721473);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(2,1.238763);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(3,2.186728);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(4,2.668075);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(5,3.779208);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(6,4.179352);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(7,4.213542);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(8,3.356205);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(9,1.680122);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(10,1.1942);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(11,0.9430355);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(12,0.8271747);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(13,0.274665);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(14,0.7367634);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetBinError(16,0.2981495);
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetEntries(618);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_all_stack_2->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_all_stack_2,"");
   
   TH1D *Zee_2bjet_dRmin_Z2b_all_stack_3 = new TH1D("Zee_2bjet_dRmin_Z2b_all_stack_3","",25,0,10);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(1,66.8358);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(2,205.5766);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(3,390.5423);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(4,654.161);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(5,832.5669);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(6,766.9226);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(7,520.7178);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(8,224.4888);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(9,33.12902);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(10,7.276279);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(11,4.428187);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(12,0.8090927);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(13,0.6736445);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(15,0.3711352);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(1,3.471581);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(2,6.099279);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(3,8.33206);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(4,10.85168);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(5,12.21972);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(6,11.745);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(7,9.648919);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(8,6.272467);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(9,2.377614);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(10,0.9625211);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(11,0.8852379);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(12,0.2755065);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(13,0.2957421);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetBinError(15,0.3711352);
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetEntries(32755);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_all_stack_3->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_all_stack_3,"");
   
   TH1D *Zee_2bjet_XX_dRmin_Z2b_all_stack_4 = new TH1D("Zee_2bjet_XX_dRmin_Z2b_all_stack_4","",25,0,10);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(1,4.555869);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(2,3.439014);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(3,4.453372);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(4,6.073599);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(5,0.5529503);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(6,5.590257);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(7,17.25812);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(8,2.143968);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(9,1.754176);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(10,9.191003);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(11,-0.3793854);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(12,1.385482);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(13,-1.048094);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(14,0.42812);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(1,3.686992);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(2,1.813043);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(3,3.402571);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(4,3.848524);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(5,2.719154);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(6,4.405013);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(7,7.349026);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(8,2.497533);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(9,2.081192);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(10,10.16999);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(11,0.9423719);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(12,0.9865928);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(13,0.7586512);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(14,0.42812);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetEntries(129);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dRmin_Z2b_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_dRmin_Z2b_all_stack_4,"");
   
   TH1D *Zee_2bjet_bX_dRmin_Z2b_all_stack_5 = new TH1D("Zee_2bjet_bX_dRmin_Z2b_all_stack_5","",25,0,10);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(1,0.09488994);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(2,4.374724);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(3,10.60774);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(4,11.9498);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(5,21.31132);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(6,35.45147);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(7,24.95297);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(8,12.34785);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(9,5.894334);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(10,4.985942);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(11,3.156917);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(12,0.3971258);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(13,-0.01514873);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(14,0.6406656);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(1,1.437139);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(2,4.041454);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(3,4.922719);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(4,6.985112);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(5,7.692447);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(6,9.306575);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(7,9.339723);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(8,8.230338);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(9,4.332878);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(10,2.798473);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(11,1.596404);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(12,2.408975);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(13,2.289023);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(14,0.6406656);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetEntries(615);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dRmin_Z2b_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_dRmin_Z2b_all_stack_5,"");
   
   TH1D *Zee_2bjet_bb_dRmin_Z2b_all_stack_6 = new TH1D("Zee_2bjet_bb_dRmin_Z2b_all_stack_6","",25,0,10);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(1,126.1959);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(2,317.3082);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(3,682.1939);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(4,847.5802);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(5,1416.592);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(6,1593.713);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(7,1639.917);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(8,1254.574);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(9,231.4484);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(10,115.6774);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(11,34.68293);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(12,15.32749);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(13,15.28537);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(14,0.5145616);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(15,3.609891);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(16,0.4046011);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(17,-0.4124116);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(18,-0.4780949);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(19,-0.08162539);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(1,16.07951);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(2,28.18873);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(3,37.42013);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(4,47.00958);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(5,56.30506);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(6,63.92107);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(7,63.69815);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(8,56.40904);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(9,27.17379);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(10,16.66947);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(11,9.455578);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(12,6.627088);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(13,4.67452);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(14,3.194496);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(15,2.376004);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(16,0.4046011);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(17,0.4124116);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(18,0.4780949);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(19,0.08162539);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetEntries(34449);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dRmin_Z2b_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_dRmin_Z2b_all_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dRmin_Z2b_all__487 = new TH1D("Zee_2bjet_dRmin_Z2b_all__487","",25,0,10);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(1,158);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(2,516);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(3,859);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(4,1366);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(5,1849);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(6,2137);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(7,1899);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(8,1337);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(9,340);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(10,122);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(11,54);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(12,26);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(13,18);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(14,4);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(15,2);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(16,1);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinContent(18,1);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(1,12.56981);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(2,22.71563);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(3,29.3087);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(4,36.95944);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(5,43);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(6,46.2277);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(7,43.57752);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(8,36.56501);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(9,18.43909);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(10,11.04536);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(11,7.348469);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(12,5.09902);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(13,4.242641);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(14,2);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(15,1.414214);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(16,1);
   Zee_2bjet_dRmin_Z2b_all__487->SetBinError(18,1);
   Zee_2bjet_dRmin_Z2b_all__487->SetEntries(10689);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_all__487->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_all__487->SetLineWidth(2);
   Zee_2bjet_dRmin_Z2b_all__487->SetMarkerStyle(20);
   Zee_2bjet_dRmin_Z2b_all__487->SetMarkerSize(1.2);
   Zee_2bjet_dRmin_Z2b_all__487->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_all__487->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all__487->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all__487->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all__487->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all__487->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all__487->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all__487->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all__487->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_all__487->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all__487->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_all__487->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_all__487->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_all__487->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_all__487->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dRmin_Z2b_all_fx1487[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dRmin_Z2b_all_fy1487[25] = {
   199.6411,
   539.9101,
   1106.9,
   1549.221,
   2322.786,
   2464.796,
   2265.192,
   1531.706,
   280.7875,
   141.4301,
   45.56806,
   19.25478,
   15.2819,
   2.320111,
   3.981026,
   0.7027507,
   -0.4124116,
   -0.4780949,
   -0.08162539,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zee_2bjet_bb_dRmin_Z2b_all_fex1487[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dRmin_Z2b_all_fey1487[25] = {
   16.93087,
   29.22663,
   38.88071,
   48.99964,
   58.34159,
   65.96982,
   65.6751,
   57.51758,
   27.75273,
   19.79129,
   9.744063,
   7.17321,
   5.275341,
   3.367695,
   2.404815,
   0.5025885,
   0.4124116,
   0.4780949,
   0.08162539,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_bb_dRmin_Z2b_all_fx1487,Graph_from_Zee_2bjet_bb_dRmin_Z2b_all_fy1487,Graph_from_Zee_2bjet_bb_dRmin_Z2b_all_fex1487,Graph_from_Zee_2bjet_bb_dRmin_Z2b_all_fey1487);
   gre->SetName("Graph_from_Zee_2bjet_bb_dRmin_Z2b_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487","",100,0,11);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487->SetMinimum(-254.2289);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487->SetMaximum(2783.947);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b_all1487);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_all","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_dRmin_Z2b_all_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_dRmin_Z2b_all_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_dRmin_Z2b_all_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_dRmin_Z2b_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 137.1 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__488 = new TH1D("data_mc_ratio__488","",25,0,10);
   data_mc_ratio__488->SetBinContent(1,0.7914201);
   data_mc_ratio__488->SetBinContent(2,0.9557147);
   data_mc_ratio__488->SetBinContent(3,0.7760415);
   data_mc_ratio__488->SetBinContent(4,0.8817334);
   data_mc_ratio__488->SetBinContent(5,0.7960269);
   data_mc_ratio__488->SetBinContent(6,0.8670088);
   data_mc_ratio__488->SetBinContent(7,0.8383395);
   data_mc_ratio__488->SetBinContent(8,0.872883);
   data_mc_ratio__488->SetBinContent(9,1.21088);
   data_mc_ratio__488->SetBinContent(10,0.8626172);
   data_mc_ratio__488->SetBinContent(11,1.18504);
   data_mc_ratio__488->SetBinContent(12,1.350314);
   data_mc_ratio__488->SetBinContent(13,1.177864);
   data_mc_ratio__488->SetBinContent(14,1.724056);
   data_mc_ratio__488->SetBinContent(15,0.5023831);
   data_mc_ratio__488->SetBinContent(16,1.42298);
   data_mc_ratio__488->SetBinContent(18,-2.091635);
   data_mc_ratio__488->SetBinError(1,0.062962);
   data_mc_ratio__488->SetBinError(2,0.04207299);
   data_mc_ratio__488->SetBinError(3,0.0264782);
   data_mc_ratio__488->SetBinError(4,0.02385679);
   data_mc_ratio__488->SetBinError(5,0.01851225);
   data_mc_ratio__488->SetBinError(6,0.01875518);
   data_mc_ratio__488->SetBinError(7,0.01923789);
   data_mc_ratio__488->SetBinError(8,0.02387209);
   data_mc_ratio__488->SetBinError(9,0.06566919);
   data_mc_ratio__488->SetBinError(10,0.07809769);
   data_mc_ratio__488->SetBinError(11,0.1612636);
   data_mc_ratio__488->SetBinError(12,0.2648183);
   data_mc_ratio__488->SetBinError(13,0.2776253);
   data_mc_ratio__488->SetBinError(14,0.8620279);
   data_mc_ratio__488->SetBinError(15,0.3552385);
   data_mc_ratio__488->SetBinError(16,1.42298);
   data_mc_ratio__488->SetBinError(18,2.091635);
   data_mc_ratio__488->SetMinimum(0.4);
   data_mc_ratio__488->SetMaximum(1.6);
   data_mc_ratio__488->SetEntries(10.10046);
   data_mc_ratio__488->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__488->SetLineColor(ci);
   data_mc_ratio__488->SetLineWidth(2);
   data_mc_ratio__488->SetMarkerStyle(20);
   data_mc_ratio__488->SetMarkerSize(1.2);
   data_mc_ratio__488->GetXaxis()->SetTitle("min[#Delta R(Z,b)]");
   data_mc_ratio__488->GetXaxis()->SetRange(1,15);
   data_mc_ratio__488->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__488->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__488->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__488->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__488->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__488->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__488->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__488->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__488->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__488->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__488->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__488->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__488->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__488->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__488->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__488->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__488->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1488[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1488[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1488[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1488[25] = {
   0.08480652,
   0.0541324,
   0.03512579,
   0.03162857,
   0.02511708,
   0.02676482,
   0.02899317,
   0.03755133,
   0.0988389,
   0.1399369,
   0.2138354,
   0.3725418,
   0.3452019,
   1.451523,
   0.6040692,
   0.7151733,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1488,Graph_from_mc_statistical_error_fy1488,Graph_from_mc_statistical_error_fex1488,Graph_from_mc_statistical_error_fey1488);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1488 = new TH1F("Graph_Graph_from_mc_statistical_error1488","",100,0,11);
   Graph_Graph_from_mc_statistical_error1488->SetMinimum(-0.741828);
   Graph_Graph_from_mc_statistical_error1488->SetMaximum(2.741828);
   Graph_Graph_from_mc_statistical_error1488->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1488->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1488->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1488->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1488->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1488);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->Modified();
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zee_All_amcnlo->SetSelected(dRmin_Z2b_Z_2bjet_Zee_All_amcnlo);
}

void dRmin_Z2b_Z_2bjet_Zee_18_amcnlo()
{
//=========Macro generated from canvas: dRmin_Z2b_Z_2bjet_Zee_18_amcnlo/dRmin_Z2b_Z_2bjet_Zee_18_amcnlo
//=========  (Thu Jan 14 10:42:53 2021) by ROOT version 6.14/09
   TCanvas *dRmin_Z2b_Z_2bjet_Zee_18_amcnlo = new TCanvas("dRmin_Z2b_Z_2bjet_Zee_18_amcnlo", "dRmin_Z2b_Z_2bjet_Zee_18_amcnlo",0,0,600,600);
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->SetHighLightColor(2);
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->Range(0,0,1,1);
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->SetFillColor(0);
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->SetFillStyle(4000);
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->SetBorderMode(0);
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->SetBorderSize(2);
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->SetFrameFillStyle(1000);
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.512045,6.314516,2519.533);
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
   st->SetMaximum(2159.361);
   
   TH1F *st_stack_243 = new TH1F("st_stack_243","",25,0,10);
   st_stack_243->SetMinimum(0.01);
   st_stack_243->SetMaximum(2267.329);
   st_stack_243->SetDirectory(0);
   st_stack_243->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_243->SetLineColor(ci);
   st_stack_243->GetXaxis()->SetRange(1,15);
   st_stack_243->GetXaxis()->SetLabelFont(42);
   st_stack_243->GetXaxis()->SetLabelSize(0.035);
   st_stack_243->GetXaxis()->SetTitleSize(0.035);
   st_stack_243->GetXaxis()->SetTitleFont(42);
   st_stack_243->GetYaxis()->SetTitle("Events/0.4");
   st_stack_243->GetYaxis()->SetLabelFont(42);
   st_stack_243->GetYaxis()->SetLabelSize(0.05);
   st_stack_243->GetYaxis()->SetTitleSize(0.057);
   st_stack_243->GetYaxis()->SetTitleOffset(1.2);
   st_stack_243->GetYaxis()->SetTitleFont(42);
   st_stack_243->GetZaxis()->SetLabelFont(42);
   st_stack_243->GetZaxis()->SetLabelSize(0.035);
   st_stack_243->GetZaxis()->SetTitleSize(0.035);
   st_stack_243->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_243);
   
   
   TH1D *Zee_2bjet_dRmin_Z2b_stack_1 = new TH1D("Zee_2bjet_dRmin_Z2b_stack_1","",25,0,10);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(1,0.2366392);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(2,2.884676);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(3,2.63275);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(4,6.329769);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(5,9.531414);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(6,11.74369);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(7,9.079572);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(8,3.613428);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(9,0.6722996);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(10,0.3348533);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(11,1.089582);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(1,0.2180375);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(2,0.9135216);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(3,0.8350295);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(4,1.294859);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(5,1.522431);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(6,1.809522);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(7,1.592609);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(8,0.9167801);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(9,0.4122156);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(10,0.3348533);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(11,0.6358704);
   Zee_2bjet_dRmin_Z2b_stack_1->SetEntries(215);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_dRmin_Z2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_stack_1->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_stack_1,"");
   
   TH1D *Zee_2bjet_dRmin_Z2b_stack_2 = new TH1D("Zee_2bjet_dRmin_Z2b_stack_2","",25,0,10);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(2,2.003118);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(3,6.328523);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(4,7.772016);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(5,17.41673);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(6,23.52415);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(7,19.88619);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(8,11.7708);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(9,3.160051);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(10,2.606063);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(11,1.546606);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(12,1.080642);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(14,0.7367634);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(2,0.9568855);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(3,1.776474);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(4,2.071503);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(5,2.932465);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(6,3.427836);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(7,3.124511);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(8,2.445484);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(9,1.240121);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(10,1.111665);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(11,0.8129768);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(12,0.7869062);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(14,0.7367634);
   Zee_2bjet_dRmin_Z2b_stack_2->SetEntries(218);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dRmin_Z2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_stack_2->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_stack_2,"");
   
   TH1D *Zee_2bjet_dRmin_Z2b_stack_3 = new TH1D("Zee_2bjet_dRmin_Z2b_stack_3","",25,0,10);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(1,30.81315);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(2,99.29184);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(3,196.7719);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(4,315.5774);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(5,405.8575);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(6,371.7986);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(7,259.7802);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(8,118.4388);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(9,16.79);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(10,4.434886);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(11,2.319956);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(12,0.6406982);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(13,0.3237481);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(1,1.59197);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(2,2.836996);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(3,4.00274);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(4,5.111543);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(5,5.814253);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(6,5.575466);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(7,4.673149);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(8,3.179941);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(9,1.217823);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(10,0.6154638);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(11,0.4469209);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(12,0.218053);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(13,0.1620138);
   Zee_2bjet_dRmin_Z2b_stack_3->SetEntries(24408);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dRmin_Z2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_stack_3->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_stack_3,"");
   
   TH1D *Zee_2bjet_XX_dRmin_Z2b_stack_4 = new TH1D("Zee_2bjet_XX_dRmin_Z2b_stack_4","",25,0,10);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(1,4.555869);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(2,1.41667);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(3,4.135319);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(4,6.198982);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(5,2.889851);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(6,2.115268);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(7,12.17935);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(8,0.4770563);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(9,-1.217016);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(10,10.1076);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(1,3.686992);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(2,1.41667);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(3,3.08628);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(4,3.531004);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(5,1.675237);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(6,3.790649);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(7,6.956486);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(8,2.010483);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(9,1.217016);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(10,10.1076);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetEntries(40);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_dRmin_Z2b_stack_4,"");
   
   TH1D *Zee_2bjet_bX_dRmin_Z2b_stack_5 = new TH1D("Zee_2bjet_bX_dRmin_Z2b_stack_5","",25,0,10);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(1,0.6960449);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(2,2.899561);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(3,0.7670511);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(4,4.034594);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(5,11.91934);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(6,24.60042);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(7,15.81652);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(8,7.19661);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(9,-0.2046773);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(10,0.4070502);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(11,1.653547);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(12,-2.063197);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(13,0.3117333);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(1,1.15956);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(2,2.931729);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(3,3.659323);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(4,5.786708);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(5,6.538088);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(6,7.887681);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(7,8.064779);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(8,6.869067);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(9,3.335976);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(10,1.985428);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(11,1.381216);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(12,2.063197);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(13,2.043345);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetEntries(197);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_dRmin_Z2b_stack_5,"");
   
   TH1D *Zee_2bjet_bb_dRmin_Z2b_stack_6 = new TH1D("Zee_2bjet_bb_dRmin_Z2b_stack_6","",25,0,10);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(1,60.95069);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(2,148.7004);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(3,319.1295);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(4,383.2583);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(5,694.1417);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(6,753.8662);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(7,772.4757);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(8,620.7622);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(9,84.18024);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(10,62.96944);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(11,12.37048);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(12,10.71134);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(13,7.810935);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(14,-2.611803);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(1,12.70972);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(2,22.2687);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(3,29.09194);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(4,36.5845);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(5,44.04778);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(6,50.00626);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(7,50.09721);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(8,45.06588);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(9,21.68948);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(10,13.70559);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(11,7.573428);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(12,5.01838);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(13,3.587319);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(14,2.820647);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetEntries(11144);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_dRmin_Z2b_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dRmin_Z2b__485 = new TH1D("Zee_2bjet_dRmin_Z2b__485","",25,0,10);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(1,71);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(2,248);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(3,391);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(4,631);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(5,856);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(6,1013);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(7,910);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(8,661);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(9,173);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(10,59);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(11,23);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(12,17);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(13,11);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(14,2);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(15,2);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(16,1);
   Zee_2bjet_dRmin_Z2b__485->SetBinContent(18,1);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(1,8.42615);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(2,15.74802);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(3,19.77372);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(4,25.11971);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(5,29.25748);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(6,31.82766);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(7,30.16621);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(8,25.70992);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(9,13.15295);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(10,7.681146);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(11,4.795832);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(12,4.123106);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(13,3.316625);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(14,1.414214);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(15,1.414214);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(16,1);
   Zee_2bjet_dRmin_Z2b__485->SetBinError(18,1);
   Zee_2bjet_dRmin_Z2b__485->SetEntries(5070);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b__485->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b__485->SetLineWidth(2);
   Zee_2bjet_dRmin_Z2b__485->SetMarkerStyle(20);
   Zee_2bjet_dRmin_Z2b__485->SetMarkerSize(1.2);
   Zee_2bjet_dRmin_Z2b__485->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b__485->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b__485->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b__485->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b__485->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b__485->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b__485->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b__485->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b__485->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b__485->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b__485->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b__485->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b__485->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b__485->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b__485->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dRmin_Z2b_fx1485[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dRmin_Z2b_fy1485[25] = {
   97.25239,
   257.1963,
   529.765,
   723.1711,
   1141.757,
   1187.648,
   1089.217,
   762.2589,
   103.3809,
   80.85989,
   18.98017,
   10.36948,
   8.446416,
   -1.875039,
   0,
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
   Double_t Graph_from_Zee_2bjet_bb_dRmin_Z2b_fex1485[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dRmin_Z2b_fey1485[25] = {
   13.38124,
   22.72214,
   29.81831,
   37.63609,
   45.06088,
   51.21837,
   51.54901,
   45.81586,
   22.05073,
   17.19522,
   7.780075,
   5.487047,
   4.13163,
   2.915282,
   0,
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
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_bb_dRmin_Z2b_fx1485,Graph_from_Zee_2bjet_bb_dRmin_Z2b_fy1485,Graph_from_Zee_2bjet_bb_dRmin_Z2b_fex1485,Graph_from_Zee_2bjet_bb_dRmin_Z2b_fey1485);
   gre->SetName("Graph_from_Zee_2bjet_bb_dRmin_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485","",100,0,11);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485->SetMinimum(-129.156);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485->SetMaximum(1363.232);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1485);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_dRmin_Z2b_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_dRmin_Z2b_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_dRmin_Z2b_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_dRmin_Z2b","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__486 = new TH1D("data_mc_ratio__486","",25,0,10);
   data_mc_ratio__486->SetBinContent(1,0.7300592);
   data_mc_ratio__486->SetBinContent(2,0.9642441);
   data_mc_ratio__486->SetBinContent(3,0.7380631);
   data_mc_ratio__486->SetBinContent(4,0.872546);
   data_mc_ratio__486->SetBinContent(5,0.749722);
   data_mc_ratio__486->SetBinContent(6,0.8529461);
   data_mc_ratio__486->SetBinContent(7,0.8354622);
   data_mc_ratio__486->SetBinContent(8,0.8671595);
   data_mc_ratio__486->SetBinContent(9,1.673423);
   data_mc_ratio__486->SetBinContent(10,0.7296572);
   data_mc_ratio__486->SetBinContent(11,1.211791);
   data_mc_ratio__486->SetBinContent(12,1.639427);
   data_mc_ratio__486->SetBinContent(13,1.302328);
   data_mc_ratio__486->SetBinContent(14,-1.066644);
   data_mc_ratio__486->SetBinError(1,0.08664208);
   data_mc_ratio__486->SetBinError(2,0.06122956);
   data_mc_ratio__486->SetBinError(3,0.03732546);
   data_mc_ratio__486->SetBinError(4,0.03473551);
   data_mc_ratio__486->SetBinError(5,0.02562497);
   data_mc_ratio__486->SetBinError(6,0.02679889);
   data_mc_ratio__486->SetBinError(7,0.0276953);
   data_mc_ratio__486->SetBinError(8,0.03372859);
   data_mc_ratio__486->SetBinError(9,0.127228);
   data_mc_ratio__486->SetBinError(10,0.09499327);
   data_mc_ratio__486->SetBinError(11,0.2526759);
   data_mc_ratio__486->SetBinError(12,0.3976194);
   data_mc_ratio__486->SetBinError(13,0.3926665);
   data_mc_ratio__486->SetBinError(14,0.7542314);
   data_mc_ratio__486->SetMinimum(0.4);
   data_mc_ratio__486->SetMaximum(1.6);
   data_mc_ratio__486->SetEntries(27.51174);
   data_mc_ratio__486->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__486->SetLineColor(ci);
   data_mc_ratio__486->SetLineWidth(2);
   data_mc_ratio__486->SetMarkerStyle(20);
   data_mc_ratio__486->SetMarkerSize(1.2);
   data_mc_ratio__486->GetXaxis()->SetTitle("min[#Delta R(Z,b)]");
   data_mc_ratio__486->GetXaxis()->SetRange(1,15);
   data_mc_ratio__486->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__486->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__486->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__486->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__486->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__486->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__486->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__486->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__486->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__486->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__486->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__486->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__486->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__486->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__486->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__486->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__486->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1486[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1486[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1486[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1486[25] = {
   0.1375929,
   0.08834554,
   0.05628592,
   0.05204313,
   0.03946627,
   0.04312587,
   0.04732665,
   0.06010538,
   0.2132959,
   0.2126545,
   0.4099055,
   0.5291536,
   0.4891577,
   0,
   0,
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
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1486,Graph_from_mc_statistical_error_fy1486,Graph_from_mc_statistical_error_fex1486,Graph_from_mc_statistical_error_fey1486);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1486 = new TH1F("Graph_Graph_from_mc_statistical_error1486","",100,0,11);
   Graph_Graph_from_mc_statistical_error1486->SetMinimum(0.3650156);
   Graph_Graph_from_mc_statistical_error1486->SetMaximum(1.634984);
   Graph_Graph_from_mc_statistical_error1486->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1486->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1486->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1486->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1486->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1486);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->Modified();
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zee_18_amcnlo->SetSelected(dRmin_Z2b_Z_2bjet_Zee_18_amcnlo);
}

void dR_2b_Z_2bjet_Zmm_17_amcnlo()
{
//=========Macro generated from canvas: dR_2b_Z_2bjet_Zmm_17_amcnlo/dR_2b_Z_2bjet_Zmm_17_amcnlo
//=========  (Thu Jan 14 10:43:05 2021) by ROOT version 6.14/09
   TCanvas *dR_2b_Z_2bjet_Zmm_17_amcnlo = new TCanvas("dR_2b_Z_2bjet_Zmm_17_amcnlo", "dR_2b_Z_2bjet_Zmm_17_amcnlo",0,0,600,600);
   dR_2b_Z_2bjet_Zmm_17_amcnlo->SetHighLightColor(2);
   dR_2b_Z_2bjet_Zmm_17_amcnlo->Range(0,0,1,1);
   dR_2b_Z_2bjet_Zmm_17_amcnlo->SetFillColor(0);
   dR_2b_Z_2bjet_Zmm_17_amcnlo->SetFillStyle(4000);
   dR_2b_Z_2bjet_Zmm_17_amcnlo->SetBorderMode(0);
   dR_2b_Z_2bjet_Zmm_17_amcnlo->SetBorderSize(2);
   dR_2b_Z_2bjet_Zmm_17_amcnlo->SetFrameFillStyle(1000);
   dR_2b_Z_2bjet_Zmm_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-3.290147,6.314516,3296.857);
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
   st->SetMaximum(2825.564);
   
   TH1F *st_stack_310 = new TH1F("st_stack_310","",25,0,10);
   st_stack_310->SetMinimum(0.01);
   st_stack_310->SetMaximum(2966.842);
   st_stack_310->SetDirectory(0);
   st_stack_310->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_310->SetLineColor(ci);
   st_stack_310->GetXaxis()->SetRange(1,15);
   st_stack_310->GetXaxis()->SetLabelFont(42);
   st_stack_310->GetXaxis()->SetLabelSize(0.035);
   st_stack_310->GetXaxis()->SetTitleSize(0.035);
   st_stack_310->GetXaxis()->SetTitleFont(42);
   st_stack_310->GetYaxis()->SetTitle("Events/0.4");
   st_stack_310->GetYaxis()->SetLabelFont(42);
   st_stack_310->GetYaxis()->SetLabelSize(0.05);
   st_stack_310->GetYaxis()->SetTitleSize(0.057);
   st_stack_310->GetYaxis()->SetTitleOffset(1.2);
   st_stack_310->GetYaxis()->SetTitleFont(42);
   st_stack_310->GetZaxis()->SetLabelFont(42);
   st_stack_310->GetZaxis()->SetLabelSize(0.035);
   st_stack_310->GetZaxis()->SetTitleSize(0.035);
   st_stack_310->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_310);
   
   
   TH1D *Zmm_2bjet_dR_2b_stack_1 = new TH1D("Zmm_2bjet_dR_2b_stack_1","",25,0,10);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(2,2.333482);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(3,4.115207);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(4,4.20021);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(5,5.770929);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(6,8.112394);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(7,12.34755);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(8,11.93787);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(9,5.148788);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(10,3.240275);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(11,1.277305);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(12,0.7611172);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(13,0.156949);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(2,0.6609565);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(3,0.8935619);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(4,0.8818247);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(5,1.056939);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(6,1.230093);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(7,1.54444);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(8,1.875159);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(9,0.9998414);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(10,0.8045067);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(11,0.4803525);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(12,0.3904935);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(13,0.156949);
   Zmm_2bjet_dR_2b_stack_1->SetEntries(345);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_dR_2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_stack_1->SetLineColor(ci);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_stack_1,"");
   
   TH1D *Zmm_2bjet_dR_2b_stack_2 = new TH1D("Zmm_2bjet_dR_2b_stack_2","",25,0,10);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(2,4.0777);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(3,13.00591);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(4,28.36227);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(5,16.53394);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(6,25.17416);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(7,25.73097);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(8,20.73582);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(9,2.721371);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(10,0.3562439);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(2,1.184308);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(3,2.096552);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(4,3.216328);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(5,2.355562);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(6,3.081465);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(7,2.985231);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(8,2.678676);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(9,0.9272247);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(10,0.3475395);
   Zmm_2bjet_dR_2b_stack_2->SetEntries(434);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dR_2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_stack_2->SetLineColor(ci);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_stack_2,"");
   
   TH1D *Zmm_2bjet_dR_2b_stack_3 = new TH1D("Zmm_2bjet_dR_2b_stack_3","",25,0,10);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(2,91.73512);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(3,148.3428);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(4,217.6901);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(5,298.3564);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(6,360.2278);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(7,429.1604);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(8,512.9805);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(9,213.8685);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(10,70.57231);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(11,16.07287);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(12,5.720071);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(13,0.827098);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(2,5.930143);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(3,7.587473);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(4,9.268805);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(5,10.74048);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(6,11.89625);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(7,12.91365);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(8,14.10494);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(9,9.056116);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(10,5.293005);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(11,2.468383);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(12,1.52877);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(13,0.5543736);
   Zmm_2bjet_dR_2b_stack_3->SetEntries(6946);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dR_2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_stack_3->SetLineColor(ci);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_dR_2b_stack_4 = new TH1D("Zmm_2bjet_XX_dR_2b_stack_4","",25,0,10);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(2,6.616483);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(3,1.157888);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(4,-2.712622);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(5,4.826854);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(6,-0.2152452);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(7,6.637812);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(8,21.7669);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(9,7.861597);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(10,8.723426);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(11,-1.249537);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(12,3.13786);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(13,-0.6042826);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(2,4.698999);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(3,1.83536);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(4,3.297229);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(5,3.242405);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(6,1.922504);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(7,6.437481);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(8,8.464295);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(9,4.996728);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(10,4.425772);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(11,1.00212);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(12,1.822417);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(13,0.6042826);
   Zmm_2bjet_XX_dR_2b_stack_4->SetEntries(108);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_dR_2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_dR_2b_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_dR_2b_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_dR_2b_stack_5 = new TH1D("Zmm_2bjet_bX_dR_2b_stack_5","",25,0,10);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(2,6.088329);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(3,9.240241);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(4,5.558751);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(5,10.10291);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(6,6.94113);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(7,13.64464);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(8,22.56977);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(9,5.345274);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(10,7.159802);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(11,-1.663274);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(12,0.3171218);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(14,0.9865424);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(2,3.290781);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(3,3.175061);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(4,3.048016);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(5,5.084904);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(6,5.227216);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(7,5.978227);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(8,7.096928);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(9,4.717886);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(10,3.634738);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(11,2.640763);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(12,0.9847165);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(14,0.9865424);
   Zmm_2bjet_bX_dR_2b_stack_5->SetEntries(333);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_dR_2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_dR_2b_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_dR_2b_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_dR_2b_stack_6 = new TH1D("Zmm_2bjet_bb_dR_2b_stack_6","",25,0,10);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(2,237.3024);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(3,314.7956);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(4,350.7148);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(5,488.5133);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(6,632.954);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(7,834.1613);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(8,964.0693);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(9,515.0082);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(10,332.9732);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(11,138.0017);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(12,46.57755);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(13,7.984269);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(14,0.9763183);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(2,21.97987);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(3,25.97533);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(4,29.98437);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(5,34.86931);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(6,39.5204);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(7,44.68477);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(8,50.51566);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(9,38.68494);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(10,27.66229);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(11,17.97501);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(12,11.88239);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(13,6.109412);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(14,0.9763183);
   Zmm_2bjet_bb_dR_2b_stack_6->SetEntries(17994);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_dR_2b_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_dR_2b_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_dR_2b_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dR_2b__619 = new TH1D("Zmm_2bjet_dR_2b__619","",25,0,10);
   Zmm_2bjet_dR_2b__619->SetBinContent(2,378);
   Zmm_2bjet_dR_2b__619->SetBinContent(3,437);
   Zmm_2bjet_dR_2b__619->SetBinContent(4,567);
   Zmm_2bjet_dR_2b__619->SetBinContent(5,689);
   Zmm_2bjet_dR_2b__619->SetBinContent(6,868);
   Zmm_2bjet_dR_2b__619->SetBinContent(7,1071);
   Zmm_2bjet_dR_2b__619->SetBinContent(8,1308);
   Zmm_2bjet_dR_2b__619->SetBinContent(9,702);
   Zmm_2bjet_dR_2b__619->SetBinContent(10,346);
   Zmm_2bjet_dR_2b__619->SetBinContent(11,127);
   Zmm_2bjet_dR_2b__619->SetBinContent(12,43);
   Zmm_2bjet_dR_2b__619->SetBinContent(13,9);
   Zmm_2bjet_dR_2b__619->SetBinContent(14,2);
   Zmm_2bjet_dR_2b__619->SetBinError(2,19.44222);
   Zmm_2bjet_dR_2b__619->SetBinError(3,20.90454);
   Zmm_2bjet_dR_2b__619->SetBinError(4,23.81176);
   Zmm_2bjet_dR_2b__619->SetBinError(5,26.24881);
   Zmm_2bjet_dR_2b__619->SetBinError(6,29.46184);
   Zmm_2bjet_dR_2b__619->SetBinError(7,32.72614);
   Zmm_2bjet_dR_2b__619->SetBinError(8,36.16628);
   Zmm_2bjet_dR_2b__619->SetBinError(9,26.49528);
   Zmm_2bjet_dR_2b__619->SetBinError(10,18.60108);
   Zmm_2bjet_dR_2b__619->SetBinError(11,11.26943);
   Zmm_2bjet_dR_2b__619->SetBinError(12,6.557439);
   Zmm_2bjet_dR_2b__619->SetBinError(13,3);
   Zmm_2bjet_dR_2b__619->SetBinError(14,1.414214);
   Zmm_2bjet_dR_2b__619->SetEntries(6547);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b__619->SetLineColor(ci);
   Zmm_2bjet_dR_2b__619->SetLineWidth(2);
   Zmm_2bjet_dR_2b__619->SetMarkerStyle(20);
   Zmm_2bjet_dR_2b__619->SetMarkerSize(1.2);
   Zmm_2bjet_dR_2b__619->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b__619->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b__619->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b__619->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b__619->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b__619->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b__619->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b__619->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b__619->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b__619->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b__619->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b__619->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b__619->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b__619->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b__619->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dR_2b_fx1619[25] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dR_2b_fy1619[25] = {
   0,
   348.1535,
   490.6576,
   603.8135,
   824.1044,
   1033.194,
   1321.683,
   1554.06,
   749.9537,
   423.0252,
   152.439,
   56.51372,
   8.364034,
   1.962861,
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
   Double_t Graph_from_Zmm_2bjet_bb_dR_2b_fex1619[25] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dR_2b_fey1619[25] = {
   0,
   23.5166,
   27.40312,
   31.87879,
   37.07104,
   41.77812,
   47.45491,
   53.69807,
   40.34381,
   28.75387,
   18.36852,
   12.16436,
   6.166201,
   1.387971,
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
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_bb_dR_2b_fx1619,Graph_from_Zmm_2bjet_bb_dR_2b_fy1619,Graph_from_Zmm_2bjet_bb_dR_2b_fex1619,Graph_from_Zmm_2bjet_bb_dR_2b_fey1619);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dR_2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619","",100,0,11);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619->SetMinimum(0);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619->SetMaximum(1768.534);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dR_2b1619);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dR_2b","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_dR_2b_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_dR_2b_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_dR_2b_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_dR_2b","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dR_2b_Z_2bjet_Zmm_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__620 = new TH1D("data_mc_ratio__620","",25,0,10);
   data_mc_ratio__620->SetBinContent(2,1.085728);
   data_mc_ratio__620->SetBinContent(3,0.8906414);
   data_mc_ratio__620->SetBinContent(4,0.9390317);
   data_mc_ratio__620->SetBinContent(5,0.8360592);
   data_mc_ratio__620->SetBinContent(6,0.840113);
   data_mc_ratio__620->SetBinContent(7,0.8103306);
   data_mc_ratio__620->SetBinContent(8,0.8416663);
   data_mc_ratio__620->SetBinContent(9,0.9360577);
   data_mc_ratio__620->SetBinContent(10,0.8179181);
   data_mc_ratio__620->SetBinContent(11,0.83312);
   data_mc_ratio__620->SetBinContent(12,0.7608772);
   data_mc_ratio__620->SetBinContent(13,1.076036);
   data_mc_ratio__620->SetBinContent(14,1.018921);
   data_mc_ratio__620->SetBinError(2,0.05584382);
   data_mc_ratio__620->SetBinError(3,0.04260516);
   data_mc_ratio__620->SetBinError(4,0.03943562);
   data_mc_ratio__620->SetBinError(5,0.03185132);
   data_mc_ratio__620->SetBinError(6,0.02851529);
   data_mc_ratio__620->SetBinError(7,0.02476096);
   data_mc_ratio__620->SetBinError(8,0.02327213);
   data_mc_ratio__620->SetBinError(9,0.03532922);
   data_mc_ratio__620->SetBinError(10,0.04397155);
   data_mc_ratio__620->SetBinError(11,0.07392745);
   data_mc_ratio__620->SetBinError(12,0.1160327);
   data_mc_ratio__620->SetBinError(13,0.3586786);
   data_mc_ratio__620->SetBinError(14,0.720486);
   data_mc_ratio__620->SetMinimum(0.4);
   data_mc_ratio__620->SetMaximum(1.6);
   data_mc_ratio__620->SetEntries(72.4592);
   data_mc_ratio__620->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__620->SetLineColor(ci);
   data_mc_ratio__620->SetLineWidth(2);
   data_mc_ratio__620->SetMarkerStyle(20);
   data_mc_ratio__620->SetMarkerSize(1.2);
   data_mc_ratio__620->GetXaxis()->SetTitle("#DeltaR_{bb}");
   data_mc_ratio__620->GetXaxis()->SetRange(1,15);
   data_mc_ratio__620->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__620->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__620->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__620->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__620->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__620->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__620->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__620->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__620->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__620->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__620->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__620->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__620->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__620->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__620->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__620->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__620->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1620[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1620[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1620[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1620[25] = {
   0,
   0.06754664,
   0.05584977,
   0.05279576,
   0.04498343,
   0.04043588,
   0.03590492,
   0.03455341,
   0.05379507,
   0.067972,
   0.1204975,
   0.2152462,
   0.7372282,
   0.7071164,
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
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1620,Graph_from_mc_statistical_error_fy1620,Graph_from_mc_statistical_error_fex1620,Graph_from_mc_statistical_error_fey1620);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1620 = new TH1F("Graph_Graph_from_mc_statistical_error1620","",100,0,11);
   Graph_Graph_from_mc_statistical_error1620->SetMinimum(0.1153262);
   Graph_Graph_from_mc_statistical_error1620->SetMaximum(1.884674);
   Graph_Graph_from_mc_statistical_error1620->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1620->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1620->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1620->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1620->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1620->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1620->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1620->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1620->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1620->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1620->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1620->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1620->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1620->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1620->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1620->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1620);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dR_2b_Z_2bjet_Zmm_17_amcnlo->cd();
   dR_2b_Z_2bjet_Zmm_17_amcnlo->Modified();
   dR_2b_Z_2bjet_Zmm_17_amcnlo->cd();
   dR_2b_Z_2bjet_Zmm_17_amcnlo->SetSelected(dR_2b_Z_2bjet_Zmm_17_amcnlo);
}

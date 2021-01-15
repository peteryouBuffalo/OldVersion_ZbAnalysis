void dPhi_Zb_Z_2bjet_Zee_All_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb_Z_2bjet_Zee_All_amcnlo/dPhi_Zb_Z_2bjet_Zee_All_amcnlo
//=========  (Thu Jan 14 10:42:52 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb_Z_2bjet_Zee_All_amcnlo = new TCanvas("dPhi_Zb_Z_2bjet_Zee_All_amcnlo", "dPhi_Zb_Z_2bjet_Zee_All_amcnlo",0,0,600,600);
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->SetHighLightColor(2);
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->Range(0,0,1,1);
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->SetFillColor(0);
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->SetFillStyle(4000);
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->SetBorderMode(0);
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->SetBorderSize(2);
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-2.31737,3.416482,2325.052);
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
   st->SetMaximum(1992.681);
   
   TH1F *st_stack_236 = new TH1F("st_stack_236","",30,0,3.141593);
   st_stack_236->SetMinimum(0.01);
   st_stack_236->SetMaximum(2092.315);
   st_stack_236->SetDirectory(0);
   st_stack_236->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_236->SetLineColor(ci);
   st_stack_236->GetXaxis()->SetRange(1,31);
   st_stack_236->GetXaxis()->SetLabelFont(42);
   st_stack_236->GetXaxis()->SetLabelSize(0.035);
   st_stack_236->GetXaxis()->SetTitleSize(0.035);
   st_stack_236->GetXaxis()->SetTitleFont(42);
   st_stack_236->GetYaxis()->SetTitle("Events/0.105");
   st_stack_236->GetYaxis()->SetLabelFont(42);
   st_stack_236->GetYaxis()->SetLabelSize(0.05);
   st_stack_236->GetYaxis()->SetTitleSize(0.057);
   st_stack_236->GetYaxis()->SetTitleOffset(1.2);
   st_stack_236->GetYaxis()->SetTitleFont(42);
   st_stack_236->GetZaxis()->SetLabelFont(42);
   st_stack_236->GetZaxis()->SetLabelSize(0.035);
   st_stack_236->GetZaxis()->SetTitleSize(0.035);
   st_stack_236->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_236);
   
   
   TH1D *Zee_2bjet_dPhi_Zb_all_stack_1 = new TH1D("Zee_2bjet_dPhi_Zb_all_stack_1","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(1,0.3003672);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(2,0.4581363);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(3,0.3325341);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(4,0.4566205);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(5,0.2915177);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(6,0.2058413);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(7,1.875477);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(8,0.7210111);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(9,1.924255);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(10,0.1857734);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(11,0.6082733);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(12,0.8606467);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(13,1.184257);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(14,2.822082);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(15,0.9467493);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(16,2.231879);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(17,2.596446);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(18,3.188085);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(19,1.229135);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(20,3.360626);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(21,4.321893);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(22,4.345806);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(23,4.475662);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(24,5.995741);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(25,6.149502);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(26,8.109088);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(27,6.659935);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(28,6.571857);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(29,9.066799);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinContent(30,6.649572);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(1,0.2325587);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(2,0.3296396);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(3,0.2365437);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(4,0.2682316);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(5,0.2122647);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(6,0.2058413);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(7,0.6243027);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(8,0.4098557);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(9,0.6094424);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(10,0.1459295);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(11,0.4085355);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(12,0.4194385);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(13,0.501411);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(14,0.8118069);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(15,0.418035);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(16,0.6802857);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(17,0.7899411);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(18,0.8600119);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(19,0.5141099);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(20,0.9226183);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(21,0.9542733);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(22,0.9999982);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(23,1.012711);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(24,1.181684);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(25,1.173497);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(26,1.344469);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(27,1.252896);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(28,1.17666);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(29,1.43138);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetBinError(30,1.229834);
   Zee_2bjet_dPhi_Zb_all_stack_1->SetEntries(475);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_dPhi_Zb_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb_all_stack_1->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb_all_stack_1,"");
   
   TH1D *Zee_2bjet_dPhi_Zb_all_stack_2 = new TH1D("Zee_2bjet_dPhi_Zb_all_stack_2","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(1,1.452001);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(2,0.8362563);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(3,0.3617703);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(4,1.80092);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(5,1.02439);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(6,0.2649);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(7,1.85414);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(8,1.707266);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(9,1.27473);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(10,3.341159);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(11,2.855728);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(12,3.671624);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(13,3.741073);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(14,2.886078);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(15,5.356057);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(16,4.886699);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(17,4.492403);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(18,4.181298);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(19,4.962872);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(20,3.897669);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(21,7.817407);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(22,9.861135);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(23,12.79578);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(24,14.5851);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(25,12.85655);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(26,18.62428);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(27,19.36718);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(28,19.24366);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(29,20.73657);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinContent(30,15.54215);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(1,0.7056746);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(2,0.4928465);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(3,0.3278613);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(4,0.8630847);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(5,0.5205474);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(6,0.2649);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(7,0.8730283);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(8,0.7065279);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(9,0.6900812);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(10,1.370473);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(11,1.079805);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(12,1.319591);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(13,1.099241);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(14,1.100781);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(15,1.514905);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(16,1.473043);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(17,1.305358);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(18,1.145735);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(19,1.474226);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(20,1.211775);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(21,1.745881);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(22,1.941818);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(23,2.131562);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(24,2.357289);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(25,2.151589);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(26,2.692184);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(27,2.717964);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(28,2.77131);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(29,2.922056);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetBinError(30,2.543133);
   Zee_2bjet_dPhi_Zb_all_stack_2->SetEntries(618);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dPhi_Zb_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb_all_stack_2->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb_all_stack_2,"");
   
   TH1D *Zee_2bjet_dPhi_Zb_all_stack_3 = new TH1D("Zee_2bjet_dPhi_Zb_all_stack_3","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(1,50.31365);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(2,41.22037);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(3,51.09826);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(4,46.87838);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(5,48.11743);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(6,45.78867);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(7,51.74645);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(8,60.14187);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(9,50.84319);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(10,61.74211);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(11,64.91172);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(12,74.92256);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(13,81.66269);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(14,83.93283);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(15,95.185);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(16,104.4307);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(17,112.5515);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(18,126.2104);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(19,152.2578);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(20,153.0295);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(21,164.2373);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(22,181.3191);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(23,204.5314);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(24,207.6329);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(25,220.6168);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(26,226.0805);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(27,234.4338);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(28,240.2005);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(29,230.8721);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinContent(30,241.5898);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(1,3.165774);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(2,2.751611);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(3,2.946735);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(4,2.837889);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(5,2.930988);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(6,2.881707);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(7,3.01492);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(8,3.413341);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(9,2.933109);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(10,3.233478);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(11,3.391519);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(12,3.674697);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(13,3.895321);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(14,3.857702);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(15,4.136745);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(16,4.261553);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(17,4.519837);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(18,4.63889);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(19,5.194069);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(20,5.162455);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(21,5.315033);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(22,5.690965);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(23,6.087389);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(24,6.138748);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(25,6.368306);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(26,6.34353);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(27,6.429644);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(28,6.579969);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(29,6.388536);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetBinError(30,6.726975);
   Zee_2bjet_dPhi_Zb_all_stack_3->SetEntries(32755);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dPhi_Zb_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb_all_stack_3->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb_all_stack_3,"");
   
   TH1D *Zee_2bjet_XX_dPhi_Zb_all_stack_4 = new TH1D("Zee_2bjet_XX_dPhi_Zb_all_stack_4","",30,0,3.141593);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(1,-1.503468);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(2,0.1896502);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(3,0.1028256);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(4,0.6769384);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(5,11.18396);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(6,0.4713868);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(7,-0.6069801);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(8,0.7751586);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(10,2.053401);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(11,-0.3950394);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(13,0.8649364);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(14,1.179378);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(15,6.854675);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(16,1.350607);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(17,0.7027853);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(18,0.2182229);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(19,-0.600912);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(20,0.2366925);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(21,-1.404957);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(22,4.642965);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(23,2.227305);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(24,4.790883);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(25,3.740028);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(26,9.421333);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(27,2.247699);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(28,2.177505);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(29,2.132367);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(30,1.669107);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(1,1.068638);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(2,0.1896502);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(3,1.373222);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(4,1.202162);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(5,10.16475);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(6,0.4713868);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(7,0.6069801);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(8,0.7751586);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(10,2.053401);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(11,0.5655031);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(13,0.8649364);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(14,0.8573214);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(15,6.409366);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(16,1.030246);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(17,1.787251);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(18,0.9433159);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(19,1.549999);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(20,1.967494);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(21,2.537084);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(22,2.42717);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(23,1.765599);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(24,4.065334);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(25,1.945099);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(26,3.991811);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(27,1.514438);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(28,2.914941);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(29,2.558995);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(30,2.030699);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetEntries(129);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->GetXaxis()->SetRange(1,60);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_Zb_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_dPhi_Zb_all_stack_4,"");
   
   TH1D *Zee_2bjet_bX_dPhi_Zb_all_stack_5 = new TH1D("Zee_2bjet_bX_dPhi_Zb_all_stack_5","",30,0,3.141593);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(1,0.07004713);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(2,-1.062953);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(3,0.8330017);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(4,-0.2225921);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(5,0.5537121);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(6,0.2593883);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(7,3.70543);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(8,2.32796);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(9,7.069551);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(10,-0.1753712);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(11,0.7137505);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(12,-3.271704);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(13,1.797087);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(14,4.69134);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(15,3.714865);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(16,4.781021);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(17,6.695187);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(18,1.851173);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(19,2.400775);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(20,11.78317);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(21,2.340838);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(22,-0.94826);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(23,7.815999);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(24,3.295775);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(25,14.19777);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(26,17.48629);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(27,11.37972);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(28,6.391596);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(29,2.001408);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(30,23.67462);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(1,2.103089);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(2,2.785547);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(3,0.8330017);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(4,2.893212);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(5,1.243932);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(6,1.10365);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(7,1.68574);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(8,1.896716);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(9,3.236383);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(10,0.7582224);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(11,0.8014192);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(12,3.29915);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(13,2.158779);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(14,3.059803);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(15,2.153238);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(16,2.864523);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(17,3.216496);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(18,2.941856);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(19,3.34321);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(20,5.169152);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(21,4.474775);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(22,5.471496);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(23,3.823077);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(24,5.705073);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(25,6.091817);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(26,4.785974);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(27,5.537281);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(28,5.643943);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(29,4.843329);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(30,7.272028);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetEntries(615);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->GetXaxis()->SetRange(1,60);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_Zb_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_dPhi_Zb_all_stack_5,"");
   
   TH1D *Zee_2bjet_bb_dPhi_Zb_all_stack_6 = new TH1D("Zee_2bjet_bb_dPhi_Zb_all_stack_6","",30,0,3.141593);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(1,48.03662);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(2,75.47923);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(3,50.88235);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(4,62.72398);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(5,71.09788);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(6,90.39428);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(7,69.70262);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(8,80.79419);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(9,66.21057);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(10,100.2668);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(11,104.8697);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(12,68.05962);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(13,93.83336);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(14,98.95603);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(15,130.6403);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(16,183.0659);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(17,183.7776);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(18,223.7674);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(19,226.9957);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(20,297.1882);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(21,282.0546);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(22,316.5733);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(23,471.8006);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(24,505.9109);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(25,607.3023);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(26,664.2503);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(27,690.4513);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(28,807.8417);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(29,831.1654);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(30,789.9606);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(1,11.54583);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(2,12.13805);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(3,11.38553);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(4,14.69555);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(5,13.83201);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(6,13.05297);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(7,12.26411);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(8,12.64666);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(9,13.54044);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(10,13.65502);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(11,14.49207);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(12,15.24139);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(13,15.61129);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(14,16.9907);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(15,17.92026);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(16,19.05837);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(17,19.79816);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(18,22.34526);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(19,23.70132);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(20,25.66787);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(21,27.81315);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(22,30.70585);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(23,32.03159);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(24,35.55374);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(25,38.01253);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(26,40.80816);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(27,41.97304);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(28,45.73082);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(29,44.71161);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(30,44.03221);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetEntries(34449);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->GetXaxis()->SetRange(1,60);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_Zb_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_dPhi_Zb_all_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dPhi_Zb_all__471 = new TH1D("Zee_2bjet_dPhi_Zb_all__471","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(1,120);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(2,105);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(3,98);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(4,126);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(5,103);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(6,118);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(7,121);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(8,120);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(9,124);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(10,145);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(11,127);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(12,147);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(13,173);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(14,218);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(15,196);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(16,237);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(17,249);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(18,306);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(19,332);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(20,372);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(21,417);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(22,482);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(23,557);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(24,628);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(25,703);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(26,803);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(27,863);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(28,922);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(29,888);
   Zee_2bjet_dPhi_Zb_all__471->SetBinContent(30,889);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(1,10.95445);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(2,10.24695);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(3,9.899495);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(4,11.22497);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(5,10.14889);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(6,10.86278);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(7,11);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(8,10.95445);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(9,11.13553);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(10,12.04159);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(11,11.26943);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(12,12.12436);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(13,13.15295);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(14,14.76482);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(15,14);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(16,15.3948);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(17,15.77973);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(18,17.49286);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(19,18.22087);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(20,19.2873);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(21,20.42058);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(22,21.9545);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(23,23.60085);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(24,25.05993);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(25,26.51415);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(26,28.33725);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(27,29.37686);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(28,30.36445);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(29,29.79933);
   Zee_2bjet_dPhi_Zb_all__471->SetBinError(30,29.8161);
   Zee_2bjet_dPhi_Zb_all__471->SetEntries(10689);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb_all__471->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb_all__471->SetLineWidth(2);
   Zee_2bjet_dPhi_Zb_all__471->SetMarkerStyle(20);
   Zee_2bjet_dPhi_Zb_all__471->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_Zb_all__471->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb_all__471->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all__471->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all__471->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all__471->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all__471->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all__471->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all__471->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all__471->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb_all__471->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all__471->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_all__471->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_all__471->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_all__471->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_all__471->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb_all_fx1471[30] = {
   0.05235988,
   0.1570796,
   0.2617994,
   0.3665191,
   0.4712389,
   0.5759587,
   0.6806784,
   0.7853982,
   0.8901179,
   0.9948377,
   1.099557,
   1.204277,
   1.308997,
   1.413717,
   1.518436,
   1.623156,
   1.727876,
   1.832596,
   1.937315,
   2.042035,
   2.146755,
   2.251475,
   2.356194,
   2.460914,
   2.565634,
   2.670354,
   2.775074,
   2.879793,
   2.984513,
   3.089233};
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb_all_fy1471[30] = {
   98.66922,
   117.1207,
   103.6107,
   112.3142,
   132.2689,
   137.3845,
   128.2771,
   146.4675,
   127.3223,
   167.4139,
   173.5642,
   144.2427,
   183.0834,
   194.4677,
   242.6976,
   300.7468,
   310.8159,
   359.4166,
   387.2454,
   469.4959,
   459.367,
   515.7941,
   703.6467,
   742.2112,
   864.8629,
   943.9717,
   964.5396,
   1082.427,
   1095.975,
   1079.086};
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb_all_fex1471[30] = {
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988};
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb_all_fey1471[30] = {
   12.22478,
   12.76912,
   11.87673,
   15.31814,
   17.46713,
   13.42524,
   12.80079,
   13.28362,
   14.25723,
   14.26905,
   14.96053,
   16.0812,
   16.30196,
   17.76327,
   19.65793,
   19.83133,
   20.69454,
   23.07437,
   24.59163,
   26.80301,
   28.84857,
   31.87217,
   32.9603,
   36.84807,
   39.14598,
   41.87412,
   42.95333,
   46.7335,
   45.61288,
   45.2667};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zee_2bjet_bb_dPhi_Zb_all_fx1471,Graph_from_Zee_2bjet_bb_dPhi_Zb_all_fy1471,Graph_from_Zee_2bjet_bb_dPhi_Zb_all_fex1471,Graph_from_Zee_2bjet_bb_dPhi_Zb_all_fey1471);
   gre->SetName("Graph_from_Zee_2bjet_bb_dPhi_Zb_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471->SetMinimum(77.79999);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471->SetMaximum(1247.102);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb_all1471);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dPhi_Zb_all","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_dPhi_Zb_all_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_dPhi_Zb_all_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_dPhi_Zb_all_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_dPhi_Zb_all","MC unc. (stat.)","fl");

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
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.4974175,-0.2774193,3.416482,1.658065);
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
   
   TH1D *data_mc_ratio__472 = new TH1D("data_mc_ratio__472","",30,0,3.141593);
   data_mc_ratio__472->SetBinContent(1,1.216185);
   data_mc_ratio__472->SetBinContent(2,0.8965111);
   data_mc_ratio__472->SetBinContent(3,0.9458479);
   data_mc_ratio__472->SetBinContent(4,1.121852);
   data_mc_ratio__472->SetBinContent(5,0.7787168);
   data_mc_ratio__472->SetBinContent(6,0.8589035);
   data_mc_ratio__472->SetBinContent(7,0.9432702);
   data_mc_ratio__472->SetBinContent(8,0.8192947);
   data_mc_ratio__472->SetBinContent(9,0.9739064);
   data_mc_ratio__472->SetBinContent(10,0.8661168);
   data_mc_ratio__472->SetBinContent(11,0.7317179);
   data_mc_ratio__472->SetBinContent(12,1.019115);
   data_mc_ratio__472->SetBinContent(13,0.9449245);
   data_mc_ratio__472->SetBinContent(14,1.121009);
   data_mc_ratio__472->SetBinContent(15,0.8075893);
   data_mc_ratio__472->SetBinContent(16,0.7880382);
   data_mc_ratio__472->SetBinContent(17,0.8011173);
   data_mc_ratio__472->SetBinContent(18,0.8513798);
   data_mc_ratio__472->SetBinContent(19,0.8573376);
   data_mc_ratio__472->SetBinContent(20,0.7923392);
   data_mc_ratio__472->SetBinContent(21,0.9077709);
   data_mc_ratio__472->SetBinContent(22,0.9344815);
   data_mc_ratio__472->SetBinContent(23,0.7915904);
   data_mc_ratio__472->SetBinContent(24,0.8461203);
   data_mc_ratio__472->SetBinContent(25,0.8128456);
   data_mc_ratio__472->SetBinContent(26,0.8506611);
   data_mc_ratio__472->SetBinContent(27,0.8947274);
   data_mc_ratio__472->SetBinContent(28,0.8517897);
   data_mc_ratio__472->SetBinContent(29,0.8102377);
   data_mc_ratio__472->SetBinContent(30,0.8238455);
   data_mc_ratio__472->SetBinError(1,0.111022);
   data_mc_ratio__472->SetBinError(2,0.08749052);
   data_mc_ratio__472->SetBinError(3,0.09554507);
   data_mc_ratio__472->SetBinError(4,0.09994255);
   data_mc_ratio__472->SetBinError(5,0.07672924);
   data_mc_ratio__472->SetBinError(6,0.07906847);
   data_mc_ratio__472->SetBinError(7,0.08575184);
   data_mc_ratio__472->SetBinError(8,0.07479103);
   data_mc_ratio__472->SetBinError(9,0.08745937);
   data_mc_ratio__472->SetBinError(10,0.07192709);
   data_mc_ratio__472->SetBinError(11,0.06492947);
   data_mc_ratio__472->SetBinError(12,0.08405522);
   data_mc_ratio__472->SetBinError(13,0.07184128);
   data_mc_ratio__472->SetBinError(14,0.07592428);
   data_mc_ratio__472->SetBinError(15,0.05768495);
   data_mc_ratio__472->SetBinError(16,0.05118858);
   data_mc_ratio__472->SetBinError(17,0.05076875);
   data_mc_ratio__472->SetBinError(18,0.04867014);
   data_mc_ratio__472->SetBinError(19,0.04705251);
   data_mc_ratio__472->SetBinError(20,0.04108087);
   data_mc_ratio__472->SetBinError(21,0.04445373);
   data_mc_ratio__472->SetBinError(22,0.04256447);
   data_mc_ratio__472->SetBinError(23,0.03354076);
   data_mc_ratio__472->SetBinError(24,0.03376388);
   data_mc_ratio__472->SetBinError(25,0.03065705);
   data_mc_ratio__472->SetBinError(26,0.03001918);
   data_mc_ratio__472->SetBinError(27,0.03045688);
   data_mc_ratio__472->SetBinError(28,0.0280522);
   data_mc_ratio__472->SetBinError(29,0.0271898);
   data_mc_ratio__472->SetBinError(30,0.02763089);
   data_mc_ratio__472->SetMinimum(0.4);
   data_mc_ratio__472->SetMaximum(1.6);
   data_mc_ratio__472->SetEntries(2278.413);
   data_mc_ratio__472->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__472->SetLineColor(ci);
   data_mc_ratio__472->SetLineWidth(2);
   data_mc_ratio__472->SetMarkerStyle(20);
   data_mc_ratio__472->SetMarkerSize(1.2);
   data_mc_ratio__472->GetXaxis()->SetTitle("dPhi_{Zb}");
   data_mc_ratio__472->GetXaxis()->SetRange(1,31);
   data_mc_ratio__472->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__472->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__472->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__472->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__472->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__472->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__472->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__472->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__472->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__472->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__472->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__472->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__472->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__472->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__472->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__472->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__472->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1472[30] = {
   0.05235988,
   0.1570796,
   0.2617994,
   0.3665191,
   0.4712389,
   0.5759587,
   0.6806784,
   0.7853982,
   0.8901179,
   0.9948377,
   1.099557,
   1.204277,
   1.308997,
   1.413717,
   1.518436,
   1.623156,
   1.727876,
   1.832596,
   1.937315,
   2.042035,
   2.146755,
   2.251475,
   2.356194,
   2.460914,
   2.565634,
   2.670354,
   2.775074,
   2.879793,
   2.984513,
   3.089233};
   Double_t Graph_from_mc_statistical_error_fy1472[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1472[30] = {
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988};
   Double_t Graph_from_mc_statistical_error_fey1472[30] = {
   0.1238966,
   0.1090253,
   0.1146284,
   0.1363865,
   0.1320578,
   0.09772019,
   0.09979012,
   0.09069332,
   0.1119774,
   0.08523219,
   0.08619596,
   0.1114871,
   0.08904118,
   0.09134301,
   0.08099763,
   0.06594029,
   0.06658135,
   0.06419951,
   0.06350399,
   0.05708891,
   0.06280071,
   0.06179244,
   0.04684211,
   0.04964634,
   0.04526265,
   0.0443595,
   0.04453247,
   0.04317474,
   0.04161855,
   0.04194911};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1472,Graph_from_mc_statistical_error_fy1472,Graph_from_mc_statistical_error_fex1472,Graph_from_mc_statistical_error_fey1472);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1472 = new TH1F("Graph_Graph_from_mc_statistical_error1472","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1472->SetMinimum(0.8363363);
   Graph_Graph_from_mc_statistical_error1472->SetMaximum(1.163664);
   Graph_Graph_from_mc_statistical_error1472->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1472->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1472->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1472->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1472->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1472);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->Modified();
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zee_All_amcnlo->SetSelected(dPhi_Zb_Z_2bjet_Zee_All_amcnlo);
}

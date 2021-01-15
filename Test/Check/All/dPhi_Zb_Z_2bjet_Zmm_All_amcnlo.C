void dPhi_Zb_Z_2bjet_Zmm_All_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb_Z_2bjet_Zmm_All_amcnlo/dPhi_Zb_Z_2bjet_Zmm_All_amcnlo
//=========  (Thu Jan 14 10:43:06 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb_Z_2bjet_Zmm_All_amcnlo = new TCanvas("dPhi_Zb_Z_2bjet_Zmm_All_amcnlo", "dPhi_Zb_Z_2bjet_Zmm_All_amcnlo",0,0,600,600);
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->SetHighLightColor(2);
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->Range(0,0,1,1);
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->SetFillColor(0);
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->SetFillStyle(4000);
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->SetBorderMode(0);
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->SetBorderSize(2);
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-4.96268,3.416482,4967.717);
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
   st->SetMaximum(4257.57);
   
   TH1F *st_stack_324 = new TH1F("st_stack_324","",30,0,3.141593);
   st_stack_324->SetMinimum(0.01);
   st_stack_324->SetMaximum(4470.449);
   st_stack_324->SetDirectory(0);
   st_stack_324->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_324->SetLineColor(ci);
   st_stack_324->GetXaxis()->SetRange(1,31);
   st_stack_324->GetXaxis()->SetLabelFont(42);
   st_stack_324->GetXaxis()->SetLabelSize(0.035);
   st_stack_324->GetXaxis()->SetTitleSize(0.035);
   st_stack_324->GetXaxis()->SetTitleFont(42);
   st_stack_324->GetYaxis()->SetTitle("Events/0.105");
   st_stack_324->GetYaxis()->SetLabelFont(42);
   st_stack_324->GetYaxis()->SetLabelSize(0.05);
   st_stack_324->GetYaxis()->SetTitleSize(0.057);
   st_stack_324->GetYaxis()->SetTitleOffset(1.2);
   st_stack_324->GetYaxis()->SetTitleFont(42);
   st_stack_324->GetZaxis()->SetLabelFont(42);
   st_stack_324->GetZaxis()->SetLabelSize(0.035);
   st_stack_324->GetZaxis()->SetTitleSize(0.035);
   st_stack_324->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_324);
   
   
   TH1D *Zmm_2bjet_dPhi_Zb_all_stack_1 = new TH1D("Zmm_2bjet_dPhi_Zb_all_stack_1","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(1,1.714908);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(2,1.561583);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(3,0.6302902);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(4,2.516778);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(5,2.368964);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(6,1.790903);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(7,1.991165);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(8,2.887746);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(9,2.632975);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(10,1.932405);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(11,2.734414);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(12,1.924248);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(13,2.698955);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(14,4.491239);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(15,4.817481);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(16,4.325456);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(17,6.420685);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(18,6.359735);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(19,6.346508);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(20,5.922622);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(21,5.212515);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(22,8.907884);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(23,10.86092);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(24,10.40137);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(25,13.02839);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(26,14.76313);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(27,12.74936);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(28,18.4031);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(29,21.32231);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinContent(30,17.78022);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(1,0.6158396);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(2,0.5998354);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(3,0.3460244);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(4,0.7697974);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(5,0.7785844);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(6,0.6634883);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(7,0.6717305);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(8,0.8835059);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(9,0.8270997);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(10,0.6675427);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(11,0.8047229);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(12,0.6657312);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(13,0.7695801);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(14,1.056128);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(15,1.009278);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(16,1.010449);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(17,1.488323);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(18,1.28663);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(19,1.319696);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(20,1.15206);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(21,1.100798);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(22,1.502505);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(23,1.581572);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(24,1.586536);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(25,1.889155);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(26,1.905198);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(27,1.720074);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(28,2.212579);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(29,2.407411);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetBinError(30,2.040534);
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetEntries(971);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_all_stack_1->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_all_stack_1,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb_all_stack_2 = new TH1D("Zmm_2bjet_dPhi_Zb_all_stack_2","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(1,4.449384);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(2,3.755245);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(3,2.660157);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(4,9.16005);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(5,4.459203);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(6,4.297295);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(7,2.816266);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(8,3.845932);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(9,3.21031);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(10,2.551689);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(11,2.860197);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(12,3.355254);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(13,7.484072);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(14,5.43239);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(15,5.1852);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(16,9.963308);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(17,9.587411);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(18,10.35037);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(19,10.68123);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(20,21.17322);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(21,18.70918);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(22,24.01883);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(23,24.60853);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(24,33.93738);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(25,40.109);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(26,39.87461);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(27,29.74355);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(28,45.46203);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(29,37.75204);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinContent(30,33.65924);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(1,1.434034);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(2,1.110699);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(3,1.074536);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(4,3.529774);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(5,1.270745);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(6,1.341173);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(7,1.031934);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(8,1.458734);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(9,1.12717);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(10,0.9905439);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(11,1.004366);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(12,1.124256);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(13,1.799923);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(14,1.449563);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(15,1.447318);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(16,2.005176);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(17,2.020001);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(18,2.119251);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(19,1.962186);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(20,3.15416);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(21,2.759331);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(22,3.200687);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(23,3.337409);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(24,3.798096);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(25,4.100784);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(26,3.891979);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(27,3.477064);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(28,4.48563);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(29,4.019334);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetBinError(30,3.789835);
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetEntries(1245);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_all_stack_2->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_all_stack_2,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb_all_stack_3 = new TH1D("Zmm_2bjet_dPhi_Zb_all_stack_3","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(1,99.92604);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(2,100.3135);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(3,102.5871);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(4,94.71238);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(5,101.2335);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(6,101.492);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(7,108.141);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(8,114.7583);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(9,121.3955);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(10,129.1511);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(11,145.5003);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(12,143.9393);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(13,160.9314);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(14,184.0593);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(15,215.6139);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(16,222.8366);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(17,261.1237);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(18,284.6088);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(19,303.8392);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(20,346.1192);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(21,383.1643);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(22,382.9025);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(23,445.1647);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(24,447.4156);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(25,479.4647);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(26,478.3224);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(27,511.513);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(28,514.3993);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(29,525.8665);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinContent(30,520.0993);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(1,4.412483);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(2,4.56334);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(3,4.510228);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(4,4.385027);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(5,4.542005);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(6,4.372438);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(7,4.765729);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(8,4.621624);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(9,4.922944);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(10,5.130533);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(11,5.251618);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(12,5.286945);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(13,5.669876);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(14,6.136903);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(15,6.568984);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(16,6.727861);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(17,7.340896);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(18,7.502059);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(19,7.820273);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(20,8.306583);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(21,8.8794);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(22,8.742503);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(23,9.57956);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(24,9.39278);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(25,9.826209);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(26,9.692313);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(27,10.1543);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(28,10.19581);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(29,10.39757);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetBinError(30,10.18877);
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetEntries(64896);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_all_stack_3->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_all_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_dPhi_Zb_all_stack_4 = new TH1D("Zmm_2bjet_XX_dPhi_Zb_all_stack_4","",30,0,3.141593);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(1,6.561722);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(2,5.238384);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(3,4.008937);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(4,26.61985);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(5,5.835256);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(6,6.705767);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(7,9.047491);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(8,10.33787);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(9,21.95078);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(10,10.26477);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(11,3.624612);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(12,-13.03311);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(13,25.86624);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(14,3.650626);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(15,18.77402);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(16,19.29812);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(17,39.13008);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(18,8.700938);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(19,14.96602);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(20,19.87425);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(21,11.44249);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(22,-5.577901);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(23,16.80302);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(24,30.0254);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(25,3.508916);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(26,11.41384);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(27,21.33967);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(28,10.37661);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(29,11.22545);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinContent(30,21.21309);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(1,3.993834);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(2,3.857036);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(3,4.312534);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(4,15.63874);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(5,7.610272);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(6,3.764859);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(7,5.395898);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(8,9.155806);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(9,13.64654);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(10,7.489858);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(11,3.045568);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(12,11.20859);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(13,14.28947);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(14,2.972254);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(15,10.23863);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(16,16.52278);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(17,19.8362);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(18,3.996154);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(19,10.54264);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(20,12.44678);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(21,8.244507);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(22,4.605776);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(23,7.500852);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(24,15.04037);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(25,3.992135);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(26,11.10463);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(27,14.14294);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(28,5.116821);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(29,3.873756);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetBinError(30,7.879792);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetEntries(413);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_dPhi_Zb_all_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_dPhi_Zb_all_stack_5 = new TH1D("Zmm_2bjet_bX_dPhi_Zb_all_stack_5","",30,0,3.141593);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(1,7.330875);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(2,5.457629);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(3,0.6115915);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(4,2.229658);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(5,-2.186809);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(6,4.623093);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(7,0.5603981);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(8,1.549607);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(9,2.083248);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(10,4.691902);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(11,8.696547);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(12,7.799187);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(13,11.05078);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(14,14.25091);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(15,2.015496);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(16,-2.343434);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(17,13.39424);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(18,9.12543);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(19,15.33701);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(20,9.755304);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(21,11.09739);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(22,22.44047);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(23,23.69369);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(24,15.98077);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(25,15.19116);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(26,15.02486);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(27,19.65122);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(28,32.54195);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(29,31.46667);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinContent(30,36.52437);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(1,3.695963);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(2,1.992982);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(3,3.522055);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(4,3.159644);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(5,3.52554);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(6,2.362009);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(7,4.398685);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(8,4.427088);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(9,4.469988);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(10,2.885718);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(11,3.876433);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(12,3.773799);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(13,4.158828);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(14,4.549558);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(15,4.362944);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(16,3.760248);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(17,5.749244);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(18,5.770264);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(19,6.604616);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(20,5.543593);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(21,5.782918);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(22,7.791524);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(23,6.728576);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(24,7.555821);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(25,7.409162);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(26,8.093519);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(27,8.802763);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(28,9.878123);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(29,10.07148);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetBinError(30,10.40902);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetEntries(1366);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_dPhi_Zb_all_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_dPhi_Zb_all_stack_6 = new TH1D("Zmm_2bjet_bb_dPhi_Zb_all_stack_6","",30,0,3.141593);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(1,120.4706);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(2,146.8652);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(3,135.0356);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(4,154.4008);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(5,155.6997);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(6,135.8614);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(7,109.2435);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(8,171.9547);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(9,158.1253);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(10,152.7583);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(11,220.8793);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(12,187.5416);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(13,209.1646);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(14,236.7652);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(15,307.4382);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(16,336.2553);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(17,412.0916);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(18,398.5544);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(19,499.367);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(20,616.9065);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(21,759.1988);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(22,854.6093);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(23,935.654);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(24,1067.287);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(25,1135.759);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(26,1290.084);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(27,1400.207);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(28,1720.481);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(29,1684.957);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinContent(30,1583.148);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(1,17.34974);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(2,18.91874);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(3,18.52856);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(4,19.31977);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(5,18.52542);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(6,19.54931);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(7,19.7425);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(8,20.47675);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(9,20.38314);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(10,20.85285);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(11,22.18126);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(12,23.60744);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(13,23.76993);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(14,26.86951);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(15,26.64856);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(16,29.37854);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(17,31.7054);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(18,33.78368);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(19,35.26917);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(20,40.19852);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(21,43.23438);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(22,46.86193);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(23,50.78521);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(24,53.71802);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(25,74.14435);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(26,60.36955);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(27,65.57359);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(28,66.3047);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(29,66.4923);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetBinError(30,65.78431);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetEntries(67424);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_dPhi_Zb_all_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dPhi_Zb_all__647 = new TH1D("Zmm_2bjet_dPhi_Zb_all__647","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(1,224);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(2,233);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(3,218);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(4,217);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(5,250);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(6,255);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(7,287);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(8,289);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(9,296);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(10,326);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(11,342);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(12,360);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(13,391);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(14,419);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(15,442);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(16,502);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(17,568);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(18,652);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(19,736);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(20,817);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(21,964);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(22,1011);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(23,1196);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(24,1439);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(25,1424);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(26,1595);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(27,1758);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(28,1840);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(29,1936);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinContent(30,1820);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(1,14.96663);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(2,15.26434);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(3,14.76482);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(4,14.73092);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(5,15.81139);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(6,15.96872);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(7,16.94107);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(8,17);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(9,17.20465);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(10,18.05547);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(11,18.49324);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(12,18.97367);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(13,19.77372);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(14,20.46949);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(15,21.0238);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(16,22.40536);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(17,23.83275);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(18,25.53429);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(19,27.12932);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(20,28.58321);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(21,31.04835);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(22,31.79623);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(23,34.58323);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(24,37.93415);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(25,37.73592);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(26,39.93745);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(27,41.92851);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(28,42.89522);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(29,44);
   Zmm_2bjet_dPhi_Zb_all__647->SetBinError(30,42.66146);
   Zmm_2bjet_dPhi_Zb_all__647->SetEntries(22807);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_all__647->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_all__647->SetLineWidth(2);
   Zmm_2bjet_dPhi_Zb_all__647->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_Zb_all__647->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_Zb_all__647->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_all__647->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all__647->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all__647->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all__647->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all__647->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all__647->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all__647->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all__647->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_all__647->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all__647->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_all__647->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_all__647->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_all__647->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_all__647->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb_all_fx1647[30] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb_all_fy1647[30] = {
   240.4535,
   263.1915,
   245.5337,
   289.6395,
   267.4099,
   254.7704,
   231.7998,
   305.3341,
   309.3982,
   301.3502,
   384.2953,
   331.5265,
   417.1961,
   448.6497,
   553.8443,
   590.3353,
   741.7477,
   717.6997,
   850.537,
   1019.751,
   1188.825,
   1287.301,
   1456.785,
   1605.047,
   1687.061,
   1849.483,
   1995.203,
   2341.664,
   2312.59,
   2212.424};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb_all_fex1647[30] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb_all_fey1647[30] = {
   18.77578,
   19.97961,
   19.89791,
   25.69217,
   20.88989,
   20.57392,
   21.50485,
   23.38788,
   25.45332,
   22.95682,
   23.35694,
   26.96005,
   28.6788,
   28.14927,
   29.66943,
   34.6489,
   38.62571,
   35.39816,
   38.28095,
   43.3803,
   45.36844,
   48.65074,
   52.78335,
   57.21972,
   75.39998,
   62.81734,
   68.5242,
   68.18389,
   68.32076,
   67.97317};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zmm_2bjet_bb_dPhi_Zb_all_fx1647,Graph_from_Zmm_2bjet_bb_dPhi_Zb_all_fy1647,Graph_from_Zmm_2bjet_bb_dPhi_Zb_all_fex1647,Graph_from_Zmm_2bjet_bb_dPhi_Zb_all_fey1647);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dPhi_Zb_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647->SetMinimum(189.2655);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647->SetMaximum(2629.803);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb_all1647);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_all","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_dPhi_Zb_all_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_dPhi_Zb_all_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_dPhi_Zb_all_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_dPhi_Zb_all","MC unc. (stat.)","fl");

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
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__648 = new TH1D("data_mc_ratio__648","",30,0,3.141593);
   data_mc_ratio__648->SetBinContent(1,0.9315731);
   data_mc_ratio__648->SetBinContent(2,0.8852868);
   data_mc_ratio__648->SetBinContent(3,0.8878619);
   data_mc_ratio__648->SetBinContent(4,0.7492071);
   data_mc_ratio__648->SetBinContent(5,0.9348945);
   data_mc_ratio__648->SetBinContent(6,1.000901);
   data_mc_ratio__648->SetBinContent(7,1.238137);
   data_mc_ratio__648->SetBinContent(8,0.9465041);
   data_mc_ratio__648->SetBinContent(9,0.956696);
   data_mc_ratio__648->SetBinContent(10,1.081798);
   data_mc_ratio__648->SetBinContent(11,0.8899405);
   data_mc_ratio__648->SetBinContent(12,1.085886);
   data_mc_ratio__648->SetBinContent(13,0.9372091);
   data_mc_ratio__648->SetBinContent(14,0.9339135);
   data_mc_ratio__648->SetBinContent(15,0.7980582);
   data_mc_ratio__648->SetBinContent(16,0.8503642);
   data_mc_ratio__648->SetBinContent(17,0.765759);
   data_mc_ratio__648->SetBinContent(18,0.908458);
   data_mc_ratio__648->SetBinContent(19,0.8653357);
   data_mc_ratio__648->SetBinContent(20,0.8011759);
   data_mc_ratio__648->SetBinContent(21,0.810885);
   data_mc_ratio__648->SetBinContent(22,0.7853641);
   data_mc_ratio__648->SetBinContent(23,0.820986);
   data_mc_ratio__648->SetBinContent(24,0.8965468);
   data_mc_ratio__648->SetBinContent(25,0.8440715);
   data_mc_ratio__648->SetBinContent(26,0.8624034);
   data_mc_ratio__648->SetBinContent(27,0.8811131);
   data_mc_ratio__648->SetBinContent(28,0.7857661);
   data_mc_ratio__648->SetBinContent(29,0.8371566);
   data_mc_ratio__648->SetBinContent(30,0.8226272);
   data_mc_ratio__648->SetBinError(1,0.06224334);
   data_mc_ratio__648->SetBinError(2,0.05799707);
   data_mc_ratio__648->SetBinError(3,0.06013359);
   data_mc_ratio__648->SetBinError(4,0.05085949);
   data_mc_ratio__648->SetBinError(5,0.05912792);
   data_mc_ratio__648->SetBinError(6,0.06267886);
   data_mc_ratio__648->SetBinError(7,0.07308493);
   data_mc_ratio__648->SetBinError(8,0.05567671);
   data_mc_ratio__648->SetBinError(9,0.05560682);
   data_mc_ratio__648->SetBinError(10,0.05991524);
   data_mc_ratio__648->SetBinError(11,0.04812247);
   data_mc_ratio__648->SetBinError(12,0.05723121);
   data_mc_ratio__648->SetBinError(13,0.0473967);
   data_mc_ratio__648->SetBinError(14,0.04562466);
   data_mc_ratio__648->SetBinError(15,0.03795976);
   data_mc_ratio__648->SetBinError(16,0.03795361);
   data_mc_ratio__648->SetBinError(17,0.03213054);
   data_mc_ratio__648->SetBinError(18,0.03557796);
   data_mc_ratio__648->SetBinError(19,0.0318967);
   data_mc_ratio__648->SetBinError(20,0.0280296);
   data_mc_ratio__648->SetBinError(21,0.02611685);
   data_mc_ratio__648->SetBinError(22,0.02469992);
   data_mc_ratio__648->SetBinError(23,0.02373942);
   data_mc_ratio__648->SetBinError(24,0.02363429);
   data_mc_ratio__648->SetBinError(25,0.02236785);
   data_mc_ratio__648->SetBinError(26,0.02159385);
   data_mc_ratio__648->SetBinError(27,0.02101465);
   data_mc_ratio__648->SetBinError(28,0.01831827);
   data_mc_ratio__648->SetBinError(29,0.01902629);
   data_mc_ratio__648->SetBinError(30,0.01928268);
   data_mc_ratio__648->SetMinimum(0.4);
   data_mc_ratio__648->SetMaximum(1.6);
   data_mc_ratio__648->SetEntries(4541.384);
   data_mc_ratio__648->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__648->SetLineColor(ci);
   data_mc_ratio__648->SetLineWidth(2);
   data_mc_ratio__648->SetMarkerStyle(20);
   data_mc_ratio__648->SetMarkerSize(1.2);
   data_mc_ratio__648->GetXaxis()->SetTitle("dPhi_{Zb}");
   data_mc_ratio__648->GetXaxis()->SetRange(1,31);
   data_mc_ratio__648->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__648->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__648->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__648->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__648->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__648->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__648->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__648->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__648->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__648->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__648->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__648->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__648->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__648->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__648->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__648->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__648->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1648[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1648[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1648[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1648[30] = {
   0.07808487,
   0.07591281,
   0.08103944,
   0.08870394,
   0.07811938,
   0.08075473,
   0.09277337,
   0.07659766,
   0.08226719,
   0.07617988,
   0.06077861,
   0.08132094,
   0.06874178,
   0.0627422,
   0.05356999,
   0.05869359,
   0.05207392,
   0.04932169,
   0.04500798,
   0.04254009,
   0.03816243,
   0.03779282,
   0.03623277,
   0.03564987,
   0.0446931,
   0.03396482,
   0.03434447,
   0.02911771,
   0.02954296,
   0.0307234};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1648,Graph_from_mc_statistical_error_fy1648,Graph_from_mc_statistical_error_fex1648,Graph_from_mc_statistical_error_fey1648);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1648 = new TH1F("Graph_Graph_from_mc_statistical_error1648","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1648->SetMinimum(0.888672);
   Graph_Graph_from_mc_statistical_error1648->SetMaximum(1.111328);
   Graph_Graph_from_mc_statistical_error1648->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1648->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1648->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1648->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1648->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1648->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1648->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1648->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1648->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1648->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1648->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1648->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1648->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1648->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1648->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1648->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1648);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->Modified();
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zmm_All_amcnlo->SetSelected(dPhi_Zb_Z_2bjet_Zmm_All_amcnlo);
}

void dRmin_Z2b_Z_2bjet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: dRmin_Z2b_Z_2bjet_Zee_17_amcnlo/dRmin_Z2b_Z_2bjet_Zee_17_amcnlo
//=========  (Thu Jan 14 10:42:53 2021) by ROOT version 6.14/09
   TCanvas *dRmin_Z2b_Z_2bjet_Zee_17_amcnlo = new TCanvas("dRmin_Z2b_Z_2bjet_Zee_17_amcnlo", "dRmin_Z2b_Z_2bjet_Zee_17_amcnlo",0,0,600,600);
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->SetHighLightColor(2);
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->Range(0,0,1,1);
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->SetFillColor(0);
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->SetFillStyle(4000);
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->SetBorderMode(0);
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->SetBorderSize(2);
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.53025,6.314516,1538.72);
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
   st->SetMaximum(1318.757);
   
   TH1F *st_stack_242 = new TH1F("st_stack_242","",25,0,10);
   st_stack_242->SetMinimum(0.01);
   st_stack_242->SetMaximum(1384.695);
   st_stack_242->SetDirectory(0);
   st_stack_242->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_242->SetLineColor(ci);
   st_stack_242->GetXaxis()->SetRange(1,15);
   st_stack_242->GetXaxis()->SetLabelFont(42);
   st_stack_242->GetXaxis()->SetLabelSize(0.035);
   st_stack_242->GetXaxis()->SetTitleSize(0.035);
   st_stack_242->GetXaxis()->SetTitleFont(42);
   st_stack_242->GetYaxis()->SetTitle("Events/0.4");
   st_stack_242->GetYaxis()->SetLabelFont(42);
   st_stack_242->GetYaxis()->SetLabelSize(0.05);
   st_stack_242->GetYaxis()->SetTitleSize(0.057);
   st_stack_242->GetYaxis()->SetTitleOffset(1.2);
   st_stack_242->GetYaxis()->SetTitleFont(42);
   st_stack_242->GetZaxis()->SetLabelFont(42);
   st_stack_242->GetZaxis()->SetLabelSize(0.035);
   st_stack_242->GetZaxis()->SetTitleSize(0.035);
   st_stack_242->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_242);
   
   
   TH1D *Zee_2bjet_dRmin_Z2b_stack_1 = new TH1D("Zee_2bjet_dRmin_Z2b_stack_1","",25,0,10);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(1,0.5026488);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(2,1.165755);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(3,2.148265);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(4,2.708279);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(5,3.295364);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(6,4.819327);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(7,3.55764);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(8,2.734725);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(9,0.3471086);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(10,0.3662626);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(11,0.09483448);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(1,0.2913622);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(2,0.4524642);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(3,0.5949927);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(4,0.6643165);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(5,0.7406569);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(6,0.89258);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(7,0.752966);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(8,0.6969328);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(9,0.2194725);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(10,0.2594658);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(11,0.09018262);
   Zee_2bjet_dRmin_Z2b_stack_1->SetEntries(151);

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
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(1,0.2283298);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(2,1.506971);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(3,2.408133);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(4,6.513294);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(5,12.03599);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(6,12.38429);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(7,16.20682);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(8,9.038505);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(9,3.261997);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(10,0.2280867);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(11,0.550033);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(13,0.2142264);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(16,0.2981495);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(1,0.2283298);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(2,0.6757784);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(3,0.8599207);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(4,1.378514);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(5,1.95531);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(6,1.956531);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(7,2.261668);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(8,1.700113);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(9,0.9854681);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(10,0.2280867);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(11,0.3952032);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(13,0.2142264);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(16,0.2981495);
   Zee_2bjet_dRmin_Z2b_stack_2->SetEntries(230);

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
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(1,20.82699);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(2,61.99511);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(3,114.1501);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(4,195.3695);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(5,245.1148);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(6,231.6575);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(7,155.1249);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(8,65.13175);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(9,8.765455);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(10,1.589854);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(11,1.739989);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(15,0.3711352);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(1,2.606139);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(2,4.622169);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(3,6.269173);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(4,8.146707);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(5,9.132998);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(6,8.8399);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(7,7.275006);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(8,4.710748);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(9,1.696489);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(10,0.5681485);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(11,0.7177278);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(15,0.3711352);
   Zee_2bjet_dRmin_Z2b_stack_3->SetEntries(3646);

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
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(2,1.08575);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(3,-0.03454859);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(4,-0.3925059);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(5,-2.754668);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(6,0.8155236);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(7,2.043895);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(8,1.363348);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(9,2.448518);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(10,-1.413197);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(11,-0.8284799);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(12,0.7751586);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(13,-0.6387221);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(2,0.9159487);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(3,1.162362);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(4,1.058092);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(5,1.789318);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(6,1.467005);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(7,1.204322);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(8,0.961805);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(9,1.414817);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(10,1.009163);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(11,0.8284799);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(12,0.7751586);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(13,0.6387221);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetEntries(29);

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
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(2,-0.4245355);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(3,4.505206);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(4,3.198087);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(5,2.356515);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(6,5.83408);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(7,4.484448);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(8,0.05109918);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(9,4.677894);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(10,2.480965);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(11,0.6736691);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(12,1.959575);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(13,0.1155594);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(14,0.6406656);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(2,2.149326);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(3,2.176465);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(4,3.182574);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(5,3.228528);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(6,3.939211);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(7,3.707292);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(8,3.402317);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(9,2.104392);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(10,1.558756);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(11,0.5554808);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(12,1.138257);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(13,0.931996);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(14,0.6406656);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetEntries(165);

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
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(1,37.90109);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(2,79.59796);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(3,209.8037);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(4,254.316);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(5,403.7115);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(6,469.8056);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(7,470.9252);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(8,341.1916);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(9,71.87291);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(10,28.43489);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(11,12.13387);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(12,2.631342);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(13,2.810961);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(14,1.856597);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(15,3.171091);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(17,-0.4124116);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(18,-0.4780949);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(19,-0.08162539);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(1,7.841125);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(2,13.51252);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(3,18.5617);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(4,23.87379);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(5,28.41251);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(6,32.44933);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(7,31.92845);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(8,27.43274);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(9,12.74289);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(10,7.528752);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(11,4.739832);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(12,3.538196);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(13,1.849097);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(14,1.13483);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(15,2.335134);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(17,0.4124116);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(18,0.4780949);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(19,0.08162539);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetEntries(9701);

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
   
   TH1D *Zee_2bjet_dRmin_Z2b__483 = new TH1D("Zee_2bjet_dRmin_Z2b__483","",25,0,10);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(1,45);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(2,149);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(3,252);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(4,384);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(5,564);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(6,595);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(7,546);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(8,368);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(9,101);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(10,37);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(11,20);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(12,3);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(13,5);
   Zee_2bjet_dRmin_Z2b__483->SetBinContent(14,1);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(1,6.708204);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(2,12.20656);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(3,15.87451);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(4,19.59592);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(5,23.74868);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(6,24.39262);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(7,23.36664);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(8,19.18333);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(9,10.04988);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(10,6.082763);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(11,4.472136);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(12,1.732051);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(13,2.236068);
   Zee_2bjet_dRmin_Z2b__483->SetBinError(14,1);
   Zee_2bjet_dRmin_Z2b__483->SetEntries(3070);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b__483->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b__483->SetLineWidth(2);
   Zee_2bjet_dRmin_Z2b__483->SetMarkerStyle(20);
   Zee_2bjet_dRmin_Z2b__483->SetMarkerSize(1.2);
   Zee_2bjet_dRmin_Z2b__483->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b__483->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b__483->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b__483->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b__483->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b__483->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b__483->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b__483->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b__483->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b__483->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b__483->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b__483->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b__483->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b__483->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b__483->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dRmin_Z2b_fx1483[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dRmin_Z2b_fy1483[25] = {
   59.45906,
   144.927,
   332.9808,
   461.7127,
   663.7595,
   725.3163,
   652.3428,
   419.5111,
   91.37389,
   31.68686,
   14.36391,
   5.366075,
   2.502025,
   2.497263,
   3.542226,
   0.2981495,
   -0.4124116,
   -0.4780949,
   -0.08162539,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zee_2bjet_bb_dRmin_Z2b_fex1483[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dRmin_Z2b_fey1483[25] = {
   8.271169,
   14.49388,
   19.77424,
   25.49347,
   30.14431,
   33.9617,
   33.064,
   28.11803,
   13.14188,
   7.782826,
   4.913288,
   3.796753,
   2.17753,
   1.303185,
   2.364443,
   0.2981495,
   0.4124116,
   0.4780949,
   0.08162539,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_bb_dRmin_Z2b_fx1483,Graph_from_Zee_2bjet_bb_dRmin_Z2b_fy1483,Graph_from_Zee_2bjet_bb_dRmin_Z2b_fex1483,Graph_from_Zee_2bjet_bb_dRmin_Z2b_fey1483);
   gre->SetName("Graph_from_Zee_2bjet_bb_dRmin_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483","",100,0,11);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483->SetMinimum(-76.97961);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483->SetMaximum(835.3014);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1483);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__484 = new TH1D("data_mc_ratio__484","",25,0,10);
   data_mc_ratio__484->SetBinContent(1,0.7568233);
   data_mc_ratio__484->SetBinContent(2,1.028104);
   data_mc_ratio__484->SetBinContent(3,0.7568003);
   data_mc_ratio__484->SetBinContent(4,0.831686);
   data_mc_ratio__484->SetBinContent(5,0.8497054);
   data_mc_ratio__484->SetBinContent(6,0.8203318);
   data_mc_ratio__484->SetBinContent(7,0.8369832);
   data_mc_ratio__484->SetBinContent(8,0.8772117);
   data_mc_ratio__484->SetBinContent(9,1.105349);
   data_mc_ratio__484->SetBinContent(10,1.167676);
   data_mc_ratio__484->SetBinContent(11,1.392378);
   data_mc_ratio__484->SetBinContent(12,0.5590678);
   data_mc_ratio__484->SetBinContent(13,1.998381);
   data_mc_ratio__484->SetBinContent(14,0.4004384);
   data_mc_ratio__484->SetBinError(1,0.1128206);
   data_mc_ratio__484->SetBinError(2,0.08422554);
   data_mc_ratio__484->SetBinError(3,0.04767394);
   data_mc_ratio__484->SetBinError(4,0.0424418);
   data_mc_ratio__484->SetBinError(5,0.03577905);
   data_mc_ratio__484->SetBinError(6,0.03363032);
   data_mc_ratio__484->SetBinError(7,0.03581958);
   data_mc_ratio__484->SetBinError(8,0.04572782);
   data_mc_ratio__484->SetBinError(9,0.1099863);
   data_mc_ratio__484->SetBinError(10,0.1919648);
   data_mc_ratio__484->SetBinError(11,0.3113453);
   data_mc_ratio__484->SetBinError(12,0.322778);
   data_mc_ratio__484->SetBinError(13,0.8937034);
   data_mc_ratio__484->SetBinError(14,0.4004384);
   data_mc_ratio__484->SetMinimum(0.4);
   data_mc_ratio__484->SetMaximum(1.6);
   data_mc_ratio__484->SetEntries(37.05376);
   data_mc_ratio__484->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__484->SetLineColor(ci);
   data_mc_ratio__484->SetLineWidth(2);
   data_mc_ratio__484->SetMarkerStyle(20);
   data_mc_ratio__484->SetMarkerSize(1.2);
   data_mc_ratio__484->GetXaxis()->SetTitle("min[#Delta R(Z,b)]");
   data_mc_ratio__484->GetXaxis()->SetRange(1,15);
   data_mc_ratio__484->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__484->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__484->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__484->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__484->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__484->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__484->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__484->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__484->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__484->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__484->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__484->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__484->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__484->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__484->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__484->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__484->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1484[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1484[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1484[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1484[25] = {
   0.139107,
   0.1000081,
   0.05938553,
   0.055215,
   0.04541451,
   0.0468233,
   0.05068501,
   0.06702571,
   0.1438253,
   0.2456168,
   0.3420578,
   0.7075475,
   0.870307,
   0.5218453,
   0.667502,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1484,Graph_from_mc_statistical_error_fy1484,Graph_from_mc_statistical_error_fex1484,Graph_from_mc_statistical_error_fey1484);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1484 = new TH1F("Graph_Graph_from_mc_statistical_error1484","",100,0,11);
   Graph_Graph_from_mc_statistical_error1484->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1484->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1484->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1484->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1484->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1484->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1484->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1484);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->Modified();
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zee_17_amcnlo->SetSelected(dRmin_Z2b_Z_2bjet_Zee_17_amcnlo);
}

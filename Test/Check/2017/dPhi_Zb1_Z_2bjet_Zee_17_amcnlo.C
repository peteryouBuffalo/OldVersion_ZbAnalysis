void dPhi_Zb1_Z_2bjet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb1_Z_2bjet_Zee_17_amcnlo/dPhi_Zb1_Z_2bjet_Zee_17_amcnlo
//=========  (Thu Jan 14 10:42:52 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb1_Z_2bjet_Zee_17_amcnlo = new TCanvas("dPhi_Zb1_Z_2bjet_Zee_17_amcnlo", "dPhi_Zb1_Z_2bjet_Zee_17_amcnlo",0,0,600,600);
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->SetHighLightColor(2);
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->Range(0,0,1,1);
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->SetFillColor(0);
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->SetFillStyle(4000);
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->SetBorderMode(0);
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->SetBorderSize(2);
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-0.376126,3.416482,385.7499);
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
   st->SetMaximum(330.6069);
   
   TH1F *st_stack_238 = new TH1F("st_stack_238","",30,0,3.141593);
   st_stack_238->SetMinimum(0.01);
   st_stack_238->SetMaximum(347.1373);
   st_stack_238->SetDirectory(0);
   st_stack_238->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_238->SetLineColor(ci);
   st_stack_238->GetXaxis()->SetRange(1,31);
   st_stack_238->GetXaxis()->SetLabelFont(42);
   st_stack_238->GetXaxis()->SetLabelSize(0.035);
   st_stack_238->GetXaxis()->SetTitleSize(0.035);
   st_stack_238->GetXaxis()->SetTitleFont(42);
   st_stack_238->GetYaxis()->SetTitle("Events/0.105");
   st_stack_238->GetYaxis()->SetLabelFont(42);
   st_stack_238->GetYaxis()->SetLabelSize(0.05);
   st_stack_238->GetYaxis()->SetTitleSize(0.057);
   st_stack_238->GetYaxis()->SetTitleOffset(1.2);
   st_stack_238->GetYaxis()->SetTitleFont(42);
   st_stack_238->GetZaxis()->SetLabelFont(42);
   st_stack_238->GetZaxis()->SetLabelSize(0.035);
   st_stack_238->GetZaxis()->SetTitleSize(0.035);
   st_stack_238->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_238);
   
   
   TH1D *Zee_2bjet_dPhi_Zb1_stack_1 = new TH1D("Zee_2bjet_dPhi_Zb1_stack_1","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(1,0.9659631);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(2,0.6793208);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(3,0.4986841);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(4,0.3557294);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(5,0.08616845);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(6,0.3579895);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(7,0.7056515);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(8,0.5668741);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(9,1.029199);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(11,0.4859366);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(12,0.06503431);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(13,0.2927226);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(14,0.7565342);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(15,0.9275721);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(16,1.222824);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(17,0.9971952);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(18,0.5715197);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(19,0.9109662);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(20,0.9774058);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(21,0.652115);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(22,0.7567664);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(23,0.8443988);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(24,0.3143393);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(25,1.31829);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(26,0.7712729);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(27,1.098013);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(28,1.398864);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(29,0.7697347);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(30,1.363125);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(1,0.3998252);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(2,0.3432288);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(3,0.2910766);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(4,0.2526236);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(5,0.08616845);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(6,0.2550097);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(7,0.3537028);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(8,0.327313);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(9,0.424517);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(11,0.2386235);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(12,0.1444204);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(13,0.2069884);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(14,0.3491067);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(15,0.3788629);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(16,0.464728);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(17,0.4121047);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(18,0.3124388);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(19,0.3944409);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(20,0.4053757);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(21,0.3224008);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(22,0.3474046);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(23,0.352373);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(24,0.2129165);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(25,0.4738793);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(26,0.3499327);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(27,0.4227088);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(28,0.4992489);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(29,0.3428505);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(30,0.4683838);
   Zee_2bjet_dPhi_Zb1_stack_1->SetEntries(151);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_dPhi_Zb1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_stack_1->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_stack_1,"");
   
   TH1D *Zee_2bjet_dPhi_Zb1_stack_2 = new TH1D("Zee_2bjet_dPhi_Zb1_stack_2","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(1,0.2283298);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(2,0.2535944);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(4,0.3186871);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(5,0.6513769);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(6,0.5501833);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(7,1.322771);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(8,0.8949754);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(9,1.628251);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(10,2.104164);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(11,1.257453);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(12,2.293823);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(13,3.128897);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(14,1.227524);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(15,2.001396);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(16,3.105833);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(17,5.037705);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(18,1.193315);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(19,3.499184);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(20,3.135728);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(21,5.074399);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(22,3.225437);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(23,5.588229);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(24,3.240931);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(25,3.55247);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(26,1.60691);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(27,1.788508);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(28,3.610475);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(29,2.345589);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(30,1.00869);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(1,0.2283298);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(2,0.2535944);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(4,0.3186871);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(5,0.4608362);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(6,0.3890545);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(7,0.5832693);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(8,0.522131);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(9,0.7282896);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(10,0.755046);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(11,0.6303171);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(12,0.8208369);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(13,0.9591639);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(14,0.6200568);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(15,0.7608679);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(16,1.007704);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(17,1.316253);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(18,0.5891952);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(19,1.01646);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(20,0.9951934);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(21,1.271907);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(22,1.015174);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(23,1.295844);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(24,1.029743);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(25,1.064663);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(26,0.6457431);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(27,0.745394);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(28,1.03588);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(29,0.9225961);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(30,0.5770503);
   Zee_2bjet_dPhi_Zb1_stack_2->SetEntries(230);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dPhi_Zb1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_stack_2->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_stack_2,"");
   
   TH1D *Zee_2bjet_dPhi_Zb1_stack_3 = new TH1D("Zee_2bjet_dPhi_Zb1_stack_3","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(1,21.48539);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(2,18.31766);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(3,20.46509);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(4,17.11839);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(5,23.82412);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(6,24.22773);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(7,17.05789);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(8,21.85426);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(9,22.36535);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(10,31.02223);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(11,25.84404);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(12,35.57145);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(13,34.03683);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(14,42.59291);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(15,45.08345);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(16,39.70507);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(17,42.98544);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(18,54.05308);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(19,41.90369);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(20,45.63873);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(21,47.43541);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(22,52.65043);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(23,51.86907);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(24,49.57964);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(25,54.02574);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(26,40.54569);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(27,45.47981);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(28,46.49491);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(29,44.84314);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(30,43.76038);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(1,2.70496);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(2,2.527123);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(3,2.63091);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(4,2.494246);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(5,2.886071);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(6,2.87149);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(7,2.400426);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(8,2.731294);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(9,2.745963);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(10,3.238689);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(11,2.922316);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(12,3.520431);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(13,3.360737);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(14,3.795609);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(15,3.891668);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(16,3.656314);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(17,3.819434);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(18,4.258221);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(19,3.743586);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(20,3.871015);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(21,4.040151);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(22,4.239958);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(23,4.206797);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(24,4.139441);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(25,4.25918);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(26,3.757657);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(27,3.927253);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(28,3.939878);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(29,3.948909);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(30,3.857571);
   Zee_2bjet_dPhi_Zb1_stack_3->SetEntries(3646);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dPhi_Zb1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_stack_3->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_stack_3,"");
   
   TH1D *Zee_2bjet_XX_dPhi_Zb1_stack_4 = new TH1D("Zee_2bjet_XX_dPhi_Zb1_stack_4","",30,0,3.141593);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(4,1.671258);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(5,-0.6387221);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(6,-0.8451038);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(8,0.8044585);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(9,0.8011105);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(10,-0.06136071);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(12,-0.8390071);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(14,0.5257335);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(15,0.7850021);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(16,0.4865629);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(17,0.8014519);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(19,0.6055117);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(21,0.8475609);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(23,-1.951294);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(24,0.1405297);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(25,0.8142656);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(26,-0.8284799);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(27,-1.374553);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(28,-0.2181512);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(29,0.7562214);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(30,0.1870755);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(4,1.184848);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(5,0.6387221);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(6,0.8451038);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(8,0.8044585);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(9,0.8011105);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(10,0.06136071);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(12,0.8390071);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(14,0.5257335);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(15,0.7850021);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(16,0.4865629);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(17,0.8014519);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(19,0.6055117);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(21,0.8475609);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(23,1.389012);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(24,1.079735);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(25,0.8142656);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(26,0.8284799);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(27,1.009903);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(28,1.067557);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(29,0.7562214);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(30,1.09488);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetEntries(29);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetRange(1,60);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_dPhi_Zb1_stack_4,"");
   
   TH1D *Zee_2bjet_bX_dPhi_Zb1_stack_5 = new TH1D("Zee_2bjet_bX_dPhi_Zb1_stack_5","",30,0,3.141593);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(1,1.885947);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(2,0.3096191);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(3,0.2781015);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(4,2.428119);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(5,-1.661593);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(6,1.324924);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(7,1.348769);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(8,0.5270388);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(9,0.9826472);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(10,1.576266);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(11,1.642336);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(12,1.97529);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(13,0.5078299);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(14,2.443705);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(15,-0.4245897);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(16,0.07023749);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(17,-0.2538799);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(18,1.365673);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(19,4.153824);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(20,0.368564);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(21,2.164569);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(22,1.39706);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(23,2.937534);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(24,1.350214);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(25,1.614838);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(26,2.920794);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(27,-0.3141204);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(28,0.4526856);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(29,-3.05751);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(30,0.2383318);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(1,1.070387);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(2,1.352974);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(3,1.635187);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(4,1.477754);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(5,2.135446);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(6,1.532372);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(7,0.9688872);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(8,0.6249946);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(9,1.12245);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(10,1.851508);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(11,1.468541);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(12,1.147936);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(13,1.168207);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(14,1.734573);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(15,1.683813);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(16,0.07023749);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(17,1.867469);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(18,1.678184);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(19,2.234583);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(20,2.155813);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(21,1.765292);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(22,1.377975);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(23,1.944639);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(24,1.858957);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(25,1.455195);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(26,1.774418);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(27,1.046189);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(28,1.525828);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(29,1.974976);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(30,2.872892);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetEntries(165);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetRange(1,60);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_dPhi_Zb1_stack_5,"");
   
   TH1D *Zee_2bjet_bb_dPhi_Zb1_stack_6 = new TH1D("Zee_2bjet_bb_dPhi_Zb1_stack_6","",30,0,3.141593);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(1,35.88154);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(2,56.87882);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(3,57.91954);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(4,59.95461);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(5,40.7997);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(6,63.31283);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(7,55.85151);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(8,56.54796);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(9,50.92158);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(10,83.51819);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(11,58.09491);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(12,50.75084);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(13,65.52838);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(14,73.49141);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(15,93.23101);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(16,97.59616);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(17,99.24615);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(18,87.60999);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(19,76.95857);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(20,98.8382);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(21,125.6598);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(22,89.53839);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(23,89.91324);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(24,118.6039);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(25,90.58036);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(26,130.7517);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(27,96.2067);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(28,93.60226);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(29,95.64435);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(30,95.75968);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(1,9.945003);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(2,10.88078);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(3,10.38927);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(4,10.17792);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(5,10.26447);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(6,10.6051);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(7,10.30443);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(8,10.45328);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(9,9.913706);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(10,11.90741);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(11,11.21135);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(12,11.79763);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(13,12.58314);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(14,12.5036);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(15,12.59087);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(16,13.79187);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(17,13.88654);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(18,13.93486);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(19,13.52343);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(20,14.11444);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(21,15.97999);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(22,15.52197);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(23,15.37687);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(24,14.78353);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(25,14.41856);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(26,15.10471);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(27,15.20441);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(28,14.37418);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(29,15.06399);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(30,14.27413);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetEntries(9701);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetRange(1,60);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_dPhi_Zb1_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dPhi_Zb1__475 = new TH1D("Zee_2bjet_dPhi_Zb1__475","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(1,68);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(2,56);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(3,50);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(4,80);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(5,68);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(6,63);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(7,65);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(8,76);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(9,61);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(10,69);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(11,82);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(12,82);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(13,101);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(14,95);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(15,86);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(16,95);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(17,103);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(18,119);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(19,130);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(20,110);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(21,134);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(22,132);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(23,155);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(24,151);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(25,155);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(26,146);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(27,142);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(28,139);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(29,118);
   Zee_2bjet_dPhi_Zb1__475->SetBinContent(30,139);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(1,8.246211);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(2,7.483315);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(3,7.071068);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(4,8.944272);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(5,8.246211);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(6,7.937254);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(7,8.062258);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(8,8.717798);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(9,7.81025);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(10,8.306624);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(11,9.055385);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(12,9.055385);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(13,10.04988);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(14,9.746794);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(15,9.273618);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(16,9.746794);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(17,10.14889);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(18,10.90871);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(19,11.40175);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(20,10.48809);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(21,11.57584);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(22,11.48913);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(23,12.4499);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(24,12.28821);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(25,12.4499);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(26,12.08305);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(27,11.91638);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(28,11.78983);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(29,10.86278);
   Zee_2bjet_dPhi_Zb1__475->SetBinError(30,11.78983);
   Zee_2bjet_dPhi_Zb1__475->SetEntries(3070);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1__475->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1__475->SetLineWidth(2);
   Zee_2bjet_dPhi_Zb1__475->SetMarkerStyle(20);
   Zee_2bjet_dPhi_Zb1__475->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_Zb1__475->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1__475->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1__475->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1__475->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1__475->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1__475->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1__475->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1__475->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1__475->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1__475->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1__475->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1__475->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1__475->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1__475->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1__475->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb1_fx1475[30] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb1_fy1475[30] = {
   60.44716,
   76.43901,
   79.16142,
   81.8468,
   63.06105,
   88.92855,
   76.2866,
   81.19557,
   77.72814,
   118.1595,
   87.32468,
   89.81743,
   103.4947,
   121.0378,
   141.6038,
   142.1867,
   148.8141,
   144.7936,
   128.0317,
   148.9586,
   181.8338,
   147.5681,
   149.2012,
   173.2295,
   151.906,
   175.7678,
   142.8844,
   145.341,
   141.3015,
   142.3173};
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb1_fex1475[30] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb1_fey1475[30] = {
   10.37196,
   11.26012,
   10.84514,
   10.65665,
   10.90306,
   11.13519,
   10.64647,
   10.86962,
   10.41317,
   12.5011,
   11.69808,
   12.4215,
   13.11326,
   13.21129,
   13.33601,
   14.31983,
   14.61014,
   14.68243,
   14.26346,
   14.83255,
   16.6505,
   16.18515,
   16.1759,
   15.53754,
   15.17149,
   15.70499,
   15.79386,
   15.06419,
   15.74671,
   15.12072};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zee_2bjet_bb_dPhi_Zb1_fx1475,Graph_from_Zee_2bjet_bb_dPhi_Zb1_fy1475,Graph_from_Zee_2bjet_bb_dPhi_Zb1_fex1475,Graph_from_Zee_2bjet_bb_dPhi_Zb1_fey1475);
   gre->SetName("Graph_from_Zee_2bjet_bb_dPhi_Zb1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475->SetMinimum(35.23429);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475->SetMaximum(213.3252);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11475);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_dPhi_Zb1_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_dPhi_Zb1_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_dPhi_Zb1_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_dPhi_Zb1","MC unc. (stat.)","fl");

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
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__476 = new TH1D("data_mc_ratio__476","",30,0,3.141593);
   data_mc_ratio__476->SetBinContent(1,1.124949);
   data_mc_ratio__476->SetBinContent(2,0.7326102);
   data_mc_ratio__476->SetBinContent(3,0.6316208);
   data_mc_ratio__476->SetBinContent(4,0.9774359);
   data_mc_ratio__476->SetBinContent(5,1.07832);
   data_mc_ratio__476->SetBinContent(6,0.7084339);
   data_mc_ratio__476->SetBinContent(7,0.8520501);
   data_mc_ratio__476->SetBinContent(8,0.9360117);
   data_mc_ratio__476->SetBinContent(9,0.7847866);
   data_mc_ratio__476->SetBinContent(10,0.5839565);
   data_mc_ratio__476->SetBinContent(11,0.9390243);
   data_mc_ratio__476->SetBinContent(12,0.9129631);
   data_mc_ratio__476->SetBinContent(13,0.9758958);
   data_mc_ratio__476->SetBinContent(14,0.7848787);
   data_mc_ratio__476->SetBinContent(15,0.6073282);
   data_mc_ratio__476->SetBinContent(16,0.6681357);
   data_mc_ratio__476->SetBinContent(17,0.6921389);
   data_mc_ratio__476->SetBinContent(18,0.8218597);
   data_mc_ratio__476->SetBinContent(19,1.015373);
   data_mc_ratio__476->SetBinContent(20,0.7384601);
   data_mc_ratio__476->SetBinContent(21,0.7369366);
   data_mc_ratio__476->SetBinContent(22,0.8945024);
   data_mc_ratio__476->SetBinContent(23,1.038866);
   data_mc_ratio__476->SetBinContent(24,0.8716759);
   data_mc_ratio__476->SetBinContent(25,1.020368);
   data_mc_ratio__476->SetBinContent(26,0.8306411);
   data_mc_ratio__476->SetBinContent(27,0.9938107);
   data_mc_ratio__476->SetBinContent(28,0.9563713);
   data_mc_ratio__476->SetBinContent(29,0.8350936);
   data_mc_ratio__476->SetBinContent(30,0.9766909);
   data_mc_ratio__476->SetBinError(1,0.1364202);
   data_mc_ratio__476->SetBinError(2,0.09789916);
   data_mc_ratio__476->SetBinError(3,0.08932467);
   data_mc_ratio__476->SetBinError(4,0.1092807);
   data_mc_ratio__476->SetBinError(5,0.1307655);
   data_mc_ratio__476->SetBinError(6,0.08925428);
   data_mc_ratio__476->SetBinError(7,0.1056838);
   data_mc_ratio__476->SetBinError(8,0.1073679);
   data_mc_ratio__476->SetBinError(9,0.1004816);
   data_mc_ratio__476->SetBinError(10,0.0703001);
   data_mc_ratio__476->SetBinError(11,0.1036979);
   data_mc_ratio__476->SetBinError(12,0.1008199);
   data_mc_ratio__476->SetBinError(13,0.09710526);
   data_mc_ratio__476->SetBinError(14,0.08052685);
   data_mc_ratio__476->SetBinError(15,0.06548988);
   data_mc_ratio__476->SetBinError(16,0.06854927);
   data_mc_ratio__476->SetBinError(17,0.06819847);
   data_mc_ratio__476->SetBinError(18,0.07533975);
   data_mc_ratio__476->SetBinError(19,0.08905412);
   data_mc_ratio__476->SetBinError(20,0.07040941);
   data_mc_ratio__476->SetBinError(21,0.06366163);
   data_mc_ratio__476->SetBinError(22,0.07785644);
   data_mc_ratio__476->SetBinError(23,0.0834437);
   data_mc_ratio__476->SetBinError(24,0.07093598);
   data_mc_ratio__476->SetBinError(25,0.08195794);
   data_mc_ratio__476->SetBinError(26,0.06874435);
   data_mc_ratio__476->SetBinError(27,0.08339874);
   data_mc_ratio__476->SetBinError(28,0.08111835);
   data_mc_ratio__476->SetBinError(29,0.0768766);
   data_mc_ratio__476->SetBinError(30,0.08284184);
   data_mc_ratio__476->SetMinimum(0.4);
   data_mc_ratio__476->SetMaximum(1.6);
   data_mc_ratio__476->SetEntries(1136.94);
   data_mc_ratio__476->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__476->SetLineColor(ci);
   data_mc_ratio__476->SetLineWidth(2);
   data_mc_ratio__476->SetMarkerStyle(20);
   data_mc_ratio__476->SetMarkerSize(1.2);
   data_mc_ratio__476->GetXaxis()->SetTitle("dPhi_{Zb1}");
   data_mc_ratio__476->GetXaxis()->SetRange(1,31);
   data_mc_ratio__476->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__476->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__476->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__476->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__476->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__476->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__476->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__476->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__476->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__476->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__476->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__476->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__476->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__476->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__476->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__476->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__476->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1476[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1476[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1476[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1476[30] = {
   0.1715873,
   0.1473086,
   0.1370003,
   0.1302024,
   0.1728969,
   0.125215,
   0.1395588,
   0.1338696,
   0.1339692,
   0.1057985,
   0.1339608,
   0.1382972,
   0.1267047,
   0.1091501,
   0.09417829,
   0.1007114,
   0.09817712,
   0.1014025,
   0.1114057,
   0.09957496,
   0.09156987,
   0.1096792,
   0.1084167,
   0.08969336,
   0.09987424,
   0.08935074,
   0.110536,
   0.1036472,
   0.1114405,
   0.1062466};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1476,Graph_from_mc_statistical_error_fy1476,Graph_from_mc_statistical_error_fex1476,Graph_from_mc_statistical_error_fey1476);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1476 = new TH1F("Graph_Graph_from_mc_statistical_error1476","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1476->SetMinimum(0.7925238);
   Graph_Graph_from_mc_statistical_error1476->SetMaximum(1.207476);
   Graph_Graph_from_mc_statistical_error1476->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1476->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1476->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1476->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1476->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1476);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->Modified();
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zee_17_amcnlo->SetSelected(dPhi_Zb1_Z_2bjet_Zee_17_amcnlo);
}

void dPhi_2b_Z_2bjet_Zee_All_amcnlo()
{
//=========Macro generated from canvas: dPhi_2b_Z_2bjet_Zee_All_amcnlo/dPhi_2b_Z_2bjet_Zee_All_amcnlo
//=========  (Thu Jan 14 10:42:51 2021) by ROOT version 6.14/09
   TCanvas *dPhi_2b_Z_2bjet_Zee_All_amcnlo = new TCanvas("dPhi_2b_Z_2bjet_Zee_All_amcnlo", "dPhi_2b_Z_2bjet_Zee_All_amcnlo",0,0,600,600);
   dPhi_2b_Z_2bjet_Zee_All_amcnlo->SetHighLightColor(2);
   dPhi_2b_Z_2bjet_Zee_All_amcnlo->Range(0,0,1,1);
   dPhi_2b_Z_2bjet_Zee_All_amcnlo->SetFillColor(0);
   dPhi_2b_Z_2bjet_Zee_All_amcnlo->SetFillStyle(4000);
   dPhi_2b_Z_2bjet_Zee_All_amcnlo->SetBorderMode(0);
   dPhi_2b_Z_2bjet_Zee_All_amcnlo->SetBorderSize(2);
   dPhi_2b_Z_2bjet_Zee_All_amcnlo->SetFrameFillStyle(1000);
   dPhi_2b_Z_2bjet_Zee_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4813718,-2.201461,3.306273,2209.26);
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
   st->SetMaximum(1893.442);
   Double_t xAxis28[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1F *st_stack_228 = new TH1F("st_stack_228","",31, xAxis28);
   st_stack_228->SetMinimum(0.01);
   st_stack_228->SetMaximum(1988.114);
   st_stack_228->SetDirectory(0);
   st_stack_228->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_228->SetLineColor(ci);
   st_stack_228->GetXaxis()->SetRange(1,31);
   st_stack_228->GetXaxis()->SetLabelFont(42);
   st_stack_228->GetXaxis()->SetLabelSize(0.035);
   st_stack_228->GetXaxis()->SetTitleSize(0.035);
   st_stack_228->GetXaxis()->SetTitleFont(42);
   st_stack_228->GetYaxis()->SetTitle("Events/0.10000000149");
   st_stack_228->GetYaxis()->SetLabelFont(42);
   st_stack_228->GetYaxis()->SetLabelSize(0.05);
   st_stack_228->GetYaxis()->SetTitleSize(0.057);
   st_stack_228->GetYaxis()->SetTitleOffset(1.2);
   st_stack_228->GetYaxis()->SetTitleFont(42);
   st_stack_228->GetZaxis()->SetLabelFont(42);
   st_stack_228->GetZaxis()->SetLabelSize(0.035);
   st_stack_228->GetZaxis()->SetTitleSize(0.035);
   st_stack_228->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_228);
   
   Double_t xAxis29[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_dPhi_2b_all_stack_1 = new TH1D("Zee_2bjet_dPhi_2b_all_stack_1","",31, xAxis29);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(1,1.388168);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(2,1.592826);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(3,1.418794);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(4,2.179386);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(5,2.167308);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(6,2.080649);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(7,0.7461769);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(8,2.190269);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(9,0.4531332);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(10,1.750105);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(11,3.232144);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(12,0.9460937);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(13,3.106791);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(14,1.978896);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(15,2.107458);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(16,3.550635);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(17,3.810067);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(18,2.704642);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(19,3.188306);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(20,3.793869);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(21,1.970851);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(22,3.937695);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(23,2.055271);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(24,2.899169);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(25,3.599078);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(26,3.759324);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(27,3.351137);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(28,4.304642);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(29,4.658072);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(30,4.152901);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinContent(31,9.051713);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(1,0.5158086);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(2,0.5371398);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(3,0.5330977);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(4,0.7168183);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(5,0.6640179);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(6,0.6246763);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(7,0.3475374);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(8,0.6367923);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(9,0.2664835);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(10,0.6473994);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(11,0.8779832);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(12,0.4187146);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(13,0.8742485);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(14,0.6971201);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(15,0.7193431);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(16,0.9753388);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(17,0.9705715);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(18,0.8366215);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(19,0.8322408);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(20,0.9032458);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(21,0.6484854);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(22,0.9677541);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(23,0.6942941);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(24,0.7691978);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(25,0.8388002);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(26,0.91028);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(27,0.8544427);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(28,1.001454);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(29,1.028704);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(30,0.9231097);
   Zee_2bjet_dPhi_2b_all_stack_1->SetBinError(31,1.452336);
   Zee_2bjet_dPhi_2b_all_stack_1->SetEntries(475);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_dPhi_2b_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_2b_all_stack_1->SetLineColor(ci);
   Zee_2bjet_dPhi_2b_all_stack_1->GetXaxis()->SetRange(1,31);
   Zee_2bjet_dPhi_2b_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_2b_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_2b_all_stack_1,"");
   Double_t xAxis30[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_dPhi_2b_all_stack_2 = new TH1D("Zee_2bjet_dPhi_2b_all_stack_2","",31, xAxis30);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(1,1.715824);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(2,4.345324);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(3,2.693212);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(4,4.106157);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(5,5.69339);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(6,3.996701);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(7,5.051793);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(8,4.615589);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(9,4.857624);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(10,4.985443);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(11,9.413911);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(12,9.480079);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(13,7.096827);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(14,6.732852);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(15,6.249616);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(16,8.473137);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(17,8.930677);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(18,7.980783);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(19,5.076317);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(20,8.238762);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(21,6.474596);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(22,7.232952);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(23,4.569515);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(24,7.317062);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(25,7.545738);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(26,8.29184);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(27,9.177217);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(28,10.3126);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(29,8.867621);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(30,7.027817);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinContent(31,9.727866);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(1,0.8414411);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(2,1.369667);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(3,1.064905);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(4,1.240918);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(5,1.52683);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(6,1.088463);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(7,1.399526);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(8,1.301973);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(9,1.277261);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(10,1.334685);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(11,1.858438);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(12,2.140481);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(13,1.696568);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(14,1.490938);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(15,1.533811);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(16,1.839438);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(17,1.930761);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(18,1.885214);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(19,1.423603);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(20,1.818124);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(21,1.559939);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(22,1.731983);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(23,1.184294);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(24,1.676559);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(25,1.630917);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(26,1.79884);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(27,1.861558);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(28,1.991247);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(29,2.013421);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(30,1.60757);
   Zee_2bjet_dPhi_2b_all_stack_2->SetBinError(31,1.982988);
   Zee_2bjet_dPhi_2b_all_stack_2->SetEntries(618);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dPhi_2b_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_2b_all_stack_2->SetLineColor(ci);
   Zee_2bjet_dPhi_2b_all_stack_2->GetXaxis()->SetRange(1,31);
   Zee_2bjet_dPhi_2b_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_2b_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_2b_all_stack_2,"");
   Double_t xAxis31[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_dPhi_2b_all_stack_3 = new TH1D("Zee_2bjet_dPhi_2b_all_stack_3","",31, xAxis31);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(1,40.4085);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(2,50.74328);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(3,47.25008);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(4,54.55034);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(5,55.43362);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(6,67.19091);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(7,70.43485);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(8,77.0981);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(9,77.44513);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(10,77.75376);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(11,77.28331);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(12,77.53249);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(13,87.24888);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(14,93.13606);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(15,98.53201);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(16,109.8901);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(17,111.2515);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(18,113.7821);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(19,124.3971);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(20,126.8915);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(21,132.6755);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(22,143.6571);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(23,149.4735);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(24,168.5728);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(25,174.7766);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(26,185.3452);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(27,196.1689);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(28,196.6008);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(29,209.7826);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(30,205.9689);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinContent(31,307.2236);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(1,2.520451);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(2,3.148694);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(3,2.83666);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(4,3.210258);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(5,3.046235);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(6,3.53196);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(7,3.695532);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(8,3.758423);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(9,3.769712);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(10,3.774393);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(11,3.612569);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(12,3.65649);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(13,3.9229);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(14,4.098339);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(15,4.297977);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(16,4.555929);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(17,4.470452);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(18,4.46319);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(19,4.798447);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(20,4.802382);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(21,4.897918);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(22,5.070154);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(23,5.101218);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(24,5.540032);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(25,5.549548);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(26,5.825438);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(27,5.90351);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(28,5.802573);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(29,6.061411);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(30,5.975836);
   Zee_2bjet_dPhi_2b_all_stack_3->SetBinError(31,7.433296);
   Zee_2bjet_dPhi_2b_all_stack_3->SetEntries(32755);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dPhi_2b_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_2b_all_stack_3->SetLineColor(ci);
   Zee_2bjet_dPhi_2b_all_stack_3->GetXaxis()->SetRange(1,31);
   Zee_2bjet_dPhi_2b_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_2b_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_2b_all_stack_3,"");
   Double_t xAxis32[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_XX_dPhi_2b_all_stack_4 = new TH1D("Zee_2bjet_XX_dPhi_2b_all_stack_4","",31, xAxis32);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(1,0.4023746);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(2,2.053401);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(4,1.860865);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(5,3.157818);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(6,-0.4388647);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(7,0.6034423);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(8,-0.5462203);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(9,1.38153);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(10,1.634143);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(11,0.3909382);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(12,0.6364795);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(13,2.645886);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(14,0.8067674);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(15,2.647901);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(16,-0.5689269);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(17,0.630004);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(18,1.442968);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(19,1.582846);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(20,-1.088744);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(21,8.657624);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(22,2.497172);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(23,0.747533);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(24,3.562235);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(25,0.5319878);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(26,-1.188863);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(27,1.401603);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(28,3.36338);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(29,1.6219);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(30,3.213183);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(31,11.75609);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(1,0.4023746);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(2,2.053401);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(4,2.446438);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(5,1.52466);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(6,1.169706);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(7,1.132086);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(8,1.683099);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(9,0.990053);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(10,1.240468);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(11,0.3909382);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(12,1.010679);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(13,1.28806);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(14,0.8067674);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(15,1.503944);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(16,0.7562428);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(17,0.630004);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(18,2.397175);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(19,1.836953);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(20,1.088744);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(21,10.28203);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(22,1.874483);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(23,1.472992);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(24,3.609913);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(25,1.049388);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(26,2.156036);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(27,1.605803);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(28,2.41105);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(29,1.20896);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(30,3.213766);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(31,7.25373);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetEntries(129);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_dPhi_2b_all_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->GetXaxis()->SetRange(1,31);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_2b_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_dPhi_2b_all_stack_4,"");
   Double_t xAxis33[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_bX_dPhi_2b_all_stack_5 = new TH1D("Zee_2bjet_bX_dPhi_2b_all_stack_5","",31, xAxis33);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(1,4.155893);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(2,0.02326219);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(3,8.555092);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(4,7.566377);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(5,4.24371);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(6,0.9946809);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(7,-5.690114);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(8,1.065912);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(9,7.654892);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(10,2.065573);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(11,2.939983);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(12,4.869107);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(13,3.914523);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(14,-1.254604);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(15,6.0747);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(16,2.97801);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(17,5.016327);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(18,2.089569);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(19,4.076318);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(20,6.057651);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(21,5.828979);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(22,9.451846);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(23,9.221176);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(24,4.088059);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(25,3.114382);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(26,2.234241);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(27,10.11581);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(28,1.496468);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(29,0.1158078);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(30,11.55141);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(31,11.53556);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(1,2.735797);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(2,2.074558);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(3,3.72371);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(4,4.420106);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(5,3.429003);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(6,2.751276);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(7,3.141991);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(8,1.581112);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(9,3.930692);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(10,2.487525);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(11,3.548298);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(12,2.275967);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(13,4.056518);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(14,3.585832);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(15,3.928963);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(16,3.013505);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(17,3.484163);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(18,3.962719);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(19,2.227699);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(20,3.690499);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(21,3.871036);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(22,3.888149);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(23,3.915206);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(24,3.482447);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(25,4.030333);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(26,3.780593);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(27,5.068688);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(28,3.393185);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(29,4.515038);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(30,5.346253);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(31,6.477705);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetEntries(615);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_dPhi_2b_all_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->GetXaxis()->SetRange(1,31);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_2b_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_dPhi_2b_all_stack_5,"");
   Double_t xAxis34[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_bb_dPhi_2b_all_stack_6 = new TH1D("Zee_2bjet_bb_dPhi_2b_all_stack_6","",31, xAxis34);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(1,139.781);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(2,167.0089);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(3,177.6322);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(4,136.8428);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(5,219.2348);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(6,215.873);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(7,242.3797);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(8,206.4934);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(9,172.2443);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(10,189.8906);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(11,185.9758);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(12,200.3472);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(13,202.7481);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(14,210.9808);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(15,192.1763);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(16,191.1213);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(17,218.6527);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(18,220.2474);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(19,251.0948);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(20,252.5055);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(21,300.1015);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(22,296.837);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(23,270.2578);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(24,315.2689);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(25,352.868);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(26,433.0657);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(27,339.9115);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(28,419.5997);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(29,438.075);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(30,442.7394);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(31,692.098);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(1,19.05765);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(2,18.74689);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(3,19.51058);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(4,19.80674);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(5,25.11557);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(6,21.49804);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(7,21.72299);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(8,21.44854);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(9,21.17373);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(10,21.44483);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(11,22.16111);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(12,22.7553);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(13,22.56563);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(14,23.00341);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(15,21.47954);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(16,23.67584);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(17,23.16216);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(18,24.18685);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(19,26.40539);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(20,24.68956);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(21,25.76452);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(22,26.66702);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(23,27.50303);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(24,28.73403);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(25,30.12986);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(26,30.45496);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(27,30.60449);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(28,32.05118);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(29,31.81454);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(30,32.75668);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(31,39.83968);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetEntries(34449);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_dPhi_2b_all_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->GetXaxis()->SetRange(1,31);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_2b_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_dPhi_2b_all_stack_6,"");
   st->Draw("hist");
   Double_t xAxis35[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_dPhi_2b_all__455 = new TH1D("Zee_2bjet_dPhi_2b_all__455","",31, xAxis35);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(1,177);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(2,212);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(3,193);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(4,211);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(5,233);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(6,323);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(7,271);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(8,257);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(9,253);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(10,237);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(11,270);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(12,272);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(13,283);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(14,251);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(15,272);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(16,292);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(17,317);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(18,300);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(19,319);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(20,367);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(21,336);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(22,395);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(23,416);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(24,441);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(25,400);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(26,460);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(27,471);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(28,546);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(29,523);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(30,565);
   Zee_2bjet_dPhi_2b_all__455->SetBinContent(31,826);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(1,13.30413);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(2,14.56022);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(3,13.89244);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(4,14.52584);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(5,15.26434);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(6,17.9722);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(7,16.46208);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(8,16.03122);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(9,15.90597);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(10,15.3948);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(11,16.43168);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(12,16.49242);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(13,16.8226);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(14,15.84298);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(15,16.49242);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(16,17.08801);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(17,17.80449);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(18,17.32051);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(19,17.86057);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(20,19.15724);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(21,18.3303);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(22,19.87461);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(23,20.39608);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(24,21);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(25,20);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(26,21.44761);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(27,21.70253);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(28,23.36664);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(29,22.86919);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(30,23.76973);
   Zee_2bjet_dPhi_2b_all__455->SetBinError(31,28.74022);
   Zee_2bjet_dPhi_2b_all__455->SetEntries(10689);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_2b_all__455->SetLineColor(ci);
   Zee_2bjet_dPhi_2b_all__455->SetLineWidth(2);
   Zee_2bjet_dPhi_2b_all__455->SetMarkerStyle(20);
   Zee_2bjet_dPhi_2b_all__455->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_2b_all__455->GetXaxis()->SetRange(1,31);
   Zee_2bjet_dPhi_2b_all__455->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_all__455->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_all__455->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_all__455->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_all__455->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_all__455->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_all__455->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_all__455->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_2b_all__455->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_all__455->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_all__455->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_all__455->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_all__455->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_all__455->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dPhi_2b_all_fx1455[31] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dPhi_2b_all_fy1455[31] = {
   187.8518,
   225.767,
   237.5494,
   207.106,
   289.9306,
   289.6971,
   313.5259,
   290.917,
   264.0366,
   278.0796,
   279.2361,
   293.8114,
   306.761,
   312.3808,
   307.788,
   315.4443,
   348.2912,
   348.2474,
   389.4156,
   396.3985,
   455.709,
   463.6137,
   436.3249,
   501.7082,
   542.4358,
   631.5075,
   560.1262,
   635.6776,
   663.121,
   674.6536,
   1041.393};
   Double_t Graph_from_Zee_2bjet_bb_dPhi_2b_all_fex1455[31] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dPhi_2b_all_fey1455[31] = {
   19.44653,
   19.28846,
   20.09959,
   20.741,
   25.63057,
   22.02619,
   22.33335,
   21.94536,
   21.9242,
   22.00123,
   22.82835,
   23.28373,
   23.37421,
   23.71015,
   22.36989,
   24.39856,
   23.95155,
   25.1123,
   27.04304,
   25.52575,
   28.48437,
   27.55729,
   28.31647,
   29.74723,
   30.97279,
   31.37588,
   31.6852,
   32.91266,
   32.80038,
   33.92724,
   41.75013};
   TGraphErrors *gre = new TGraphErrors(31,Graph_from_Zee_2bjet_bb_dPhi_2b_all_fx1455,Graph_from_Zee_2bjet_bb_dPhi_2b_all_fy1455,Graph_from_Zee_2bjet_bb_dPhi_2b_all_fex1455,Graph_from_Zee_2bjet_bb_dPhi_2b_all_fey1455);
   gre->SetName("Graph_from_Zee_2bjet_bb_dPhi_2b_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455->SetMinimum(76.93145);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455->SetMaximum(1174.617);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dPhi_2b_all1455);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dPhi_2b_all","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_dPhi_2b_all_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_dPhi_2b_all_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_dPhi_2b_all_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_2b_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_2b_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_2b_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_dPhi_2b_all","MC unc. (stat.)","fl");

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
   dPhi_2b_Z_2bjet_Zee_All_amcnlo->cd();
  
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
   Double_t xAxis36[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *data_mc_ratio__456 = new TH1D("data_mc_ratio__456","",31, xAxis36);
   data_mc_ratio__456->SetBinContent(1,0.9422324);
   data_mc_ratio__456->SetBinContent(2,0.9390212);
   data_mc_ratio__456->SetBinContent(3,0.8124626);
   data_mc_ratio__456->SetBinContent(4,1.018802);
   data_mc_ratio__456->SetBinContent(5,0.8036405);
   data_mc_ratio__456->SetBinContent(6,1.114958);
   data_mc_ratio__456->SetBinContent(7,0.8643625);
   data_mc_ratio__456->SetBinContent(8,0.8834134);
   data_mc_ratio__456->SetBinContent(9,0.9582004);
   data_mc_ratio__456->SetBinContent(10,0.852274);
   data_mc_ratio__456->SetBinContent(11,0.9669236);
   data_mc_ratio__456->SetBinContent(12,0.9257638);
   data_mc_ratio__456->SetBinContent(13,0.9225423);
   data_mc_ratio__456->SetBinContent(14,0.8035065);
   data_mc_ratio__456->SetBinContent(15,0.8837251);
   data_mc_ratio__456->SetBinContent(16,0.9256784);
   data_mc_ratio__456->SetBinContent(17,0.9101579);
   data_mc_ratio__456->SetBinContent(18,0.8614565);
   data_mc_ratio__456->SetBinContent(19,0.8191761);
   data_mc_ratio__456->SetBinContent(20,0.9258359);
   data_mc_ratio__456->SetBinContent(21,0.7373126);
   data_mc_ratio__456->SetBinContent(22,0.8520023);
   data_mc_ratio__456->SetBinContent(23,0.953418);
   data_mc_ratio__456->SetBinContent(24,0.878997);
   data_mc_ratio__456->SetBinContent(25,0.7374144);
   data_mc_ratio__456->SetBinContent(26,0.7284158);
   data_mc_ratio__456->SetBinContent(27,0.8408819);
   data_mc_ratio__456->SetBinContent(28,0.8589259);
   data_mc_ratio__456->SetBinContent(29,0.7886947);
   data_mc_ratio__456->SetBinContent(30,0.8374668);
   data_mc_ratio__456->SetBinContent(31,0.7931685);
   data_mc_ratio__456->SetBinError(1,0.07082252);
   data_mc_ratio__456->SetBinError(2,0.06449224);
   data_mc_ratio__456->SetBinError(3,0.05848234);
   data_mc_ratio__456->SetBinError(4,0.07013723);
   data_mc_ratio__456->SetBinError(5,0.05264824);
   data_mc_ratio__456->SetBinError(6,0.06203791);
   data_mc_ratio__456->SetBinError(7,0.05250628);
   data_mc_ratio__456->SetBinError(8,0.05510582);
   data_mc_ratio__456->SetBinError(9,0.06024154);
   data_mc_ratio__456->SetBinError(10,0.05536114);
   data_mc_ratio__456->SetBinError(11,0.0588451);
   data_mc_ratio__456->SetBinError(12,0.05613268);
   data_mc_ratio__456->SetBinError(13,0.05483945);
   data_mc_ratio__456->SetBinError(14,0.05071688);
   data_mc_ratio__456->SetBinError(15,0.05358371);
   data_mc_ratio__456->SetBinError(16,0.05417123);
   data_mc_ratio__456->SetBinError(17,0.05111956);
   data_mc_ratio__456->SetBinError(18,0.04973621);
   data_mc_ratio__456->SetBinError(19,0.04586506);
   data_mc_ratio__456->SetBinError(20,0.04832824);
   data_mc_ratio__456->SetBinError(21,0.0402237);
   data_mc_ratio__456->SetBinError(22,0.04286889);
   data_mc_ratio__456->SetBinError(23,0.04674516);
   data_mc_ratio__456->SetBinError(24,0.041857);
   data_mc_ratio__456->SetBinError(25,0.03687072);
   data_mc_ratio__456->SetBinError(26,0.03396256);
   data_mc_ratio__456->SetBinError(27,0.03874579);
   data_mc_ratio__456->SetBinError(28,0.03675864);
   data_mc_ratio__456->SetBinError(29,0.03448721);
   data_mc_ratio__456->SetBinError(30,0.03523249);
   data_mc_ratio__456->SetBinError(31,0.02759786);
   data_mc_ratio__456->SetMinimum(0.4);
   data_mc_ratio__456->SetMaximum(1.6);
   data_mc_ratio__456->SetEntries(3516.1);
   data_mc_ratio__456->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__456->SetLineColor(ci);
   data_mc_ratio__456->SetLineWidth(2);
   data_mc_ratio__456->SetMarkerStyle(20);
   data_mc_ratio__456->SetMarkerSize(1.2);
   data_mc_ratio__456->GetXaxis()->SetTitle("dPhi_{bb}");
   data_mc_ratio__456->GetXaxis()->SetRange(1,31);
   data_mc_ratio__456->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__456->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__456->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__456->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__456->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__456->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__456->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__456->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__456->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__456->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__456->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__456->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__456->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__456->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__456->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__456->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__456->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1456[31] = {
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
   Double_t Graph_from_mc_statistical_error_fy1456[31] = {
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
   Double_t Graph_from_mc_statistical_error_fex1456[31] = {
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
   Double_t Graph_from_mc_statistical_error_fey1456[31] = {
   0.1035206,
   0.08543527,
   0.08461227,
   0.1001468,
   0.08840243,
   0.07603179,
   0.07123288,
   0.07543513,
   0.0830347,
   0.07911845,
   0.08175285,
   0.07924718,
   0.07619681,
   0.07590143,
   0.07267953,
   0.07734664,
   0.06876875,
   0.07211051,
   0.06944518,
   0.06439415,
   0.0625056,
   0.05944018,
   0.06489767,
   0.05929189,
   0.05709946,
   0.0496841,
   0.05656796,
   0.0517757,
   0.04946364,
   0.05028838,
   0.04009066};
   gre = new TGraphErrors(31,Graph_from_mc_statistical_error_fx1456,Graph_from_mc_statistical_error_fy1456,Graph_from_mc_statistical_error_fex1456,Graph_from_mc_statistical_error_fey1456);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1456 = new TH1F("Graph_Graph_from_mc_statistical_error1456","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1456->SetMinimum(0.8757753);
   Graph_Graph_from_mc_statistical_error1456->SetMaximum(1.124225);
   Graph_Graph_from_mc_statistical_error1456->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1456->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1456->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1456->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1456->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1456->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1456->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1456->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1456->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1456->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1456->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1456->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1456->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1456->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1456->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1456->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1456);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.141593,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_2b_Z_2bjet_Zee_All_amcnlo->cd();
   dPhi_2b_Z_2bjet_Zee_All_amcnlo->Modified();
   dPhi_2b_Z_2bjet_Zee_All_amcnlo->cd();
   dPhi_2b_Z_2bjet_Zee_All_amcnlo->SetSelected(dPhi_2b_Z_2bjet_Zee_All_amcnlo);
}

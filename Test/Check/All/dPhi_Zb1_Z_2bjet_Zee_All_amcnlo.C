void dPhi_Zb1_Z_2bjet_Zee_All_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb1_Z_2bjet_Zee_All_amcnlo/dPhi_Zb1_Z_2bjet_Zee_All_amcnlo
//=========  (Thu Jan 14 10:42:53 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb1_Z_2bjet_Zee_All_amcnlo = new TCanvas("dPhi_Zb1_Z_2bjet_Zee_All_amcnlo", "dPhi_Zb1_Z_2bjet_Zee_All_amcnlo",0,0,600,600);
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->SetHighLightColor(2);
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->Range(0,0,1,1);
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->SetFillColor(0);
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->SetFillStyle(4000);
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->SetBorderMode(0);
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->SetBorderSize(2);
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-1.247872,3.416482,1256.624);
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
   st->SetMaximum(1076.987);
   
   TH1F *st_stack_240 = new TH1F("st_stack_240","",30,0,3.141593);
   st_stack_240->SetMinimum(0.01);
   st_stack_240->SetMaximum(1130.837);
   st_stack_240->SetDirectory(0);
   st_stack_240->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_240->SetLineColor(ci);
   st_stack_240->GetXaxis()->SetRange(1,31);
   st_stack_240->GetXaxis()->SetLabelFont(42);
   st_stack_240->GetXaxis()->SetLabelSize(0.035);
   st_stack_240->GetXaxis()->SetTitleSize(0.035);
   st_stack_240->GetXaxis()->SetTitleFont(42);
   st_stack_240->GetYaxis()->SetTitle("Events/0.105");
   st_stack_240->GetYaxis()->SetLabelFont(42);
   st_stack_240->GetYaxis()->SetLabelSize(0.05);
   st_stack_240->GetYaxis()->SetTitleSize(0.057);
   st_stack_240->GetYaxis()->SetTitleOffset(1.2);
   st_stack_240->GetYaxis()->SetTitleFont(42);
   st_stack_240->GetZaxis()->SetLabelFont(42);
   st_stack_240->GetZaxis()->SetLabelSize(0.035);
   st_stack_240->GetZaxis()->SetTitleSize(0.035);
   st_stack_240->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_240);
   
   
   TH1D *Zee_2bjet_dPhi_Zb1_all_stack_1 = new TH1D("Zee_2bjet_dPhi_Zb1_all_stack_1","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(1,1.811188);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(2,1.511386);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(3,1.289203);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(4,2.423017);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(5,1.41715);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(6,2.825992);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(7,2.17457);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(8,1.872882);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(9,2.490842);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(10,2.548902);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(11,3.463157);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(12,3.168079);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(13,1.084454);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(14,2.652844);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(15,3.298053);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(16,3.450457);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(17,4.342745);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(18,3.247004);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(19,4.242097);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(20,4.546726);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(21,3.864806);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(22,4.942658);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(23,3.730848);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(24,3.282622);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(25,3.681811);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(26,2.697496);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(27,3.106043);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(28,3.186662);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(29,2.794149);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(30,2.977725);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(1,0.5877712);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(2,0.5728663);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(3,0.4615866);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(4,0.7869213);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(5,0.581983);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(6,0.853556);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(7,0.6778162);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(8,0.6555827);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(9,0.6723463);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(10,0.8375719);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(11,0.8793863);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(12,0.9003804);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(13,0.4357975);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(14,0.8039035);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(15,0.8087041);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(16,0.8306474);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(17,0.9755654);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(18,0.91386);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(19,1.031592);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(20,1.050305);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(21,0.9305115);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(22,1.064724);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(23,0.9460192);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(24,0.8966982);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(25,0.8971824);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(26,0.7154463);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(27,0.7645483);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(28,0.78762);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(29,0.7862109);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetBinError(30,0.747471);
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetEntries(475);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_all_stack_1->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_all_stack_1,"");
   
   TH1D *Zee_2bjet_dPhi_Zb1_all_stack_2 = new TH1D("Zee_2bjet_dPhi_Zb1_all_stack_2","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(1,2.258185);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(2,2.520372);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(3,3.947916);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(4,2.537282);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(5,3.890928);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(6,1.88144);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(7,3.433048);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(8,3.695475);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(9,4.867198);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(10,4.036139);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(11,4.036943);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(12,4.136869);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(13,5.583207);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(14,6.326294);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(15,6.799331);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(16,8.326314);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(17,9.643465);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(18,4.269581);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(19,11.82349);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(20,10.60986);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(21,12.59264);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(22,11.45657);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(23,15.07511);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(24,12.65333);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(25,11.60729);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(26,8.946776);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(27,7.130131);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(28,10.27156);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(29,8.881365);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(30,3.040732);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(1,1.082514);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(2,1.064);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(3,1.399074);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(4,0.8702925);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(5,1.289847);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(6,0.8892563);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(7,1.154885);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(8,1.202361);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(9,1.442511);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(10,1.169167);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(11,1.374074);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(12,1.115226);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(13,1.355146);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(14,1.632636);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(15,1.620282);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(16,1.752735);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(17,1.922997);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(18,1.254192);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(19,2.148326);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(20,2.1222);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(21,2.208996);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(22,2.120527);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(23,2.420902);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(24,2.323419);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(25,2.01868);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(26,1.796796);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(27,1.832026);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(28,1.995602);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(29,1.811247);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetBinError(30,0.943774);
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetEntries(618);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_all_stack_2->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_all_stack_2,"");
   
   TH1D *Zee_2bjet_dPhi_Zb1_all_stack_3 = new TH1D("Zee_2bjet_dPhi_Zb1_all_stack_3","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(1,70.63773);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(2,70.05939);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(3,69.43329);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(4,68.45312);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(5,71.35165);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(6,78.75721);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(7,71.90339);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(8,81.03477);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(9,82.08467);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(10,91.80509);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(11,97.16964);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(12,114.1706);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(13,113.6224);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(14,134.9197);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(15,140.2339);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(16,145.821);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(17,144.0555);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(18,161.7396);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(19,156.6302);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(20,158.8615);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(21,165.4873);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(22,173.3226);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(23,170.3351);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(24,158.0415);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(25,168.0842);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(26,149.7938);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(27,153.1555);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(28,152.1013);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(29,146.8497);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(30,148.584);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(1,3.563444);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(2,3.459324);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(3,3.523184);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(4,3.477319);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(5,3.672648);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(6,3.78751);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(7,3.444724);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(8,3.754687);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(9,3.788145);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(10,4.120305);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(11,4.055927);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(12,4.5984);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(13,4.501004);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(14,4.976271);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(15,5.053602);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(16,5.054309);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(17,5.087535);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(18,5.501938);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(19,5.205154);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(20,5.265337);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(21,5.424715);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(22,5.619772);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(23,5.55952);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(24,5.387419);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(25,5.545811);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(26,5.099923);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(27,5.193958);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(28,5.185555);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(29,5.180218);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetBinError(30,5.14137);
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetEntries(32755);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_all_stack_3->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_all_stack_3,"");
   
   TH1D *Zee_2bjet_XX_dPhi_Zb1_all_stack_4 = new TH1D("Zee_2bjet_XX_dPhi_Zb1_all_stack_4","",30,0,3.141593);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(1,2.982005);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(2,5.968177);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(3,4.990569);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(4,1.671258);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(5,2.250976);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(6,-1.059257);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(7,-0.4299687);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(8,1.510196);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(9,4.510388);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(10,-0.1871568);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(12,-1.258837);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(13,2.890334);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(14,0.5257335);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(15,9.915497);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(16,1.452937);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(17,6.553364);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(18,0.9273026);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(19,1.033306);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(20,-0.8725114);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(21,2.094435);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(22,2.097008);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(23,-2.455441);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(24,1.704508);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(25,2.100843);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(26,1.437295);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(27,0.7624068);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(28,-0.005127072);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(29,2.690676);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(30,1.597533);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(1,2.111215);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(2,3.7932);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(3,3.254994);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(4,1.184848);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(5,1.908689);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(6,0.975992);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(7,0.9685762);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(8,1.058033);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(9,3.177974);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(10,0.8253967);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(12,0.9381846);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(13,1.970287);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(14,0.5257335);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(15,10.19463);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(16,0.8388697);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(17,6.657412);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(18,1.089032);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(19,1.166292);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(20,2.027214);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(21,2.593667);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(22,1.798741);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(23,1.542733);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(24,1.894949);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(25,1.393491);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(26,1.64493);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(27,1.732342);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(28,1.796107);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(29,1.449138);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(30,1.690374);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetEntries(129);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->GetXaxis()->SetRange(1,60);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_Zb1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_dPhi_Zb1_all_stack_4,"");
   
   TH1D *Zee_2bjet_bX_dPhi_Zb1_all_stack_5 = new TH1D("Zee_2bjet_bX_dPhi_Zb1_all_stack_5","",30,0,3.141593);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(1,4.644214);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(2,0.3554408);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(3,3.020528);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(4,2.968978);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(5,-1.873709);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(6,2.797729);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(7,3.923002);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(8,0.7165422);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(9,0.2688215);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(10,2.291406);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(11,10.16594);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(12,6.240796);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(13,8.236954);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(14,2.833549);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(15,6.41084);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(16,7.313896);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(17,1.894056);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(18,6.40386);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(19,2.864031);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(20,6.573028);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(21,8.497125);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(22,6.624011);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(23,6.216068);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(24,4.393986);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(25,8.093736);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(26,9.910163);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(27,9.949744);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(28,1.79058);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(29,-0.6558905);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(30,3.281181);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(1,3.320958);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(2,3.736436);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(3,2.791351);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(4,2.95952);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(5,2.878293);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(6,3.001166);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(7,2.782929);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(8,2.069365);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(9,3.19391);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(10,3.354815);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(11,3.769442);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(12,2.741851);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(13,3.444002);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(14,3.909636);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(15,3.833125);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(16,2.82364);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(17,3.521062);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(18,3.444391);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(19,4.915408);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(20,5.383983);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(21,5.51433);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(22,4.494577);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(23,3.440134);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(24,4.391853);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(25,3.330583);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(26,4.625615);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(27,4.827242);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(28,3.612797);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(29,5.013429);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(30,3.976462);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetEntries(615);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->GetXaxis()->SetRange(1,60);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_Zb1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_dPhi_Zb1_all_stack_5,"");
   
   TH1D *Zee_2bjet_bb_dPhi_Zb1_all_stack_6 = new TH1D("Zee_2bjet_bb_dPhi_Zb1_all_stack_6","",30,0,3.141593);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(1,151.8645);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(2,218.4938);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(3,195.5146);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(4,173.338);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(5,180.9285);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(6,191.9789);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(7,185.7014);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(8,197.6012);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(9,150.0935);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(10,245.585);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(11,226.0018);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(12,220.7204);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(13,248.5117);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(14,222.6478);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(15,283.6987);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(16,282.1571);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(17,323.1391);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(18,299.5808);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(19,295.8223);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(20,333.9222);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(21,336.5881);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(22,332.0902);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(23,376.5422);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(24,398.4218);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(25,349.3988);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(26,419.5574);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(27,386.4032);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(28,379.1745);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(29,362.3841);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(30,326.1914);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(1,20.28984);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(2,20.93073);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(3,21.37245);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(4,19.85539);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(5,21.05507);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(6,21.51037);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(7,21.65878);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(8,20.90358);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(9,20.88125);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(10,23.09936);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(11,21.98944);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(12,23.82805);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(13,24.79093);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(14,24.86202);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(15,25.01559);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(16,26.42365);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(17,27.28976);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(18,26.79825);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(19,27.77339);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(20,28.49146);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(21,29.34196);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(22,31.51861);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(23,31.02168);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(24,30.40567);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(25,29.93762);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(26,31.09274);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(27,29.78569);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(28,31.86864);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(29,29.74964);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(30,28.60485);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetEntries(34449);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->GetXaxis()->SetRange(1,60);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_Zb1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_dPhi_Zb1_all_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dPhi_Zb1_all__479 = new TH1D("Zee_2bjet_dPhi_Zb1_all__479","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(1,214);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(2,215);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(3,195);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(4,233);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(5,229);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(6,249);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(7,220);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(8,248);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(9,248);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(10,264);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(11,289);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(12,300);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(13,349);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(14,340);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(15,345);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(16,375);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(17,360);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(18,418);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(19,439);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(20,401);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(21,455);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(22,451);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(23,476);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(24,472);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(25,508);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(26,483);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(27,493);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(28,497);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(29,464);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinContent(30,459);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(1,14.62874);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(2,14.66288);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(3,13.96424);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(4,15.26434);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(5,15.13275);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(6,15.77973);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(7,14.8324);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(8,15.74802);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(9,15.74802);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(10,16.24808);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(11,17);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(12,17.32051);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(13,18.68154);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(14,18.43909);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(15,18.57418);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(16,19.36492);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(17,18.97367);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(18,20.44505);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(19,20.95233);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(20,20.02498);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(21,21.33073);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(22,21.23676);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(23,21.81742);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(24,21.72556);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(25,22.53886);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(26,21.97726);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(27,22.2036);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(28,22.2935);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(29,21.54066);
   Zee_2bjet_dPhi_Zb1_all__479->SetBinError(30,21.42429);
   Zee_2bjet_dPhi_Zb1_all__479->SetEntries(10689);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_all__479->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_all__479->SetLineWidth(2);
   Zee_2bjet_dPhi_Zb1_all__479->SetMarkerStyle(20);
   Zee_2bjet_dPhi_Zb1_all__479->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_Zb1_all__479->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_all__479->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all__479->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all__479->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all__479->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all__479->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all__479->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all__479->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all__479->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_all__479->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all__479->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_all__479->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_all__479->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_all__479->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_all__479->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb1_all_fx1479[30] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb1_all_fy1479[30] = {
   234.1979,
   298.9085,
   278.1961,
   251.3916,
   257.9655,
   277.182,
   266.7054,
   286.431,
   244.3155,
   346.0794,
   340.8375,
   347.1779,
   379.929,
   369.9058,
   450.3563,
   448.5218,
   489.6283,
   476.1682,
   472.4154,
   513.6408,
   529.1244,
   530.533,
   569.4439,
   578.4978,
   542.9667,
   592.343,
   560.5071,
   546.5195,
   522.9441,
   485.6725};
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb1_all_fex1479[30] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb1_all_fey1479[30] = {
   21.00902,
   21.90598,
   22.13033,
   20.44181,
   21.69641,
   22.10249,
   22.16855,
   21.40875,
   21.75339,
   23.76051,
   22.73447,
   24.48211,
   25.54641,
   25.72463,
   27.80686,
   27.1329,
   28.84411,
   27.6383,
   28.80374,
   29.63429,
   30.54928,
   32.46647,
   31.84687,
   31.34662,
   30.73974,
   31.94699,
   30.73124,
   32.60953,
   30.70845,
   29.40731};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zee_2bjet_bb_dPhi_Zb1_all_fx1479,Graph_from_Zee_2bjet_bb_dPhi_Zb1_all_fy1479,Graph_from_Zee_2bjet_bb_dPhi_Zb1_all_fex1479,Graph_from_Zee_2bjet_bb_dPhi_Zb1_all_fey1479);
   gre->SetName("Graph_from_Zee_2bjet_bb_dPhi_Zb1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479->SetMinimum(172.0787);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479->SetMaximum(665.4001);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1_all1479);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_all","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_dPhi_Zb1_all_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_dPhi_Zb1_all_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_dPhi_Zb1_all_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_dPhi_Zb1_all","MC unc. (stat.)","fl");

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
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__480 = new TH1D("data_mc_ratio__480","",30,0,3.141593);
   data_mc_ratio__480->SetBinContent(1,0.9137573);
   data_mc_ratio__480->SetBinContent(2,0.7192835);
   data_mc_ratio__480->SetBinContent(3,0.7009443);
   data_mc_ratio__480->SetBinContent(4,0.9268407);
   data_mc_ratio__480->SetBinContent(5,0.8877157);
   data_mc_ratio__480->SetBinContent(6,0.8983266);
   data_mc_ratio__480->SetBinContent(7,0.8248801);
   data_mc_ratio__480->SetBinContent(8,0.8658279);
   data_mc_ratio__480->SetBinContent(9,1.015081);
   data_mc_ratio__480->SetBinContent(10,0.7628308);
   data_mc_ratio__480->SetBinContent(11,0.8479115);
   data_mc_ratio__480->SetBinContent(12,0.8641103);
   data_mc_ratio__480->SetBinContent(13,0.9185926);
   data_mc_ratio__480->SetBinContent(14,0.9191528);
   data_mc_ratio__480->SetBinContent(15,0.76606);
   data_mc_ratio__480->SetBinContent(16,0.8360798);
   data_mc_ratio__480->SetBinContent(17,0.7352517);
   data_mc_ratio__480->SetBinContent(18,0.8778411);
   data_mc_ratio__480->SetBinContent(19,0.9292669);
   data_mc_ratio__480->SetBinContent(20,0.7807013);
   data_mc_ratio__480->SetBinContent(21,0.8599112);
   data_mc_ratio__480->SetBinContent(22,0.8500885);
   data_mc_ratio__480->SetBinContent(23,0.8359032);
   data_mc_ratio__480->SetBinContent(24,0.8159063);
   data_mc_ratio__480->SetBinContent(25,0.9356007);
   data_mc_ratio__480->SetBinContent(26,0.815406);
   data_mc_ratio__480->SetBinContent(27,0.8795607);
   data_mc_ratio__480->SetBinContent(28,0.9093912);
   data_mc_ratio__480->SetBinContent(29,0.8872842);
   data_mc_ratio__480->SetBinContent(30,0.9450813);
   data_mc_ratio__480->SetBinError(1,0.06246316);
   data_mc_ratio__480->SetBinError(2,0.04905473);
   data_mc_ratio__480->SetBinError(3,0.05019567);
   data_mc_ratio__480->SetBinError(4,0.06071935);
   data_mc_ratio__480->SetBinError(5,0.0586619);
   data_mc_ratio__480->SetBinError(6,0.05692913);
   data_mc_ratio__480->SetBinError(7,0.0556134);
   data_mc_ratio__480->SetBinError(8,0.05498013);
   data_mc_ratio__480->SetBinError(9,0.06445771);
   data_mc_ratio__480->SetBinError(10,0.04694899);
   data_mc_ratio__480->SetBinError(11,0.04987715);
   data_mc_ratio__480->SetBinError(12,0.04988943);
   data_mc_ratio__480->SetBinError(13,0.04917113);
   data_mc_ratio__480->SetBinError(14,0.04984806);
   data_mc_ratio__480->SetBinError(15,0.04124329);
   data_mc_ratio__480->SetBinError(16,0.04317498);
   data_mc_ratio__480->SetBinError(17,0.03875116);
   data_mc_ratio__480->SetBinError(18,0.04293661);
   data_mc_ratio__480->SetBinError(19,0.04435149);
   data_mc_ratio__480->SetBinError(20,0.03898636);
   data_mc_ratio__480->SetBinError(21,0.04031326);
   data_mc_ratio__480->SetBinError(22,0.0400291);
   data_mc_ratio__480->SetBinError(23,0.03831356);
   data_mc_ratio__480->SetBinError(24,0.03755513);
   data_mc_ratio__480->SetBinError(25,0.04151057);
   data_mc_ratio__480->SetBinError(26,0.03710226);
   data_mc_ratio__480->SetBinError(27,0.03961342);
   data_mc_ratio__480->SetBinError(28,0.04079177);
   data_mc_ratio__480->SetBinError(29,0.04119113);
   data_mc_ratio__480->SetBinError(30,0.04411262);
   data_mc_ratio__480->SetMinimum(0.4);
   data_mc_ratio__480->SetMaximum(1.6);
   data_mc_ratio__480->SetEntries(3859.708);
   data_mc_ratio__480->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__480->SetLineColor(ci);
   data_mc_ratio__480->SetLineWidth(2);
   data_mc_ratio__480->SetMarkerStyle(20);
   data_mc_ratio__480->SetMarkerSize(1.2);
   data_mc_ratio__480->GetXaxis()->SetTitle("dPhi_{Zb1}");
   data_mc_ratio__480->GetXaxis()->SetRange(1,31);
   data_mc_ratio__480->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__480->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__480->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__480->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__480->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__480->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__480->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__480->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__480->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__480->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__480->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__480->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__480->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__480->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__480->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__480->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__480->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1480[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1480[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1480[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1480[30] = {
   0.08970629,
   0.07328655,
   0.07954938,
   0.0813146,
   0.08410588,
   0.07973998,
   0.08311999,
   0.07474311,
   0.08903812,
   0.06865624,
   0.06670178,
   0.07051748,
   0.06723995,
   0.06954373,
   0.06174413,
   0.06049405,
   0.05891021,
   0.05804315,
   0.06097122,
   0.05769458,
   0.05773554,
   0.06119595,
   0.05592627,
   0.05418623,
   0.05661441,
   0.05393326,
   0.05482756,
   0.05966764,
   0.05872224,
   0.06054968};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1480,Graph_from_mc_statistical_error_fy1480,Graph_from_mc_statistical_error_fex1480,Graph_from_mc_statistical_error_fey1480);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1480 = new TH1F("Graph_Graph_from_mc_statistical_error1480","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1480->SetMinimum(0.8923525);
   Graph_Graph_from_mc_statistical_error1480->SetMaximum(1.107648);
   Graph_Graph_from_mc_statistical_error1480->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1480->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1480->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1480->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1480->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1480);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->Modified();
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zee_All_amcnlo->SetSelected(dPhi_Zb1_Z_2bjet_Zee_All_amcnlo);
}

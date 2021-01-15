void pt_lep1_Z_bjet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_bjet_Zee_17_amcnlo/pt_lep1_Z_bjet_Zee_17_amcnlo
//=========  (Thu Jan 14 10:42:29 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_bjet_Zee_17_amcnlo = new TCanvas("pt_lep1_Z_bjet_Zee_17_amcnlo", "pt_lep1_Z_bjet_Zee_17_amcnlo",0,0,600,600);
   pt_lep1_Z_bjet_Zee_17_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_bjet_Zee_17_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_bjet_Zee_17_amcnlo->SetFillColor(0);
   pt_lep1_Z_bjet_Zee_17_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_bjet_Zee_17_amcnlo->SetBorderMode(0);
   pt_lep1_Z_bjet_Zee_17_amcnlo->SetBorderSize(2);
   pt_lep1_Z_bjet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_bjet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-41.10393,210.4839,41072.83);
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
   st->SetMaximum(35201.36);
   
   TH1F *st_stack_86 = new TH1F("st_stack_86","",40,0,200);
   st_stack_86->SetMinimum(0.01);
   st_stack_86->SetMaximum(36961.43);
   st_stack_86->SetDirectory(0);
   st_stack_86->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_86->SetLineColor(ci);
   st_stack_86->GetXaxis()->SetRange(1,40);
   st_stack_86->GetXaxis()->SetLabelFont(42);
   st_stack_86->GetXaxis()->SetLabelSize(0.035);
   st_stack_86->GetXaxis()->SetTitleSize(0.035);
   st_stack_86->GetXaxis()->SetTitleFont(42);
   st_stack_86->GetYaxis()->SetTitle("Events/5.0");
   st_stack_86->GetYaxis()->SetLabelFont(42);
   st_stack_86->GetYaxis()->SetLabelSize(0.05);
   st_stack_86->GetYaxis()->SetTitleSize(0.057);
   st_stack_86->GetYaxis()->SetTitleOffset(1.2);
   st_stack_86->GetYaxis()->SetTitleFont(42);
   st_stack_86->GetZaxis()->SetLabelFont(42);
   st_stack_86->GetZaxis()->SetLabelSize(0.035);
   st_stack_86->GetZaxis()->SetTitleSize(0.035);
   st_stack_86->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_86);
   
   
   TH1D *Zee_bjet_pt_lep1_stack_1 = new TH1D("Zee_bjet_pt_lep1_stack_1","",40,0,200);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(6,205.4504);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(7,237.0841);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(8,198.2955);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(9,157.0473);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(10,104.7389);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(11,59.41442);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(12,40.80816);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(13,19.07351);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(14,10.42828);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(15,5.630564);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(16,3.421782);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(17,1.067606);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(18,1.012256);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(19,0.9353118);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(20,0.2249914);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(21,0.1394188);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(22,0.1290871);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(23,0.2268281);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(24,0.2038664);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(25,0.1143871);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(27,0.1960183);
   Zee_bjet_pt_lep1_stack_1->SetBinError(6,6.242786);
   Zee_bjet_pt_lep1_stack_1->SetBinError(7,6.732985);
   Zee_bjet_pt_lep1_stack_1->SetBinError(8,5.964694);
   Zee_bjet_pt_lep1_stack_1->SetBinError(9,5.308436);
   Zee_bjet_pt_lep1_stack_1->SetBinError(10,4.333498);
   Zee_bjet_pt_lep1_stack_1->SetBinError(11,3.269433);
   Zee_bjet_pt_lep1_stack_1->SetBinError(12,2.944052);
   Zee_bjet_pt_lep1_stack_1->SetBinError(13,1.838599);
   Zee_bjet_pt_lep1_stack_1->SetBinError(14,1.372357);
   Zee_bjet_pt_lep1_stack_1->SetBinError(15,1.033814);
   Zee_bjet_pt_lep1_stack_1->SetBinError(16,0.8133383);
   Zee_bjet_pt_lep1_stack_1->SetBinError(17,0.4500896);
   Zee_bjet_pt_lep1_stack_1->SetBinError(18,0.4172674);
   Zee_bjet_pt_lep1_stack_1->SetBinError(19,0.4046411);
   Zee_bjet_pt_lep1_stack_1->SetBinError(20,0.1941708);
   Zee_bjet_pt_lep1_stack_1->SetBinError(21,0.1379352);
   Zee_bjet_pt_lep1_stack_1->SetBinError(22,0.1290871);
   Zee_bjet_pt_lep1_stack_1->SetBinError(23,0.2268281);
   Zee_bjet_pt_lep1_stack_1->SetBinError(24,0.2038664);
   Zee_bjet_pt_lep1_stack_1->SetBinError(25,0.1143871);
   Zee_bjet_pt_lep1_stack_1->SetBinError(27,0.1960183);
   Zee_bjet_pt_lep1_stack_1->SetEntries(6570);

   ci = TColor::GetColor("#cccc00");
   Zee_bjet_pt_lep1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_pt_lep1_stack_1->SetLineColor(ci);
   Zee_bjet_pt_lep1_stack_1->GetXaxis()->SetRange(1,200);
   Zee_bjet_pt_lep1_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_pt_lep1_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_pt_lep1_stack_1,"");
   
   TH1D *Zee_bjet_pt_lep1_stack_2 = new TH1D("Zee_bjet_pt_lep1_stack_2","",40,0,200);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(6,110.6948);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(7,118.181);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(8,124.1683);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(9,90.76926);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(10,56.7812);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(11,34.19367);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(12,22.03491);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(13,14.07649);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(14,12.57508);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(15,9.447597);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(16,6.550171);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(17,4.929982);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(18,2.550184);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(19,2.026985);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(20,2.544711);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(21,1.1926);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(22,1.704926);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(23,1.921538);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(24,0.576153);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(25,1.455098);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(26,1.286655);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(27,0.4898639);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(28,0.6645275);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(29,0.785052);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(32,0.4922847);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(33,0.5184446);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(39,0.4351298);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(41,0.9027838);
   Zee_bjet_pt_lep1_stack_2->SetBinError(6,5.93171);
   Zee_bjet_pt_lep1_stack_2->SetBinError(7,6.0801);
   Zee_bjet_pt_lep1_stack_2->SetBinError(8,6.240448);
   Zee_bjet_pt_lep1_stack_2->SetBinError(9,5.268466);
   Zee_bjet_pt_lep1_stack_2->SetBinError(10,4.230485);
   Zee_bjet_pt_lep1_stack_2->SetBinError(11,3.300805);
   Zee_bjet_pt_lep1_stack_2->SetBinError(12,2.622945);
   Zee_bjet_pt_lep1_stack_2->SetBinError(13,2.109294);
   Zee_bjet_pt_lep1_stack_2->SetBinError(14,1.925376);
   Zee_bjet_pt_lep1_stack_2->SetBinError(15,1.636556);
   Zee_bjet_pt_lep1_stack_2->SetBinError(16,1.472481);
   Zee_bjet_pt_lep1_stack_2->SetBinError(17,1.23132);
   Zee_bjet_pt_lep1_stack_2->SetBinError(18,0.8711874);
   Zee_bjet_pt_lep1_stack_2->SetBinError(19,0.7987472);
   Zee_bjet_pt_lep1_stack_2->SetBinError(20,0.8617801);
   Zee_bjet_pt_lep1_stack_2->SetBinError(21,0.5926569);
   Zee_bjet_pt_lep1_stack_2->SetBinError(22,0.7363196);
   Zee_bjet_pt_lep1_stack_2->SetBinError(23,0.7288388);
   Zee_bjet_pt_lep1_stack_2->SetBinError(24,0.4255135);
   Zee_bjet_pt_lep1_stack_2->SetBinError(25,0.8305437);
   Zee_bjet_pt_lep1_stack_2->SetBinError(26,0.6125643);
   Zee_bjet_pt_lep1_stack_2->SetBinError(27,0.4898639);
   Zee_bjet_pt_lep1_stack_2->SetBinError(28,0.4743058);
   Zee_bjet_pt_lep1_stack_2->SetBinError(29,0.5612331);
   Zee_bjet_pt_lep1_stack_2->SetBinError(32,0.3520429);
   Zee_bjet_pt_lep1_stack_2->SetBinError(33,0.3629996);
   Zee_bjet_pt_lep1_stack_2->SetBinError(39,0.3152732);
   Zee_bjet_pt_lep1_stack_2->SetBinError(41,0.4566013);
   Zee_bjet_pt_lep1_stack_2->SetEntries(2350);

   ci = TColor::GetColor("#0000cc");
   Zee_bjet_pt_lep1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_pt_lep1_stack_2->SetLineColor(ci);
   Zee_bjet_pt_lep1_stack_2->GetXaxis()->SetRange(1,200);
   Zee_bjet_pt_lep1_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_pt_lep1_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_pt_lep1_stack_2,"");
   
   TH1D *Zee_bjet_pt_lep1_stack_3 = new TH1D("Zee_bjet_pt_lep1_stack_3","",40,0,200);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(6,2877.628);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(7,3081.253);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(8,2831.67);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(9,2131.366);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(10,1439.591);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(11,832.1156);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(12,457.6344);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(13,217.2225);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(14,120.2009);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(15,67.29162);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(16,29.48928);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(17,13.9435);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(18,8.856167);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(19,8.173716);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(20,4.060239);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(21,3.979583);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(22,2.143243);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(23,2.518227);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(24,1.934136);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(25,0.6333288);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(26,0.3503059);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(27,0.2574783);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(28,0.6987669);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(40,0.4377586);
   Zee_bjet_pt_lep1_stack_3->SetBinError(6,32.69341);
   Zee_bjet_pt_lep1_stack_3->SetBinError(7,33.70743);
   Zee_bjet_pt_lep1_stack_3->SetBinError(8,32.00168);
   Zee_bjet_pt_lep1_stack_3->SetBinError(9,27.85061);
   Zee_bjet_pt_lep1_stack_3->SetBinError(10,23.00457);
   Zee_bjet_pt_lep1_stack_3->SetBinError(11,17.46068);
   Zee_bjet_pt_lep1_stack_3->SetBinError(12,12.93107);
   Zee_bjet_pt_lep1_stack_3->SetBinError(13,8.917033);
   Zee_bjet_pt_lep1_stack_3->SetBinError(14,6.668016);
   Zee_bjet_pt_lep1_stack_3->SetBinError(15,5.039239);
   Zee_bjet_pt_lep1_stack_3->SetBinError(16,3.24908);
   Zee_bjet_pt_lep1_stack_3->SetBinError(17,2.258437);
   Zee_bjet_pt_lep1_stack_3->SetBinError(18,1.867271);
   Zee_bjet_pt_lep1_stack_3->SetBinError(19,1.857852);
   Zee_bjet_pt_lep1_stack_3->SetBinError(20,1.198659);
   Zee_bjet_pt_lep1_stack_3->SetBinError(21,1.287632);
   Zee_bjet_pt_lep1_stack_3->SetBinError(22,0.8639899);
   Zee_bjet_pt_lep1_stack_3->SetBinError(23,0.9874718);
   Zee_bjet_pt_lep1_stack_3->SetBinError(24,0.8597621);
   Zee_bjet_pt_lep1_stack_3->SetBinError(25,0.4513559);
   Zee_bjet_pt_lep1_stack_3->SetBinError(26,0.2872897);
   Zee_bjet_pt_lep1_stack_3->SetBinError(27,0.2574783);
   Zee_bjet_pt_lep1_stack_3->SetBinError(28,0.4941128);
   Zee_bjet_pt_lep1_stack_3->SetBinError(40,0.4377586);
   Zee_bjet_pt_lep1_stack_3->SetEntries(45305);

   ci = TColor::GetColor("#cc0000");
   Zee_bjet_pt_lep1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_pt_lep1_stack_3->SetLineColor(ci);
   Zee_bjet_pt_lep1_stack_3->GetXaxis()->SetRange(1,200);
   Zee_bjet_pt_lep1_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_pt_lep1_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_pt_lep1_stack_3,"");
   
   TH1D *Zee_bjet_pt_lep1_stack_4 = new TH1D("Zee_bjet_pt_lep1_stack_4","",40,0,200);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(6,13806.9);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(7,15924.23);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(8,14437.03);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(9,10690.75);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(10,5961.8);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(11,3063.441);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(12,1716.202);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(13,1122.72);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(14,744.0901);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(15,461.4292);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(16,328.1098);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(17,305.3091);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(18,199.7173);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(19,158.6783);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(20,104.8302);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(21,82.74009);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(22,73.25457);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(23,59.41554);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(24,32.30318);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(25,44.13143);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(26,28.42791);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(27,14.83565);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(28,23.50744);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(29,13.16753);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(30,13.35681);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(31,15.30179);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(32,10.58663);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(33,6.863218);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(34,2.352258);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(35,10.0548);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(36,1.93014);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(37,4.340467);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(38,-0.2451118);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(39,7.986804);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(40,2.440429);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(41,15.6626);
   Zee_bjet_pt_lep1_stack_4->SetBinError(6,177.9012);
   Zee_bjet_pt_lep1_stack_4->SetBinError(7,191.2891);
   Zee_bjet_pt_lep1_stack_4->SetBinError(8,180.9449);
   Zee_bjet_pt_lep1_stack_4->SetBinError(9,156.9436);
   Zee_bjet_pt_lep1_stack_4->SetBinError(10,114.5029);
   Zee_bjet_pt_lep1_stack_4->SetBinError(11,80.83857);
   Zee_bjet_pt_lep1_stack_4->SetBinError(12,61.38544);
   Zee_bjet_pt_lep1_stack_4->SetBinError(13,49.10016);
   Zee_bjet_pt_lep1_stack_4->SetBinError(14,40.48308);
   Zee_bjet_pt_lep1_stack_4->SetBinError(15,32.96776);
   Zee_bjet_pt_lep1_stack_4->SetBinError(16,28.55986);
   Zee_bjet_pt_lep1_stack_4->SetBinError(17,24.7982);
   Zee_bjet_pt_lep1_stack_4->SetBinError(18,20.2728);
   Zee_bjet_pt_lep1_stack_4->SetBinError(19,18.22589);
   Zee_bjet_pt_lep1_stack_4->SetBinError(20,15.55318);
   Zee_bjet_pt_lep1_stack_4->SetBinError(21,14.47055);
   Zee_bjet_pt_lep1_stack_4->SetBinError(22,12.88516);
   Zee_bjet_pt_lep1_stack_4->SetBinError(23,10.6202);
   Zee_bjet_pt_lep1_stack_4->SetBinError(24,9.467275);
   Zee_bjet_pt_lep1_stack_4->SetBinError(25,8.321144);
   Zee_bjet_pt_lep1_stack_4->SetBinError(26,7.138321);
   Zee_bjet_pt_lep1_stack_4->SetBinError(27,6.931099);
   Zee_bjet_pt_lep1_stack_4->SetBinError(28,7.04763);
   Zee_bjet_pt_lep1_stack_4->SetBinError(29,6.108627);
   Zee_bjet_pt_lep1_stack_4->SetBinError(30,5.604993);
   Zee_bjet_pt_lep1_stack_4->SetBinError(31,5.065483);
   Zee_bjet_pt_lep1_stack_4->SetBinError(32,4.468443);
   Zee_bjet_pt_lep1_stack_4->SetBinError(33,3.975964);
   Zee_bjet_pt_lep1_stack_4->SetBinError(34,3.352601);
   Zee_bjet_pt_lep1_stack_4->SetBinError(35,3.217233);
   Zee_bjet_pt_lep1_stack_4->SetBinError(36,2.403234);
   Zee_bjet_pt_lep1_stack_4->SetBinError(37,2.854408);
   Zee_bjet_pt_lep1_stack_4->SetBinError(38,2.224515);
   Zee_bjet_pt_lep1_stack_4->SetBinError(39,2.58774);
   Zee_bjet_pt_lep1_stack_4->SetBinError(40,1.819849);
   Zee_bjet_pt_lep1_stack_4->SetBinError(41,5.034803);
   Zee_bjet_pt_lep1_stack_4->SetEntries(269761);

   ci = TColor::GetColor("#00cc00");
   Zee_bjet_pt_lep1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_pt_lep1_stack_4->SetLineColor(ci);
   Zee_bjet_pt_lep1_stack_4->GetXaxis()->SetRange(1,200);
   Zee_bjet_pt_lep1_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_pt_lep1_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_pt_lep1_stack_4,"");
   st->Draw("hist");
   
   TH1D *Zee_bjet_pt_lep1__171 = new TH1D("Zee_bjet_pt_lep1__171","",40,0,200);
   Zee_bjet_pt_lep1__171->SetBinContent(6,15178);
   Zee_bjet_pt_lep1__171->SetBinContent(7,17004);
   Zee_bjet_pt_lep1__171->SetBinContent(8,16534);
   Zee_bjet_pt_lep1__171->SetBinContent(9,12730);
   Zee_bjet_pt_lep1__171->SetBinContent(10,7198);
   Zee_bjet_pt_lep1__171->SetBinContent(11,3782);
   Zee_bjet_pt_lep1__171->SetBinContent(12,2198);
   Zee_bjet_pt_lep1__171->SetBinContent(13,1422);
   Zee_bjet_pt_lep1__171->SetBinContent(14,902);
   Zee_bjet_pt_lep1__171->SetBinContent(15,633);
   Zee_bjet_pt_lep1__171->SetBinContent(16,433);
   Zee_bjet_pt_lep1__171->SetBinContent(17,293);
   Zee_bjet_pt_lep1__171->SetBinContent(18,216);
   Zee_bjet_pt_lep1__171->SetBinContent(19,170);
   Zee_bjet_pt_lep1__171->SetBinContent(20,135);
   Zee_bjet_pt_lep1__171->SetBinContent(21,101);
   Zee_bjet_pt_lep1__171->SetBinContent(22,101);
   Zee_bjet_pt_lep1__171->SetBinContent(23,58);
   Zee_bjet_pt_lep1__171->SetBinContent(24,67);
   Zee_bjet_pt_lep1__171->SetBinContent(25,42);
   Zee_bjet_pt_lep1__171->SetBinContent(26,35);
   Zee_bjet_pt_lep1__171->SetBinContent(27,23);
   Zee_bjet_pt_lep1__171->SetBinContent(28,26);
   Zee_bjet_pt_lep1__171->SetBinContent(29,17);
   Zee_bjet_pt_lep1__171->SetBinContent(30,20);
   Zee_bjet_pt_lep1__171->SetBinContent(31,15);
   Zee_bjet_pt_lep1__171->SetBinContent(32,12);
   Zee_bjet_pt_lep1__171->SetBinContent(33,10);
   Zee_bjet_pt_lep1__171->SetBinContent(34,12);
   Zee_bjet_pt_lep1__171->SetBinContent(35,8);
   Zee_bjet_pt_lep1__171->SetBinContent(36,2);
   Zee_bjet_pt_lep1__171->SetBinContent(37,5);
   Zee_bjet_pt_lep1__171->SetBinContent(38,3);
   Zee_bjet_pt_lep1__171->SetBinContent(39,3);
   Zee_bjet_pt_lep1__171->SetBinContent(40,3);
   Zee_bjet_pt_lep1__171->SetBinContent(41,19);
   Zee_bjet_pt_lep1__171->SetBinError(6,123.199);
   Zee_bjet_pt_lep1__171->SetBinError(7,130.3994);
   Zee_bjet_pt_lep1__171->SetBinError(8,128.5846);
   Zee_bjet_pt_lep1__171->SetBinError(9,112.8273);
   Zee_bjet_pt_lep1__171->SetBinError(10,84.84103);
   Zee_bjet_pt_lep1__171->SetBinError(11,61.49797);
   Zee_bjet_pt_lep1__171->SetBinError(12,46.88283);
   Zee_bjet_pt_lep1__171->SetBinError(13,37.70942);
   Zee_bjet_pt_lep1__171->SetBinError(14,30.03331);
   Zee_bjet_pt_lep1__171->SetBinError(15,25.15949);
   Zee_bjet_pt_lep1__171->SetBinError(16,20.80865);
   Zee_bjet_pt_lep1__171->SetBinError(17,17.11724);
   Zee_bjet_pt_lep1__171->SetBinError(18,14.69694);
   Zee_bjet_pt_lep1__171->SetBinError(19,13.0384);
   Zee_bjet_pt_lep1__171->SetBinError(20,11.61895);
   Zee_bjet_pt_lep1__171->SetBinError(21,10.04988);
   Zee_bjet_pt_lep1__171->SetBinError(22,10.04988);
   Zee_bjet_pt_lep1__171->SetBinError(23,7.615773);
   Zee_bjet_pt_lep1__171->SetBinError(24,8.185353);
   Zee_bjet_pt_lep1__171->SetBinError(25,6.480741);
   Zee_bjet_pt_lep1__171->SetBinError(26,5.91608);
   Zee_bjet_pt_lep1__171->SetBinError(27,4.795832);
   Zee_bjet_pt_lep1__171->SetBinError(28,5.09902);
   Zee_bjet_pt_lep1__171->SetBinError(29,4.123106);
   Zee_bjet_pt_lep1__171->SetBinError(30,4.472136);
   Zee_bjet_pt_lep1__171->SetBinError(31,3.872983);
   Zee_bjet_pt_lep1__171->SetBinError(32,3.464102);
   Zee_bjet_pt_lep1__171->SetBinError(33,3.162278);
   Zee_bjet_pt_lep1__171->SetBinError(34,3.464102);
   Zee_bjet_pt_lep1__171->SetBinError(35,2.828427);
   Zee_bjet_pt_lep1__171->SetBinError(36,1.414214);
   Zee_bjet_pt_lep1__171->SetBinError(37,2.236068);
   Zee_bjet_pt_lep1__171->SetBinError(38,1.732051);
   Zee_bjet_pt_lep1__171->SetBinError(39,1.732051);
   Zee_bjet_pt_lep1__171->SetBinError(40,1.732051);
   Zee_bjet_pt_lep1__171->SetBinError(41,4.358899);
   Zee_bjet_pt_lep1__171->SetEntries(79410);

   ci = TColor::GetColor("#000099");
   Zee_bjet_pt_lep1__171->SetLineColor(ci);
   Zee_bjet_pt_lep1__171->SetLineWidth(2);
   Zee_bjet_pt_lep1__171->SetMarkerStyle(20);
   Zee_bjet_pt_lep1__171->SetMarkerSize(1.2);
   Zee_bjet_pt_lep1__171->GetXaxis()->SetRange(1,200);
   Zee_bjet_pt_lep1__171->GetXaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1__171->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1__171->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1__171->GetXaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1__171->GetYaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1__171->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1__171->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1__171->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_pt_lep1__171->GetYaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1__171->GetZaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1__171->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1__171->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1__171->GetZaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1__171->Draw("same E");
   
   Double_t Graph_from_Zee_bjet_pt_lep1_fx1171[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t Graph_from_Zee_bjet_pt_lep1_fy1171[40] = {
   0,
   0,
   0,
   0,
   0,
   17000.67,
   19360.75,
   17591.17,
   13069.93,
   7562.911,
   3989.164,
   2236.68,
   1373.093,
   887.2943,
   543.799,
   367.5711,
   325.2502,
   212.1359,
   169.8143,
   111.6601,
   88.0517,
   77.23183,
   64.08213,
   35.01733,
   46.33425,
   30.06487,
   15.77901,
   24.87074,
   13.95258,
   13.35681,
   15.30179,
   11.07892,
   7.381663,
   2.352258,
   10.0548,
   1.93014,
   4.340467,
   -0.2451118,
   8.421934,
   2.878188};
   Double_t Graph_from_Zee_bjet_pt_lep1_fex1171[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph_from_Zee_bjet_pt_lep1_fey1171[40] = {
   0,
   0,
   0,
   0,
   0,
   181.0852,
   194.448,
   183.9557,
   159.5709,
   116.9479,
   82.83317,
   62.85644,
   49.98168,
   41.09662,
   33.4068,
   28.79326,
   24.93532,
   20.38151,
   18.3422,
   15.62429,
   14.54047,
   12.93572,
   10.69328,
   9.517936,
   8.375444,
   7.170314,
   6.95592,
   7.080834,
   6.134355,
   5.604993,
   5.065483,
   4.48229,
   3.992501,
   3.352601,
   3.217233,
   2.403234,
   2.854408,
   2.224515,
   2.606875,
   1.871759};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zee_bjet_pt_lep1_fx1171,Graph_from_Zee_bjet_pt_lep1_fy1171,Graph_from_Zee_bjet_pt_lep1_fex1171,Graph_from_Zee_bjet_pt_lep1_fey1171);
   gre->SetName("Graph_from_Zee_bjet_pt_lep1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_bjet_pt_lep11171 = new TH1F("Graph_Graph_from_Zee_bjet_pt_lep11171","",100,0,220);
   Graph_Graph_from_Zee_bjet_pt_lep11171->SetMinimum(-1958.236);
   Graph_Graph_from_Zee_bjet_pt_lep11171->SetMaximum(21510.97);
   Graph_Graph_from_Zee_bjet_pt_lep11171->SetDirectory(0);
   Graph_Graph_from_Zee_bjet_pt_lep11171->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_bjet_pt_lep11171->SetLineColor(ci);
   Graph_Graph_from_Zee_bjet_pt_lep11171->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11171->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11171->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11171->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11171->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11171->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11171->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11171->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_bjet_pt_lep11171->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11171->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11171->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11171->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11171->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_bjet_pt_lep11171);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_bjet_pt_lep1","Data (Z(ee) + b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_bjet_pt_lep1_stack_4","Z+jets","F");

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
   entry=leg->AddEntry("Zee_bjet_pt_lep1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_bjet_pt_lep1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_bjet_pt_lep1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_bjet_pt_lep1","MC unc. (stat.)","fl");

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
   pt_lep1_Z_bjet_Zee_17_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-30.64508,-0.2774193,210.4839,1.658065);
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
   
   TH1D *data_mc_ratio__172 = new TH1D("data_mc_ratio__172","",40,0,200);
   data_mc_ratio__172->SetBinContent(6,0.8927884);
   data_mc_ratio__172->SetBinContent(7,0.8782717);
   data_mc_ratio__172->SetBinContent(8,0.9399035);
   data_mc_ratio__172->SetBinContent(9,0.9739915);
   data_mc_ratio__172->SetBinContent(10,0.9517499);
   data_mc_ratio__172->SetBinContent(11,0.9480683);
   data_mc_ratio__172->SetBinContent(12,0.9827067);
   data_mc_ratio__172->SetBinContent(13,1.035618);
   data_mc_ratio__172->SetBinContent(14,1.016574);
   data_mc_ratio__172->SetBinContent(15,1.164033);
   data_mc_ratio__172->SetBinContent(16,1.178004);
   data_mc_ratio__172->SetBinContent(17,0.9008451);
   data_mc_ratio__172->SetBinContent(18,1.018215);
   data_mc_ratio__172->SetBinContent(19,1.001094);
   data_mc_ratio__172->SetBinContent(20,1.209026);
   data_mc_ratio__172->SetBinContent(21,1.147053);
   data_mc_ratio__172->SetBinContent(22,1.307751);
   data_mc_ratio__172->SetBinContent(23,0.9050885);
   data_mc_ratio__172->SetBinContent(24,1.913338);
   data_mc_ratio__172->SetBinContent(25,0.9064569);
   data_mc_ratio__172->SetBinContent(26,1.164149);
   data_mc_ratio__172->SetBinContent(27,1.457633);
   data_mc_ratio__172->SetBinContent(28,1.045405);
   data_mc_ratio__172->SetBinContent(29,1.218413);
   data_mc_ratio__172->SetBinContent(30,1.497364);
   data_mc_ratio__172->SetBinContent(31,0.9802772);
   data_mc_ratio__172->SetBinContent(32,1.083138);
   data_mc_ratio__172->SetBinContent(33,1.354708);
   data_mc_ratio__172->SetBinContent(34,5.101482);
   data_mc_ratio__172->SetBinContent(35,0.7956402);
   data_mc_ratio__172->SetBinContent(36,1.036194);
   data_mc_ratio__172->SetBinContent(37,1.15195);
   data_mc_ratio__172->SetBinContent(38,-12.23931);
   data_mc_ratio__172->SetBinContent(39,0.3562127);
   data_mc_ratio__172->SetBinContent(40,1.042322);
   data_mc_ratio__172->SetBinContent(41,1.14697);
   data_mc_ratio__172->SetBinError(6,0.007246717);
   data_mc_ratio__172->SetBinError(7,0.006735244);
   data_mc_ratio__172->SetBinError(8,0.007309611);
   data_mc_ratio__172->SetBinError(9,0.008632587);
   data_mc_ratio__172->SetBinError(10,0.01121804);
   data_mc_ratio__172->SetBinError(11,0.01541625);
   data_mc_ratio__172->SetBinError(12,0.02096091);
   data_mc_ratio__172->SetBinError(13,0.02746312);
   data_mc_ratio__172->SetBinError(14,0.0338482);
   data_mc_ratio__172->SetBinError(15,0.04626616);
   data_mc_ratio__172->SetBinError(16,0.05661124);
   data_mc_ratio__172->SetBinError(17,0.05262793);
   data_mc_ratio__172->SetBinError(18,0.06928077);
   data_mc_ratio__172->SetBinError(19,0.07678038);
   data_mc_ratio__172->SetBinError(20,0.1040564);
   data_mc_ratio__172->SetBinError(21,0.1141361);
   data_mc_ratio__172->SetBinError(22,0.1301261);
   data_mc_ratio__172->SetBinError(23,0.1188439);
   data_mc_ratio__172->SetBinError(24,0.2337515);
   data_mc_ratio__172->SetBinError(25,0.1398693);
   data_mc_ratio__172->SetBinError(26,0.1967772);
   data_mc_ratio__172->SetBinError(27,0.3039375);
   data_mc_ratio__172->SetBinError(28,0.2050208);
   data_mc_ratio__172->SetBinError(29,0.2955085);
   data_mc_ratio__172->SetBinError(30,0.3348207);
   data_mc_ratio__172->SetBinError(31,0.2531065);
   data_mc_ratio__172->SetBinError(32,0.3126751);
   data_mc_ratio__172->SetBinError(33,0.4283964);
   data_mc_ratio__172->SetBinError(34,1.472671);
   data_mc_ratio__172->SetBinError(35,0.2813013);
   data_mc_ratio__172->SetBinError(36,0.7326999);
   data_mc_ratio__172->SetBinError(37,0.5151676);
   data_mc_ratio__172->SetBinError(38,7.066369);
   data_mc_ratio__172->SetBinError(39,0.2056595);
   data_mc_ratio__172->SetBinError(40,0.6017852);
   data_mc_ratio__172->SetBinError(41,0.4379081);
   data_mc_ratio__172->SetMinimum(0.4);
   data_mc_ratio__172->SetMaximum(1.6);
   data_mc_ratio__172->SetEntries(0.06439791);
   data_mc_ratio__172->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__172->SetLineColor(ci);
   data_mc_ratio__172->SetLineWidth(2);
   data_mc_ratio__172->SetMarkerStyle(20);
   data_mc_ratio__172->SetMarkerSize(1.2);
   data_mc_ratio__172->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__172->GetXaxis()->SetRange(1,40);
   data_mc_ratio__172->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__172->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__172->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__172->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__172->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__172->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__172->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__172->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__172->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__172->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__172->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__172->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__172->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__172->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__172->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__172->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__172->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1172[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t Graph_from_mc_statistical_error_fy1172[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1172[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph_from_mc_statistical_error_fey1172[40] = {
   0,
   0,
   0,
   0,
   0,
   0.01065165,
   0.01004341,
   0.01045728,
   0.01220901,
   0.01546334,
   0.02076454,
   0.02810257,
   0.03640081,
   0.04631679,
   0.06143226,
   0.07833385,
   0.07666504,
   0.09607762,
   0.1080133,
   0.1399273,
   0.1651356,
   0.167492,
   0.1668684,
   0.2718064,
   0.1807614,
   0.2384948,
   0.4408338,
   0.2847054,
   0.4396574,
   0.4196357,
   0.3310385,
   0.4045784,
   0.5408674,
   1.425269,
   0.31997,
   1.245108,
   0.6576271,
   0,
   0.309534,
   0.6503256};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1172,Graph_from_mc_statistical_error_fy1172,Graph_from_mc_statistical_error_fex1172,Graph_from_mc_statistical_error_fey1172);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1172 = new TH1F("Graph_Graph_from_mc_statistical_error1172","",100,0,220);
   Graph_Graph_from_mc_statistical_error1172->SetMinimum(-0.7103231);
   Graph_Graph_from_mc_statistical_error1172->SetMaximum(2.710323);
   Graph_Graph_from_mc_statistical_error1172->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1172->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1172->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1172->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1172->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1172->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1172->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1172->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1172->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1172->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1172->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1172->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1172->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1172->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1172->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1172->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1172);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_bjet_Zee_17_amcnlo->cd();
   pt_lep1_Z_bjet_Zee_17_amcnlo->Modified();
   pt_lep1_Z_bjet_Zee_17_amcnlo->cd();
   pt_lep1_Z_bjet_Zee_17_amcnlo->SetSelected(pt_lep1_Z_bjet_Zee_17_amcnlo);
}

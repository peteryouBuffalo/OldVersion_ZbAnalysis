void mSV_jet1_Z_2bjet_Zmm_17_amcnlo()
{
//=========Macro generated from canvas: mSV_jet1_Z_2bjet_Zmm_17_amcnlo/mSV_jet1_Z_2bjet_Zmm_17_amcnlo
//=========  (Thu Jan 14 10:43:08 2021) by ROOT version 6.14/09
   TCanvas *mSV_jet1_Z_2bjet_Zmm_17_amcnlo = new TCanvas("mSV_jet1_Z_2bjet_Zmm_17_amcnlo", "mSV_jet1_Z_2bjet_Zmm_17_amcnlo",0,0,600,600);
   mSV_jet1_Z_2bjet_Zmm_17_amcnlo->SetHighLightColor(2);
   mSV_jet1_Z_2bjet_Zmm_17_amcnlo->Range(0,0,1,1);
   mSV_jet1_Z_2bjet_Zmm_17_amcnlo->SetFillColor(0);
   mSV_jet1_Z_2bjet_Zmm_17_amcnlo->SetFillStyle(4000);
   mSV_jet1_Z_2bjet_Zmm_17_amcnlo->SetBorderMode(0);
   mSV_jet1_Z_2bjet_Zmm_17_amcnlo->SetBorderSize(2);
   mSV_jet1_Z_2bjet_Zmm_17_amcnlo->SetFrameFillStyle(1000);
   mSV_jet1_Z_2bjet_Zmm_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.602807,6.314516,1611.204);
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
   st->SetMaximum(1380.88);
   
   TH1F *st_stack_334 = new TH1F("st_stack_334","",50,0,10);
   st_stack_334->SetMinimum(0.01);
   st_stack_334->SetMaximum(1449.924);
   st_stack_334->SetDirectory(0);
   st_stack_334->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_334->SetLineColor(ci);
   st_stack_334->GetXaxis()->SetRange(1,30);
   st_stack_334->GetXaxis()->SetLabelFont(42);
   st_stack_334->GetXaxis()->SetLabelSize(0.035);
   st_stack_334->GetXaxis()->SetTitleSize(0.035);
   st_stack_334->GetXaxis()->SetTitleFont(42);
   st_stack_334->GetYaxis()->SetTitle("Events/0.2");
   st_stack_334->GetYaxis()->SetLabelFont(42);
   st_stack_334->GetYaxis()->SetLabelSize(0.05);
   st_stack_334->GetYaxis()->SetTitleSize(0.057);
   st_stack_334->GetYaxis()->SetTitleOffset(1.2);
   st_stack_334->GetYaxis()->SetTitleFont(42);
   st_stack_334->GetZaxis()->SetLabelFont(42);
   st_stack_334->GetZaxis()->SetLabelSize(0.035);
   st_stack_334->GetZaxis()->SetTitleSize(0.035);
   st_stack_334->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_334);
   
   
   TH1D *Zmm_2bjet_mSV_jet1_stack_1 = new TH1D("Zmm_2bjet_mSV_jet1_stack_1","",50,0,10);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(0,1.993127);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(2,0.4083347);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(3,1.949806);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(4,2.185867);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(5,2.799512);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(6,4.99408);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(7,4.143384);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(8,6.519605);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(9,4.840902);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(10,5.717436);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(11,3.852242);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(12,3.309546);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(13,3.892077);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(14,3.180432);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(15,1.368969);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(16,3.056094);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(17,1.976528);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(18,1.095776);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(19,0.5556755);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(20,0.3813303);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(21,0.7720655);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(23,0.1987588);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinContent(24,0.210529);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(0,0.6133824);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(2,0.2634551);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(3,0.6252041);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(4,0.6555072);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(5,0.710153);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(6,0.9826748);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(7,0.8993004);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(8,1.116337);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(9,0.938739);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(10,1.052316);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(11,0.8637023);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(12,0.8147125);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(13,1.048067);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(14,0.7888728);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(15,0.5180151);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(16,1.208452);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(17,0.5947793);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(18,0.4368573);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(19,0.3229039);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(20,0.2698018);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(21,0.3937495);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(23,0.1987588);
   Zmm_2bjet_mSV_jet1_stack_1->SetBinError(24,0.210529);
   Zmm_2bjet_mSV_jet1_stack_1->SetEntries(345);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_mSV_jet1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_mSV_jet1_stack_1->SetLineColor(ci);
   Zmm_2bjet_mSV_jet1_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_mSV_jet1_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_mSV_jet1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_mSV_jet1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_mSV_jet1_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_mSV_jet1_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_mSV_jet1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_mSV_jet1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_mSV_jet1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_mSV_jet1_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_mSV_jet1_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_mSV_jet1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_mSV_jet1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_mSV_jet1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_mSV_jet1_stack_1,"");
   
   TH1D *Zmm_2bjet_mSV_jet1_stack_2 = new TH1D("Zmm_2bjet_mSV_jet1_stack_2","",50,0,10);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(0,4.570919);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(2,1.092145);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(3,3.283341);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(4,4.123662);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(5,5.804746);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(6,14.54468);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(7,16.2064);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(8,11.13057);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(9,14.12828);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(10,7.531186);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(11,10.13146);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(12,7.489223);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(13,7.373212);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(14,5.981515);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(15,5.080044);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(16,5.036952);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(17,2.014607);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(18,4.189264);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(19,2.621395);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(20,1.103061);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(21,0.3986159);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(22,1.512514);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(23,0.7095099);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(24,0.3473933);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinContent(26,0.2937068);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(0,1.235259);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(2,0.6307048);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(3,1.005319);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(4,1.239389);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(5,1.333183);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(6,2.313344);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(7,2.499748);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(8,1.94893);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(9,2.209758);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(10,1.614978);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(11,1.900148);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(12,1.775546);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(13,1.583955);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(14,1.434043);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(15,1.339747);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(16,1.318467);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(17,0.8159922);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(18,1.180443);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(19,0.9012087);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(20,0.5749538);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(21,0.3530502);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(22,0.6852438);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(23,0.5018368);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(24,0.3473933);
   Zmm_2bjet_mSV_jet1_stack_2->SetBinError(26,0.2937068);
   Zmm_2bjet_mSV_jet1_stack_2->SetEntries(434);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_mSV_jet1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_mSV_jet1_stack_2->SetLineColor(ci);
   Zmm_2bjet_mSV_jet1_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_mSV_jet1_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_mSV_jet1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_mSV_jet1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_mSV_jet1_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_mSV_jet1_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_mSV_jet1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_mSV_jet1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_mSV_jet1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_mSV_jet1_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_mSV_jet1_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_mSV_jet1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_mSV_jet1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_mSV_jet1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_mSV_jet1_stack_2,"");
   
   TH1D *Zmm_2bjet_mSV_jet1_stack_3 = new TH1D("Zmm_2bjet_mSV_jet1_stack_3","",50,0,10);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(0,97.43777);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(2,28.12595);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(3,80.40068);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(4,133.367);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(5,159.8516);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(6,190.7982);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(7,210.7762);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(8,210.0006);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(9,208.4997);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(10,189.7768);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(11,175.8834);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(12,138.7253);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(13,126.8637);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(14,109.8156);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(15,73.66035);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(16,69.02463);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(17,41.67473);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(18,37.91043);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(19,27.93554);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(20,17.00467);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(21,14.1872);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(22,6.907103);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(23,6.214413);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(24,3.772899);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(25,3.458612);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(26,0.5072291);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(27,1.40128);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(28,0.4014273);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(29,0.01686426);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(30,0.4309102);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(32,0.4261727);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinContent(51,0.297103);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(0,6.150865);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(2,3.250948);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(3,5.54798);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(4,7.284318);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(5,7.883917);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(6,8.630349);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(7,9.025093);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(8,9.081364);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(9,9.076302);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(10,8.527818);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(11,8.273765);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(12,7.366565);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(13,7.00605);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(14,6.570971);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(15,5.292453);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(16,5.197047);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(17,3.992052);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(18,3.827148);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(19,3.248497);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(20,2.519529);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(21,2.312759);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(22,1.608282);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(23,1.555089);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(24,1.217246);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(25,1.177288);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(26,0.5072291);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(27,0.7156082);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(28,0.4014273);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(29,0.01686426);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(30,0.4309102);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(32,0.4261727);
   Zmm_2bjet_mSV_jet1_stack_3->SetBinError(51,0.297103);
   Zmm_2bjet_mSV_jet1_stack_3->SetEntries(6946);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_mSV_jet1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_mSV_jet1_stack_3->SetLineColor(ci);
   Zmm_2bjet_mSV_jet1_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_mSV_jet1_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_mSV_jet1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_mSV_jet1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_mSV_jet1_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_mSV_jet1_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_mSV_jet1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_mSV_jet1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_mSV_jet1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_mSV_jet1_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_mSV_jet1_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_mSV_jet1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_mSV_jet1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_mSV_jet1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_mSV_jet1_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_mSV_jet1_stack_4 = new TH1D("Zmm_2bjet_XX_mSV_jet1_stack_4","",50,0,10);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(0,0.1543641);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(2,0.9431172);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(3,1.775615);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(4,5.408589);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(5,2.39876);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(6,11.29705);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(7,7.699796);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(8,7.493422);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(9,8.340771);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(10,4.647945);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(11,0.9234422);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(12,-0.9685563);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(13,-0.3531844);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(14,2.06858);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(16,0.07709415);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(17,0.8016127);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(18,3.250283);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(19,-0.1432735);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(20,-0.9717709);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinContent(21,1.103474);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(0,1.679124);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(2,0.9431172);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(3,1.668551);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(4,4.647001);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(5,2.458698);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(6,8.344787);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(7,4.364407);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(8,4.824897);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(9,4.576067);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(10,3.470653);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(11,3.62602);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(12,0.9685563);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(13,1.364476);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(14,2.06858);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(16,0.07709415);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(17,0.726535);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(18,3.250283);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(19,0.2354632);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(20,0.9717709);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetBinError(21,1.205925);
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetEntries(108);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_mSV_jet1_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_mSV_jet1_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_XX_mSV_jet1_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_mSV_jet1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_mSV_jet1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_mSV_jet1_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_mSV_jet1_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_mSV_jet1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_mSV_jet1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_mSV_jet1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_mSV_jet1_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_mSV_jet1_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_mSV_jet1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_mSV_jet1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_mSV_jet1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_mSV_jet1_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_mSV_jet1_stack_5 = new TH1D("Zmm_2bjet_bX_mSV_jet1_stack_5","",50,0,10);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(0,5.686096);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(2,2.423592);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(3,1.755398);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(4,5.483152);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(5,6.757465);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(6,11.97173);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(7,4.578596);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(8,8.52215);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(9,13.30777);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(10,4.124626);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(11,1.742218);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(12,5.60324);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(13,4.609505);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(14,3.753331);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(15,1.389768);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(16,4.478957);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(17,-0.2952711);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(18,1.163167);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(19,0.1409455);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(22,0.009919551);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(23,-0.8589013);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinContent(26,-0.05620994);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(0,3.224089);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(2,1.424303);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(3,2.746863);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(4,3.139433);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(5,3.910972);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(6,4.729372);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(7,4.296596);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(8,4.502371);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(9,4.206604);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(10,4.465141);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(11,3.550407);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(12,4.770086);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(13,2.73132);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(14,2.547872);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(15,2.234653);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(16,1.953702);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(17,2.051588);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(18,1.962064);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(19,1.760397);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(22,0.009919551);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(23,0.8589013);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetBinError(26,0.05620994);
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetEntries(333);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_mSV_jet1_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_mSV_jet1_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bX_mSV_jet1_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_mSV_jet1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_mSV_jet1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_mSV_jet1_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_mSV_jet1_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_mSV_jet1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_mSV_jet1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_mSV_jet1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_mSV_jet1_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_mSV_jet1_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_mSV_jet1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_mSV_jet1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_mSV_jet1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_mSV_jet1_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_mSV_jet1_stack_6 = new TH1D("Zmm_2bjet_bb_mSV_jet1_stack_6","",50,0,10);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(0,141.2334);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(2,62.67714);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(3,117.1795);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(4,241.7789);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(5,321.7976);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(6,358.2208);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(7,349.8021);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(8,401.7259);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(9,510.3663);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(10,437.9214);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(11,359.0122);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(12,313.1249);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(13,303.6102);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(14,191.7425);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(15,196.3059);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(16,151.7696);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(17,135.4304);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(18,56.92394);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(19,75.08374);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(20,51.83451);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(21,37.81233);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(22,23.0064);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(23,13.24175);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(24,14.13659);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(25,2.646312);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(26,-2.484416);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(27,-1.030808);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinContent(29,-0.8373666);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(0,19.84714);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(2,12.25532);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(3,18.41068);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(4,23.572);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(5,26.95184);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(6,30.10601);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(7,31.48891);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(8,33.3513);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(9,34.78932);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(10,31.86819);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(11,29.82989);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(12,28.0695);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(13,26.54089);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(14,23.17359);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(15,21.96499);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(16,19.38846);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(17,17.70805);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(18,14.06792);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(19,12.59758);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(20,9.992789);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(21,8.237919);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(22,6.944915);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(23,6.547786);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(24,4.17737);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(25,3.017018);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(26,2.940326);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(27,1.961348);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetBinError(29,0.8373666);
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetEntries(17994);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_mSV_jet1_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_mSV_jet1_stack_6->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bb_mSV_jet1_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_mSV_jet1_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_mSV_jet1_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_mSV_jet1_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_mSV_jet1_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_mSV_jet1_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_mSV_jet1_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_mSV_jet1_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_mSV_jet1_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_mSV_jet1_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_mSV_jet1_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_mSV_jet1_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_mSV_jet1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_mSV_jet1_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_mSV_jet1__667 = new TH1D("Zmm_2bjet_mSV_jet1__667","",50,0,10);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(0,195);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(2,69);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(3,178);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(4,295);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(5,344);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(6,479);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(7,493);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(8,563);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(9,623);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(10,573);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(11,521);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(12,459);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(13,382);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(14,295);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(15,266);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(16,222);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(17,192);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(18,120);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(19,86);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(20,78);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(21,41);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(22,29);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(23,29);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(24,6);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(25,5);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(26,1);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(27,1);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(28,1);
   Zmm_2bjet_mSV_jet1__667->SetBinContent(30,1);
   Zmm_2bjet_mSV_jet1__667->SetBinError(0,13.96424);
   Zmm_2bjet_mSV_jet1__667->SetBinError(2,8.306624);
   Zmm_2bjet_mSV_jet1__667->SetBinError(3,13.34166);
   Zmm_2bjet_mSV_jet1__667->SetBinError(4,17.17556);
   Zmm_2bjet_mSV_jet1__667->SetBinError(5,18.54724);
   Zmm_2bjet_mSV_jet1__667->SetBinError(6,21.88607);
   Zmm_2bjet_mSV_jet1__667->SetBinError(7,22.2036);
   Zmm_2bjet_mSV_jet1__667->SetBinError(8,23.72762);
   Zmm_2bjet_mSV_jet1__667->SetBinError(9,24.95997);
   Zmm_2bjet_mSV_jet1__667->SetBinError(10,23.93742);
   Zmm_2bjet_mSV_jet1__667->SetBinError(11,22.82542);
   Zmm_2bjet_mSV_jet1__667->SetBinError(12,21.42429);
   Zmm_2bjet_mSV_jet1__667->SetBinError(13,19.54482);
   Zmm_2bjet_mSV_jet1__667->SetBinError(14,17.17556);
   Zmm_2bjet_mSV_jet1__667->SetBinError(15,16.30951);
   Zmm_2bjet_mSV_jet1__667->SetBinError(16,14.89966);
   Zmm_2bjet_mSV_jet1__667->SetBinError(17,13.85641);
   Zmm_2bjet_mSV_jet1__667->SetBinError(18,10.95445);
   Zmm_2bjet_mSV_jet1__667->SetBinError(19,9.273618);
   Zmm_2bjet_mSV_jet1__667->SetBinError(20,8.831761);
   Zmm_2bjet_mSV_jet1__667->SetBinError(21,6.403124);
   Zmm_2bjet_mSV_jet1__667->SetBinError(22,5.385165);
   Zmm_2bjet_mSV_jet1__667->SetBinError(23,5.385165);
   Zmm_2bjet_mSV_jet1__667->SetBinError(24,2.44949);
   Zmm_2bjet_mSV_jet1__667->SetBinError(25,2.236068);
   Zmm_2bjet_mSV_jet1__667->SetBinError(26,1);
   Zmm_2bjet_mSV_jet1__667->SetBinError(27,1);
   Zmm_2bjet_mSV_jet1__667->SetBinError(28,1);
   Zmm_2bjet_mSV_jet1__667->SetBinError(30,1);
   Zmm_2bjet_mSV_jet1__667->SetEntries(6547);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_mSV_jet1__667->SetLineColor(ci);
   Zmm_2bjet_mSV_jet1__667->SetLineWidth(2);
   Zmm_2bjet_mSV_jet1__667->SetMarkerStyle(20);
   Zmm_2bjet_mSV_jet1__667->SetMarkerSize(1.2);
   Zmm_2bjet_mSV_jet1__667->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_mSV_jet1__667->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_mSV_jet1__667->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_mSV_jet1__667->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_mSV_jet1__667->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_mSV_jet1__667->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_mSV_jet1__667->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_mSV_jet1__667->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_mSV_jet1__667->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_mSV_jet1__667->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_mSV_jet1__667->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_mSV_jet1__667->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_mSV_jet1__667->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_mSV_jet1__667->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_mSV_jet1__667->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_mSV_jet1_fx1667[50] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_Zmm_2bjet_bb_mSV_jet1_fy1667[50] = {
   0,
   95.67028,
   206.3443,
   392.3472,
   499.4097,
   591.8265,
   593.2065,
   645.3922,
   759.4838,
   649.7194,
   551.545,
   467.2836,
   445.9955,
   316.542,
   277.8051,
   233.4434,
   181.6026,
   104.5329,
   106.194,
   69.35179,
   54.27369,
   31.43594,
   19.50553,
   18.46742,
   6.104924,
   -1.73969,
   0.3704713,
   0.4014273,
   -0.8205024,
   0.4309102,
   0,
   0.4261727,
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zmm_2bjet_bb_mSV_jet1_fex1667[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_Zmm_2bjet_bb_mSV_jet1_fey1667[50] = {
   0,
   12.81198,
   19.5311,
   25.34003,
   28.49878,
   32.85079,
   33.43007,
   35.26153,
   36.56605,
   33.52616,
   31.43863,
   29.49018,
   27.68452,
   24.36478,
   22.74924,
   20.24705,
   18.31032,
   15.11793,
   13.1652,
   10.37071,
   8.657142,
   7.161569,
   6.805943,
   4.370024,
   3.238581,
   2.998704,
   2.087817,
   0.4014273,
   0.8375365,
   0.4309102,
   0,
   0.4261727,
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_Zmm_2bjet_bb_mSV_jet1_fx1667,Graph_from_Zmm_2bjet_bb_mSV_jet1_fy1667,Graph_from_Zmm_2bjet_bb_mSV_jet1_fex1667,Graph_from_Zmm_2bjet_bb_mSV_jet1_fey1667);
   gre->SetName("Graph_from_Zmm_2bjet_bb_mSV_jet1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667","",100,0,11);
   Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667->SetMinimum(-84.81722);
   Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667->SetMaximum(876.1287);
   Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_mSV_jet11667);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_mSV_jet1","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_mSV_jet1_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_mSV_jet1_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_mSV_jet1_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_mSV_jet1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_mSV_jet1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_mSV_jet1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_mSV_jet1","MC unc. (stat.)","fl");

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
   mSV_jet1_Z_2bjet_Zmm_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__668 = new TH1D("data_mc_ratio__668","",50,0,10);
   data_mc_ratio__668->SetBinContent(0,0.7766582);
   data_mc_ratio__668->SetBinContent(2,0.7212271);
   data_mc_ratio__668->SetBinContent(3,0.8626358);
   data_mc_ratio__668->SetBinContent(4,0.7518851);
   data_mc_ratio__668->SetBinContent(5,0.6888132);
   data_mc_ratio__668->SetBinContent(6,0.8093588);
   data_mc_ratio__668->SetBinContent(7,0.8310766);
   data_mc_ratio__668->SetBinContent(8,0.8723378);
   data_mc_ratio__668->SetBinContent(9,0.820294);
   data_mc_ratio__668->SetBinContent(10,0.8819192);
   data_mc_ratio__668->SetBinContent(11,0.9446192);
   data_mc_ratio__668->SetBinContent(12,0.9822728);
   data_mc_ratio__668->SetBinContent(13,0.8565109);
   data_mc_ratio__668->SetBinContent(14,0.9319459);
   data_mc_ratio__668->SetBinContent(15,0.957506);
   data_mc_ratio__668->SetBinContent(16,0.9509801);
   data_mc_ratio__668->SetBinContent(17,1.057254);
   data_mc_ratio__668->SetBinContent(18,1.147964);
   data_mc_ratio__668->SetBinContent(19,0.8098384);
   data_mc_ratio__668->SetBinContent(20,1.124701);
   data_mc_ratio__668->SetBinContent(21,0.7554305);
   data_mc_ratio__668->SetBinContent(22,0.922511);
   data_mc_ratio__668->SetBinContent(23,1.486757);
   data_mc_ratio__668->SetBinContent(24,0.3248966);
   data_mc_ratio__668->SetBinContent(25,0.8190111);
   data_mc_ratio__668->SetBinContent(26,-0.5748152);
   data_mc_ratio__668->SetBinContent(27,2.699265);
   data_mc_ratio__668->SetBinContent(28,2.491111);
   data_mc_ratio__668->SetBinContent(30,2.320669);
   data_mc_ratio__668->SetBinError(0,0.08584377);
   data_mc_ratio__668->SetBinError(2,0.08682554);
   data_mc_ratio__668->SetBinError(3,0.06465729);
   data_mc_ratio__668->SetBinError(4,0.04377645);
   data_mc_ratio__668->SetBinError(5,0.03713832);
   data_mc_ratio__668->SetBinError(6,0.03698055);
   data_mc_ratio__668->SetBinError(7,0.03742981);
   data_mc_ratio__668->SetBinError(8,0.03676465);
   data_mc_ratio__668->SetBinError(9,0.03286438);
   data_mc_ratio__668->SetBinError(10,0.0368427);
   data_mc_ratio__668->SetBinError(11,0.04138452);
   data_mc_ratio__668->SetBinError(12,0.04584857);
   data_mc_ratio__668->SetBinError(13,0.04382291);
   data_mc_ratio__668->SetBinError(14,0.05425999);
   data_mc_ratio__668->SetBinError(15,0.05870846);
   data_mc_ratio__668->SetBinError(16,0.06382561);
   data_mc_ratio__668->SetBinError(17,0.0763007);
   data_mc_ratio__668->SetBinError(18,0.1047943);
   data_mc_ratio__668->SetBinError(19,0.08732712);
   data_mc_ratio__668->SetBinError(20,0.1273473);
   data_mc_ratio__668->SetBinError(21,0.1179784);
   data_mc_ratio__668->SetBinError(22,0.171306);
   data_mc_ratio__668->SetBinError(23,0.2760839);
   data_mc_ratio__668->SetBinError(24,0.1326385);
   data_mc_ratio__668->SetBinError(25,0.3662729);
   data_mc_ratio__668->SetBinError(26,0.5748152);
   data_mc_ratio__668->SetBinError(27,2.699265);
   data_mc_ratio__668->SetBinError(28,2.491111);
   data_mc_ratio__668->SetBinError(30,2.320669);
   data_mc_ratio__668->SetMinimum(0.4);
   data_mc_ratio__668->SetMaximum(1.6);
   data_mc_ratio__668->SetEntries(3.020365);
   data_mc_ratio__668->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__668->SetLineColor(ci);
   data_mc_ratio__668->SetLineWidth(2);
   data_mc_ratio__668->SetMarkerStyle(20);
   data_mc_ratio__668->SetMarkerSize(1.2);
   data_mc_ratio__668->GetXaxis()->SetTitle("Sub-leading jet m_{SV} [GeV]");
   data_mc_ratio__668->GetXaxis()->SetRange(1,30);
   data_mc_ratio__668->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__668->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__668->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__668->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__668->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__668->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__668->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__668->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__668->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__668->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__668->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__668->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__668->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__668->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__668->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__668->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__668->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1668[50] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_mc_statistical_error_fy1668[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1668[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1668[50] = {
   0,
   0.1339181,
   0.09465298,
   0.06458573,
   0.05706494,
   0.05550746,
   0.05635487,
   0.05463582,
   0.04814592,
   0.05160098,
   0.05700101,
   0.06310982,
   0.06207354,
   0.07697172,
   0.08188923,
   0.08673218,
   0.1008263,
   0.1446237,
   0.1239731,
   0.1495377,
   0.159509,
   0.2278147,
   0.3489237,
   0.2366343,
   0.5304867,
   0,
   5.635571,
   1,
   0,
   1,
   0,
   1,
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
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1668,Graph_from_mc_statistical_error_fy1668,Graph_from_mc_statistical_error_fex1668,Graph_from_mc_statistical_error_fey1668);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1668 = new TH1F("Graph_Graph_from_mc_statistical_error1668","",100,0,11);
   Graph_Graph_from_mc_statistical_error1668->SetMinimum(-5.762685);
   Graph_Graph_from_mc_statistical_error1668->SetMaximum(7.762685);
   Graph_Graph_from_mc_statistical_error1668->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1668->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1668->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1668->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1668->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1668->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1668->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1668->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1668->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1668->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1668->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1668->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1668->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1668->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1668->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1668->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1668);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   mSV_jet1_Z_2bjet_Zmm_17_amcnlo->cd();
   mSV_jet1_Z_2bjet_Zmm_17_amcnlo->Modified();
   mSV_jet1_Z_2bjet_Zmm_17_amcnlo->cd();
   mSV_jet1_Z_2bjet_Zmm_17_amcnlo->SetSelected(mSV_jet1_Z_2bjet_Zmm_17_amcnlo);
}

void pt_lep0_Z_2bjet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: pt_lep0_Z_2bjet_Zee_16_amcnlo/pt_lep0_Z_2bjet_Zee_16_amcnlo
//=========  (Thu Jan 14 10:42:41 2021) by ROOT version 6.14/09
   TCanvas *pt_lep0_Z_2bjet_Zee_16_amcnlo = new TCanvas("pt_lep0_Z_2bjet_Zee_16_amcnlo", "pt_lep0_Z_2bjet_Zee_16_amcnlo",0,0,600,600);
   pt_lep0_Z_2bjet_Zee_16_amcnlo->SetHighLightColor(2);
   pt_lep0_Z_2bjet_Zee_16_amcnlo->Range(0,0,1,1);
   pt_lep0_Z_2bjet_Zee_16_amcnlo->SetFillColor(0);
   pt_lep0_Z_2bjet_Zee_16_amcnlo->SetFillStyle(4000);
   pt_lep0_Z_2bjet_Zee_16_amcnlo->SetBorderMode(0);
   pt_lep0_Z_2bjet_Zee_16_amcnlo->SetBorderSize(2);
   pt_lep0_Z_2bjet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   pt_lep0_Z_2bjet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-0.6254645,210.4839,634.839);
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
   st->SetMaximum(544.0881);
   
   TH1F *st_stack_169 = new TH1F("st_stack_169","",40,0,200);
   st_stack_169->SetMinimum(0.01);
   st_stack_169->SetMaximum(571.2925);
   st_stack_169->SetDirectory(0);
   st_stack_169->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_169->SetLineColor(ci);
   st_stack_169->GetXaxis()->SetRange(1,40);
   st_stack_169->GetXaxis()->SetLabelFont(42);
   st_stack_169->GetXaxis()->SetLabelSize(0.035);
   st_stack_169->GetXaxis()->SetTitleSize(0.035);
   st_stack_169->GetXaxis()->SetTitleFont(42);
   st_stack_169->GetYaxis()->SetTitle("Events/5.0");
   st_stack_169->GetYaxis()->SetLabelFont(42);
   st_stack_169->GetYaxis()->SetLabelSize(0.05);
   st_stack_169->GetYaxis()->SetTitleSize(0.057);
   st_stack_169->GetYaxis()->SetTitleOffset(1.2);
   st_stack_169->GetYaxis()->SetTitleFont(42);
   st_stack_169->GetZaxis()->SetLabelFont(42);
   st_stack_169->GetZaxis()->SetLabelSize(0.035);
   st_stack_169->GetZaxis()->SetTitleSize(0.035);
   st_stack_169->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_169);
   
   
   TH1D *Zee_2bjet_pt_lep0_stack_1 = new TH1D("Zee_2bjet_pt_lep0_stack_1","",40,0,200);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(8,0.7283949);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(9,1.134166);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(10,2.057648);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(11,2.040009);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(12,1.023405);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(13,1.693997);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(14,1.22835);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(15,1.002168);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(16,1.211495);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(17,0.5821568);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(18,1.264855);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(19,0.3774612);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(20,0.3300638);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(21,0.3593594);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(22,0.3673975);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(23,0.9398568);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(24,0.1911594);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(26,0.2155893);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(27,0.1384214);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(28,0.3804428);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(29,0.1954615);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(31,0.1960806);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(32,0.1779953);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(33,0.1895316);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(41,0.2112229);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(8,0.3404503);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(9,0.4435815);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(10,0.5900982);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(11,0.5974489);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(12,0.4181069);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(13,0.545938);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(14,0.4647382);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(15,0.3986831);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(16,0.4593118);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(17,0.3274568);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(18,0.4787897);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(19,0.2671537);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(20,0.233436);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(21,0.2541542);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(22,0.2602803);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(23,0.4226012);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(24,0.1911594);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(26,0.2155893);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(27,0.1384214);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(28,0.2693454);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(29,0.1954615);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(31,0.1960806);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(32,0.1779953);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(33,0.1895316);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(41,0.2112229);
   Zee_2bjet_pt_lep0_stack_1->SetEntries(109);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_pt_lep0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep0_stack_1->SetLineColor(ci);
   Zee_2bjet_pt_lep0_stack_1->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep0_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep0_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep0_stack_1,"");
   
   TH1D *Zee_2bjet_pt_lep0_stack_2 = new TH1D("Zee_2bjet_pt_lep0_stack_2","",40,0,200);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(8,0.7737341);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(9,1.086089);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(10,5.536073);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(11,3.681511);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(12,4.78285);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(13,3.247296);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(14,1.562937);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(15,1.935249);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(16,2.148278);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(17,2.683056);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(18,1.089698);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(19,1.991321);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(20,1.534568);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(21,1.308678);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(22,0.5122749);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(24,0.8370934);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(25,0.5782341);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(26,1.934587);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(27,0.8537963);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(30,0.287051);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(31,0.5518592);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(32,0.2303281);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(33,0.2864667);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(34,0.2981508);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(35,0.3044426);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(36,0.5822801);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(38,0.2500374);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(39,0.789755);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(40,0.2994479);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(41,1.615229);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(8,0.4468251);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(9,0.5191994);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(10,1.214061);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(11,0.9820258);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(12,1.122543);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(13,0.9113135);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(14,0.6391817);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(15,0.7220865);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(16,0.7625838);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(17,0.8501787);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(18,0.5434199);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(19,0.7436083);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(20,0.6442347);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(21,0.58919);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(22,0.3622358);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(24,0.4859942);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(25,0.4111908);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(26,0.7410408);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(27,0.4930757);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(30,0.287051);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(31,0.3902376);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(32,0.2303281);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(33,0.2864667);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(34,0.2981508);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(35,0.3044426);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(36,0.412331);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(38,0.2500374);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(39,0.4561256);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(40,0.2994479);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(41,0.6678942);
   Zee_2bjet_pt_lep0_stack_2->SetEntries(170);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_pt_lep0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep0_stack_2->SetLineColor(ci);
   Zee_2bjet_pt_lep0_stack_2->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep0_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep0_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep0_stack_2,"");
   
   TH1D *Zee_2bjet_pt_lep0_stack_3 = new TH1D("Zee_2bjet_pt_lep0_stack_3","",40,0,200);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(8,31.15993);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(9,58.77533);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(10,75.9577);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(11,91.3336);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(12,91.97002);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(13,82.58708);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(14,72.06849);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(15,64.15864);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(16,52.53167);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(17,37.71641);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(18,29.06625);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(19,20.15836);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(20,17.19063);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(21,14.37114);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(22,11.15238);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(23,6.391534);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(24,7.42663);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(25,4.483089);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(26,4.395927);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(27,2.701604);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(28,1.203632);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(29,1.239805);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(30,0.9114215);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(31,0.5020011);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(32,1.277845);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(33,0.6634428);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(34,0.2719764);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(35,0.5492242);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(36,0.348415);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(38,0.323776);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(39,0.5569124);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(41,0.3788061);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(8,2.33159);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(9,3.200295);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(10,3.647469);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(11,4.016154);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(12,4.013184);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(13,3.805842);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(14,3.540684);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(15,3.351253);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(16,3.062884);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(17,2.57007);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(18,2.270105);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(19,1.87806);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(20,1.733152);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(21,1.615619);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(22,1.41782);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(23,1.068046);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(24,1.159624);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(25,0.9009509);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(26,0.8752453);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(27,0.6857581);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(28,0.4581391);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(29,0.4687886);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(30,0.4087368);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(31,0.2904985);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(32,0.4836266);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(33,0.3357339);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(34,0.2083616);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(35,0.3173992);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(36,0.2463911);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(38,0.2318062);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(39,0.3216787);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(41,0.2530592);
   Zee_2bjet_pt_lep0_stack_3->SetEntries(4701);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_pt_lep0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep0_stack_3->SetLineColor(ci);
   Zee_2bjet_pt_lep0_stack_3->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep0_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep0_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep0_stack_3,"");
   
   TH1D *Zee_2bjet_XX_pt_lep0_stack_4 = new TH1D("Zee_2bjet_XX_pt_lep0_stack_4","",40,0,200);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(8,-0.8958548);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(9,1.940239);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(10,0.2595355);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(11,1.979515);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(12,0.417513);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(13,0.3758372);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(14,2.202496);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(15,1.151026);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(16,0.4257423);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(17,-0.6007542);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(18,0.4064042);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(19,0.4776457);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(20,-0.3867465);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(24,0.4594612);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(27,-0.3216503);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(28,0.4023746);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(29,0.2211225);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(32,0.4965971);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(39,0.5631825);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(41,0.4957396);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(8,1.059493);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(9,1.13997);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(10,1.198868);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(11,1.784018);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(12,0.7874015);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(13,0.6335802);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(14,1.030174);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(15,0.8387712);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(16,0.7888488);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(17,0.9179242);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(18,0.4064042);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(19,0.4776457);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(20,1.049038);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(24,0.4594612);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(27,0.3216503);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(28,0.4023746);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(29,0.2211225);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(32,0.4965971);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(39,0.5631825);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(41,0.4632121);
   Zee_2bjet_XX_pt_lep0_stack_4->SetEntries(60);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_pt_lep0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_pt_lep0_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_pt_lep0_stack_4->GetXaxis()->SetRange(1,200);
   Zee_2bjet_XX_pt_lep0_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_pt_lep0_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_pt_lep0_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_pt_lep0_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_pt_lep0_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_pt_lep0_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_pt_lep0_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_pt_lep0_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_pt_lep0_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_pt_lep0_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_pt_lep0_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_pt_lep0_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_pt_lep0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_pt_lep0_stack_4,"");
   
   TH1D *Zee_2bjet_bX_pt_lep0_stack_5 = new TH1D("Zee_2bjet_bX_pt_lep0_stack_5","",40,0,200);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(8,0.8663715);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(9,2.70029);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(10,5.110028);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(11,2.971998);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(12,4.322826);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(13,0.9941328);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(14,-2.061052);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(15,2.963744);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(16,2.995992);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(17,1.76845);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(18,0.02851444);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(19,3.224117);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(20,0.009015949);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(21,2.771895);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(22,1.299617);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(23,0.1167678);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(24,0.07701246);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(25,1.651323);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(26,0.01405903);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(27,-0.4418188);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(28,0.04377144);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(29,0.3141128);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(31,0.4720387);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(32,0.6741926);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(33,-0.1749114);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(34,-0.5219523);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(35,1.84256);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(37,-0.1118436);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(38,0.5565324);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(39,1.087486);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(40,0.5786183);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(41,1.418887);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(8,1.085582);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(9,1.748194);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(10,2.190279);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(11,2.111864);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(12,2.309168);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(13,2.171638);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(14,1.956424);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(15,1.780903);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(16,1.754242);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(17,1.181624);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(18,1.149927);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(19,1.563205);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(20,0.9353434);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(21,1.236513);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(22,1.448177);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(23,0.6940008);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(24,0.9492479);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(25,1.124949);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(26,0.01405903);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(27,0.8775238);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(28,0.7004788);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(29,0.3141128);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(31,0.4720387);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(32,0.6741926);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(33,0.6425458);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(34,0.5219523);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(35,1.070533);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(37,0.7060855);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(38,0.5565324);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(39,0.76915);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(40,0.5786183);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(41,1.163427);
   Zee_2bjet_bX_pt_lep0_stack_5->SetEntries(253);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_pt_lep0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_pt_lep0_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_pt_lep0_stack_5->GetXaxis()->SetRange(1,200);
   Zee_2bjet_bX_pt_lep0_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_pt_lep0_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_pt_lep0_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_pt_lep0_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_pt_lep0_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_pt_lep0_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_pt_lep0_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_pt_lep0_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_pt_lep0_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_pt_lep0_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_pt_lep0_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_pt_lep0_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_pt_lep0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_pt_lep0_stack_5,"");
   
   TH1D *Zee_2bjet_bb_pt_lep0_stack_6 = new TH1D("Zee_2bjet_bb_pt_lep0_stack_6","",40,0,200);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(8,39.47881);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(9,135.9811);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(10,177.4928);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(11,197.2418);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(12,190.745);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(13,172.068);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(14,178.5407);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(15,126.5836);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(16,105.5123);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(17,95.14676);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(18,71.45057);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(19,65.25217);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(20,59.82219);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(21,56.28144);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(22,29.53643);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(23,33.12828);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(24,28.80806);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(25,27.90629);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(26,12.22206);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(27,19.11607);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(28,8.842106);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(29,10.79865);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(30,9.037146);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(31,12.89076);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(32,6.374404);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(33,13.09204);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(34,10.09278);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(35,1.882224);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(36,5.475628);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(37,7.766654);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(38,5.939583);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(39,3.483782);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(40,8.629614);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(41,49.5257);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(8,7.988525);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(9,12.14644);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(10,15.81782);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(11,17.232);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(12,16.42951);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(13,15.72477);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(14,14.50142);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(15,13.15864);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(16,12.58036);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(17,11.55996);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(18,10.7017);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(19,9.441213);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(20,8.421243);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(21,8.499016);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(22,6.976838);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(23,7.337289);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(24,6.218371);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(25,5.667586);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(26,5.245536);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(27,4.804334);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(28,4.128212);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(29,4.651357);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(30,3.553735);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(31,3.730272);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(32,3.777177);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(33,3.394856);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(34,3.389867);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(35,2.645038);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(36,2.356838);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(37,2.494461);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(38,2.05276);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(39,1.71116);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(40,2.529779);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(41,7.036203);
   Zee_2bjet_bb_pt_lep0_stack_6->SetEntries(13604);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_pt_lep0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_pt_lep0_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_pt_lep0_stack_6->GetXaxis()->SetRange(1,200);
   Zee_2bjet_bb_pt_lep0_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_pt_lep0_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_pt_lep0_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_pt_lep0_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_pt_lep0_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_pt_lep0_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_pt_lep0_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_pt_lep0_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_pt_lep0_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_pt_lep0_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_pt_lep0_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_pt_lep0_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_pt_lep0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_pt_lep0_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_pt_lep0__337 = new TH1D("Zee_2bjet_pt_lep0__337","",40,0,200);
   Zee_2bjet_pt_lep0__337->SetBinContent(8,80);
   Zee_2bjet_pt_lep0__337->SetBinContent(9,167);
   Zee_2bjet_pt_lep0__337->SetBinContent(10,230);
   Zee_2bjet_pt_lep0__337->SetBinContent(11,241);
   Zee_2bjet_pt_lep0__337->SetBinContent(12,278);
   Zee_2bjet_pt_lep0__337->SetBinContent(13,243);
   Zee_2bjet_pt_lep0__337->SetBinContent(14,206);
   Zee_2bjet_pt_lep0__337->SetBinContent(15,177);
   Zee_2bjet_pt_lep0__337->SetBinContent(16,144);
   Zee_2bjet_pt_lep0__337->SetBinContent(17,131);
   Zee_2bjet_pt_lep0__337->SetBinContent(18,102);
   Zee_2bjet_pt_lep0__337->SetBinContent(19,77);
   Zee_2bjet_pt_lep0__337->SetBinContent(20,70);
   Zee_2bjet_pt_lep0__337->SetBinContent(21,48);
   Zee_2bjet_pt_lep0__337->SetBinContent(22,51);
   Zee_2bjet_pt_lep0__337->SetBinContent(23,35);
   Zee_2bjet_pt_lep0__337->SetBinContent(24,49);
   Zee_2bjet_pt_lep0__337->SetBinContent(25,31);
   Zee_2bjet_pt_lep0__337->SetBinContent(26,25);
   Zee_2bjet_pt_lep0__337->SetBinContent(27,12);
   Zee_2bjet_pt_lep0__337->SetBinContent(28,21);
   Zee_2bjet_pt_lep0__337->SetBinContent(29,15);
   Zee_2bjet_pt_lep0__337->SetBinContent(30,8);
   Zee_2bjet_pt_lep0__337->SetBinContent(31,9);
   Zee_2bjet_pt_lep0__337->SetBinContent(32,5);
   Zee_2bjet_pt_lep0__337->SetBinContent(33,10);
   Zee_2bjet_pt_lep0__337->SetBinContent(34,6);
   Zee_2bjet_pt_lep0__337->SetBinContent(35,9);
   Zee_2bjet_pt_lep0__337->SetBinContent(36,7);
   Zee_2bjet_pt_lep0__337->SetBinContent(37,6);
   Zee_2bjet_pt_lep0__337->SetBinContent(38,7);
   Zee_2bjet_pt_lep0__337->SetBinContent(39,5);
   Zee_2bjet_pt_lep0__337->SetBinContent(40,3);
   Zee_2bjet_pt_lep0__337->SetBinContent(41,41);
   Zee_2bjet_pt_lep0__337->SetBinError(8,8.944272);
   Zee_2bjet_pt_lep0__337->SetBinError(9,12.92285);
   Zee_2bjet_pt_lep0__337->SetBinError(10,15.16575);
   Zee_2bjet_pt_lep0__337->SetBinError(11,15.52417);
   Zee_2bjet_pt_lep0__337->SetBinError(12,16.67333);
   Zee_2bjet_pt_lep0__337->SetBinError(13,15.58846);
   Zee_2bjet_pt_lep0__337->SetBinError(14,14.3527);
   Zee_2bjet_pt_lep0__337->SetBinError(15,13.30413);
   Zee_2bjet_pt_lep0__337->SetBinError(16,12);
   Zee_2bjet_pt_lep0__337->SetBinError(17,11.44552);
   Zee_2bjet_pt_lep0__337->SetBinError(18,10.0995);
   Zee_2bjet_pt_lep0__337->SetBinError(19,8.774964);
   Zee_2bjet_pt_lep0__337->SetBinError(20,8.3666);
   Zee_2bjet_pt_lep0__337->SetBinError(21,6.928203);
   Zee_2bjet_pt_lep0__337->SetBinError(22,7.141428);
   Zee_2bjet_pt_lep0__337->SetBinError(23,5.91608);
   Zee_2bjet_pt_lep0__337->SetBinError(24,7);
   Zee_2bjet_pt_lep0__337->SetBinError(25,5.567764);
   Zee_2bjet_pt_lep0__337->SetBinError(26,5);
   Zee_2bjet_pt_lep0__337->SetBinError(27,3.464102);
   Zee_2bjet_pt_lep0__337->SetBinError(28,4.582576);
   Zee_2bjet_pt_lep0__337->SetBinError(29,3.872983);
   Zee_2bjet_pt_lep0__337->SetBinError(30,2.828427);
   Zee_2bjet_pt_lep0__337->SetBinError(31,3);
   Zee_2bjet_pt_lep0__337->SetBinError(32,2.236068);
   Zee_2bjet_pt_lep0__337->SetBinError(33,3.162278);
   Zee_2bjet_pt_lep0__337->SetBinError(34,2.44949);
   Zee_2bjet_pt_lep0__337->SetBinError(35,3);
   Zee_2bjet_pt_lep0__337->SetBinError(36,2.645751);
   Zee_2bjet_pt_lep0__337->SetBinError(37,2.44949);
   Zee_2bjet_pt_lep0__337->SetBinError(38,2.645751);
   Zee_2bjet_pt_lep0__337->SetBinError(39,2.236068);
   Zee_2bjet_pt_lep0__337->SetBinError(40,1.732051);
   Zee_2bjet_pt_lep0__337->SetBinError(41,6.403124);
   Zee_2bjet_pt_lep0__337->SetEntries(2549);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep0__337->SetLineColor(ci);
   Zee_2bjet_pt_lep0__337->SetLineWidth(2);
   Zee_2bjet_pt_lep0__337->SetMarkerStyle(20);
   Zee_2bjet_pt_lep0__337->SetMarkerSize(1.2);
   Zee_2bjet_pt_lep0__337->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep0__337->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0__337->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0__337->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0__337->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0__337->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0__337->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0__337->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0__337->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep0__337->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0__337->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0__337->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0__337->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0__337->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0__337->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_pt_lep0_fx1337[40] = {
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
   Double_t Graph_from_Zee_2bjet_bb_pt_lep0_fy1337[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   72.11138,
   201.6172,
   266.4138,
   299.2485,
   293.2616,
   260.9664,
   253.5419,
   197.7944,
   164.8255,
   137.2961,
   103.3063,
   91.48107,
   78.49973,
   75.09252,
   42.8681,
   40.57644,
   37.79942,
   34.61893,
   18.78222,
   22.04642,
   10.87233,
   12.76916,
   10.23562,
   14.61274,
   9.231362,
   14.05657,
   10.14095,
   4.578451,
   6.406323,
   7.654811,
   7.069929,
   6.481117,
   9.50768};
   Double_t Graph_from_Zee_2bjet_bb_pt_lep0_fex1337[40] = {
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
   Double_t Graph_from_Zee_2bjet_bb_pt_lep0_fey1337[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   8.477583,
   12.75147,
   16.4792,
   17.94534,
   17.12955,
   16.37067,
   15.11095,
   13.74541,
   13.12017,
   11.97108,
   11.0314,
   9.795902,
   8.738766,
   8.762659,
   7.278919,
   7.459006,
   6.43411,
   5.862408,
   5.37378,
   4.96867,
   4.239947,
   4.694747,
   3.588663,
   3.796429,
   3.909839,
   3.488354,
   3.449049,
   2.88716,
   2.405288,
   2.592468,
   2.154021,
   2.036753,
   2.612327};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zee_2bjet_bb_pt_lep0_fx1337,Graph_from_Zee_2bjet_bb_pt_lep0_fy1337,Graph_from_Zee_2bjet_bb_pt_lep0_fex1337,Graph_from_Zee_2bjet_bb_pt_lep0_fey1337);
   gre->SetName("Graph_from_Zee_2bjet_bb_pt_lep0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_pt_lep01337 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_pt_lep01337","",100,0,220);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01337->SetMinimum(0);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01337->SetMaximum(348.9132);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01337->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01337->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01337->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01337->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01337->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01337->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01337->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01337->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01337->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01337->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01337->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01337->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01337->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01337->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01337->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01337->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_pt_lep01337);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_pt_lep0","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_pt_lep0_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_pt_lep0_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_pt_lep0_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep0_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep0_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_pt_lep0","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   pt_lep0_Z_2bjet_Zee_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__338 = new TH1D("data_mc_ratio__338","",40,0,200);
   data_mc_ratio__338->SetBinContent(8,1.109395);
   data_mc_ratio__338->SetBinContent(9,0.8283022);
   data_mc_ratio__338->SetBinContent(10,0.8633186);
   data_mc_ratio__338->SetBinContent(11,0.8053508);
   data_mc_ratio__338->SetBinContent(12,0.9479589);
   data_mc_ratio__338->SetBinContent(13,0.9311544);
   data_mc_ratio__338->SetBinContent(14,0.8124891);
   data_mc_ratio__338->SetBinContent(15,0.8948686);
   data_mc_ratio__338->SetBinContent(16,0.8736514);
   data_mc_ratio__338->SetBinContent(17,0.9541423);
   data_mc_ratio__338->SetBinContent(18,0.9873551);
   data_mc_ratio__338->SetBinContent(19,0.8417042);
   data_mc_ratio__338->SetBinContent(20,0.8917228);
   data_mc_ratio__338->SetBinContent(21,0.6392115);
   data_mc_ratio__338->SetBinContent(22,1.189696);
   data_mc_ratio__338->SetBinContent(23,0.8625695);
   data_mc_ratio__338->SetBinContent(24,1.296316);
   data_mc_ratio__338->SetBinContent(25,0.8954637);
   data_mc_ratio__338->SetBinContent(26,1.331046);
   data_mc_ratio__338->SetBinContent(27,0.544306);
   data_mc_ratio__338->SetBinContent(28,1.931509);
   data_mc_ratio__338->SetBinContent(29,1.174706);
   data_mc_ratio__338->SetBinContent(30,0.7815844);
   data_mc_ratio__338->SetBinContent(31,0.615901);
   data_mc_ratio__338->SetBinContent(32,0.5416319);
   data_mc_ratio__338->SetBinContent(33,0.7114113);
   data_mc_ratio__338->SetBinContent(34,0.5916604);
   data_mc_ratio__338->SetBinContent(35,1.96573);
   data_mc_ratio__338->SetBinContent(36,1.09267);
   data_mc_ratio__338->SetBinContent(37,0.7838208);
   data_mc_ratio__338->SetBinContent(38,0.990109);
   data_mc_ratio__338->SetBinContent(39,0.7714719);
   data_mc_ratio__338->SetBinContent(40,0.3155344);
   data_mc_ratio__338->SetBinContent(41,0.7642754);
   data_mc_ratio__338->SetBinError(8,0.1240341);
   data_mc_ratio__338->SetBinError(9,0.06409595);
   data_mc_ratio__338->SetBinError(10,0.05692554);
   data_mc_ratio__338->SetBinError(11,0.05187721);
   data_mc_ratio__338->SetBinError(12,0.0568548);
   data_mc_ratio__338->SetBinError(13,0.05973358);
   data_mc_ratio__338->SetBinError(14,0.0566088);
   data_mc_ratio__338->SetBinError(15,0.06726244);
   data_mc_ratio__338->SetBinError(16,0.07280428);
   data_mc_ratio__338->SetBinError(17,0.0833638);
   data_mc_ratio__338->SetBinError(18,0.09776272);
   data_mc_ratio__338->SetBinError(19,0.0959211);
   data_mc_ratio__338->SetBinError(20,0.1065813);
   data_mc_ratio__338->SetBinError(21,0.09226223);
   data_mc_ratio__338->SetBinError(22,0.1665907);
   data_mc_ratio__338->SetBinError(23,0.1458009);
   data_mc_ratio__338->SetBinError(24,0.185188);
   data_mc_ratio__338->SetBinError(25,0.16083);
   data_mc_ratio__338->SetBinError(26,0.2662091);
   data_mc_ratio__338->SetBinError(27,0.1571276);
   data_mc_ratio__338->SetBinError(28,0.4214899);
   data_mc_ratio__338->SetBinError(29,0.3033077);
   data_mc_ratio__338->SetBinError(30,0.2763318);
   data_mc_ratio__338->SetBinError(31,0.2053003);
   data_mc_ratio__338->SetBinError(32,0.2422251);
   data_mc_ratio__338->SetBinError(33,0.224968);
   data_mc_ratio__338->SetBinError(34,0.2415443);
   data_mc_ratio__338->SetBinError(35,0.6552435);
   data_mc_ratio__338->SetBinError(36,0.4129906);
   data_mc_ratio__338->SetBinError(37,0.3199935);
   data_mc_ratio__338->SetBinError(38,0.374226);
   data_mc_ratio__338->SetBinError(39,0.3450127);
   data_mc_ratio__338->SetBinError(40,0.1821739);
   data_mc_ratio__338->SetBinError(41,0.157246);
   data_mc_ratio__338->SetMinimum(0.4);
   data_mc_ratio__338->SetMaximum(1.6);
   data_mc_ratio__338->SetEntries(184.2031);
   data_mc_ratio__338->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__338->SetLineColor(ci);
   data_mc_ratio__338->SetLineWidth(2);
   data_mc_ratio__338->SetMarkerStyle(20);
   data_mc_ratio__338->SetMarkerSize(1.2);
   data_mc_ratio__338->GetXaxis()->SetTitle("Leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__338->GetXaxis()->SetRange(1,40);
   data_mc_ratio__338->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__338->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__338->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__338->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__338->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__338->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__338->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__338->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__338->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__338->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__338->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__338->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__338->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__338->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__338->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__338->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__338->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1338[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1338[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1338[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1338[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.1175623,
   0.06324591,
   0.06185566,
   0.05996804,
   0.05841047,
   0.06273094,
   0.05959943,
   0.0694934,
   0.07960037,
   0.08719173,
   0.1067834,
   0.1070812,
   0.1113222,
   0.1166915,
   0.169798,
   0.183826,
   0.1702172,
   0.1693411,
   0.2861099,
   0.2253731,
   0.389976,
   0.3676631,
   0.3506053,
   0.2598028,
   0.4235387,
   0.2481654,
   0.3401109,
   0.6305976,
   0.3754553,
   0.3386718,
   0.3046736,
   0.3142595,
   0.2747596};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1338,Graph_from_mc_statistical_error_fy1338,Graph_from_mc_statistical_error_fex1338,Graph_from_mc_statistical_error_fey1338);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1338 = new TH1F("Graph_Graph_from_mc_statistical_error1338","",100,0,220);
   Graph_Graph_from_mc_statistical_error1338->SetMinimum(0.2432829);
   Graph_Graph_from_mc_statistical_error1338->SetMaximum(1.756717);
   Graph_Graph_from_mc_statistical_error1338->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1338->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1338->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1338->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1338->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1338->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1338->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1338->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1338->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1338->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1338->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1338->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1338->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1338->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1338->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1338->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1338);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep0_Z_2bjet_Zee_16_amcnlo->cd();
   pt_lep0_Z_2bjet_Zee_16_amcnlo->Modified();
   pt_lep0_Z_2bjet_Zee_16_amcnlo->cd();
   pt_lep0_Z_2bjet_Zee_16_amcnlo->SetSelected(pt_lep0_Z_2bjet_Zee_16_amcnlo);
}

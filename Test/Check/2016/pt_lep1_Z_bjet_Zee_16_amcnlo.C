void pt_lep1_Z_bjet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_bjet_Zee_16_amcnlo/pt_lep1_Z_bjet_Zee_16_amcnlo
//=========  (Thu Jan 14 10:42:29 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_bjet_Zee_16_amcnlo = new TCanvas("pt_lep1_Z_bjet_Zee_16_amcnlo", "pt_lep1_Z_bjet_Zee_16_amcnlo",0,0,600,600);
   pt_lep1_Z_bjet_Zee_16_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_bjet_Zee_16_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_bjet_Zee_16_amcnlo->SetFillColor(0);
   pt_lep1_Z_bjet_Zee_16_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_bjet_Zee_16_amcnlo->SetBorderMode(0);
   pt_lep1_Z_bjet_Zee_16_amcnlo->SetBorderSize(2);
   pt_lep1_Z_bjet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_bjet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-33.76549,210.4839,33741.73);
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
   st->SetMaximum(28918.26);
   
   TH1F *st_stack_85 = new TH1F("st_stack_85","",40,0,200);
   st_stack_85->SetMinimum(0.01);
   st_stack_85->SetMaximum(30364.18);
   st_stack_85->SetDirectory(0);
   st_stack_85->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_85->SetLineColor(ci);
   st_stack_85->GetXaxis()->SetRange(1,40);
   st_stack_85->GetXaxis()->SetLabelFont(42);
   st_stack_85->GetXaxis()->SetLabelSize(0.035);
   st_stack_85->GetXaxis()->SetTitleSize(0.035);
   st_stack_85->GetXaxis()->SetTitleFont(42);
   st_stack_85->GetYaxis()->SetTitle("Events/5.0");
   st_stack_85->GetYaxis()->SetLabelFont(42);
   st_stack_85->GetYaxis()->SetLabelSize(0.05);
   st_stack_85->GetYaxis()->SetTitleSize(0.057);
   st_stack_85->GetYaxis()->SetTitleOffset(1.2);
   st_stack_85->GetYaxis()->SetTitleFont(42);
   st_stack_85->GetZaxis()->SetLabelFont(42);
   st_stack_85->GetZaxis()->SetLabelSize(0.035);
   st_stack_85->GetZaxis()->SetTitleSize(0.035);
   st_stack_85->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_85);
   
   
   TH1D *Zee_bjet_pt_lep1_stack_1 = new TH1D("Zee_bjet_pt_lep1_stack_1","",40,0,200);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(6,164.1);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(7,178.1399);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(8,157.1179);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(9,125.6568);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(10,86.62581);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(11,52.70169);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(12,29.44737);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(13,14.40087);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(14,7.449123);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(15,4.203765);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(16,1.853587);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(17,1.092318);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(18,0.5178988);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(19,0.3675767);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(20,0.190657);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(21,0.1905581);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(22,0.2018357);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(23,0.1867801);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(26,0.2075896);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(29,0.2026984);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(33,0.1604143);
   Zee_bjet_pt_lep1_stack_1->SetBinError(6,5.495242);
   Zee_bjet_pt_lep1_stack_1->SetBinError(7,5.703063);
   Zee_bjet_pt_lep1_stack_1->SetBinError(8,5.350178);
   Zee_bjet_pt_lep1_stack_1->SetBinError(9,4.80045);
   Zee_bjet_pt_lep1_stack_1->SetBinError(10,3.992918);
   Zee_bjet_pt_lep1_stack_1->SetBinError(11,3.088149);
   Zee_bjet_pt_lep1_stack_1->SetBinError(12,2.311948);
   Zee_bjet_pt_lep1_stack_1->SetBinError(13,1.633689);
   Zee_bjet_pt_lep1_stack_1->SetBinError(14,1.170392);
   Zee_bjet_pt_lep1_stack_1->SetBinError(15,0.8968117);
   Zee_bjet_pt_lep1_stack_1->SetBinError(16,0.5895844);
   Zee_bjet_pt_lep1_stack_1->SetBinError(17,0.4575355);
   Zee_bjet_pt_lep1_stack_1->SetBinError(18,0.3023987);
   Zee_bjet_pt_lep1_stack_1->SetBinError(19,0.2626511);
   Zee_bjet_pt_lep1_stack_1->SetBinError(20,0.190657);
   Zee_bjet_pt_lep1_stack_1->SetBinError(21,0.1905581);
   Zee_bjet_pt_lep1_stack_1->SetBinError(22,0.2018357);
   Zee_bjet_pt_lep1_stack_1->SetBinError(23,0.1867801);
   Zee_bjet_pt_lep1_stack_1->SetBinError(26,0.2075896);
   Zee_bjet_pt_lep1_stack_1->SetBinError(29,0.2026984);
   Zee_bjet_pt_lep1_stack_1->SetBinError(33,0.1604143);
   Zee_bjet_pt_lep1_stack_1->SetEntries(4829);

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
   Zee_bjet_pt_lep1_stack_2->SetBinContent(6,83.65235);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(7,83.6209);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(8,93.31585);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(9,74.34804);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(10,38.26438);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(11,30.16858);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(12,20.17217);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(13,12.31146);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(14,12.75103);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(15,7.237961);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(16,5.442797);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(17,4.16993);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(18,3.598093);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(19,2.775112);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(20,2.261568);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(21,0.4943779);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(22,1.799294);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(23,1.479294);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(24,0.9931389);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(25,0.3497506);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(26,0.9604951);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(27,0.7561393);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(28,0.3418091);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(29,0.3238831);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(30,0.3400281);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(31,0.7230025);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(33,0.3441417);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(34,0.5477802);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(35,0.3947027);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(38,0.3504446);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(40,0.2858276);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(41,0.169396);
   Zee_bjet_pt_lep1_stack_2->SetBinError(6,5.008105);
   Zee_bjet_pt_lep1_stack_2->SetBinError(7,5.011247);
   Zee_bjet_pt_lep1_stack_2->SetBinError(8,5.181153);
   Zee_bjet_pt_lep1_stack_2->SetBinError(9,4.674751);
   Zee_bjet_pt_lep1_stack_2->SetBinError(10,3.373909);
   Zee_bjet_pt_lep1_stack_2->SetBinError(11,3.058949);
   Zee_bjet_pt_lep1_stack_2->SetBinError(12,2.511328);
   Zee_bjet_pt_lep1_stack_2->SetBinError(13,1.939268);
   Zee_bjet_pt_lep1_stack_2->SetBinError(14,1.993687);
   Zee_bjet_pt_lep1_stack_2->SetBinError(15,1.51993);
   Zee_bjet_pt_lep1_stack_2->SetBinError(16,1.3687);
   Zee_bjet_pt_lep1_stack_2->SetBinError(17,1.142212);
   Zee_bjet_pt_lep1_stack_2->SetBinError(18,1.082267);
   Zee_bjet_pt_lep1_stack_2->SetBinError(19,0.9038998);
   Zee_bjet_pt_lep1_stack_2->SetBinError(20,0.7905062);
   Zee_bjet_pt_lep1_stack_2->SetBinError(21,0.339958);
   Zee_bjet_pt_lep1_stack_2->SetBinError(22,0.7235658);
   Zee_bjet_pt_lep1_stack_2->SetBinError(23,0.6990332);
   Zee_bjet_pt_lep1_stack_2->SetBinError(24,0.5887986);
   Zee_bjet_pt_lep1_stack_2->SetBinError(25,0.2598681);
   Zee_bjet_pt_lep1_stack_2->SetBinError(26,0.5612063);
   Zee_bjet_pt_lep1_stack_2->SetBinError(27,0.5462155);
   Zee_bjet_pt_lep1_stack_2->SetBinError(28,0.3418091);
   Zee_bjet_pt_lep1_stack_2->SetBinError(29,0.3238831);
   Zee_bjet_pt_lep1_stack_2->SetBinError(30,0.3400281);
   Zee_bjet_pt_lep1_stack_2->SetBinError(31,0.5197308);
   Zee_bjet_pt_lep1_stack_2->SetBinError(33,0.3441417);
   Zee_bjet_pt_lep1_stack_2->SetBinError(34,0.387913);
   Zee_bjet_pt_lep1_stack_2->SetBinError(35,0.3947027);
   Zee_bjet_pt_lep1_stack_2->SetBinError(38,0.2711624);
   Zee_bjet_pt_lep1_stack_2->SetBinError(40,0.2858276);
   Zee_bjet_pt_lep1_stack_2->SetBinError(41,0.169396);
   Zee_bjet_pt_lep1_stack_2->SetEntries(1762);

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
   Zee_bjet_pt_lep1_stack_3->SetBinContent(6,2211.651);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(7,2364.133);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(8,2144.529);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(9,1582.946);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(10,1082.979);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(11,633.23);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(12,359.1763);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(13,177.0682);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(14,90.1794);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(15,44.36977);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(16,24.56473);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(17,15.30661);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(18,10.11338);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(19,3.990439);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(20,2.780086);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(21,3.304691);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(22,1.887366);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(23,1.751503);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(24,1.363701);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(25,0.2871982);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(26,0.8484144);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(27,0.2149299);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(30,0.185697);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(37,0.2068933);
   Zee_bjet_pt_lep1_stack_3->SetBinError(6,20.0678);
   Zee_bjet_pt_lep1_stack_3->SetBinError(7,20.75344);
   Zee_bjet_pt_lep1_stack_3->SetBinError(8,19.74586);
   Zee_bjet_pt_lep1_stack_3->SetBinError(9,16.95149);
   Zee_bjet_pt_lep1_stack_3->SetBinError(10,14.03139);
   Zee_bjet_pt_lep1_stack_3->SetBinError(11,10.7249);
   Zee_bjet_pt_lep1_stack_3->SetBinError(12,8.094762);
   Zee_bjet_pt_lep1_stack_3->SetBinError(13,5.676553);
   Zee_bjet_pt_lep1_stack_3->SetBinError(14,4.06092);
   Zee_bjet_pt_lep1_stack_3->SetBinError(15,2.853572);
   Zee_bjet_pt_lep1_stack_3->SetBinError(16,2.134461);
   Zee_bjet_pt_lep1_stack_3->SetBinError(17,1.683972);
   Zee_bjet_pt_lep1_stack_3->SetBinError(18,1.366827);
   Zee_bjet_pt_lep1_stack_3->SetBinError(19,0.8626081);
   Zee_bjet_pt_lep1_stack_3->SetBinError(20,0.7044027);
   Zee_bjet_pt_lep1_stack_3->SetBinError(21,0.7824667);
   Zee_bjet_pt_lep1_stack_3->SetBinError(22,0.5839993);
   Zee_bjet_pt_lep1_stack_3->SetBinError(23,0.5844777);
   Zee_bjet_pt_lep1_stack_3->SetBinError(24,0.5182022);
   Zee_bjet_pt_lep1_stack_3->SetBinError(25,0.2184052);
   Zee_bjet_pt_lep1_stack_3->SetBinError(26,0.4012546);
   Zee_bjet_pt_lep1_stack_3->SetBinError(27,0.2149299);
   Zee_bjet_pt_lep1_stack_3->SetBinError(30,0.185697);
   Zee_bjet_pt_lep1_stack_3->SetBinError(37,0.2068933);
   Zee_bjet_pt_lep1_stack_3->SetEntries(62882);

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
   Zee_bjet_pt_lep1_stack_4->SetBinContent(6,12007.16);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(7,13279.15);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(8,11854.3);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(9,9166.241);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(10,4896.697);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(11,2504.098);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(12,1542.204);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(13,966.4794);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(14,660.7672);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(15,450.6221);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(16,288.3118);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(17,246.9718);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(18,184.307);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(19,146.0354);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(20,80.82329);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(21,89.06923);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(22,71.93724);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(23,54.45088);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(24,40.71528);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(25,23.25292);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(26,30.5816);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(27,23.96444);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(28,18.89805);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(29,21.12607);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(30,15.5781);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(31,16.62782);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(32,8.255007);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(33,9.094976);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(34,6.704524);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(35,8.392112);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(36,6.188943);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(37,6.2979);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(38,1.659224);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(39,5.101217);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(40,6.269937);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(41,9.554477);
   Zee_bjet_pt_lep1_stack_4->SetBinError(6,139.9214);
   Zee_bjet_pt_lep1_stack_4->SetBinError(7,148.7216);
   Zee_bjet_pt_lep1_stack_4->SetBinError(8,141.8012);
   Zee_bjet_pt_lep1_stack_4->SetBinError(9,122.4765);
   Zee_bjet_pt_lep1_stack_4->SetBinError(10,89.2406);
   Zee_bjet_pt_lep1_stack_4->SetBinError(11,62.24634);
   Zee_bjet_pt_lep1_stack_4->SetBinError(12,47.27387);
   Zee_bjet_pt_lep1_stack_4->SetBinError(13,36.70519);
   Zee_bjet_pt_lep1_stack_4->SetBinError(14,30.13639);
   Zee_bjet_pt_lep1_stack_4->SetBinError(15,25.46162);
   Zee_bjet_pt_lep1_stack_4->SetBinError(16,21.8152);
   Zee_bjet_pt_lep1_stack_4->SetBinError(17,18.42004);
   Zee_bjet_pt_lep1_stack_4->SetBinError(18,15.54979);
   Zee_bjet_pt_lep1_stack_4->SetBinError(19,13.79955);
   Zee_bjet_pt_lep1_stack_4->SetBinError(20,11.829);
   Zee_bjet_pt_lep1_stack_4->SetBinError(21,11.10292);
   Zee_bjet_pt_lep1_stack_4->SetBinError(22,9.952352);
   Zee_bjet_pt_lep1_stack_4->SetBinError(23,9.23724);
   Zee_bjet_pt_lep1_stack_4->SetBinError(24,8.124349);
   Zee_bjet_pt_lep1_stack_4->SetBinError(25,6.427118);
   Zee_bjet_pt_lep1_stack_4->SetBinError(26,6.217341);
   Zee_bjet_pt_lep1_stack_4->SetBinError(27,5.697324);
   Zee_bjet_pt_lep1_stack_4->SetBinError(28,4.937359);
   Zee_bjet_pt_lep1_stack_4->SetBinError(29,4.795587);
   Zee_bjet_pt_lep1_stack_4->SetBinError(30,3.741422);
   Zee_bjet_pt_lep1_stack_4->SetBinError(31,3.826687);
   Zee_bjet_pt_lep1_stack_4->SetBinError(32,3.77744);
   Zee_bjet_pt_lep1_stack_4->SetBinError(33,3.283708);
   Zee_bjet_pt_lep1_stack_4->SetBinError(34,2.919401);
   Zee_bjet_pt_lep1_stack_4->SetBinError(35,2.704519);
   Zee_bjet_pt_lep1_stack_4->SetBinError(36,2.43291);
   Zee_bjet_pt_lep1_stack_4->SetBinError(37,2.406453);
   Zee_bjet_pt_lep1_stack_4->SetBinError(38,2.526413);
   Zee_bjet_pt_lep1_stack_4->SetBinError(39,2.379197);
   Zee_bjet_pt_lep1_stack_4->SetBinError(40,2.165109);
   Zee_bjet_pt_lep1_stack_4->SetBinError(41,4.261469);
   Zee_bjet_pt_lep1_stack_4->SetEntries(307756);

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
   
   TH1D *Zee_bjet_pt_lep1__169 = new TH1D("Zee_bjet_pt_lep1__169","",40,0,200);
   Zee_bjet_pt_lep1__169->SetBinContent(6,11912);
   Zee_bjet_pt_lep1__169->SetBinContent(7,13807);
   Zee_bjet_pt_lep1__169->SetBinContent(8,12760);
   Zee_bjet_pt_lep1__169->SetBinContent(9,9840);
   Zee_bjet_pt_lep1__169->SetBinContent(10,5518);
   Zee_bjet_pt_lep1__169->SetBinContent(11,2942);
   Zee_bjet_pt_lep1__169->SetBinContent(12,1752);
   Zee_bjet_pt_lep1__169->SetBinContent(13,1047);
   Zee_bjet_pt_lep1__169->SetBinContent(14,721);
   Zee_bjet_pt_lep1__169->SetBinContent(15,474);
   Zee_bjet_pt_lep1__169->SetBinContent(16,342);
   Zee_bjet_pt_lep1__169->SetBinContent(17,283);
   Zee_bjet_pt_lep1__169->SetBinContent(18,217);
   Zee_bjet_pt_lep1__169->SetBinContent(19,111);
   Zee_bjet_pt_lep1__169->SetBinContent(20,115);
   Zee_bjet_pt_lep1__169->SetBinContent(21,79);
   Zee_bjet_pt_lep1__169->SetBinContent(22,65);
   Zee_bjet_pt_lep1__169->SetBinContent(23,55);
   Zee_bjet_pt_lep1__169->SetBinContent(24,41);
   Zee_bjet_pt_lep1__169->SetBinContent(25,32);
   Zee_bjet_pt_lep1__169->SetBinContent(26,42);
   Zee_bjet_pt_lep1__169->SetBinContent(27,24);
   Zee_bjet_pt_lep1__169->SetBinContent(28,22);
   Zee_bjet_pt_lep1__169->SetBinContent(29,18);
   Zee_bjet_pt_lep1__169->SetBinContent(30,15);
   Zee_bjet_pt_lep1__169->SetBinContent(31,5);
   Zee_bjet_pt_lep1__169->SetBinContent(32,13);
   Zee_bjet_pt_lep1__169->SetBinContent(33,10);
   Zee_bjet_pt_lep1__169->SetBinContent(34,9);
   Zee_bjet_pt_lep1__169->SetBinContent(35,8);
   Zee_bjet_pt_lep1__169->SetBinContent(36,7);
   Zee_bjet_pt_lep1__169->SetBinContent(37,6);
   Zee_bjet_pt_lep1__169->SetBinContent(38,6);
   Zee_bjet_pt_lep1__169->SetBinContent(39,5);
   Zee_bjet_pt_lep1__169->SetBinContent(40,5);
   Zee_bjet_pt_lep1__169->SetBinContent(41,18);
   Zee_bjet_pt_lep1__169->SetBinError(6,109.1421);
   Zee_bjet_pt_lep1__169->SetBinError(7,117.5032);
   Zee_bjet_pt_lep1__169->SetBinError(8,112.9602);
   Zee_bjet_pt_lep1__169->SetBinError(9,99.19677);
   Zee_bjet_pt_lep1__169->SetBinError(10,74.28324);
   Zee_bjet_pt_lep1__169->SetBinError(11,54.24021);
   Zee_bjet_pt_lep1__169->SetBinError(12,41.8569);
   Zee_bjet_pt_lep1__169->SetBinError(13,32.35738);
   Zee_bjet_pt_lep1__169->SetBinError(14,26.85144);
   Zee_bjet_pt_lep1__169->SetBinError(15,21.77154);
   Zee_bjet_pt_lep1__169->SetBinError(16,18.49324);
   Zee_bjet_pt_lep1__169->SetBinError(17,16.8226);
   Zee_bjet_pt_lep1__169->SetBinError(18,14.73092);
   Zee_bjet_pt_lep1__169->SetBinError(19,10.53565);
   Zee_bjet_pt_lep1__169->SetBinError(20,10.72381);
   Zee_bjet_pt_lep1__169->SetBinError(21,8.888194);
   Zee_bjet_pt_lep1__169->SetBinError(22,8.062258);
   Zee_bjet_pt_lep1__169->SetBinError(23,7.416198);
   Zee_bjet_pt_lep1__169->SetBinError(24,6.403124);
   Zee_bjet_pt_lep1__169->SetBinError(25,5.656854);
   Zee_bjet_pt_lep1__169->SetBinError(26,6.480741);
   Zee_bjet_pt_lep1__169->SetBinError(27,4.898979);
   Zee_bjet_pt_lep1__169->SetBinError(28,4.690416);
   Zee_bjet_pt_lep1__169->SetBinError(29,4.242641);
   Zee_bjet_pt_lep1__169->SetBinError(30,3.872983);
   Zee_bjet_pt_lep1__169->SetBinError(31,2.236068);
   Zee_bjet_pt_lep1__169->SetBinError(32,3.605551);
   Zee_bjet_pt_lep1__169->SetBinError(33,3.162278);
   Zee_bjet_pt_lep1__169->SetBinError(34,3);
   Zee_bjet_pt_lep1__169->SetBinError(35,2.828427);
   Zee_bjet_pt_lep1__169->SetBinError(36,2.645751);
   Zee_bjet_pt_lep1__169->SetBinError(37,2.44949);
   Zee_bjet_pt_lep1__169->SetBinError(38,2.44949);
   Zee_bjet_pt_lep1__169->SetBinError(39,2.236068);
   Zee_bjet_pt_lep1__169->SetBinError(40,2.236068);
   Zee_bjet_pt_lep1__169->SetBinError(41,4.242641);
   Zee_bjet_pt_lep1__169->SetEntries(62326);

   ci = TColor::GetColor("#000099");
   Zee_bjet_pt_lep1__169->SetLineColor(ci);
   Zee_bjet_pt_lep1__169->SetLineWidth(2);
   Zee_bjet_pt_lep1__169->SetMarkerStyle(20);
   Zee_bjet_pt_lep1__169->SetMarkerSize(1.2);
   Zee_bjet_pt_lep1__169->GetXaxis()->SetRange(1,200);
   Zee_bjet_pt_lep1__169->GetXaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1__169->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1__169->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1__169->GetXaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1__169->GetYaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1__169->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1__169->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1__169->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_pt_lep1__169->GetYaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1__169->GetZaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1__169->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1__169->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1__169->GetZaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1__169->Draw("same E");
   
   Double_t Graph_from_Zee_bjet_pt_lep1_fx1169[40] = {
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
   Double_t Graph_from_Zee_bjet_pt_lep1_fy1169[40] = {
   0,
   0,
   0,
   0,
   0,
   14466.56,
   15905.05,
   14249.26,
   10949.19,
   6104.566,
   3220.199,
   1951,
   1170.26,
   771.1467,
   506.4336,
   320.1729,
   267.5406,
   198.5363,
   153.1685,
   86.0556,
   93.05886,
   75.82574,
   57.86846,
   43.07212,
   23.88987,
   32.5981,
   24.93551,
   19.23986,
   21.65265,
   16.10383,
   17.35083,
   8.255007,
   9.599532,
   7.252304,
   8.786815,
   6.188943,
   6.504793,
   2.009668,
   5.101217,
   6.555765};
   Double_t Graph_from_Zee_bjet_pt_lep1_fex1169[40] = {
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
   Double_t Graph_from_Zee_bjet_pt_lep1_fey1169[40] = {
   0,
   0,
   0,
   0,
   0,
   141.5485,
   150.3544,
   143.363,
   123.8254,
   90.48807,
   63.31291,
   48.08321,
   37.22799,
   30.49652,
   25.68173,
   21.96997,
   18.53773,
   15.65015,
   13.85849,
   11.87783,
   11.13728,
   9.997733,
   9.283952,
   8.162123,
   6.436076,
   6.258944,
   5.727482,
   4.949176,
   4.810784,
   3.761428,
   3.86182,
   3.77744,
   3.305587,
   2.94506,
   2.733169,
   2.43291,
   2.41533,
   2.540924,
   2.379197,
   2.183894};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zee_bjet_pt_lep1_fx1169,Graph_from_Zee_bjet_pt_lep1_fy1169,Graph_from_Zee_bjet_pt_lep1_fex1169,Graph_from_Zee_bjet_pt_lep1_fey1169);
   gre->SetName("Graph_from_Zee_bjet_pt_lep1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_bjet_pt_lep11169 = new TH1F("Graph_Graph_from_Zee_bjet_pt_lep11169","",100,0,220);
   Graph_Graph_from_Zee_bjet_pt_lep11169->SetMinimum(-1606.124);
   Graph_Graph_from_Zee_bjet_pt_lep11169->SetMaximum(17660.99);
   Graph_Graph_from_Zee_bjet_pt_lep11169->SetDirectory(0);
   Graph_Graph_from_Zee_bjet_pt_lep11169->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_bjet_pt_lep11169->SetLineColor(ci);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11169->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_bjet_pt_lep11169);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   pt_lep1_Z_bjet_Zee_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__170 = new TH1D("data_mc_ratio__170","",40,0,200);
   data_mc_ratio__170->SetBinContent(6,0.8234162);
   data_mc_ratio__170->SetBinContent(7,0.8680893);
   data_mc_ratio__170->SetBinContent(8,0.8954851);
   data_mc_ratio__170->SetBinContent(9,0.8986965);
   data_mc_ratio__170->SetBinContent(10,0.9039135);
   data_mc_ratio__170->SetBinContent(11,0.9136082);
   data_mc_ratio__170->SetBinContent(12,0.898001);
   data_mc_ratio__170->SetBinContent(13,0.894673);
   data_mc_ratio__170->SetBinContent(14,0.9349712);
   data_mc_ratio__170->SetBinContent(15,0.9359568);
   data_mc_ratio__170->SetBinContent(16,1.068173);
   data_mc_ratio__170->SetBinContent(17,1.057783);
   data_mc_ratio__170->SetBinContent(18,1.092999);
   data_mc_ratio__170->SetBinContent(19,0.7246921);
   data_mc_ratio__170->SetBinContent(20,1.336345);
   data_mc_ratio__170->SetBinContent(21,0.8489251);
   data_mc_ratio__170->SetBinContent(22,0.8572287);
   data_mc_ratio__170->SetBinContent(23,0.9504314);
   data_mc_ratio__170->SetBinContent(24,0.951892);
   data_mc_ratio__170->SetBinContent(25,1.33948);
   data_mc_ratio__170->SetBinContent(26,1.288419);
   data_mc_ratio__170->SetBinContent(27,0.9624829);
   data_mc_ratio__170->SetBinContent(28,1.14346);
   data_mc_ratio__170->SetBinContent(29,0.8313069);
   data_mc_ratio__170->SetBinContent(30,0.9314555);
   data_mc_ratio__170->SetBinContent(31,0.2881707);
   data_mc_ratio__170->SetBinContent(32,1.574802);
   data_mc_ratio__170->SetBinContent(33,1.041717);
   data_mc_ratio__170->SetBinContent(34,1.240985);
   data_mc_ratio__170->SetBinContent(35,0.9104551);
   data_mc_ratio__170->SetBinContent(36,1.131049);
   data_mc_ratio__170->SetBinContent(37,0.9223967);
   data_mc_ratio__170->SetBinContent(38,2.985567);
   data_mc_ratio__170->SetBinContent(39,0.9801582);
   data_mc_ratio__170->SetBinContent(40,0.7626875);
   data_mc_ratio__170->SetBinContent(41,1.851114);
   data_mc_ratio__170->SetBinError(6,0.007544441);
   data_mc_ratio__170->SetBinError(7,0.007387793);
   data_mc_ratio__170->SetBinError(8,0.007927441);
   data_mc_ratio__170->SetBinError(9,0.009059735);
   data_mc_ratio__170->SetBinError(10,0.01216847);
   data_mc_ratio__170->SetBinError(11,0.01684374);
   data_mc_ratio__170->SetBinError(12,0.02145407);
   data_mc_ratio__170->SetBinError(13,0.02764974);
   data_mc_ratio__170->SetBinError(14,0.03482015);
   data_mc_ratio__170->SetBinError(15,0.04298992);
   data_mc_ratio__170->SetBinError(16,0.05776017);
   data_mc_ratio__170->SetBinError(17,0.06287869);
   data_mc_ratio__170->SetBinError(18,0.07419761);
   data_mc_ratio__170->SetBinError(19,0.06878473);
   data_mc_ratio__170->SetBinError(20,0.1246148);
   data_mc_ratio__170->SetBinError(21,0.09551153);
   data_mc_ratio__170->SetBinError(22,0.1063261);
   data_mc_ratio__170->SetBinError(23,0.1281561);
   data_mc_ratio__170->SetBinError(24,0.1486605);
   data_mc_ratio__170->SetBinError(25,0.2367889);
   data_mc_ratio__170->SetBinError(26,0.1988073);
   data_mc_ratio__170->SetBinError(27,0.196466);
   data_mc_ratio__170->SetBinError(28,0.2437864);
   data_mc_ratio__170->SetBinError(29,0.1959409);
   data_mc_ratio__170->SetBinError(30,0.2405008);
   data_mc_ratio__170->SetBinError(31,0.1288739);
   data_mc_ratio__170->SetBinError(32,0.4367715);
   data_mc_ratio__170->SetBinError(33,0.32942);
   data_mc_ratio__170->SetBinError(34,0.4136616);
   data_mc_ratio__170->SetBinError(35,0.3218945);
   data_mc_ratio__170->SetBinError(36,0.4274965);
   data_mc_ratio__170->SetBinError(37,0.3765669);
   data_mc_ratio__170->SetBinError(38,1.218853);
   data_mc_ratio__170->SetBinError(39,0.4383401);
   data_mc_ratio__170->SetBinError(40,0.3410842);
   data_mc_ratio__170->SetBinError(41,0.9216996);
   data_mc_ratio__170->SetMinimum(0.4);
   data_mc_ratio__170->SetMaximum(1.6);
   data_mc_ratio__170->SetEntries(67.27011);
   data_mc_ratio__170->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__170->SetLineColor(ci);
   data_mc_ratio__170->SetLineWidth(2);
   data_mc_ratio__170->SetMarkerStyle(20);
   data_mc_ratio__170->SetMarkerSize(1.2);
   data_mc_ratio__170->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__170->GetXaxis()->SetRange(1,40);
   data_mc_ratio__170->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__170->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__170->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__170->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__170->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__170->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__170->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__170->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__170->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__170->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__170->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__170->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__170->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__170->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__170->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__170->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__170->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1170[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1170[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1170[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1170[40] = {
   0,
   0,
   0,
   0,
   0,
   0.009784533,
   0.009453253,
   0.01006108,
   0.01130909,
   0.01482301,
   0.01966118,
   0.02464542,
   0.03181173,
   0.03954697,
   0.05071095,
   0.06861908,
   0.06928942,
   0.07882762,
   0.0904787,
   0.138025,
   0.1196799,
   0.1318514,
   0.160432,
   0.189499,
   0.2694061,
   0.1920033,
   0.2296918,
   0.2572356,
   0.2221799,
   0.2335735,
   0.2225726,
   0.4575939,
   0.3443487,
   0.4060861,
   0.3110534,
   0.3931059,
   0.3713154,
   1.26435,
   0.4663979,
   0.3331257};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1170,Graph_from_mc_statistical_error_fy1170,Graph_from_mc_statistical_error_fex1170,Graph_from_mc_statistical_error_fey1170);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1170 = new TH1F("Graph_Graph_from_mc_statistical_error1170","",100,0,220);
   Graph_Graph_from_mc_statistical_error1170->SetMinimum(-0.5172197);
   Graph_Graph_from_mc_statistical_error1170->SetMaximum(2.51722);
   Graph_Graph_from_mc_statistical_error1170->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1170->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1170->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1170->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1170->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1170->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1170->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1170->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1170->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1170->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1170->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1170->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1170->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1170->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1170->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1170->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1170);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_bjet_Zee_16_amcnlo->cd();
   pt_lep1_Z_bjet_Zee_16_amcnlo->Modified();
   pt_lep1_Z_bjet_Zee_16_amcnlo->cd();
   pt_lep1_Z_bjet_Zee_16_amcnlo->SetSelected(pt_lep1_Z_bjet_Zee_16_amcnlo);
}

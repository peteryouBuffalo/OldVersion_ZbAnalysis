void pt_lep1_Z_2bjet_Zmm_16_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_2bjet_Zmm_16_amcnlo/pt_lep1_Z_2bjet_Zmm_16_amcnlo
//=========  (Thu Jan 14 10:42:55 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_2bjet_Zmm_16_amcnlo = new TCanvas("pt_lep1_Z_2bjet_Zmm_16_amcnlo", "pt_lep1_Z_2bjet_Zmm_16_amcnlo",0,0,600,600);
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->SetFillColor(0);
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->SetBorderMode(0);
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->SetBorderSize(2);
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-2.721483,210.4839,2728.762);
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
   st->SetMaximum(2338.679);
   
   TH1F *st_stack_261 = new TH1F("st_stack_261","",40,0,200);
   st_stack_261->SetMinimum(0.01);
   st_stack_261->SetMaximum(2455.613);
   st_stack_261->SetDirectory(0);
   st_stack_261->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_261->SetLineColor(ci);
   st_stack_261->GetXaxis()->SetRange(1,40);
   st_stack_261->GetXaxis()->SetLabelFont(42);
   st_stack_261->GetXaxis()->SetLabelSize(0.035);
   st_stack_261->GetXaxis()->SetTitleSize(0.035);
   st_stack_261->GetXaxis()->SetTitleFont(42);
   st_stack_261->GetYaxis()->SetTitle("Events/5.0");
   st_stack_261->GetYaxis()->SetLabelFont(42);
   st_stack_261->GetYaxis()->SetLabelSize(0.05);
   st_stack_261->GetYaxis()->SetTitleSize(0.057);
   st_stack_261->GetYaxis()->SetTitleOffset(1.2);
   st_stack_261->GetYaxis()->SetTitleFont(42);
   st_stack_261->GetZaxis()->SetLabelFont(42);
   st_stack_261->GetZaxis()->SetLabelSize(0.035);
   st_stack_261->GetZaxis()->SetTitleSize(0.035);
   st_stack_261->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_261);
   
   
   TH1D *Zmm_2bjet_pt_lep1_stack_1 = new TH1D("Zmm_2bjet_pt_lep1_stack_1","",40,0,200);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(6,6.324971);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(7,9.525075);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(8,9.171484);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(9,6.238126);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(10,2.499547);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(11,2.713338);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(12,0.5953538);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(13,1.404033);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(14,0.5932452);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(15,0.5824911);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(18,0.3878784);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(6,1.088778);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(7,1.344463);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(8,1.313288);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(9,1.085785);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(10,0.690918);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(11,0.7255324);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(12,0.3405834);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(13,0.5309771);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(14,0.3357874);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(15,0.3350761);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(18,0.2743646);
   Zmm_2bjet_pt_lep1_stack_1->SetEntries(230);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_pt_lep1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_stack_1->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_stack_1,"");
   
   TH1D *Zmm_2bjet_pt_lep1_stack_2 = new TH1D("Zmm_2bjet_pt_lep1_stack_2","",40,0,200);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(6,17.61149);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(7,21.08154);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(8,19.47849);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(9,12.8179);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(10,8.12552);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(11,3.772684);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(12,2.507693);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(13,3.083065);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(14,3.118637);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(15,2.119305);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(16,1.213454);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(17,0.6042216);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(18,0.06253016);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(19,0.9109597);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(20,0.6575617);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(22,0.2955136);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(26,0.2942192);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(28,0.2810704);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(35,0.284825);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(39,0.2956069);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(6,2.251765);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(7,2.470916);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(8,2.378192);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(9,1.932787);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(10,1.525819);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(11,1.048436);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(12,0.8428886);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(13,0.9471136);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(14,1.066524);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(15,0.8030023);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(16,0.6937937);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(17,0.4282086);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(18,0.06253016);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(19,0.5268934);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(20,0.4649749);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(22,0.2955136);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(26,0.2942192);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(28,0.2810704);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(35,0.284825);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(39,0.2956069);
   Zmm_2bjet_pt_lep1_stack_2->SetEntries(357);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_pt_lep1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_stack_2->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_stack_2,"");
   
   TH1D *Zmm_2bjet_pt_lep1_stack_3 = new TH1D("Zmm_2bjet_pt_lep1_stack_3","",40,0,200);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(6,337.0917);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(7,383.077);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(8,337.2223);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(9,284.801);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(10,186.6823);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(11,112.4101);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(12,60.95262);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(13,34.68493);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(14,19.37492);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(15,7.897849);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(16,4.250322);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(17,1.987213);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(18,0.4018648);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(19,0.4781626);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(20,0.9051972);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(21,0.202794);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(23,0.2398423);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(24,0.2075842);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(6,8.02031);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(7,8.555052);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(8,8.040013);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(9,7.39334);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(10,5.980491);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(11,4.642065);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(12,3.415791);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(13,2.585069);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(14,1.95422);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(15,1.242864);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(16,0.9083793);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(17,0.6210894);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(18,0.2849938);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(19,0.2849399);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(20,0.4149696);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(21,0.202794);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(23,0.2398423);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(24,0.2075842);
   Zmm_2bjet_pt_lep1_stack_3->SetEntries(9796);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_pt_lep1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_stack_3->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_pt_lep1_stack_4 = new TH1D("Zmm_2bjet_XX_pt_lep1_stack_4","",40,0,200);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(6,18.84321);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(7,17.5296);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(8,28.01632);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(9,19.22839);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(10,4.039286);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(11,0.4033394);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(12,0.01969018);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(13,-0.4606034);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(14,0.5426259);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(15,0.9678306);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(16,0.1188476);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(18,0.5390131);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(20,0.5596839);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(22,-0.1571164);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(23,0.5666323);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(25,-0.555923);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(6,6.646371);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(7,6.56279);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(8,8.462038);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(9,7.73379);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(10,1.727415);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(11,0.815957);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(12,0.7207471);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(13,0.8628223);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(14,0.5426259);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(15,0.6844201);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(16,0.7282466);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(18,0.5390131);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(20,0.5596839);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(22,0.7694699);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(23,0.5666323);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(25,0.555923);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetEntries(188);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_pt_lep1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_pt_lep1_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_pt_lep1_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_pt_lep1_stack_5 = new TH1D("Zmm_2bjet_bX_pt_lep1_stack_5","",40,0,200);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(6,18.77098);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(7,11.50782);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(8,14.33378);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(9,15.17732);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(10,12.60274);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(11,2.715293);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(12,2.840731);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(13,5.32245);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(14,-0.5775402);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(15,2.099838);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(16,0.1202699);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(17,0.7917556);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(18,2.503663);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(19,1.636085);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(20,0.02880982);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(21,0.4031307);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(22,-0.02585377);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(23,-0.4008622);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(24,1.243538);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(25,-0.1605342);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(27,-0.471484);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(28,0.4680267);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(37,-0.5004859);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(39,-0.5409137);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(6,5.592833);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(7,5.148404);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(8,5.587662);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(9,4.515131);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(10,3.68176);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(11,3.068165);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(12,2.374227);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(13,1.937605);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(14,1.800393);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(15,1.75645);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(16,0.7416297);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(17,1.252498);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(18,1.518278);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(19,1.184046);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(20,0.6784045);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(21,0.8237608);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(22,0.7402029);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(23,0.4008622);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(24,0.7367944);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(25,0.785486);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(27,0.8760797);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(28,0.4680267);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(37,0.5004859);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(39,0.5409137);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetEntries(637);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_pt_lep1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_pt_lep1_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_pt_lep1_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_pt_lep1_stack_6 = new TH1D("Zmm_2bjet_bb_pt_lep1_stack_6","",40,0,200);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(6,792.3328);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(7,843.5525);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(8,792.9675);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(9,660.6229);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(10,385.017);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(11,245.1572);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(12,157.9898);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(13,103.9229);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(14,56.69281);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(15,48.25325);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(16,42.16072);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(17,33.89078);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(18,25.06749);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(19,13.30238);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(20,8.52448);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(21,11.9697);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(22,9.6557);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(23,6.620783);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(24,4.790882);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(25,3.616723);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(26,3.650813);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(27,0.9942437);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(28,2.526391);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(29,0.7871911);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(30,1.295887);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(31,1.884358);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(32,0.81742);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(33,0.888076);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(34,-0.07195304);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(35,1.544385);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(36,0.8317112);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(37,0.2471836);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(38,0.03717704);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(41,1.144345);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(6,35.25872);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(7,35.99577);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(8,35.86066);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(9,31.62326);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(10,24.59131);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(11,18.93119);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(12,15.11626);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(13,12.4347);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(14,10.06651);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(15,8.383963);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(16,7.472417);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(17,6.188327);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(18,5.642419);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(19,4.040264);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(20,4.140485);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(21,3.461259);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(22,3.468866);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(23,2.722626);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(24,2.799003);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(25,1.843489);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(26,1.780554);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(27,1.428113);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(28,1.720093);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(29,1.866453);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(30,1.291896);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(31,1.383112);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(32,1.010504);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(33,1.02733);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(34,0.7278354);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(35,0.8917111);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(36,1.049518);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(37,0.6536961);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(38,0.03717704);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(41,0.7222327);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetEntries(27989);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_pt_lep1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_pt_lep1_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_pt_lep1_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_pt_lep1__521 = new TH1D("Zmm_2bjet_pt_lep1__521","",40,0,200);
   Zmm_2bjet_pt_lep1__521->SetBinContent(6,1001);
   Zmm_2bjet_pt_lep1__521->SetBinContent(7,1109);
   Zmm_2bjet_pt_lep1__521->SetBinContent(8,1040);
   Zmm_2bjet_pt_lep1__521->SetBinContent(9,847);
   Zmm_2bjet_pt_lep1__521->SetBinContent(10,525);
   Zmm_2bjet_pt_lep1__521->SetBinContent(11,346);
   Zmm_2bjet_pt_lep1__521->SetBinContent(12,202);
   Zmm_2bjet_pt_lep1__521->SetBinContent(13,149);
   Zmm_2bjet_pt_lep1__521->SetBinContent(14,79);
   Zmm_2bjet_pt_lep1__521->SetBinContent(15,41);
   Zmm_2bjet_pt_lep1__521->SetBinContent(16,41);
   Zmm_2bjet_pt_lep1__521->SetBinContent(17,27);
   Zmm_2bjet_pt_lep1__521->SetBinContent(18,18);
   Zmm_2bjet_pt_lep1__521->SetBinContent(19,16);
   Zmm_2bjet_pt_lep1__521->SetBinContent(20,8);
   Zmm_2bjet_pt_lep1__521->SetBinContent(21,7);
   Zmm_2bjet_pt_lep1__521->SetBinContent(22,9);
   Zmm_2bjet_pt_lep1__521->SetBinContent(23,4);
   Zmm_2bjet_pt_lep1__521->SetBinContent(24,6);
   Zmm_2bjet_pt_lep1__521->SetBinContent(25,3);
   Zmm_2bjet_pt_lep1__521->SetBinContent(26,5);
   Zmm_2bjet_pt_lep1__521->SetBinContent(27,9);
   Zmm_2bjet_pt_lep1__521->SetBinContent(28,3);
   Zmm_2bjet_pt_lep1__521->SetBinContent(31,1);
   Zmm_2bjet_pt_lep1__521->SetBinContent(33,2);
   Zmm_2bjet_pt_lep1__521->SetBinContent(36,1);
   Zmm_2bjet_pt_lep1__521->SetBinContent(38,1);
   Zmm_2bjet_pt_lep1__521->SetBinContent(39,1);
   Zmm_2bjet_pt_lep1__521->SetBinContent(40,1);
   Zmm_2bjet_pt_lep1__521->SetBinContent(41,1);
   Zmm_2bjet_pt_lep1__521->SetBinError(6,31.63858);
   Zmm_2bjet_pt_lep1__521->SetBinError(7,33.30165);
   Zmm_2bjet_pt_lep1__521->SetBinError(8,32.24903);
   Zmm_2bjet_pt_lep1__521->SetBinError(9,29.10326);
   Zmm_2bjet_pt_lep1__521->SetBinError(10,22.91288);
   Zmm_2bjet_pt_lep1__521->SetBinError(11,18.60108);
   Zmm_2bjet_pt_lep1__521->SetBinError(12,14.21267);
   Zmm_2bjet_pt_lep1__521->SetBinError(13,12.20656);
   Zmm_2bjet_pt_lep1__521->SetBinError(14,8.888194);
   Zmm_2bjet_pt_lep1__521->SetBinError(15,6.403124);
   Zmm_2bjet_pt_lep1__521->SetBinError(16,6.403124);
   Zmm_2bjet_pt_lep1__521->SetBinError(17,5.196152);
   Zmm_2bjet_pt_lep1__521->SetBinError(18,4.242641);
   Zmm_2bjet_pt_lep1__521->SetBinError(19,4);
   Zmm_2bjet_pt_lep1__521->SetBinError(20,2.828427);
   Zmm_2bjet_pt_lep1__521->SetBinError(21,2.645751);
   Zmm_2bjet_pt_lep1__521->SetBinError(22,3);
   Zmm_2bjet_pt_lep1__521->SetBinError(23,2);
   Zmm_2bjet_pt_lep1__521->SetBinError(24,2.44949);
   Zmm_2bjet_pt_lep1__521->SetBinError(25,1.732051);
   Zmm_2bjet_pt_lep1__521->SetBinError(26,2.236068);
   Zmm_2bjet_pt_lep1__521->SetBinError(27,3);
   Zmm_2bjet_pt_lep1__521->SetBinError(28,1.732051);
   Zmm_2bjet_pt_lep1__521->SetBinError(31,1);
   Zmm_2bjet_pt_lep1__521->SetBinError(33,1.414214);
   Zmm_2bjet_pt_lep1__521->SetBinError(36,1);
   Zmm_2bjet_pt_lep1__521->SetBinError(38,1);
   Zmm_2bjet_pt_lep1__521->SetBinError(39,1);
   Zmm_2bjet_pt_lep1__521->SetBinError(40,1);
   Zmm_2bjet_pt_lep1__521->SetBinError(41,1);
   Zmm_2bjet_pt_lep1__521->SetEntries(5503);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1__521->SetLineColor(ci);
   Zmm_2bjet_pt_lep1__521->SetLineWidth(2);
   Zmm_2bjet_pt_lep1__521->SetMarkerStyle(20);
   Zmm_2bjet_pt_lep1__521->SetMarkerSize(1.2);
   Zmm_2bjet_pt_lep1__521->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1__521->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1__521->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1__521->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1__521->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1__521->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1__521->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1__521->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1__521->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1__521->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1__521->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1__521->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1__521->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1__521->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1__521->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep1_fx1521[40] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep1_fy1521[40] = {
   0,
   0,
   0,
   0,
   0,
   1190.975,
   1286.274,
   1201.19,
   998.8857,
   598.9664,
   367.1719,
   224.9059,
   147.9568,
   79.7447,
   61.92056,
   47.86361,
   37.27397,
   28.96244,
   16.32759,
   10.67573,
   12.57562,
   9.768243,
   7.026396,
   6.242004,
   2.900266,
   3.945032,
   0.5227597,
   3.275488,
   0.7871911,
   1.295887,
   1.884358,
   0.81742,
   0.888076,
   -0.07195304,
   1.82921,
   0.8317112,
   -0.2533023,
   0.03717704,
   -0.2453069,
   0};
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep1_fex1521[40] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep1_fey1521[40] = {
   0,
   0,
   0,
   0,
   0,
   37.27214,
   38.03122,
   38.2209,
   33.76099,
   25.68742,
   19.78999,
   15.72106,
   12.92216,
   10.48522,
   8.726178,
   7.630457,
   6.358715,
   5.881581,
   4.252588,
   4.278492,
   3.563709,
   3.641476,
   2.819925,
   2.901788,
   2.07954,
   1.804698,
   1.675417,
   1.804652,
   1.866453,
   1.291896,
   1.383112,
   1.010504,
   1.02733,
   0.7278354,
   0.9360951,
   1.049518,
   0.8232889,
   0.03717704,
   0.616418,
   0};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zmm_2bjet_bb_pt_lep1_fx1521,Graph_from_Zmm_2bjet_bb_pt_lep1_fy1521,Graph_from_Zmm_2bjet_bb_pt_lep1_fex1521,Graph_from_Zmm_2bjet_bb_pt_lep1_fey1521);
   gre->SetName("Graph_from_Zmm_2bjet_bb_pt_lep1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521","",100,0,220);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521->SetMinimum(-133.6984);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521->SetMaximum(1456.851);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_pt_lep11521);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_pt_lep1","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_pt_lep1_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_pt_lep1_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_pt_lep1_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_pt_lep1","MC unc. (stat.)","fl");

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
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__522 = new TH1D("data_mc_ratio__522","",40,0,200);
   data_mc_ratio__522->SetBinContent(6,0.8404877);
   data_mc_ratio__522->SetBinContent(7,0.8621805);
   data_mc_ratio__522->SetBinContent(8,0.8658082);
   data_mc_ratio__522->SetBinContent(9,0.8479449);
   data_mc_ratio__522->SetBinContent(10,0.87651);
   data_mc_ratio__522->SetBinContent(11,0.9423379);
   data_mc_ratio__522->SetBinContent(12,0.8981534);
   data_mc_ratio__522->SetBinContent(13,1.007051);
   data_mc_ratio__522->SetBinContent(14,0.9906615);
   data_mc_ratio__522->SetBinContent(15,0.6621387);
   data_mc_ratio__522->SetBinContent(16,0.8566007);
   data_mc_ratio__522->SetBinContent(17,0.724366);
   data_mc_ratio__522->SetBinContent(18,0.6214947);
   data_mc_ratio__522->SetBinContent(19,0.9799364);
   data_mc_ratio__522->SetBinContent(20,0.7493631);
   data_mc_ratio__522->SetBinContent(21,0.5566326);
   data_mc_ratio__522->SetBinContent(22,0.921353);
   data_mc_ratio__522->SetBinContent(23,0.5692819);
   data_mc_ratio__522->SetBinContent(24,0.9612297);
   data_mc_ratio__522->SetBinContent(25,1.034388);
   data_mc_ratio__522->SetBinContent(26,1.267417);
   data_mc_ratio__522->SetBinContent(27,17.21632);
   data_mc_ratio__522->SetBinContent(28,0.915894);
   data_mc_ratio__522->SetBinContent(31,0.5306846);
   data_mc_ratio__522->SetBinContent(33,2.25206);
   data_mc_ratio__522->SetBinContent(36,1.20234);
   data_mc_ratio__522->SetBinContent(38,26.89832);
   data_mc_ratio__522->SetBinContent(39,-4.076527);
   data_mc_ratio__522->SetBinContent(41,0.8738624);
   data_mc_ratio__522->SetBinError(6,0.02656528);
   data_mc_ratio__522->SetBinError(7,0.02589002);
   data_mc_ratio__522->SetBinError(8,0.02684757);
   data_mc_ratio__522->SetBinError(9,0.02913573);
   data_mc_ratio__522->SetBinError(10,0.03825403);
   data_mc_ratio__522->SetBinError(11,0.0506604);
   data_mc_ratio__522->SetBinError(12,0.06319385);
   data_mc_ratio__522->SetBinError(13,0.08250081);
   data_mc_ratio__522->SetBinError(14,0.1114581);
   data_mc_ratio__522->SetBinError(15,0.1034087);
   data_mc_ratio__522->SetBinError(16,0.1337785);
   data_mc_ratio__522->SetBinError(17,0.1394043);
   data_mc_ratio__522->SetBinError(18,0.1464877);
   data_mc_ratio__522->SetBinError(19,0.2449841);
   data_mc_ratio__522->SetBinError(20,0.2649399);
   data_mc_ratio__522->SetBinError(21,0.2103873);
   data_mc_ratio__522->SetBinError(22,0.3071177);
   data_mc_ratio__522->SetBinError(23,0.284641);
   data_mc_ratio__522->SetBinError(24,0.3924204);
   data_mc_ratio__522->SetBinError(25,0.5972041);
   data_mc_ratio__522->SetBinError(26,0.566806);
   data_mc_ratio__522->SetBinError(27,5.738775);
   data_mc_ratio__522->SetBinError(28,0.5287917);
   data_mc_ratio__522->SetBinError(31,0.5306846);
   data_mc_ratio__522->SetBinError(33,1.592447);
   data_mc_ratio__522->SetBinError(36,1.20234);
   data_mc_ratio__522->SetBinError(38,26.89832);
   data_mc_ratio__522->SetBinError(39,4.076527);
   data_mc_ratio__522->SetBinError(41,1.03335);
   data_mc_ratio__522->SetMinimum(0.4);
   data_mc_ratio__522->SetMaximum(1.6);
   data_mc_ratio__522->SetEntries(0.8504928);
   data_mc_ratio__522->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__522->SetLineColor(ci);
   data_mc_ratio__522->SetLineWidth(2);
   data_mc_ratio__522->SetMarkerStyle(20);
   data_mc_ratio__522->SetMarkerSize(1.2);
   data_mc_ratio__522->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__522->GetXaxis()->SetRange(1,40);
   data_mc_ratio__522->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__522->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__522->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__522->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__522->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__522->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__522->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__522->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__522->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__522->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__522->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__522->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__522->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__522->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__522->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__522->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__522->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1522[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1522[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1522[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1522[40] = {
   0,
   0,
   0,
   0,
   0,
   0.03129548,
   0.02956697,
   0.0318192,
   0.03379865,
   0.04288625,
   0.05389844,
   0.06990062,
   0.08733735,
   0.1314848,
   0.1409254,
   0.1594208,
   0.170594,
   0.2030762,
   0.2604541,
   0.400768,
   0.2833824,
   0.3727872,
   0.4013331,
   0.4648808,
   0.7170171,
   0.457461,
   3.204947,
   0.5509567,
   2.371029,
   0.9969207,
   0.7339963,
   1.236212,
   1.156804,
   0,
   0.5117483,
   1.261878,
   0,
   1,
   0,
   0};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1522,Graph_from_mc_statistical_error_fy1522,Graph_from_mc_statistical_error_fex1522,Graph_from_mc_statistical_error_fey1522);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1522 = new TH1F("Graph_Graph_from_mc_statistical_error1522","",100,0,220);
   Graph_Graph_from_mc_statistical_error1522->SetMinimum(-2.845936);
   Graph_Graph_from_mc_statistical_error1522->SetMaximum(4.845936);
   Graph_Graph_from_mc_statistical_error1522->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1522->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1522->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1522->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1522->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1522->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1522->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1522->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1522->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1522->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1522->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1522->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1522->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1522->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1522->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1522->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1522);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->cd();
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->Modified();
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->cd();
   pt_lep1_Z_2bjet_Zmm_16_amcnlo->SetSelected(pt_lep1_Z_2bjet_Zmm_16_amcnlo);
}

void pt_lep1_Z_2bjet_Zee_18_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_2bjet_Zee_18_amcnlo/pt_lep1_Z_2bjet_Zee_18_amcnlo
//=========  (Thu Jan 14 10:42:42 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_2bjet_Zee_18_amcnlo = new TCanvas("pt_lep1_Z_2bjet_Zee_18_amcnlo", "pt_lep1_Z_2bjet_Zee_18_amcnlo",0,0,600,600);
   pt_lep1_Z_2bjet_Zee_18_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_2bjet_Zee_18_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_2bjet_Zee_18_amcnlo->SetFillColor(0);
   pt_lep1_Z_2bjet_Zee_18_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_2bjet_Zee_18_amcnlo->SetBorderMode(0);
   pt_lep1_Z_2bjet_Zee_18_amcnlo->SetBorderSize(2);
   pt_lep1_Z_2bjet_Zee_18_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_2bjet_Zee_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-2.561911,210.4839,2569.349);
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
   st->SetMaximum(2202.055);
   
   TH1F *st_stack_175 = new TH1F("st_stack_175","",40,0,200);
   st_stack_175->SetMinimum(0.01);
   st_stack_175->SetMaximum(2312.158);
   st_stack_175->SetDirectory(0);
   st_stack_175->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_175->SetLineColor(ci);
   st_stack_175->GetXaxis()->SetRange(1,40);
   st_stack_175->GetXaxis()->SetLabelFont(42);
   st_stack_175->GetXaxis()->SetLabelSize(0.035);
   st_stack_175->GetXaxis()->SetTitleSize(0.035);
   st_stack_175->GetXaxis()->SetTitleFont(42);
   st_stack_175->GetYaxis()->SetTitle("Events/5.0");
   st_stack_175->GetYaxis()->SetLabelFont(42);
   st_stack_175->GetYaxis()->SetLabelSize(0.05);
   st_stack_175->GetYaxis()->SetTitleSize(0.057);
   st_stack_175->GetYaxis()->SetTitleOffset(1.2);
   st_stack_175->GetYaxis()->SetTitleFont(42);
   st_stack_175->GetZaxis()->SetLabelFont(42);
   st_stack_175->GetZaxis()->SetLabelSize(0.035);
   st_stack_175->GetZaxis()->SetTitleSize(0.035);
   st_stack_175->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_175);
   
   
   TH1D *Zee_2bjet_pt_lep1_stack_1 = new TH1D("Zee_2bjet_pt_lep1_stack_1","",40,0,200);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(6,8.375951);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(7,9.529085);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(8,8.7967);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(9,6.782679);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(10,5.340851);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(11,3.686778);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(12,2.555755);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(13,1.046689);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(14,0.9837571);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(15,0.2499521);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(16,0.5207675);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(18,0.2797039);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(6,1.492084);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(7,1.583793);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(8,1.473879);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(9,1.411211);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(10,1.2326);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(11,1.004096);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(12,0.8332377);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(13,0.5323933);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(14,0.4984031);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(15,0.2499521);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(16,0.3442804);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(18,0.2797039);
   Zee_2bjet_pt_lep1_stack_1->SetEntries(215);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_pt_lep1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_stack_1->SetLineColor(ci);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_stack_1,"");
   
   TH1D *Zee_2bjet_pt_lep1_stack_2 = new TH1D("Zee_2bjet_pt_lep1_stack_2","",40,0,200);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(6,13.885);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(7,21.51159);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(8,19.59463);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(9,12.42596);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(10,7.69852);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(11,4.231326);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(12,2.019049);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(13,2.424335);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(14,2.356349);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(15,2.67418);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(16,1.91317);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(17,2.083912);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(18,0.6193719);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(19,0.8038123);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(20,0.9593634);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(22,0.4660126);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(23,0.6245509);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(25,0.6524772);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(30,0.4370907);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(31,0.4509368);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(6,2.647405);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(7,3.237141);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(8,3.115327);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(9,2.425894);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(10,2.041427);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(11,1.46704);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(12,0.9887464);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(13,1.062272);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(14,1.029795);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(15,1.118843);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(16,1.001339);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(17,1.27444);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(18,0.6193719);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(19,0.5738588);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(20,0.6844558);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(22,0.4660126);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(23,0.6245509);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(25,0.6524772);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(30,0.4370907);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(31,0.4509368);
   Zee_2bjet_pt_lep1_stack_2->SetEntries(218);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_pt_lep1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_stack_2->SetLineColor(ci);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_stack_2,"");
   
   TH1D *Zee_2bjet_pt_lep1_stack_3 = new TH1D("Zee_2bjet_pt_lep1_stack_3","",40,0,200);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(6,318.4485);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(7,367.37);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(8,369.4818);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(9,291.7649);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(10,201.2966);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(11,123.3072);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(12,69.04241);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(13,41.35197);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(14,18.54047);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(15,11.56296);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(16,6.011216);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(17,1.704443);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(18,1.006607);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(19,0.7097941);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(20,0.7168194);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(21,0.2646861);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(23,0.07188432);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(24,0.07341549);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(30,0.03245216);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(33,0.08042259);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(6,5.169689);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(7,5.526168);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(8,5.524085);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(9,4.94052);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(10,4.094062);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(11,3.179651);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(12,2.398415);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(13,1.854216);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(14,1.238549);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(15,1.005417);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(16,0.7175943);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(17,0.3898476);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(18,0.2967202);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(19,0.2389919);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(20,0.2457433);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(21,0.1546457);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(23,0.07188432);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(24,0.07341549);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(30,0.03245216);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(33,0.08042259);
   Zee_2bjet_pt_lep1_stack_3->SetEntries(24408);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_pt_lep1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_stack_3->SetLineColor(ci);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_stack_3,"");
   
   TH1D *Zee_2bjet_XX_pt_lep1_stack_4 = new TH1D("Zee_2bjet_XX_pt_lep1_stack_4","",40,0,200);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(6,3.942185);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(7,11.31573);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(8,6.349154);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(9,10.60877);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(10,3.788387);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(11,4.032595);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(12,0.3987854);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(14,0.5946078);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(15,1.828733);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(6,4.112598);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(7,10.32775);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(8,4.778969);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(9,7.035697);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(10,2.21235);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(11,2.485365);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(12,1.346485);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(14,0.5946078);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(15,1.302032);
   Zee_2bjet_XX_pt_lep1_stack_4->SetEntries(40);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_pt_lep1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_pt_lep1_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetRange(1,200);
   Zee_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_pt_lep1_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_pt_lep1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_pt_lep1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_pt_lep1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_pt_lep1_stack_4,"");
   
   TH1D *Zee_2bjet_bX_pt_lep1_stack_5 = new TH1D("Zee_2bjet_bX_pt_lep1_stack_5","",40,0,200);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(6,5.817968);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(7,6.305776);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(8,12.54703);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(9,17.70264);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(10,4.813595);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(11,8.560766);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(12,2.323865);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(13,0.736588);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(14,-0.5268166);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(15,2.643985);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(16,1.279617);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(17,0.4797199);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(21,1.098061);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(24,3.040427);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(26,-1.042344);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(29,2.253723);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(6,6.387494);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(7,7.739245);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(8,8.475529);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(9,6.453013);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(10,5.009568);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(11,4.090091);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(12,3.565462);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(13,3.171887);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(14,1.963015);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(15,1.876808);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(16,0.9901378);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(17,0.4797199);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(21,1.098061);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(24,2.164657);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(26,1.042344);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(29,2.253723);
   Zee_2bjet_bX_pt_lep1_stack_5->SetEntries(197);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_pt_lep1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_pt_lep1_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetRange(1,200);
   Zee_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_pt_lep1_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_pt_lep1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_pt_lep1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_pt_lep1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_pt_lep1_stack_5,"");
   
   TH1D *Zee_2bjet_bb_pt_lep1_stack_6 = new TH1D("Zee_2bjet_bb_pt_lep1_stack_6","",40,0,200);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(6,606.1239);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(7,769.9073);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(8,794.3612);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(9,571.5244);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(10,431.4421);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(11,204.1747);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(12,171.8085);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(13,81.82743);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(14,43.68);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(15,57.29003);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(16,53.8474);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(17,21.96189);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(18,21.79879);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(19,22.34216);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(20,15.35951);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(21,4.067504);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(22,14.35824);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(23,10.00622);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(24,16.30972);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(25,-0.7169114);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(26,0.3069289);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(27,3.386942);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(28,1.047297);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(29,-0.393054);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(31,5.328942);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(32,1.798252);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(33,1.593241);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(34,-0.3502363);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(36,1.002867);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(37,1.103353);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(41,2.416703);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(6,46.98761);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(7,49.94388);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(8,49.65778);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(9,42.84419);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(10,33.1484);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(11,25.7505);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(12,22.43238);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(13,17.50032);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(14,14.11334);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(15,12.09915);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(16,11.24179);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(17,9.465543);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(18,8.242265);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(19,7.52689);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(20,6.332163);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(21,5.324888);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(22,5.883255);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(23,4.087232);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(24,12.6801);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(25,2.695511);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(26,1.459747);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(27,3.173069);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(28,1.641981);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(29,1.827142);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(31,2.673482);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(32,1.438939);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(33,2.006772);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(34,0.3502363);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(36,1.002867);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(37,1.103353);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(41,1.559399);
   Zee_2bjet_bb_pt_lep1_stack_6->SetEntries(11144);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_pt_lep1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_pt_lep1_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetRange(1,200);
   Zee_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_pt_lep1_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_pt_lep1_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_pt_lep1_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_pt_lep1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_pt_lep1_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_pt_lep1__349 = new TH1D("Zee_2bjet_pt_lep1__349","",40,0,200);
   Zee_2bjet_pt_lep1__349->SetBinContent(6,843);
   Zee_2bjet_pt_lep1__349->SetBinContent(7,967);
   Zee_2bjet_pt_lep1__349->SetBinContent(8,983);
   Zee_2bjet_pt_lep1__349->SetBinContent(9,765);
   Zee_2bjet_pt_lep1__349->SetBinContent(10,514);
   Zee_2bjet_pt_lep1__349->SetBinContent(11,322);
   Zee_2bjet_pt_lep1__349->SetBinContent(12,196);
   Zee_2bjet_pt_lep1__349->SetBinContent(13,135);
   Zee_2bjet_pt_lep1__349->SetBinContent(14,77);
   Zee_2bjet_pt_lep1__349->SetBinContent(15,73);
   Zee_2bjet_pt_lep1__349->SetBinContent(16,36);
   Zee_2bjet_pt_lep1__349->SetBinContent(17,23);
   Zee_2bjet_pt_lep1__349->SetBinContent(18,24);
   Zee_2bjet_pt_lep1__349->SetBinContent(19,16);
   Zee_2bjet_pt_lep1__349->SetBinContent(20,15);
   Zee_2bjet_pt_lep1__349->SetBinContent(21,17);
   Zee_2bjet_pt_lep1__349->SetBinContent(22,11);
   Zee_2bjet_pt_lep1__349->SetBinContent(23,9);
   Zee_2bjet_pt_lep1__349->SetBinContent(24,4);
   Zee_2bjet_pt_lep1__349->SetBinContent(25,9);
   Zee_2bjet_pt_lep1__349->SetBinContent(26,7);
   Zee_2bjet_pt_lep1__349->SetBinContent(27,2);
   Zee_2bjet_pt_lep1__349->SetBinContent(28,2);
   Zee_2bjet_pt_lep1__349->SetBinContent(29,6);
   Zee_2bjet_pt_lep1__349->SetBinContent(30,2);
   Zee_2bjet_pt_lep1__349->SetBinContent(31,1);
   Zee_2bjet_pt_lep1__349->SetBinContent(32,2);
   Zee_2bjet_pt_lep1__349->SetBinContent(33,1);
   Zee_2bjet_pt_lep1__349->SetBinContent(34,1);
   Zee_2bjet_pt_lep1__349->SetBinContent(35,1);
   Zee_2bjet_pt_lep1__349->SetBinContent(37,1);
   Zee_2bjet_pt_lep1__349->SetBinContent(39,2);
   Zee_2bjet_pt_lep1__349->SetBinContent(40,1);
   Zee_2bjet_pt_lep1__349->SetBinContent(41,2);
   Zee_2bjet_pt_lep1__349->SetBinError(6,29.03446);
   Zee_2bjet_pt_lep1__349->SetBinError(7,31.09662);
   Zee_2bjet_pt_lep1__349->SetBinError(8,31.35283);
   Zee_2bjet_pt_lep1__349->SetBinError(9,27.65863);
   Zee_2bjet_pt_lep1__349->SetBinError(10,22.67157);
   Zee_2bjet_pt_lep1__349->SetBinError(11,17.94436);
   Zee_2bjet_pt_lep1__349->SetBinError(12,14);
   Zee_2bjet_pt_lep1__349->SetBinError(13,11.61895);
   Zee_2bjet_pt_lep1__349->SetBinError(14,8.774964);
   Zee_2bjet_pt_lep1__349->SetBinError(15,8.544004);
   Zee_2bjet_pt_lep1__349->SetBinError(16,6);
   Zee_2bjet_pt_lep1__349->SetBinError(17,4.795832);
   Zee_2bjet_pt_lep1__349->SetBinError(18,4.898979);
   Zee_2bjet_pt_lep1__349->SetBinError(19,4);
   Zee_2bjet_pt_lep1__349->SetBinError(20,3.872983);
   Zee_2bjet_pt_lep1__349->SetBinError(21,4.123106);
   Zee_2bjet_pt_lep1__349->SetBinError(22,3.316625);
   Zee_2bjet_pt_lep1__349->SetBinError(23,3);
   Zee_2bjet_pt_lep1__349->SetBinError(24,2);
   Zee_2bjet_pt_lep1__349->SetBinError(25,3);
   Zee_2bjet_pt_lep1__349->SetBinError(26,2.645751);
   Zee_2bjet_pt_lep1__349->SetBinError(27,1.414214);
   Zee_2bjet_pt_lep1__349->SetBinError(28,1.414214);
   Zee_2bjet_pt_lep1__349->SetBinError(29,2.44949);
   Zee_2bjet_pt_lep1__349->SetBinError(30,1.414214);
   Zee_2bjet_pt_lep1__349->SetBinError(31,1);
   Zee_2bjet_pt_lep1__349->SetBinError(32,1.414214);
   Zee_2bjet_pt_lep1__349->SetBinError(33,1);
   Zee_2bjet_pt_lep1__349->SetBinError(34,1);
   Zee_2bjet_pt_lep1__349->SetBinError(35,1);
   Zee_2bjet_pt_lep1__349->SetBinError(37,1);
   Zee_2bjet_pt_lep1__349->SetBinError(39,1.414214);
   Zee_2bjet_pt_lep1__349->SetBinError(40,1);
   Zee_2bjet_pt_lep1__349->SetBinError(41,1.414214);
   Zee_2bjet_pt_lep1__349->SetEntries(5070);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1__349->SetLineColor(ci);
   Zee_2bjet_pt_lep1__349->SetLineWidth(2);
   Zee_2bjet_pt_lep1__349->SetMarkerStyle(20);
   Zee_2bjet_pt_lep1__349->SetMarkerSize(1.2);
   Zee_2bjet_pt_lep1__349->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1__349->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1__349->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1__349->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1__349->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1__349->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1__349->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1__349->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1__349->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1__349->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1__349->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1__349->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1__349->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1__349->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1__349->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_pt_lep1_fx1349[40] = {
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
   Double_t Graph_from_Zee_2bjet_bb_pt_lep1_fy1349[40] = {
   0,
   0,
   0,
   0,
   0,
   956.5934,
   1185.939,
   1211.131,
   910.8093,
   654.3801,
   347.9935,
   248.1484,
   127.387,
   65.62837,
   76.24984,
   63.57217,
   26.22996,
   23.70448,
   23.85577,
   17.03569,
   5.430251,
   14.82426,
   10.70266,
   19.42356,
   -0.06443425,
   -0.7354147,
   3.386942,
   1.047297,
   1.860669,
   0.4695429,
   5.779878,
   1.798252,
   1.673664,
   -0.3502363,
   0,
   1.002867,
   1.103353,
   0,
   0,
   0};
   Double_t Graph_from_Zee_2bjet_bb_pt_lep1_fex1349[40] = {
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
   Double_t Graph_from_Zee_2bjet_bb_pt_lep1_fey1349[40] = {
   0,
   0,
   0,
   0,
   0,
   47.97405,
   52.00457,
   51.01922,
   44.26118,
   33.93014,
   26.44361,
   22.91641,
   17.92127,
   14.36093,
   12.40695,
   11.35756,
   9.570936,
   8.275557,
   7.552516,
   6.373787,
   5.439125,
   5.901682,
   4.135299,
   12.86375,
   2.773356,
   1.793695,
   3.173069,
   1.641981,
   2.90133,
   0.4382938,
   2.711245,
   1.438939,
   2.008383,
   0.3502363,
   0,
   1.002867,
   1.103353,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zee_2bjet_bb_pt_lep1_fx1349,Graph_from_Zee_2bjet_bb_pt_lep1_fy1349,Graph_from_Zee_2bjet_bb_pt_lep1_fex1349,Graph_from_Zee_2bjet_bb_pt_lep1_fey1349);
   gre->SetName("Graph_from_Zee_2bjet_bb_pt_lep1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_pt_lep11349 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_pt_lep11349","",100,0,220);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11349->SetMinimum(-129.3365);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11349->SetMaximum(1388.648);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11349->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11349->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11349->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11349->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11349->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11349->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11349->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11349->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11349->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11349->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11349->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11349->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11349->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11349->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11349->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11349->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_pt_lep11349);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_pt_lep1","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_pt_lep1_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_pt_lep1_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_pt_lep1_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_pt_lep1","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   pt_lep1_Z_2bjet_Zee_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__350 = new TH1D("data_mc_ratio__350","",40,0,200);
   data_mc_ratio__350->SetBinContent(6,0.8812521);
   data_mc_ratio__350->SetBinContent(7,0.8153873);
   data_mc_ratio__350->SetBinContent(8,0.8116384);
   data_mc_ratio__350->SetBinContent(9,0.8399124);
   data_mc_ratio__350->SetBinContent(10,0.7854762);
   data_mc_ratio__350->SetBinContent(11,0.9253048);
   data_mc_ratio__350->SetBinContent(12,0.78985);
   data_mc_ratio__350->SetBinContent(13,1.059763);
   data_mc_ratio__350->SetBinContent(14,1.173273);
   data_mc_ratio__350->SetBinContent(15,0.9573791);
   data_mc_ratio__350->SetBinContent(16,0.5662855);
   data_mc_ratio__350->SetBinContent(17,0.8768598);
   data_mc_ratio__350->SetBinContent(18,1.012467);
   data_mc_ratio__350->SetBinContent(19,0.6706973);
   data_mc_ratio__350->SetBinContent(20,0.8805043);
   data_mc_ratio__350->SetBinContent(21,3.130611);
   data_mc_ratio__350->SetBinContent(22,0.7420271);
   data_mc_ratio__350->SetBinContent(23,0.8409125);
   data_mc_ratio__350->SetBinContent(24,0.2059354);
   data_mc_ratio__350->SetBinContent(25,-139.6773);
   data_mc_ratio__350->SetBinContent(26,-9.518439);
   data_mc_ratio__350->SetBinContent(27,0.5905032);
   data_mc_ratio__350->SetBinContent(28,1.909677);
   data_mc_ratio__350->SetBinContent(29,3.224646);
   data_mc_ratio__350->SetBinContent(30,4.259462);
   data_mc_ratio__350->SetBinContent(31,0.173014);
   data_mc_ratio__350->SetBinContent(32,1.112191);
   data_mc_ratio__350->SetBinContent(33,0.5974916);
   data_mc_ratio__350->SetBinContent(34,-2.855216);
   data_mc_ratio__350->SetBinContent(37,0.9063282);
   data_mc_ratio__350->SetBinContent(41,0.8275736);
   data_mc_ratio__350->SetBinError(6,0.03035194);
   data_mc_ratio__350->SetBinError(7,0.02622109);
   data_mc_ratio__350->SetBinError(8,0.02588724);
   data_mc_ratio__350->SetBinError(9,0.0303671);
   data_mc_ratio__350->SetBinError(10,0.03464587);
   data_mc_ratio__350->SetBinError(11,0.05156522);
   data_mc_ratio__350->SetBinError(12,0.05641785);
   data_mc_ratio__350->SetBinError(13,0.09120984);
   data_mc_ratio__350->SetBinError(14,0.1337069);
   data_mc_ratio__350->SetBinError(15,0.1120527);
   data_mc_ratio__350->SetBinError(16,0.09438092);
   data_mc_ratio__350->SetBinError(17,0.1828379);
   data_mc_ratio__350->SetBinError(18,0.206669);
   data_mc_ratio__350->SetBinError(19,0.1676743);
   data_mc_ratio__350->SetBinError(20,0.2273452);
   data_mc_ratio__350->SetBinError(21,0.7592846);
   data_mc_ratio__350->SetBinError(22,0.2237296);
   data_mc_ratio__350->SetBinError(23,0.2803042);
   data_mc_ratio__350->SetBinError(24,0.1029677);
   data_mc_ratio__350->SetBinError(25,46.55909);
   data_mc_ratio__350->SetBinError(26,3.597632);
   data_mc_ratio__350->SetBinError(27,0.4175489);
   data_mc_ratio__350->SetBinError(28,1.350346);
   data_mc_ratio__350->SetBinError(29,1.316456);
   data_mc_ratio__350->SetBinError(30,3.011894);
   data_mc_ratio__350->SetBinError(31,0.173014);
   data_mc_ratio__350->SetBinError(32,0.786438);
   data_mc_ratio__350->SetBinError(33,0.5974916);
   data_mc_ratio__350->SetBinError(34,2.855216);
   data_mc_ratio__350->SetBinError(37,0.9063282);
   data_mc_ratio__350->SetBinError(41,0.7922083);
   data_mc_ratio__350->SetMinimum(0.4);
   data_mc_ratio__350->SetMaximum(1.6);
   data_mc_ratio__350->SetEntries(121.3121);
   data_mc_ratio__350->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__350->SetLineColor(ci);
   data_mc_ratio__350->SetLineWidth(2);
   data_mc_ratio__350->SetMarkerStyle(20);
   data_mc_ratio__350->SetMarkerSize(1.2);
   data_mc_ratio__350->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__350->GetXaxis()->SetRange(1,40);
   data_mc_ratio__350->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__350->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__350->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__350->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__350->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__350->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__350->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__350->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__350->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__350->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__350->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__350->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__350->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__350->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__350->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__350->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__350->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1350[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1350[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1350[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1350[40] = {
   0,
   0,
   0,
   0,
   0,
   0.05015093,
   0.04385095,
   0.04212529,
   0.04859544,
   0.05185082,
   0.07598883,
   0.09234961,
   0.1406837,
   0.2188219,
   0.1627144,
   0.1786562,
   0.3648856,
   0.3491137,
   0.3165908,
   0.3741431,
   1.001634,
   0.3981099,
   0.3863805,
   0.6622757,
   0,
   0,
   0.9368539,
   1.567827,
   1.559294,
   0.9334478,
   0.4690835,
   0.8001878,
   1.199992,
   0,
   0,
   1,
   1,
   0,
   0,
   0};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1350,Graph_from_mc_statistical_error_fy1350,Graph_from_mc_statistical_error_fex1350,Graph_from_mc_statistical_error_fey1350);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1350 = new TH1F("Graph_Graph_from_mc_statistical_error1350","",100,0,220);
   Graph_Graph_from_mc_statistical_error1350->SetMinimum(-0.8813926);
   Graph_Graph_from_mc_statistical_error1350->SetMaximum(2.881393);
   Graph_Graph_from_mc_statistical_error1350->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1350->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1350->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1350->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1350->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1350->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1350->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1350->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1350->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1350->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1350->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1350->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1350->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1350->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1350->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1350->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1350);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_2bjet_Zee_18_amcnlo->cd();
   pt_lep1_Z_2bjet_Zee_18_amcnlo->Modified();
   pt_lep1_Z_2bjet_Zee_18_amcnlo->cd();
   pt_lep1_Z_2bjet_Zee_18_amcnlo->SetSelected(pt_lep1_Z_2bjet_Zee_18_amcnlo);
}

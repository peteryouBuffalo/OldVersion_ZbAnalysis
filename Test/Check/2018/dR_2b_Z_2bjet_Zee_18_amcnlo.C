void dR_2b_Z_2bjet_Zee_18_amcnlo()
{
//=========Macro generated from canvas: dR_2b_Z_2bjet_Zee_18_amcnlo/dR_2b_Z_2bjet_Zee_18_amcnlo
//=========  (Thu Jan 14 10:42:51 2021) by ROOT version 6.14/09
   TCanvas *dR_2b_Z_2bjet_Zee_18_amcnlo = new TCanvas("dR_2b_Z_2bjet_Zee_18_amcnlo", "dR_2b_Z_2bjet_Zee_18_amcnlo",0,0,600,600);
   dR_2b_Z_2bjet_Zee_18_amcnlo->SetHighLightColor(2);
   dR_2b_Z_2bjet_Zee_18_amcnlo->Range(0,0,1,1);
   dR_2b_Z_2bjet_Zee_18_amcnlo->SetFillColor(0);
   dR_2b_Z_2bjet_Zee_18_amcnlo->SetFillStyle(4000);
   dR_2b_Z_2bjet_Zee_18_amcnlo->SetBorderMode(0);
   dR_2b_Z_2bjet_Zee_18_amcnlo->SetBorderSize(2);
   dR_2b_Z_2bjet_Zee_18_amcnlo->SetFrameFillStyle(1000);
   dR_2b_Z_2bjet_Zee_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.623683,6.314516,2631.059);
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
   st->SetMaximum(2254.943);
   
   TH1F *st_stack_223 = new TH1F("st_stack_223","",25,0,10);
   st_stack_223->SetMinimum(0.01);
   st_stack_223->SetMaximum(2367.69);
   st_stack_223->SetDirectory(0);
   st_stack_223->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_223->SetLineColor(ci);
   st_stack_223->GetXaxis()->SetRange(1,15);
   st_stack_223->GetXaxis()->SetLabelFont(42);
   st_stack_223->GetXaxis()->SetLabelSize(0.035);
   st_stack_223->GetXaxis()->SetTitleSize(0.035);
   st_stack_223->GetXaxis()->SetTitleFont(42);
   st_stack_223->GetYaxis()->SetTitle("Events/0.4");
   st_stack_223->GetYaxis()->SetLabelFont(42);
   st_stack_223->GetYaxis()->SetLabelSize(0.05);
   st_stack_223->GetYaxis()->SetTitleSize(0.057);
   st_stack_223->GetYaxis()->SetTitleOffset(1.2);
   st_stack_223->GetYaxis()->SetTitleFont(42);
   st_stack_223->GetZaxis()->SetLabelFont(42);
   st_stack_223->GetZaxis()->SetLabelSize(0.035);
   st_stack_223->GetZaxis()->SetTitleSize(0.035);
   st_stack_223->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_223);
   
   
   TH1D *Zee_2bjet_dR_2b_stack_1 = new TH1D("Zee_2bjet_dR_2b_stack_1","",25,0,10);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(2,1.741057);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(3,0.5735314);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(4,6.986048);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(5,5.65122);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(6,5.294407);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(7,8.568458);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(8,10.2547);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(9,6.117909);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(10,2.539914);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(11,0.4214297);
   Zee_2bjet_dR_2b_stack_1->SetBinError(2,0.6371629);
   Zee_2bjet_dR_2b_stack_1->SetBinError(3,0.3253091);
   Zee_2bjet_dR_2b_stack_1->SetBinError(4,1.369727);
   Zee_2bjet_dR_2b_stack_1->SetBinError(5,1.273459);
   Zee_2bjet_dR_2b_stack_1->SetBinError(6,1.147788);
   Zee_2bjet_dR_2b_stack_1->SetBinError(7,1.561627);
   Zee_2bjet_dR_2b_stack_1->SetBinError(8,1.642127);
   Zee_2bjet_dR_2b_stack_1->SetBinError(9,1.322836);
   Zee_2bjet_dR_2b_stack_1->SetBinError(10,0.7893151);
   Zee_2bjet_dR_2b_stack_1->SetBinError(11,0.276025);
   Zee_2bjet_dR_2b_stack_1->SetEntries(215);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_dR_2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_1->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_1,"");
   
   TH1D *Zee_2bjet_dR_2b_stack_2 = new TH1D("Zee_2bjet_dR_2b_stack_2","",25,0,10);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(2,5.790125);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(3,8.220798);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(4,17.26018);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(5,18.74597);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(6,11.97403);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(7,16.48274);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(8,17.98009);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(9,1.377703);
   Zee_2bjet_dR_2b_stack_2->SetBinError(2,1.740774);
   Zee_2bjet_dR_2b_stack_2->SetBinError(3,1.956338);
   Zee_2bjet_dR_2b_stack_2->SetBinError(4,2.980265);
   Zee_2bjet_dR_2b_stack_2->SetBinError(5,3.132706);
   Zee_2bjet_dR_2b_stack_2->SetBinError(6,2.44739);
   Zee_2bjet_dR_2b_stack_2->SetBinError(7,2.869584);
   Zee_2bjet_dR_2b_stack_2->SetBinError(8,2.953863);
   Zee_2bjet_dR_2b_stack_2->SetBinError(9,0.7407671);
   Zee_2bjet_dR_2b_stack_2->SetEntries(218);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dR_2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_2->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_2,"");
   
   TH1D *Zee_2bjet_dR_2b_stack_3 = new TH1D("Zee_2bjet_dR_2b_stack_3","",25,0,10);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(2,67.47504);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(3,122.0743);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(4,167.9849);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(5,218.7042);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(6,271.9334);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(7,346.0782);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(8,402.4191);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(9,160.7305);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(10,48.37935);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(11,13.5612);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(12,2.931542);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(13,0.5668788);
   Zee_2bjet_dR_2b_stack_3->SetBinError(2,2.413302);
   Zee_2bjet_dR_2b_stack_3->SetBinError(3,3.201001);
   Zee_2bjet_dR_2b_stack_3->SetBinError(4,3.725328);
   Zee_2bjet_dR_2b_stack_3->SetBinError(5,4.287231);
   Zee_2bjet_dR_2b_stack_3->SetBinError(6,4.76379);
   Zee_2bjet_dR_2b_stack_3->SetBinError(7,5.346622);
   Zee_2bjet_dR_2b_stack_3->SetBinError(8,5.774023);
   Zee_2bjet_dR_2b_stack_3->SetBinError(9,3.653623);
   Zee_2bjet_dR_2b_stack_3->SetBinError(10,1.991219);
   Zee_2bjet_dR_2b_stack_3->SetBinError(11,1.073104);
   Zee_2bjet_dR_2b_stack_3->SetBinError(12,0.4987702);
   Zee_2bjet_dR_2b_stack_3->SetBinError(13,0.2175675);
   Zee_2bjet_dR_2b_stack_3->SetEntries(24408);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dR_2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_3->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_3,"");
   
   TH1D *Zee_2bjet_XX_dR_2b_stack_4 = new TH1D("Zee_2bjet_XX_dR_2b_stack_4","",25,0,10);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(2,1.389864);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(4,2.895286);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(5,1.009878);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(6,9.234306);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(7,7.090982);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(8,5.670473);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(9,9.974451);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(10,2.399795);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(11,1.886902);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(12,1.307014);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(2,2.232802);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(4,1.687206);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(5,1.009878);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(6,10.4678);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(7,4.355204);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(8,3.864226);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(9,6.994);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(10,2.55599);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(11,1.338854);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(12,1.131538);
   Zee_2bjet_XX_dR_2b_stack_4->SetEntries(40);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_dR_2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_dR_2b_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_dR_2b_stack_4,"");
   
   TH1D *Zee_2bjet_bX_dR_2b_stack_5 = new TH1D("Zee_2bjet_bX_dR_2b_stack_5","",25,0,10);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(2,10.10156);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(3,5.253661);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(4,8.891429);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(5,7.260803);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(6,3.619115);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(7,11.51814);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(8,8.057323);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(9,0.514376);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(10,8.381256);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(11,-1.027581);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(12,5.464517);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(2,5.387009);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(3,4.056997);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(4,4.797582);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(5,4.55706);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(6,6.15184);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(7,6.523223);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(8,7.190332);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(9,5.782986);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(10,5.049171);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(11,3.249697);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(12,2.924861);
   Zee_2bjet_bX_dR_2b_stack_5->SetEntries(197);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_dR_2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_dR_2b_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_dR_2b_stack_5,"");
   
   TH1D *Zee_2bjet_bb_dR_2b_stack_6 = new TH1D("Zee_2bjet_bb_dR_2b_stack_6","",25,0,10);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(2,254.2236);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(3,245.1506);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(4,318.7873);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(5,352.0294);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(6,469.9416);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(7,581.2089);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(8,795.8372);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(9,497.6715);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(10,253.863);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(11,106.1815);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(12,50.69631);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(13,0.19776);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(14,2.926814);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(2,23.49595);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(3,26.70067);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(4,33.94652);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(5,34.41896);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(6,40.67876);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(7,44.82866);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(8,49.80159);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(9,37.89934);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(10,28.39864);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(11,19.59009);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(12,12.67086);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(13,6.808276);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(14,2.288435);
   Zee_2bjet_bb_dR_2b_stack_6->SetEntries(11144);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_dR_2b_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_dR_2b_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_dR_2b_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dR_2b__445 = new TH1D("Zee_2bjet_dR_2b__445","",25,0,10);
   Zee_2bjet_dR_2b__445->SetBinContent(2,311);
   Zee_2bjet_dR_2b__445->SetBinContent(3,391);
   Zee_2bjet_dR_2b__445->SetBinContent(4,397);
   Zee_2bjet_dR_2b__445->SetBinContent(5,513);
   Zee_2bjet_dR_2b__445->SetBinContent(6,689);
   Zee_2bjet_dR_2b__445->SetBinContent(7,838);
   Zee_2bjet_dR_2b__445->SetBinContent(8,1002);
   Zee_2bjet_dR_2b__445->SetBinContent(9,483);
   Zee_2bjet_dR_2b__445->SetBinContent(10,277);
   Zee_2bjet_dR_2b__445->SetBinContent(11,114);
   Zee_2bjet_dR_2b__445->SetBinContent(12,42);
   Zee_2bjet_dR_2b__445->SetBinContent(13,13);
   Zee_2bjet_dR_2b__445->SetBinError(2,17.63519);
   Zee_2bjet_dR_2b__445->SetBinError(3,19.77372);
   Zee_2bjet_dR_2b__445->SetBinError(4,19.92486);
   Zee_2bjet_dR_2b__445->SetBinError(5,22.6495);
   Zee_2bjet_dR_2b__445->SetBinError(6,26.24881);
   Zee_2bjet_dR_2b__445->SetBinError(7,28.94823);
   Zee_2bjet_dR_2b__445->SetBinError(8,31.65438);
   Zee_2bjet_dR_2b__445->SetBinError(9,21.97726);
   Zee_2bjet_dR_2b__445->SetBinError(10,16.64332);
   Zee_2bjet_dR_2b__445->SetBinError(11,10.67708);
   Zee_2bjet_dR_2b__445->SetBinError(12,6.480741);
   Zee_2bjet_dR_2b__445->SetBinError(13,3.605551);
   Zee_2bjet_dR_2b__445->SetEntries(5070);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b__445->SetLineColor(ci);
   Zee_2bjet_dR_2b__445->SetLineWidth(2);
   Zee_2bjet_dR_2b__445->SetMarkerStyle(20);
   Zee_2bjet_dR_2b__445->SetMarkerSize(1.2);
   Zee_2bjet_dR_2b__445->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b__445->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b__445->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b__445->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b__445->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b__445->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b__445->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b__445->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b__445->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b__445->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b__445->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b__445->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b__445->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b__445->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b__445->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dR_2b_fx1445[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dR_2b_fy1445[25] = {
   0,
   340.7213,
   381.2728,
   522.8051,
   603.4015,
   771.9969,
   970.9474,
   1240.219,
   676.3864,
   315.5633,
   121.0234,
   60.39938,
   0.7646388,
   2.926814,
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
   Double_t Graph_from_Zee_2bjet_bb_dR_2b_fex1445[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dR_2b_fey1445[25] = {
   0,
   24.39928,
   27.26838,
   34.68236,
   35.1606,
   42.804,
   45.93896,
   50.90768,
   39.17099,
   29.03615,
   19.9337,
   13.06272,
   6.811751,
   2.288435,
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
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_bb_dR_2b_fx1445,Graph_from_Zee_2bjet_bb_dR_2b_fy1445,Graph_from_Zee_2bjet_bb_dR_2b_fex1445,Graph_from_Zee_2bjet_bb_dR_2b_fey1445);
   gre->SetName("Graph_from_Zee_2bjet_bb_dR_2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dR_2b1445 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dR_2b1445","",100,0,11);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1445->SetMinimum(-135.7645);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1445->SetMaximum(1420.844);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1445->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1445->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1445->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1445->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1445->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1445->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1445->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1445->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1445->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1445->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1445->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1445->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1445->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1445->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1445->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1445->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dR_2b1445);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dR_2b","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_dR_2b_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_dR_2b_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_dR_2b_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_dR_2b","MC unc. (stat.)","fl");

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
   dR_2b_Z_2bjet_Zee_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__446 = new TH1D("data_mc_ratio__446","",25,0,10);
   data_mc_ratio__446->SetBinContent(2,0.9127695);
   data_mc_ratio__446->SetBinContent(3,1.025512);
   data_mc_ratio__446->SetBinContent(4,0.7593652);
   data_mc_ratio__446->SetBinContent(5,0.8501801);
   data_mc_ratio__446->SetBinContent(6,0.8924907);
   data_mc_ratio__446->SetBinContent(7,0.8630746);
   data_mc_ratio__446->SetBinContent(8,0.8079219);
   data_mc_ratio__446->SetBinContent(9,0.7140889);
   data_mc_ratio__446->SetBinContent(10,0.8777953);
   data_mc_ratio__446->SetBinContent(11,0.9419664);
   data_mc_ratio__446->SetBinContent(12,0.6953714);
   data_mc_ratio__446->SetBinContent(13,17.00149);
   data_mc_ratio__446->SetBinError(2,0.05175841);
   data_mc_ratio__446->SetBinError(3,0.05186239);
   data_mc_ratio__446->SetBinError(4,0.03811145);
   data_mc_ratio__446->SetBinError(5,0.03753637);
   data_mc_ratio__446->SetBinError(6,0.03400119);
   data_mc_ratio__446->SetBinError(7,0.02981442);
   data_mc_ratio__446->SetBinError(8,0.02552322);
   data_mc_ratio__446->SetBinError(9,0.03249217);
   data_mc_ratio__446->SetBinError(10,0.05274161);
   data_mc_ratio__446->SetBinError(11,0.08822323);
   data_mc_ratio__446->SetBinError(12,0.1072981);
   data_mc_ratio__446->SetBinError(13,4.715365);
   data_mc_ratio__446->SetMinimum(0.4);
   data_mc_ratio__446->SetMaximum(1.6);
   data_mc_ratio__446->SetEntries(0.03022015);
   data_mc_ratio__446->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__446->SetLineColor(ci);
   data_mc_ratio__446->SetLineWidth(2);
   data_mc_ratio__446->SetMarkerStyle(20);
   data_mc_ratio__446->SetMarkerSize(1.2);
   data_mc_ratio__446->GetXaxis()->SetTitle("#DeltaR_{bb}");
   data_mc_ratio__446->GetXaxis()->SetRange(1,15);
   data_mc_ratio__446->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__446->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__446->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__446->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__446->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__446->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__446->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__446->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__446->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__446->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__446->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__446->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__446->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__446->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__446->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__446->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__446->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1446[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1446[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1446[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1446[25] = {
   0,
   0.07161068,
   0.07151933,
   0.06633898,
   0.05827064,
   0.05544582,
   0.04731354,
   0.04104734,
   0.05791215,
   0.09201369,
   0.1647094,
   0.2162724,
   8.908456,
   0.7818862,
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
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1446,Graph_from_mc_statistical_error_fy1446,Graph_from_mc_statistical_error_fex1446,Graph_from_mc_statistical_error_fey1446);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1446 = new TH1F("Graph_Graph_from_mc_statistical_error1446","",100,0,11);
   Graph_Graph_from_mc_statistical_error1446->SetMinimum(-9.690147);
   Graph_Graph_from_mc_statistical_error1446->SetMaximum(11.69015);
   Graph_Graph_from_mc_statistical_error1446->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1446->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1446->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1446->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1446->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1446->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1446->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1446->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1446->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1446->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1446->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1446->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1446->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1446->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1446->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1446->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1446);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dR_2b_Z_2bjet_Zee_18_amcnlo->cd();
   dR_2b_Z_2bjet_Zee_18_amcnlo->Modified();
   dR_2b_Z_2bjet_Zee_18_amcnlo->cd();
   dR_2b_Z_2bjet_Zee_18_amcnlo->SetSelected(dR_2b_Z_2bjet_Zee_18_amcnlo);
}

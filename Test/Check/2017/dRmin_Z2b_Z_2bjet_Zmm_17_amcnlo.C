void dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo()
{
//=========Macro generated from canvas: dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo/dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo
//=========  (Thu Jan 14 10:43:07 2021) by ROOT version 6.14/09
   TCanvas *dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo = new TCanvas("dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo", "dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo",0,0,600,600);
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->SetHighLightColor(2);
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->Range(0,0,1,1);
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->SetFillColor(0);
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->SetFillStyle(4000);
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->SetBorderMode(0);
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->SetBorderSize(2);
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->SetFrameFillStyle(1000);
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-3.333333,6.314516,3339.999);
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
   st->SetMaximum(2862.539);
   
   TH1F *st_stack_330 = new TH1F("st_stack_330","",25,0,10);
   st_stack_330->SetMinimum(0.01);
   st_stack_330->SetMaximum(3005.666);
   st_stack_330->SetDirectory(0);
   st_stack_330->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_330->SetLineColor(ci);
   st_stack_330->GetXaxis()->SetRange(1,15);
   st_stack_330->GetXaxis()->SetLabelFont(42);
   st_stack_330->GetXaxis()->SetLabelSize(0.035);
   st_stack_330->GetXaxis()->SetTitleSize(0.035);
   st_stack_330->GetXaxis()->SetTitleFont(42);
   st_stack_330->GetYaxis()->SetTitle("Events/0.4");
   st_stack_330->GetYaxis()->SetLabelFont(42);
   st_stack_330->GetYaxis()->SetLabelSize(0.05);
   st_stack_330->GetYaxis()->SetTitleSize(0.057);
   st_stack_330->GetYaxis()->SetTitleOffset(1.2);
   st_stack_330->GetYaxis()->SetTitleFont(42);
   st_stack_330->GetZaxis()->SetLabelFont(42);
   st_stack_330->GetZaxis()->SetLabelSize(0.035);
   st_stack_330->GetZaxis()->SetTitleSize(0.035);
   st_stack_330->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_330);
   
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_1 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_1","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(1,0.7317568);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(2,4.4357);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(3,3.612501);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(4,6.837371);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(5,9.737477);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(6,11.44129);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(7,12.19372);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(8,8.285178);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(9,1.484909);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(10,0.4241009);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(11,0.2180665);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(1,0.3712926);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(2,1.315759);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(3,0.846222);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(4,1.11911);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(5,1.498674);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(6,1.498648);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(7,1.507466);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(8,1.259775);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(9,0.5224343);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(10,0.2998905);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(11,0.2180665);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetEntries(345);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_dRmin_Z2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_1->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_1,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_2 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_2","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(1,1.437108);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(2,3.367123);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(3,4.862258);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(4,16.01186);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(5,18.80338);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(6,31.75065);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(7,32.22897);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(8,18.77692);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(9,5.495448);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(10,3.218085);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(11,0.3720242);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(12,0.374564);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(1,0.7198826);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(2,1.021597);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(3,1.276501);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(4,2.383204);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(5,2.532804);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(6,3.345779);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(7,3.392079);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(8,2.665486);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(9,1.349759);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(10,1.030778);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(11,0.3720242);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(12,0.374564);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetEntries(434);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dRmin_Z2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_2->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_2,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_3 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_3","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(1,46.40333);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(2,139.321);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(3,230.802);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(4,386.9738);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(5,530.9722);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(6,504.1588);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(7,345.0297);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(8,149.2439);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(9,23.95096);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(10,5.197589);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(11,2.026851);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(12,0.5135015);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(13,0.3263468);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(14,0.09947422);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(16,0.5345187);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(1,4.327014);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(2,7.340916);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(3,9.38992);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(4,12.24373);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(5,14.36918);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(6,14.02347);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(7,11.68908);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(8,7.545339);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(9,3.082777);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(10,1.335953);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(11,0.8786912);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(12,0.4007401);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(13,0.3129717);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(14,0.09947422);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(16,0.5345187);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetEntries(6946);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dRmin_Z2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_3->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_dRmin_Z2b_stack_4 = new TH1D("Zmm_2bjet_XX_dRmin_Z2b_stack_4","",25,0,10);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(1,3.359778);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(2,5.735632);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(3,2.479899);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(4,4.834626);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(5,7.09504);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(6,3.89676);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(7,-4.390997);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(8,15.53843);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(9,0.428038);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(10,6.789988);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(11,2.736214);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(12,6.076455);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(13,3.331521);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(14,-0.9952464);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(16,-0.9690062);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(1,3.359778);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(2,3.262039);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(3,2.46856);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(4,3.981416);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(5,4.622704);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(6,5.797638);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(7,4.236027);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(8,6.690175);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(9,1.518344);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(10,4.015123);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(11,2.173651);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(12,3.888724);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(13,3.331521);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(14,0.9952464);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(16,0.9690062);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetEntries(108);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_dRmin_Z2b_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_dRmin_Z2b_stack_5 = new TH1D("Zmm_2bjet_bX_dRmin_Z2b_stack_5","",25,0,10);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(1,4.185974);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(2,-0.04909031);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(3,8.379198);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(4,11.72695);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(5,7.825595);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(6,26.76911);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(7,9.974728);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(8,10.30165);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(9,3.263986);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(10,2.60869);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(11,-0.04617848);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(12,0.6031876);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(13,0.7474404);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(1,2.293197);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(2,2.334155);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(3,4.391053);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(4,5.046075);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(5,4.759963);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(6,6.702942);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(7,6.023888);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(8,5.952995);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(9,3.104029);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(10,2.510318);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(11,1.274243);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(12,0.9951034);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(13,0.7474404);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetEntries(333);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_dRmin_Z2b_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_dRmin_Z2b_stack_6 = new TH1D("Zmm_2bjet_bb_dRmin_Z2b_stack_6","",25,0,10);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(1,81.12011);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(2,194.1484);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(3,284.8159);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(4,516.9433);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(5,725.7019);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(6,996.3798);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(7,992.0986);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(8,790.4423);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(9,169.1768);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(10,59.26082);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(11,22.27254);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(12,21.58425);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(13,9.206883);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(14,2.201029);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(16,-0.5965143);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(17,-0.7242562);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(1,12.1205);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(2,21.41239);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(3,28.23961);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(4,35.766);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(5,43.7188);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(6,49.28163);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(7,50.08151);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(8,42.6081);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(9,21.7153);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(10,13.33183);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(11,8.41164);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(12,7.090471);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(13,4.712415);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(14,2.534016);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(16,1.519646);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(17,0.7242562);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetEntries(17994);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_dRmin_Z2b_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dRmin_Z2b__659 = new TH1D("Zmm_2bjet_dRmin_Z2b__659","",25,0,10);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(1,76);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(2,271);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(3,523);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(4,872);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(5,1190);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(6,1246);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(7,1185);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(8,816);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(9,208);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(10,87);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(11,34);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(12,20);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(13,14);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(14,3);
   Zmm_2bjet_dRmin_Z2b__659->SetBinContent(15,2);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(1,8.717798);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(2,16.46208);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(3,22.86919);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(4,29.52965);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(5,34.49638);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(6,35.29873);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(7,34.42383);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(8,28.56571);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(9,14.42221);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(10,9.327379);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(11,5.830952);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(12,4.472136);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(13,3.741657);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(14,1.732051);
   Zmm_2bjet_dRmin_Z2b__659->SetBinError(15,1.414214);
   Zmm_2bjet_dRmin_Z2b__659->SetEntries(6547);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b__659->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b__659->SetLineWidth(2);
   Zmm_2bjet_dRmin_Z2b__659->SetMarkerStyle(20);
   Zmm_2bjet_dRmin_Z2b__659->SetMarkerSize(1.2);
   Zmm_2bjet_dRmin_Z2b__659->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b__659->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b__659->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b__659->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b__659->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b__659->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b__659->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b__659->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b__659->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b__659->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b__659->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b__659->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b__659->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b__659->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b__659->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fx1659[25] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fy1659[25] = {
   137.2381,
   346.9587,
   534.9518,
   943.3279,
   1300.136,
   1574.396,
   1387.135,
   992.5885,
   203.8001,
   77.49927,
   27.57952,
   29.15196,
   13.61219,
   1.305257,
   0,
   -1.031002,
   -0.7242562,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fex1659[25] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fey1659[25] = {
   13.52155,
   23.04872,
   30.22196,
   38.43647,
   46.58857,
   52.12791,
   52.08456,
   44.28624,
   22.25068,
   14.25124,
   8.835281,
   8.166277,
   5.827736,
   2.72427,
   0,
   1.879896,
   0.7242562,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fx1659,Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fy1659,Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fex1659,Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fey1659);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dRmin_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659","",100,0,11);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659->SetMinimum(-165.8544);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659->SetMaximum(1789.468);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1659);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_dRmin_Z2b_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_dRmin_Z2b_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_dRmin_Z2b_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_dRmin_Z2b","MC unc. (stat.)","fl");

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
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__660 = new TH1D("data_mc_ratio__660","",25,0,10);
   data_mc_ratio__660->SetBinContent(1,0.5537822);
   data_mc_ratio__660->SetBinContent(2,0.7810727);
   data_mc_ratio__660->SetBinContent(3,0.9776582);
   data_mc_ratio__660->SetBinContent(4,0.9243869);
   data_mc_ratio__660->SetBinContent(5,0.9152891);
   data_mc_ratio__660->SetBinContent(6,0.7914144);
   data_mc_ratio__660->SetBinContent(7,0.854279);
   data_mc_ratio__660->SetBinContent(8,0.822093);
   data_mc_ratio__660->SetBinContent(9,1.020608);
   data_mc_ratio__660->SetBinContent(10,1.122591);
   data_mc_ratio__660->SetBinContent(11,1.232799);
   data_mc_ratio__660->SetBinContent(12,0.6860603);
   data_mc_ratio__660->SetBinContent(13,1.02849);
   data_mc_ratio__660->SetBinContent(14,2.298398);
   data_mc_ratio__660->SetBinError(1,0.06352318);
   data_mc_ratio__660->SetBinError(2,0.04744679);
   data_mc_ratio__660->SetBinError(3,0.04275001);
   data_mc_ratio__660->SetBinError(4,0.03130369);
   data_mc_ratio__660->SetBinError(5,0.02653291);
   data_mc_ratio__660->SetBinError(6,0.02242048);
   data_mc_ratio__660->SetBinError(7,0.0248165);
   data_mc_ratio__660->SetBinError(8,0.02877901);
   data_mc_ratio__660->SetBinError(9,0.07076643);
   data_mc_ratio__660->SetBinError(10,0.1203544);
   data_mc_ratio__660->SetBinError(11,0.2114233);
   data_mc_ratio__660->SetBinError(12,0.1534078);
   data_mc_ratio__660->SetBinError(13,0.2748755);
   data_mc_ratio__660->SetBinError(14,1.326981);
   data_mc_ratio__660->SetMinimum(0.4);
   data_mc_ratio__660->SetMaximum(1.6);
   data_mc_ratio__660->SetEntries(7.72508);
   data_mc_ratio__660->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__660->SetLineColor(ci);
   data_mc_ratio__660->SetLineWidth(2);
   data_mc_ratio__660->SetMarkerStyle(20);
   data_mc_ratio__660->SetMarkerSize(1.2);
   data_mc_ratio__660->GetXaxis()->SetTitle("min[#Delta R(Z,b)]");
   data_mc_ratio__660->GetXaxis()->SetRange(1,15);
   data_mc_ratio__660->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__660->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__660->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__660->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__660->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__660->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__660->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__660->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__660->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__660->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__660->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__660->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__660->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__660->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__660->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__660->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__660->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1660[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1660[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1660[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1660[25] = {
   0.09852628,
   0.06643072,
   0.05649473,
   0.04074561,
   0.03583362,
   0.03310977,
   0.03754831,
   0.04461692,
   0.1091789,
   0.1838886,
   0.3203566,
   0.2801279,
   0.4281262,
   2.087153,
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
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1660,Graph_from_mc_statistical_error_fy1660,Graph_from_mc_statistical_error_fex1660,Graph_from_mc_statistical_error_fey1660);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1660 = new TH1F("Graph_Graph_from_mc_statistical_error1660","",100,0,11);
   Graph_Graph_from_mc_statistical_error1660->SetMinimum(-1.504583);
   Graph_Graph_from_mc_statistical_error1660->SetMaximum(3.504583);
   Graph_Graph_from_mc_statistical_error1660->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1660->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1660->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1660->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1660->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1660->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1660->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1660->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1660->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1660->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1660->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1660->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1660->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1660->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1660->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1660->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1660);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->Modified();
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo->SetSelected(dRmin_Z2b_Z_2bjet_Zmm_17_amcnlo);
}

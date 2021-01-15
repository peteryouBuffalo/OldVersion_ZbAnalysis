void pt_lep1_Z_2bjet_Zmm_17_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_2bjet_Zmm_17_amcnlo/pt_lep1_Z_2bjet_Zmm_17_amcnlo
//=========  (Thu Jan 14 10:42:55 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_2bjet_Zmm_17_amcnlo = new TCanvas("pt_lep1_Z_2bjet_Zmm_17_amcnlo", "pt_lep1_Z_2bjet_Zmm_17_amcnlo",0,0,600,600);
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->SetFillColor(0);
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->SetBorderMode(0);
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->SetBorderSize(2);
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-3.37621,210.4839,3382.833);
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
   st->SetMaximum(2899.25);
   
   TH1F *st_stack_262 = new TH1F("st_stack_262","",40,0,200);
   st_stack_262->SetMinimum(0.01);
   st_stack_262->SetMaximum(3044.212);
   st_stack_262->SetDirectory(0);
   st_stack_262->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_262->SetLineColor(ci);
   st_stack_262->GetXaxis()->SetRange(1,40);
   st_stack_262->GetXaxis()->SetLabelFont(42);
   st_stack_262->GetXaxis()->SetLabelSize(0.035);
   st_stack_262->GetXaxis()->SetTitleSize(0.035);
   st_stack_262->GetXaxis()->SetTitleFont(42);
   st_stack_262->GetYaxis()->SetTitle("Events/5.0");
   st_stack_262->GetYaxis()->SetLabelFont(42);
   st_stack_262->GetYaxis()->SetLabelSize(0.05);
   st_stack_262->GetYaxis()->SetTitleSize(0.057);
   st_stack_262->GetYaxis()->SetTitleOffset(1.2);
   st_stack_262->GetYaxis()->SetTitleFont(42);
   st_stack_262->GetZaxis()->SetLabelFont(42);
   st_stack_262->GetZaxis()->SetLabelSize(0.035);
   st_stack_262->GetZaxis()->SetTitleSize(0.035);
   st_stack_262->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_262);
   
   
   TH1D *Zmm_2bjet_pt_lep1_stack_1 = new TH1D("Zmm_2bjet_pt_lep1_stack_1","",40,0,200);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(6,9.685131);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(7,14.83308);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(8,11.25551);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(9,9.397491);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(10,5.397823);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(11,4.683448);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(12,1.997745);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(13,0.9513631);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(14,0.1290452);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(15,0.3449476);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(16,0.1338553);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(18,0.3978595);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(19,0.1947814);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(6,1.364169);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(7,1.925907);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(8,1.605617);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(9,1.301972);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(10,1.016671);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(11,0.9428067);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(12,0.6272869);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(13,0.4406609);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(14,0.2246941);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(15,0.2448421);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(16,0.1338553);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(18,0.2824613);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(19,0.1947814);
   Zmm_2bjet_pt_lep1_stack_1->SetEntries(345);

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
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(6,20.23587);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(7,29.05406);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(8,29.84156);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(9,23.88605);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(10,9.805506);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(11,7.739592);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(12,3.466347);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(13,3.375067);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(14,2.301047);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(15,1.356072);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(16,1.04531);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(17,0.5398414);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(18,1.357904);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(19,0.7162791);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(22,0.883082);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(23,0.3379745);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(34,0.3772658);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(41,0.3795649);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(6,2.618968);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(7,3.116522);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(8,3.227263);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(9,2.989462);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(10,1.811973);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(11,1.916786);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(12,1.06096);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(13,1.062102);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(14,0.8803533);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(15,0.6744543);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(16,0.6047454);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(17,0.3825986);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(18,0.6838568);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(19,0.495932);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(22,0.5131756);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(23,0.3379745);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(34,0.3772658);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(41,0.3795649);
   Zmm_2bjet_pt_lep1_stack_2->SetEntries(434);

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
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(6,450.122);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(7,502.118);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(8,470.8271);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(9,375.5896);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(10,260.6195);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(11,143.9875);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(12,84.83292);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(13,34.45823);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(14,18.85676);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(15,11.07314);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(16,4.506625);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(17,3.830893);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(18,1.126562);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(19,1.252836);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(20,0.5095415);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(21,0.7902082);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(22,0.6570468);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(26,0.3931245);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(29,0.002488996);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(6,13.15569);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(7,13.9942);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(8,13.59058);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(9,12.11155);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(10,10.01893);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(11,7.477248);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(12,5.792921);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(13,3.636368);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(14,2.680305);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(15,2.148791);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(16,1.281254);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(17,1.180734);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(18,0.6587127);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(19,0.6456683);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(20,0.5095415);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(21,0.5588707);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(22,0.4656801);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(26,0.3931245);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(29,0.002488996);
   Zmm_2bjet_pt_lep1_stack_3->SetEntries(6946);

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
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(6,1.883155);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(7,7.912292);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(8,24.79609);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(9,19.41544);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(10,-1.463297);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(11,0.9711221);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(12,-0.6042826);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(13,1.200336);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(14,0.5562588);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(15,0.8484585);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(16,0.6994436);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(24,-0.3449834);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(30,0.07709415);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(6,4.924136);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(7,5.810904);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(8,9.123632);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(9,7.754596);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(10,2.441188);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(11,1.436626);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(12,0.6042826);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(13,1.200336);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(14,0.5562588);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(15,0.8484585);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(16,0.6994436);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(24,0.3449834);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(30,0.07709415);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetEntries(108);

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
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(6,9.410161);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(7,9.376013);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(8,12.74143);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(9,16.37846);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(10,14.23579);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(11,9.347112);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(12,5.107298);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(13,1.839286);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(14,1.550246);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(15,2.749701);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(16,1.504911);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(17,1.211932);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(18,-0.6266198);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(19,0.9717307);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(20,1.090909);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(21,-0.6758693);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(22,0.02321432);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(26,0.6037653);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(38,-0.5482251);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(6,5.768227);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(7,6.40135);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(8,6.345193);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(9,5.09823);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(10,5.6087);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(11,3.785118);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(12,2.619421);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(13,2.070502);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(14,1.715195);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(15,1.603574);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(16,1.84626);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(17,1.481625);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(18,0.6266198);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(19,0.9717307);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(20,1.003158);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(21,0.6758693);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(22,1.361665);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(26,0.6037653);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(38,0.5482251);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetEntries(333);

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
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(6,919.5217);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(7,1031.294);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(8,921.6202);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(9,763.7695);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(10,467.3521);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(11,262.9519);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(12,142.6179);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(13,99.88272);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(14,81.9109);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(15,26.37694);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(16,26.67396);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(17,28.0715);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(18,18.41158);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(19,10.99037);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(20,11.2356);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(21,8.941142);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(22,14.12017);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(23,2.789244);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(24,4.810561);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(25,3.595645);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(26,1.205208);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(27,4.986884);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(28,1.078353);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(29,2.787619);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(30,0.1037632);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(31,1.24133);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(32,1.324915);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(33,0.856717);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(34,0.6354914);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(35,0.897465);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(36,0.6967947);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(37,0.8359826);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(38,-0.1503018);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(41,0.5939919);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(6,47.41329);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(7,50.10414);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(8,49.52934);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(9,43.27582);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(10,33.47381);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(11,25.03221);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(12,19.80325);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(13,16.06195);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(14,13.97879);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(15,11.25241);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(16,9.532282);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(17,8.418976);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(18,6.407022);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(19,6.003497);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(20,4.713347);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(21,3.982486);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(22,4.274801);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(23,3.653225);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(24,3.276925);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(25,1.97256);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(26,1.938937);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(27,2.227804);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(28,1.392978);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(29,1.503911);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(30,1.698222);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(31,0.8777907);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(32,0.9451774);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(33,0.6303538);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(34,0.6354914);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(35,0.897465);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(36,0.6967947);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(37,0.8359826);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(38,0.1503018);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(41,0.5939919);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetEntries(17994);

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
   
   TH1D *Zmm_2bjet_pt_lep1__523 = new TH1D("Zmm_2bjet_pt_lep1__523","",40,0,200);
   Zmm_2bjet_pt_lep1__523->SetBinContent(6,1204);
   Zmm_2bjet_pt_lep1__523->SetBinContent(7,1346);
   Zmm_2bjet_pt_lep1__523->SetBinContent(8,1283);
   Zmm_2bjet_pt_lep1__523->SetBinContent(9,1036);
   Zmm_2bjet_pt_lep1__523->SetBinContent(10,622);
   Zmm_2bjet_pt_lep1__523->SetBinContent(11,361);
   Zmm_2bjet_pt_lep1__523->SetBinContent(12,211);
   Zmm_2bjet_pt_lep1__523->SetBinContent(13,150);
   Zmm_2bjet_pt_lep1__523->SetBinContent(14,99);
   Zmm_2bjet_pt_lep1__523->SetBinContent(15,68);
   Zmm_2bjet_pt_lep1__523->SetBinContent(16,42);
   Zmm_2bjet_pt_lep1__523->SetBinContent(17,34);
   Zmm_2bjet_pt_lep1__523->SetBinContent(18,27);
   Zmm_2bjet_pt_lep1__523->SetBinContent(19,9);
   Zmm_2bjet_pt_lep1__523->SetBinContent(20,11);
   Zmm_2bjet_pt_lep1__523->SetBinContent(21,5);
   Zmm_2bjet_pt_lep1__523->SetBinContent(22,8);
   Zmm_2bjet_pt_lep1__523->SetBinContent(23,6);
   Zmm_2bjet_pt_lep1__523->SetBinContent(24,5);
   Zmm_2bjet_pt_lep1__523->SetBinContent(25,2);
   Zmm_2bjet_pt_lep1__523->SetBinContent(26,3);
   Zmm_2bjet_pt_lep1__523->SetBinContent(27,4);
   Zmm_2bjet_pt_lep1__523->SetBinContent(28,2);
   Zmm_2bjet_pt_lep1__523->SetBinContent(29,3);
   Zmm_2bjet_pt_lep1__523->SetBinContent(31,1);
   Zmm_2bjet_pt_lep1__523->SetBinContent(32,1);
   Zmm_2bjet_pt_lep1__523->SetBinContent(34,1);
   Zmm_2bjet_pt_lep1__523->SetBinContent(37,2);
   Zmm_2bjet_pt_lep1__523->SetBinContent(38,1);
   Zmm_2bjet_pt_lep1__523->SetBinError(6,34.6987);
   Zmm_2bjet_pt_lep1__523->SetBinError(7,36.68787);
   Zmm_2bjet_pt_lep1__523->SetBinError(8,35.81899);
   Zmm_2bjet_pt_lep1__523->SetBinError(9,32.18695);
   Zmm_2bjet_pt_lep1__523->SetBinError(10,24.93993);
   Zmm_2bjet_pt_lep1__523->SetBinError(11,19);
   Zmm_2bjet_pt_lep1__523->SetBinError(12,14.52584);
   Zmm_2bjet_pt_lep1__523->SetBinError(13,12.24745);
   Zmm_2bjet_pt_lep1__523->SetBinError(14,9.949874);
   Zmm_2bjet_pt_lep1__523->SetBinError(15,8.246211);
   Zmm_2bjet_pt_lep1__523->SetBinError(16,6.480741);
   Zmm_2bjet_pt_lep1__523->SetBinError(17,5.830952);
   Zmm_2bjet_pt_lep1__523->SetBinError(18,5.196152);
   Zmm_2bjet_pt_lep1__523->SetBinError(19,3);
   Zmm_2bjet_pt_lep1__523->SetBinError(20,3.316625);
   Zmm_2bjet_pt_lep1__523->SetBinError(21,2.236068);
   Zmm_2bjet_pt_lep1__523->SetBinError(22,2.828427);
   Zmm_2bjet_pt_lep1__523->SetBinError(23,2.44949);
   Zmm_2bjet_pt_lep1__523->SetBinError(24,2.236068);
   Zmm_2bjet_pt_lep1__523->SetBinError(25,1.414214);
   Zmm_2bjet_pt_lep1__523->SetBinError(26,1.732051);
   Zmm_2bjet_pt_lep1__523->SetBinError(27,2);
   Zmm_2bjet_pt_lep1__523->SetBinError(28,1.414214);
   Zmm_2bjet_pt_lep1__523->SetBinError(29,1.732051);
   Zmm_2bjet_pt_lep1__523->SetBinError(31,1);
   Zmm_2bjet_pt_lep1__523->SetBinError(32,1);
   Zmm_2bjet_pt_lep1__523->SetBinError(34,1);
   Zmm_2bjet_pt_lep1__523->SetBinError(37,1.414214);
   Zmm_2bjet_pt_lep1__523->SetBinError(38,1);
   Zmm_2bjet_pt_lep1__523->SetEntries(6547);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1__523->SetLineColor(ci);
   Zmm_2bjet_pt_lep1__523->SetLineWidth(2);
   Zmm_2bjet_pt_lep1__523->SetMarkerStyle(20);
   Zmm_2bjet_pt_lep1__523->SetMarkerSize(1.2);
   Zmm_2bjet_pt_lep1__523->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1__523->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1__523->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1__523->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1__523->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1__523->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1__523->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1__523->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1__523->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1__523->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1__523->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1__523->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1__523->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1__523->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1__523->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep1_fx1523[40] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep1_fy1523[40] = {
   0,
   0,
   0,
   0,
   0,
   1410.858,
   1594.587,
   1471.082,
   1208.437,
   755.9474,
   429.6807,
   237.4179,
   141.707,
   105.3043,
   42.74927,
   34.5641,
   33.65417,
   20.66729,
   14.12599,
   12.83605,
   9.055481,
   15.68351,
   3.127218,
   4.465577,
   3.595645,
   2.202098,
   4.986884,
   1.078353,
   2.790108,
   0.1808574,
   1.24133,
   1.324915,
   0.856717,
   1.012757,
   0.897465,
   0.6967947,
   0.8359826,
   -0.6985269,
   0,
   0};
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep1_fex1523[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep1_fey1523[40] = {
   0,
   0,
   0,
   0,
   0,
   49.87316,
   52.86236,
   52.67215,
   46.00265,
   35.5332,
   26.5231,
   20.844,
   16.68111,
   14.37593,
   11.62068,
   9.838066,
   8.637991,
   6.513365,
   6.138975,
   4.845782,
   4.077907,
   4.539632,
   3.668826,
   3.295034,
   1.97256,
   2.068467,
   2.227804,
   1.392978,
   1.503913,
   1.699971,
   0.8777907,
   0.9451774,
   0.6303538,
   0.7390391,
   0.897465,
   0.6967947,
   0.8359826,
   0.5684553,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zmm_2bjet_bb_pt_lep1_fx1523,Graph_from_Zmm_2bjet_bb_pt_lep1_fy1523,Graph_from_Zmm_2bjet_bb_pt_lep1_fex1523,Graph_from_Zmm_2bjet_bb_pt_lep1_fey1523);
   gre->SetName("Graph_from_Zmm_2bjet_bb_pt_lep1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523","",100,0,220);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523->SetMinimum(-166.416);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523->SetMaximum(1812.347);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_pt_lep11523);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__524 = new TH1D("data_mc_ratio__524","",40,0,200);
   data_mc_ratio__524->SetBinContent(6,0.8533814);
   data_mc_ratio__524->SetBinContent(7,0.8441055);
   data_mc_ratio__524->SetBinContent(8,0.8721472);
   data_mc_ratio__524->SetBinContent(9,0.8573061);
   data_mc_ratio__524->SetBinContent(10,0.8228086);
   data_mc_ratio__524->SetBinContent(11,0.8401588);
   data_mc_ratio__524->SetBinContent(12,0.8887281);
   data_mc_ratio__524->SetBinContent(13,1.058522);
   data_mc_ratio__524->SetBinContent(14,0.940133);
   data_mc_ratio__524->SetBinContent(15,1.590671);
   data_mc_ratio__524->SetBinContent(16,1.215134);
   data_mc_ratio__524->SetBinContent(17,1.010276);
   data_mc_ratio__524->SetBinContent(18,1.306412);
   data_mc_ratio__524->SetBinContent(19,0.6371234);
   data_mc_ratio__524->SetBinContent(20,0.8569617);
   data_mc_ratio__524->SetBinContent(21,0.5521518);
   data_mc_ratio__524->SetBinContent(22,0.5100897);
   data_mc_ratio__524->SetBinContent(23,1.918638);
   data_mc_ratio__524->SetBinContent(24,1.119676);
   data_mc_ratio__524->SetBinContent(25,0.5562285);
   data_mc_ratio__524->SetBinContent(26,1.362337);
   data_mc_ratio__524->SetBinContent(27,0.802104);
   data_mc_ratio__524->SetBinContent(28,1.854681);
   data_mc_ratio__524->SetBinContent(29,1.075227);
   data_mc_ratio__524->SetBinContent(31,0.8055874);
   data_mc_ratio__524->SetBinContent(32,0.7547653);
   data_mc_ratio__524->SetBinContent(34,0.9874035);
   data_mc_ratio__524->SetBinContent(37,2.392394);
   data_mc_ratio__524->SetBinContent(38,-1.431584);
   data_mc_ratio__524->SetBinError(6,0.02459404);
   data_mc_ratio__524->SetBinError(7,0.02300775);
   data_mc_ratio__524->SetBinError(8,0.02434874);
   data_mc_ratio__524->SetBinError(9,0.0266352);
   data_mc_ratio__524->SetBinError(10,0.03299162);
   data_mc_ratio__524->SetBinError(11,0.04421888);
   data_mc_ratio__524->SetBinError(12,0.06118257);
   data_mc_ratio__524->SetBinError(13,0.08642798);
   data_mc_ratio__524->SetBinError(14,0.09448692);
   data_mc_ratio__524->SetBinError(15,0.1928971);
   data_mc_ratio__524->SetBinError(16,0.1874992);
   data_mc_ratio__524->SetBinError(17,0.1732609);
   data_mc_ratio__524->SetBinError(18,0.2514192);
   data_mc_ratio__524->SetBinError(19,0.2123745);
   data_mc_ratio__524->SetBinError(20,0.2583837);
   data_mc_ratio__524->SetBinError(21,0.2469298);
   data_mc_ratio__524->SetBinError(22,0.180344);
   data_mc_ratio__524->SetBinError(23,0.7832807);
   data_mc_ratio__524->SetBinError(24,0.5007344);
   data_mc_ratio__524->SetBinError(25,0.3933129);
   data_mc_ratio__524->SetBinError(26,0.7865458);
   data_mc_ratio__524->SetBinError(27,0.401052);
   data_mc_ratio__524->SetBinError(28,1.311457);
   data_mc_ratio__524->SetBinError(29,0.6207828);
   data_mc_ratio__524->SetBinError(31,0.8055874);
   data_mc_ratio__524->SetBinError(32,0.7547653);
   data_mc_ratio__524->SetBinError(34,0.9874035);
   data_mc_ratio__524->SetBinError(37,1.691678);
   data_mc_ratio__524->SetBinError(38,1.431584);
   data_mc_ratio__524->SetMinimum(0.4);
   data_mc_ratio__524->SetMaximum(1.6);
   data_mc_ratio__524->SetEntries(22.71274);
   data_mc_ratio__524->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__524->SetLineColor(ci);
   data_mc_ratio__524->SetLineWidth(2);
   data_mc_ratio__524->SetMarkerStyle(20);
   data_mc_ratio__524->SetMarkerSize(1.2);
   data_mc_ratio__524->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__524->GetXaxis()->SetRange(1,40);
   data_mc_ratio__524->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__524->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__524->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__524->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__524->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__524->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__524->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__524->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__524->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__524->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__524->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__524->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__524->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__524->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__524->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__524->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__524->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1524[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1524[40] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1524[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t Graph_from_mc_statistical_error_fey1524[40] = {
   0,
   0,
   0,
   0,
   0,
   0.03534952,
   0.03315112,
   0.03580504,
   0.03806791,
   0.04700486,
   0.06172747,
   0.08779454,
   0.1177155,
   0.136518,
   0.2718334,
   0.2846325,
   0.2566693,
   0.3151534,
   0.4345871,
   0.3775136,
   0.4503248,
   0.2894525,
   1.173191,
   0.7378742,
   0.5485971,
   0.9393166,
   0.4467327,
   1.291765,
   0.539016,
   9.39951,
   0.7071371,
   0.7133872,
   0.7357784,
   0.7297298,
   1,
   1,
   1,
   0,
   0,
   0};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1524,Graph_from_mc_statistical_error_fy1524,Graph_from_mc_statistical_error_fex1524,Graph_from_mc_statistical_error_fey1524);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1524 = new TH1F("Graph_Graph_from_mc_statistical_error1524","",100,0,220);
   Graph_Graph_from_mc_statistical_error1524->SetMinimum(-10.27941);
   Graph_Graph_from_mc_statistical_error1524->SetMaximum(12.27941);
   Graph_Graph_from_mc_statistical_error1524->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1524->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1524->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1524->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1524->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1524->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1524->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1524->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1524->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1524->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1524->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1524->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1524->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1524->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1524->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1524->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1524);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->cd();
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->Modified();
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->cd();
   pt_lep1_Z_2bjet_Zmm_17_amcnlo->SetSelected(pt_lep1_Z_2bjet_Zmm_17_amcnlo);
}

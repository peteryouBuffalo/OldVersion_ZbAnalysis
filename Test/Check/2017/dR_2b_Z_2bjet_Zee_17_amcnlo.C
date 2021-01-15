void dR_2b_Z_2bjet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: dR_2b_Z_2bjet_Zee_17_amcnlo/dR_2b_Z_2bjet_Zee_17_amcnlo
//=========  (Thu Jan 14 10:42:50 2021) by ROOT version 6.14/09
   TCanvas *dR_2b_Z_2bjet_Zee_17_amcnlo = new TCanvas("dR_2b_Z_2bjet_Zee_17_amcnlo", "dR_2b_Z_2bjet_Zee_17_amcnlo",0,0,600,600);
   dR_2b_Z_2bjet_Zee_17_amcnlo->SetHighLightColor(2);
   dR_2b_Z_2bjet_Zee_17_amcnlo->Range(0,0,1,1);
   dR_2b_Z_2bjet_Zee_17_amcnlo->SetFillColor(0);
   dR_2b_Z_2bjet_Zee_17_amcnlo->SetFillStyle(4000);
   dR_2b_Z_2bjet_Zee_17_amcnlo->SetBorderMode(0);
   dR_2b_Z_2bjet_Zee_17_amcnlo->SetBorderSize(2);
   dR_2b_Z_2bjet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   dR_2b_Z_2bjet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.670708,6.314516,1679.037);
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
   st->SetMaximum(1439.015);
   
   TH1F *st_stack_222 = new TH1F("st_stack_222","",25,0,10);
   st_stack_222->SetMinimum(0.01);
   st_stack_222->SetMaximum(1510.966);
   st_stack_222->SetDirectory(0);
   st_stack_222->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_222->SetLineColor(ci);
   st_stack_222->GetXaxis()->SetRange(1,15);
   st_stack_222->GetXaxis()->SetLabelFont(42);
   st_stack_222->GetXaxis()->SetLabelSize(0.035);
   st_stack_222->GetXaxis()->SetTitleSize(0.035);
   st_stack_222->GetXaxis()->SetTitleFont(42);
   st_stack_222->GetYaxis()->SetTitle("Events/0.4");
   st_stack_222->GetYaxis()->SetLabelFont(42);
   st_stack_222->GetYaxis()->SetLabelSize(0.05);
   st_stack_222->GetYaxis()->SetTitleSize(0.057);
   st_stack_222->GetYaxis()->SetTitleOffset(1.2);
   st_stack_222->GetYaxis()->SetTitleFont(42);
   st_stack_222->GetZaxis()->SetLabelFont(42);
   st_stack_222->GetZaxis()->SetLabelSize(0.035);
   st_stack_222->GetZaxis()->SetTitleSize(0.035);
   st_stack_222->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_222);
   
   
   TH1D *Zee_2bjet_dR_2b_stack_1 = new TH1D("Zee_2bjet_dR_2b_stack_1","",25,0,10);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(2,1.148419);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(3,0.8480873);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(4,1.818325);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(5,3.592453);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(6,3.247272);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(7,4.048705);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(8,3.407789);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(9,2.450018);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(10,0.6602179);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(11,0.287643);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(13,0.2312799);
   Zee_2bjet_dR_2b_stack_1->SetBinError(2,0.4409461);
   Zee_2bjet_dR_2b_stack_1->SetBinError(3,0.3677635);
   Zee_2bjet_dR_2b_stack_1->SetBinError(4,0.5378836);
   Zee_2bjet_dR_2b_stack_1->SetBinError(5,0.7744288);
   Zee_2bjet_dR_2b_stack_1->SetBinError(6,0.7381602);
   Zee_2bjet_dR_2b_stack_1->SetBinError(7,0.8272707);
   Zee_2bjet_dR_2b_stack_1->SetBinError(8,0.7504027);
   Zee_2bjet_dR_2b_stack_1->SetBinError(9,0.6517762);
   Zee_2bjet_dR_2b_stack_1->SetBinError(10,0.3179444);
   Zee_2bjet_dR_2b_stack_1->SetBinError(11,0.2067375);
   Zee_2bjet_dR_2b_stack_1->SetBinError(13,0.163622);
   Zee_2bjet_dR_2b_stack_1->SetEntries(151);

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
   Zee_2bjet_dR_2b_stack_2->SetBinContent(2,1.838388);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(3,6.270853);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(4,11.99038);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(5,11.60567);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(6,10.5989);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(7,10.81731);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(8,10.43612);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(9,1.317211);
   Zee_2bjet_dR_2b_stack_2->SetBinError(2,0.7294492);
   Zee_2bjet_dR_2b_stack_2->SetBinError(3,1.379892);
   Zee_2bjet_dR_2b_stack_2->SetBinError(4,1.956575);
   Zee_2bjet_dR_2b_stack_2->SetBinError(5,1.916808);
   Zee_2bjet_dR_2b_stack_2->SetBinError(6,1.808921);
   Zee_2bjet_dR_2b_stack_2->SetBinError(7,1.77892);
   Zee_2bjet_dR_2b_stack_2->SetBinError(8,1.819153);
   Zee_2bjet_dR_2b_stack_2->SetBinError(9,0.6594575);
   Zee_2bjet_dR_2b_stack_2->SetEntries(230);

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
   Zee_2bjet_dR_2b_stack_3->SetBinContent(2,42.09166);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(3,75.27512);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(4,102.714);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(5,135.4773);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(6,170.8447);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(7,204.1166);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(8,233.4487);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(9,97.66152);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(10,31.68075);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(11,6.257532);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(12,2.051216);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(13,0.217835);
   Zee_2bjet_dR_2b_stack_3->SetBinError(2,3.782398);
   Zee_2bjet_dR_2b_stack_3->SetBinError(3,5.04272);
   Zee_2bjet_dR_2b_stack_3->SetBinError(4,5.953592);
   Zee_2bjet_dR_2b_stack_3->SetBinError(5,6.793197);
   Zee_2bjet_dR_2b_stack_3->SetBinError(6,7.59435);
   Zee_2bjet_dR_2b_stack_3->SetBinError(7,8.386159);
   Zee_2bjet_dR_2b_stack_3->SetBinError(8,8.825528);
   Zee_2bjet_dR_2b_stack_3->SetBinError(9,5.781646);
   Zee_2bjet_dR_2b_stack_3->SetBinError(10,3.284029);
   Zee_2bjet_dR_2b_stack_3->SetBinError(11,1.470832);
   Zee_2bjet_dR_2b_stack_3->SetBinError(12,0.8430288);
   Zee_2bjet_dR_2b_stack_3->SetBinError(13,0.217835);
   Zee_2bjet_dR_2b_stack_3->SetEntries(3646);

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
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(2,0.4230469);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(3,0.8620638);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(4,0.8142656);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(5,0.644156);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(6,0.06147363);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(7,1.889941);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(8,-1.016272);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(9,0.4649803);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(10,-0.8451038);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(11,-0.8284799);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(2,1.267048);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(3,0.8620638);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(4,0.8142656);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(5,0.6067436);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(6,1.52979);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(7,1.595478);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(8,1.709081);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(9,1.779632);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(10,0.8451038);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(11,0.8284799);
   Zee_2bjet_XX_dR_2b_stack_4->SetEntries(29);

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
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(2,1.441557);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(3,1.762133);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(4,0.5155149);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(5,2.244475);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(6,6.165463);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(7,5.363131);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(8,5.223489);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(9,3.304314);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(10,1.850444);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(11,2.908304);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(12,-0.9177547);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(13,0.6921544);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(2,1.983626);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(3,2.466343);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(4,2.164425);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(5,2.917673);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(6,2.898818);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(7,3.438436);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(8,4.348362);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(9,3.040639);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(10,2.191533);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(11,1.46991);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(12,1.204134);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(13,0.6921544);
   Zee_2bjet_bX_dR_2b_stack_5->SetEntries(165);

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
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(2,125.1284);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(3,128.2007);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(4,198.352);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(5,212.2144);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(6,298.3564);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(7,348.8347);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(8,539.9585);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(9,258.2165);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(10,167.7157);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(11,73.79849);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(12,38.25694);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(13,-0.5672966);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(14,0.7267773);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(2,13.72107);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(3,16.17108);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(4,21.13109);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(5,22.73701);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(6,25.86232);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(7,28.32909);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(8,32.35947);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(9,24.25225);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(10,17.30928);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(11,12.56292);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(12,7.913838);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(13,3.757779);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(14,1.110461);
   Zee_2bjet_bb_dR_2b_stack_6->SetEntries(9701);

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
   
   TH1D *Zee_2bjet_dR_2b__443 = new TH1D("Zee_2bjet_dR_2b__443","",25,0,10);
   Zee_2bjet_dR_2b__443->SetBinContent(2,178);
   Zee_2bjet_dR_2b__443->SetBinContent(3,228);
   Zee_2bjet_dR_2b__443->SetBinContent(4,283);
   Zee_2bjet_dR_2b__443->SetBinContent(5,304);
   Zee_2bjet_dR_2b__443->SetBinContent(6,430);
   Zee_2bjet_dR_2b__443->SetBinContent(7,526);
   Zee_2bjet_dR_2b__443->SetBinContent(8,597);
   Zee_2bjet_dR_2b__443->SetBinContent(9,297);
   Zee_2bjet_dR_2b__443->SetBinContent(10,133);
   Zee_2bjet_dR_2b__443->SetBinContent(11,57);
   Zee_2bjet_dR_2b__443->SetBinContent(12,27);
   Zee_2bjet_dR_2b__443->SetBinContent(13,7);
   Zee_2bjet_dR_2b__443->SetBinContent(14,3);
   Zee_2bjet_dR_2b__443->SetBinError(2,13.34166);
   Zee_2bjet_dR_2b__443->SetBinError(3,15.09967);
   Zee_2bjet_dR_2b__443->SetBinError(4,16.8226);
   Zee_2bjet_dR_2b__443->SetBinError(5,17.4356);
   Zee_2bjet_dR_2b__443->SetBinError(6,20.73644);
   Zee_2bjet_dR_2b__443->SetBinError(7,22.93469);
   Zee_2bjet_dR_2b__443->SetBinError(8,24.43358);
   Zee_2bjet_dR_2b__443->SetBinError(9,17.23369);
   Zee_2bjet_dR_2b__443->SetBinError(10,11.53256);
   Zee_2bjet_dR_2b__443->SetBinError(11,7.549834);
   Zee_2bjet_dR_2b__443->SetBinError(12,5.196152);
   Zee_2bjet_dR_2b__443->SetBinError(13,2.645751);
   Zee_2bjet_dR_2b__443->SetBinError(14,1.732051);
   Zee_2bjet_dR_2b__443->SetEntries(3070);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b__443->SetLineColor(ci);
   Zee_2bjet_dR_2b__443->SetLineWidth(2);
   Zee_2bjet_dR_2b__443->SetMarkerStyle(20);
   Zee_2bjet_dR_2b__443->SetMarkerSize(1.2);
   Zee_2bjet_dR_2b__443->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b__443->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b__443->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b__443->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b__443->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b__443->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b__443->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b__443->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b__443->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b__443->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b__443->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b__443->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b__443->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b__443->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b__443->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dR_2b_fx1443[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dR_2b_fy1443[25] = {
   0,
   172.0715,
   213.2189,
   316.2045,
   365.7785,
   489.2742,
   575.0704,
   791.4584,
   363.4146,
   201.062,
   82.42349,
   39.3904,
   0.5739728,
   0.7267773,
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
   Double_t Graph_from_Zee_2bjet_bb_dR_2b_fex1443[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dR_2b_fey1443[25] = {
   0,
   14.45133,
   17.19878,
   22.1683,
   24.00571,
   27.22305,
   29.851,
   33.92236,
   25.19665,
   17.77679,
   12.76245,
   8.049191,
   3.830692,
   1.110461,
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
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_bb_dR_2b_fx1443,Graph_from_Zee_2bjet_bb_dR_2b_fy1443,Graph_from_Zee_2bjet_bb_dR_2b_fex1443,Graph_from_Zee_2bjet_bb_dR_2b_fey1443);
   gre->SetName("Graph_from_Zee_2bjet_bb_dR_2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dR_2b1443 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dR_2b1443","",100,0,11);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1443->SetMinimum(-86.12046);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1443->SetMaximum(908.2445);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1443->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1443->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1443->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1443->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1443->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1443->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1443->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1443->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1443->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1443->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1443->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1443->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1443->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1443->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1443->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1443->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dR_2b1443);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dR_2b_Z_2bjet_Zee_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__444 = new TH1D("data_mc_ratio__444","",25,0,10);
   data_mc_ratio__444->SetBinContent(2,1.034454);
   data_mc_ratio__444->SetBinContent(3,1.069323);
   data_mc_ratio__444->SetBinContent(4,0.8949905);
   data_mc_ratio__444->SetBinContent(5,0.8311041);
   data_mc_ratio__444->SetBinContent(6,0.8788529);
   data_mc_ratio__444->SetBinContent(7,0.9146707);
   data_mc_ratio__444->SetBinContent(8,0.7543037);
   data_mc_ratio__444->SetBinContent(9,0.8172484);
   data_mc_ratio__444->SetBinContent(10,0.6614876);
   data_mc_ratio__444->SetBinContent(11,0.6915504);
   data_mc_ratio__444->SetBinContent(12,0.6854462);
   data_mc_ratio__444->SetBinContent(13,12.1957);
   data_mc_ratio__444->SetBinContent(14,4.127812);
   data_mc_ratio__444->SetBinError(2,0.07753557);
   data_mc_ratio__444->SetBinError(3,0.07081767);
   data_mc_ratio__444->SetBinError(4,0.05320166);
   data_mc_ratio__444->SetBinError(5,0.04766709);
   data_mc_ratio__444->SetBinError(6,0.04238205);
   data_mc_ratio__444->SetBinError(7,0.03988154);
   data_mc_ratio__444->SetBinError(8,0.0308716);
   data_mc_ratio__444->SetBinError(9,0.04742156);
   data_mc_ratio__444->SetBinError(10,0.05735825);
   data_mc_ratio__444->SetBinError(11,0.09159809);
   data_mc_ratio__444->SetBinError(12,0.1319142);
   data_mc_ratio__444->SetBinError(13,4.609541);
   data_mc_ratio__444->SetBinError(14,2.383193);
   data_mc_ratio__444->SetMinimum(0.4);
   data_mc_ratio__444->SetMaximum(1.6);
   data_mc_ratio__444->SetEntries(0.09760545);
   data_mc_ratio__444->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__444->SetLineColor(ci);
   data_mc_ratio__444->SetLineWidth(2);
   data_mc_ratio__444->SetMarkerStyle(20);
   data_mc_ratio__444->SetMarkerSize(1.2);
   data_mc_ratio__444->GetXaxis()->SetTitle("#DeltaR_{bb}");
   data_mc_ratio__444->GetXaxis()->SetRange(1,15);
   data_mc_ratio__444->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__444->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__444->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__444->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__444->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__444->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__444->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__444->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__444->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__444->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__444->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__444->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__444->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__444->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__444->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__444->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__444->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1444[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1444[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1444[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1444[25] = {
   0,
   0.08398443,
   0.08066255,
   0.07010746,
   0.06562909,
   0.05563966,
   0.05190843,
   0.04286058,
   0.06933308,
   0.08841449,
   0.15484,
   0.204344,
   6.673995,
   1.527925,
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
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1444,Graph_from_mc_statistical_error_fy1444,Graph_from_mc_statistical_error_fex1444,Graph_from_mc_statistical_error_fey1444);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1444 = new TH1F("Graph_Graph_from_mc_statistical_error1444","",100,0,11);
   Graph_Graph_from_mc_statistical_error1444->SetMinimum(-7.008794);
   Graph_Graph_from_mc_statistical_error1444->SetMaximum(9.008794);
   Graph_Graph_from_mc_statistical_error1444->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1444->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1444->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1444->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1444->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1444->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1444->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1444->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1444->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1444->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1444->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1444->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1444->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1444->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1444->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1444->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1444);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dR_2b_Z_2bjet_Zee_17_amcnlo->cd();
   dR_2b_Z_2bjet_Zee_17_amcnlo->Modified();
   dR_2b_Z_2bjet_Zee_17_amcnlo->cd();
   dR_2b_Z_2bjet_Zee_17_amcnlo->SetSelected(dR_2b_Z_2bjet_Zee_17_amcnlo);
}

void dR_2b_Z_2bjet_Zmm_All_amcnlo()
{
//=========Macro generated from canvas: dR_2b_Z_2bjet_Zmm_All_amcnlo/dR_2b_Z_2bjet_Zmm_All_amcnlo
//=========  (Thu Jan 14 10:43:05 2021) by ROOT version 6.14/09
   TCanvas *dR_2b_Z_2bjet_Zmm_All_amcnlo = new TCanvas("dR_2b_Z_2bjet_Zmm_All_amcnlo", "dR_2b_Z_2bjet_Zmm_All_amcnlo",0,0,600,600);
   dR_2b_Z_2bjet_Zmm_All_amcnlo->SetHighLightColor(2);
   dR_2b_Z_2bjet_Zmm_All_amcnlo->Range(0,0,1,1);
   dR_2b_Z_2bjet_Zmm_All_amcnlo->SetFillColor(0);
   dR_2b_Z_2bjet_Zmm_All_amcnlo->SetFillStyle(4000);
   dR_2b_Z_2bjet_Zmm_All_amcnlo->SetBorderMode(0);
   dR_2b_Z_2bjet_Zmm_All_amcnlo->SetBorderSize(2);
   dR_2b_Z_2bjet_Zmm_All_amcnlo->SetFrameFillStyle(1000);
   dR_2b_Z_2bjet_Zmm_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-11.98814,6.314516,11986.15);
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
   st->SetMaximum(10272.7);
   
   TH1F *st_stack_312 = new TH1F("st_stack_312","",25,0,10);
   st_stack_312->SetMinimum(0.01);
   st_stack_312->SetMaximum(10786.34);
   st_stack_312->SetDirectory(0);
   st_stack_312->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_312->SetLineColor(ci);
   st_stack_312->GetXaxis()->SetRange(1,15);
   st_stack_312->GetXaxis()->SetLabelFont(42);
   st_stack_312->GetXaxis()->SetLabelSize(0.035);
   st_stack_312->GetXaxis()->SetTitleSize(0.035);
   st_stack_312->GetXaxis()->SetTitleFont(42);
   st_stack_312->GetYaxis()->SetTitle("Events/0.4");
   st_stack_312->GetYaxis()->SetLabelFont(42);
   st_stack_312->GetYaxis()->SetLabelSize(0.05);
   st_stack_312->GetYaxis()->SetTitleSize(0.057);
   st_stack_312->GetYaxis()->SetTitleOffset(1.2);
   st_stack_312->GetYaxis()->SetTitleFont(42);
   st_stack_312->GetZaxis()->SetLabelFont(42);
   st_stack_312->GetZaxis()->SetLabelSize(0.035);
   st_stack_312->GetZaxis()->SetTitleSize(0.035);
   st_stack_312->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_312);
   
   
   TH1D *Zmm_2bjet_dR_2b_all_stack_1 = new TH1D("Zmm_2bjet_dR_2b_all_stack_1","",25,0,10);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(2,9.027383);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(3,11.65703);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(4,15.15242);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(5,22.80621);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(6,30.0881);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(7,36.03769);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(8,38.667);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(9,18.67816);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(10,10.5651);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(11,3.803728);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(12,2.083767);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(13,0.6924853);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinContent(14,0.2391806);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(2,1.522397);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(3,1.659037);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(4,1.872322);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(5,2.370178);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(6,2.750382);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(7,3.069505);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(8,3.234913);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(9,2.086407);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(10,1.583215);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(11,0.9445225);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(12,0.7149357);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(13,0.4148141);
   Zmm_2bjet_dR_2b_all_stack_1->SetBinError(14,0.2391806);
   Zmm_2bjet_dR_2b_all_stack_1->SetEntries(971);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_dR_2b_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_all_stack_1->SetLineColor(ci);
   Zmm_2bjet_dR_2b_all_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_all_stack_1,"");
   
   TH1D *Zmm_2bjet_dR_2b_all_stack_2 = new TH1D("Zmm_2bjet_dR_2b_all_stack_2","",25,0,10);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(2,19.72856);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(3,42.44109);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(4,72.53506);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(5,70.98571);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(6,80.22427);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(7,86.18438);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(8,73.37655);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(9,7.767813);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(10,1.249014);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(11,0.3360382);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinContent(12,0.3240708);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(2,2.807965);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(3,4.133517);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(4,5.547661);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(5,5.594023);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(6,5.850876);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(7,6.670523);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(8,5.53912);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(9,1.657748);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(10,0.7481355);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(11,0.3360382);
   Zmm_2bjet_dR_2b_all_stack_2->SetBinError(12,0.3240708);
   Zmm_2bjet_dR_2b_all_stack_2->SetEntries(1245);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dR_2b_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_all_stack_2->SetLineColor(ci);
   Zmm_2bjet_dR_2b_all_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_all_stack_2,"");
   
   TH1D *Zmm_2bjet_dR_2b_all_stack_3 = new TH1D("Zmm_2bjet_dR_2b_all_stack_3","",25,0,10);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(2,286.9242);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(3,504.4396);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(4,719.1776);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(5,962.3964);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(6,1221.971);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(7,1545.058);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(8,1786.272);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(9,706.3663);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(10,221.6736);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(11,58.30683);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(12,14.98803);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(13,2.951429);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinContent(14,0.06973058);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(2,7.664213);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(3,10.04581);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(4,12.10604);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(5,13.98268);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(6,15.71712);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(7,17.4692);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(8,18.86247);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(9,11.90262);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(10,6.801859);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(11,3.381572);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(12,1.842399);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(13,0.7585866);
   Zmm_2bjet_dR_2b_all_stack_3->SetBinError(14,0.06973058);
   Zmm_2bjet_dR_2b_all_stack_3->SetEntries(64896);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dR_2b_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_all_stack_3->SetLineColor(ci);
   Zmm_2bjet_dR_2b_all_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_all_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_dR_2b_all_stack_4 = new TH1D("Zmm_2bjet_XX_dR_2b_all_stack_4","",25,0,10);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinContent(2,46.68442);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinContent(3,3.74026);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinContent(4,22.75112);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinContent(5,27.57013);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinContent(6,37.351);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinContent(7,59.91883);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinContent(8,137.3383);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinContent(9,28.46384);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinContent(10,9.605689);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinContent(11,-0.3845039);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinContent(12,8.363297);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinContent(13,-2.209181);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinError(2,17.58985);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinError(3,5.494439);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinError(4,14.74645);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinError(5,13.97236);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinError(6,16.51844);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinError(7,21.40191);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinError(8,34.56838);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinError(9,13.3025);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinError(10,7.501526);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinError(11,2.750865);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinError(12,4.009594);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetBinError(13,1.34972);
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetEntries(413);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_dR_2b_all_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_dR_2b_all_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_XX_dR_2b_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dR_2b_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dR_2b_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dR_2b_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dR_2b_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dR_2b_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dR_2b_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dR_2b_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_dR_2b_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dR_2b_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dR_2b_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dR_2b_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dR_2b_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_dR_2b_all_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_dR_2b_all_stack_5 = new TH1D("Zmm_2bjet_bX_dR_2b_all_stack_5","",25,0,10);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinContent(1,0.2538521);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinContent(2,21.44081);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinContent(3,31.12101);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinContent(4,13.75562);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinContent(5,49.27567);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinContent(6,30.3142);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinContent(7,64.11542);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinContent(8,49.23256);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinContent(9,45.98452);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinContent(10,24.75543);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinContent(11,3.468653);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinContent(12,2.309318);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinContent(13,2.631591);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinContent(14,0.9865424);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinError(1,0.2538521);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinError(2,8.662595);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinError(3,7.944442);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinError(4,8.022628);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinError(5,9.924334);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinError(6,11.04392);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinError(7,13.75752);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinError(8,15.12516);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinError(9,11.27035);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinError(10,8.181952);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinError(11,4.837162);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinError(12,1.926933);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinError(13,2.248478);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetBinError(14,0.9865424);
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetEntries(1366);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_dR_2b_all_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_dR_2b_all_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bX_dR_2b_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dR_2b_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dR_2b_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dR_2b_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dR_2b_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dR_2b_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dR_2b_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dR_2b_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_dR_2b_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dR_2b_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dR_2b_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dR_2b_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dR_2b_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_dR_2b_all_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_dR_2b_all_stack_6 = new TH1D("Zmm_2bjet_bb_dR_2b_all_stack_6","",25,0,10);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinContent(1,4.403753);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinContent(2,843.4419);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinContent(3,1039.974);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinContent(4,1252.174);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinContent(5,1659.352);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinContent(6,2127.525);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinContent(7,2870.757);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinContent(8,3565.099);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinContent(9,2055.572);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinContent(10,1106.584);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinContent(11,519.6464);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinContent(12,197.1592);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinContent(13,47.11907);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinContent(14,7.954332);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinError(1,2.570028);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinError(2,42.3855);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinError(3,52.10766);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinError(4,58.76402);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinError(5,67.57104);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinError(6,78.37272);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinError(7,86.28047);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinError(8,98.74384);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinError(9,89.37403);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinError(10,53.71369);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinError(11,37.02938);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinError(12,22.83677);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinError(13,11.50885);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetBinError(14,4.550764);
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetEntries(67424);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_dR_2b_all_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_dR_2b_all_stack_6->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bb_dR_2b_all_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dR_2b_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dR_2b_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dR_2b_all_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dR_2b_all_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dR_2b_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dR_2b_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dR_2b_all_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_dR_2b_all_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dR_2b_all_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dR_2b_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dR_2b_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dR_2b_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_dR_2b_all_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dR_2b_all__623 = new TH1D("Zmm_2bjet_dR_2b_all__623","",25,0,10);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(2,1302);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(3,1610);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(4,1957);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(5,2426);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(6,2918);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(7,3819);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(8,4565);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(9,2398);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(10,1134);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(11,444);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(12,177);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(13,48);
   Zmm_2bjet_dR_2b_all__623->SetBinContent(14,9);
   Zmm_2bjet_dR_2b_all__623->SetBinError(2,36.08324);
   Zmm_2bjet_dR_2b_all__623->SetBinError(3,40.12481);
   Zmm_2bjet_dR_2b_all__623->SetBinError(4,44.23799);
   Zmm_2bjet_dR_2b_all__623->SetBinError(5,49.25444);
   Zmm_2bjet_dR_2b_all__623->SetBinError(6,54.01852);
   Zmm_2bjet_dR_2b_all__623->SetBinError(7,61.79806);
   Zmm_2bjet_dR_2b_all__623->SetBinError(8,67.56478);
   Zmm_2bjet_dR_2b_all__623->SetBinError(9,48.96938);
   Zmm_2bjet_dR_2b_all__623->SetBinError(10,33.67492);
   Zmm_2bjet_dR_2b_all__623->SetBinError(11,21.07131);
   Zmm_2bjet_dR_2b_all__623->SetBinError(12,13.30413);
   Zmm_2bjet_dR_2b_all__623->SetBinError(13,6.928203);
   Zmm_2bjet_dR_2b_all__623->SetBinError(14,3);
   Zmm_2bjet_dR_2b_all__623->SetEntries(22807);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_all__623->SetLineColor(ci);
   Zmm_2bjet_dR_2b_all__623->SetLineWidth(2);
   Zmm_2bjet_dR_2b_all__623->SetMarkerStyle(20);
   Zmm_2bjet_dR_2b_all__623->SetMarkerSize(1.2);
   Zmm_2bjet_dR_2b_all__623->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_all__623->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all__623->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all__623->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all__623->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all__623->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all__623->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all__623->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all__623->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_all__623->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all__623->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_all__623->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_all__623->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_all__623->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_all__623->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dR_2b_all_fx1623[25] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dR_2b_all_fy1623[25] = {
   4.657605,
   1227.247,
   1633.373,
   2095.546,
   2792.386,
   3527.474,
   4662.071,
   5649.985,
   2862.833,
   1374.433,
   585.1772,
   225.2277,
   51.18539,
   9.249786,
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
   Double_t Graph_from_Zmm_2bjet_bb_dR_2b_all_fex1623[25] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dR_2b_all_fey1623[25] = {
   2.582534,
   47.43329,
   54.12271,
   62.5769,
   71.35819,
   82.61922,
   91.92781,
   107.5687,
   91.87202,
   55.29656,
   37.61091,
   23.35205,
   11.83548,
   4.663131,
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
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_bb_dR_2b_all_fx1623,Graph_from_Zmm_2bjet_bb_dR_2b_all_fy1623,Graph_from_Zmm_2bjet_bb_dR_2b_all_fex1623,Graph_from_Zmm_2bjet_bb_dR_2b_all_fey1623);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dR_2b_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623","",100,0,11);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623->SetMinimum(0);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623->SetMaximum(6333.31);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dR_2b_all1623);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dR_2b_all","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_dR_2b_all_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_dR_2b_all_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_dR_2b_all_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_dR_2b_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 137.1 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dR_2b_Z_2bjet_Zmm_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__624 = new TH1D("data_mc_ratio__624","",25,0,10);
   data_mc_ratio__624->SetBinContent(2,1.060911);
   data_mc_ratio__624->SetBinContent(3,0.9856906);
   data_mc_ratio__624->SetBinContent(4,0.9338854);
   data_mc_ratio__624->SetBinContent(5,0.868791);
   data_mc_ratio__624->SetBinContent(6,0.8272209);
   data_mc_ratio__624->SetBinContent(7,0.8191639);
   data_mc_ratio__624->SetBinContent(8,0.8079667);
   data_mc_ratio__624->SetBinContent(9,0.8376319);
   data_mc_ratio__624->SetBinContent(10,0.8250677);
   data_mc_ratio__624->SetBinContent(11,0.7587445);
   data_mc_ratio__624->SetBinContent(12,0.7858713);
   data_mc_ratio__624->SetBinContent(13,0.9377676);
   data_mc_ratio__624->SetBinContent(14,0.9729955);
   data_mc_ratio__624->SetBinError(2,0.02940177);
   data_mc_ratio__624->SetBinError(3,0.02456562);
   data_mc_ratio__624->SetBinError(4,0.02111048);
   data_mc_ratio__624->SetBinError(5,0.01763884);
   data_mc_ratio__624->SetBinError(6,0.01531365);
   data_mc_ratio__624->SetBinError(7,0.0132555);
   data_mc_ratio__624->SetBinError(8,0.0119584);
   data_mc_ratio__624->SetBinError(9,0.01710522);
   data_mc_ratio__624->SetBinError(10,0.02450096);
   data_mc_ratio__624->SetBinError(11,0.03600842);
   data_mc_ratio__624->SetBinError(12,0.0590697);
   data_mc_ratio__624->SetBinError(13,0.1353551);
   data_mc_ratio__624->SetBinError(14,0.3243318);
   data_mc_ratio__624->SetMinimum(0.4);
   data_mc_ratio__624->SetMaximum(1.6);
   data_mc_ratio__624->SetEntries(299.6697);
   data_mc_ratio__624->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__624->SetLineColor(ci);
   data_mc_ratio__624->SetLineWidth(2);
   data_mc_ratio__624->SetMarkerStyle(20);
   data_mc_ratio__624->SetMarkerSize(1.2);
   data_mc_ratio__624->GetXaxis()->SetTitle("#DeltaR_{bb}");
   data_mc_ratio__624->GetXaxis()->SetRange(1,15);
   data_mc_ratio__624->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__624->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__624->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__624->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__624->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__624->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__624->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__624->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__624->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__624->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__624->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__624->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__624->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__624->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__624->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__624->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__624->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1624[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1624[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1624[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1624[25] = {
   0.5544768,
   0.03865015,
   0.03313556,
   0.02986185,
   0.02555456,
   0.02342164,
   0.01971823,
   0.01903876,
   0.0320913,
   0.04023228,
   0.06427269,
   0.103682,
   0.2312277,
   0.5041339,
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
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1624,Graph_from_mc_statistical_error_fy1624,Graph_from_mc_statistical_error_fex1624,Graph_from_mc_statistical_error_fey1624);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1624 = new TH1F("Graph_Graph_from_mc_statistical_error1624","",100,0,11);
   Graph_Graph_from_mc_statistical_error1624->SetMinimum(0.3346278);
   Graph_Graph_from_mc_statistical_error1624->SetMaximum(1.665372);
   Graph_Graph_from_mc_statistical_error1624->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1624->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1624->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1624->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1624->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1624->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1624->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1624->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1624->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1624->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1624->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1624->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1624->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1624->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1624->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1624->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1624);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dR_2b_Z_2bjet_Zmm_All_amcnlo->cd();
   dR_2b_Z_2bjet_Zmm_All_amcnlo->Modified();
   dR_2b_Z_2bjet_Zmm_All_amcnlo->cd();
   dR_2b_Z_2bjet_Zmm_All_amcnlo->SetSelected(dR_2b_Z_2bjet_Zmm_All_amcnlo);
}

void dR_2b_Z_2bjet_Zmm_18_amcnlo()
{
//=========Macro generated from canvas: dR_2b_Z_2bjet_Zmm_18_amcnlo/dR_2b_Z_2bjet_Zmm_18_amcnlo
//=========  (Thu Jan 14 10:43:05 2021) by ROOT version 6.14/09
   TCanvas *dR_2b_Z_2bjet_Zmm_18_amcnlo = new TCanvas("dR_2b_Z_2bjet_Zmm_18_amcnlo", "dR_2b_Z_2bjet_Zmm_18_amcnlo",0,0,600,600);
   dR_2b_Z_2bjet_Zmm_18_amcnlo->SetHighLightColor(2);
   dR_2b_Z_2bjet_Zmm_18_amcnlo->Range(0,0,1,1);
   dR_2b_Z_2bjet_Zmm_18_amcnlo->SetFillColor(0);
   dR_2b_Z_2bjet_Zmm_18_amcnlo->SetFillStyle(4000);
   dR_2b_Z_2bjet_Zmm_18_amcnlo->SetBorderMode(0);
   dR_2b_Z_2bjet_Zmm_18_amcnlo->SetBorderSize(2);
   dR_2b_Z_2bjet_Zmm_18_amcnlo->SetFrameFillStyle(1000);
   dR_2b_Z_2bjet_Zmm_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-5.908821,6.314516,5912.912);
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
   st->SetMaximum(5067.648);
   
   TH1F *st_stack_311 = new TH1F("st_stack_311","",25,0,10);
   st_stack_311->SetMinimum(0.01);
   st_stack_311->SetMaximum(5321.03);
   st_stack_311->SetDirectory(0);
   st_stack_311->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_311->SetLineColor(ci);
   st_stack_311->GetXaxis()->SetRange(1,15);
   st_stack_311->GetXaxis()->SetLabelFont(42);
   st_stack_311->GetXaxis()->SetLabelSize(0.035);
   st_stack_311->GetXaxis()->SetTitleSize(0.035);
   st_stack_311->GetXaxis()->SetTitleFont(42);
   st_stack_311->GetYaxis()->SetTitle("Events/0.4");
   st_stack_311->GetYaxis()->SetLabelFont(42);
   st_stack_311->GetYaxis()->SetLabelSize(0.05);
   st_stack_311->GetYaxis()->SetTitleSize(0.057);
   st_stack_311->GetYaxis()->SetTitleOffset(1.2);
   st_stack_311->GetYaxis()->SetTitleFont(42);
   st_stack_311->GetZaxis()->SetLabelFont(42);
   st_stack_311->GetZaxis()->SetLabelSize(0.035);
   st_stack_311->GetZaxis()->SetTitleSize(0.035);
   st_stack_311->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_311);
   
   
   TH1D *Zmm_2bjet_dR_2b_stack_1 = new TH1D("Zmm_2bjet_dR_2b_stack_1","",25,0,10);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(2,5.521058);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(3,5.168066);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(4,7.626261);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(5,12.68427);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(6,15.87591);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(7,17.3177);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(8,18.88098);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(9,8.574804);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(10,4.760782);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(11,1.742544);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(12,1.133534);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(13,0.5355363);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(14,0.2391806);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(2,1.286765);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(3,1.217583);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(4,1.446138);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(5,1.914649);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(6,2.214229);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(7,2.416525);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(8,2.340169);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(9,1.548119);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(10,1.173111);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(11,0.72385);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(12,0.568228);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(13,0.3839762);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(14,0.2391806);
   Zmm_2bjet_dR_2b_stack_1->SetEntries(396);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_dR_2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_stack_1->SetLineColor(ci);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_stack_1,"");
   
   TH1D *Zmm_2bjet_dR_2b_stack_2 = new TH1D("Zmm_2bjet_dR_2b_stack_2","",25,0,10);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(2,8.666501);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(3,17.78801);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(4,30.04852);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(5,41.28677);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(6,37.97763);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(7,44.58577);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(8,36.20787);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(9,2.35225);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(10,0.5885185);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(11,0.3360382);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(2,2.080846);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(3,3.039473);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(4,4.026824);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(5,4.678835);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(6,4.445292);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(7,5.57369);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(8,4.330842);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(9,1.018127);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(10,0.5885185);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(11,0.3360382);
   Zmm_2bjet_dR_2b_stack_2->SetEntries(454);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dR_2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_stack_2->SetLineColor(ci);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_stack_2,"");
   
   TH1D *Zmm_2bjet_dR_2b_stack_3 = new TH1D("Zmm_2bjet_dR_2b_stack_3","",25,0,10);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(2,135.3546);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(3,251.6655);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(4,346.8534);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(5,463.4903);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(6,592.4535);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(7,759.6033);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(8,860.5279);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(9,340.5049);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(10,105.1018);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(11,28.37417);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(12,6.774374);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(13,1.399093);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(14,0.06973058);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(2,3.502081);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(3,4.843944);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(4,5.57257);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(5,6.498145);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(6,7.345869);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(7,8.379723);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(8,8.774686);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(9,5.523781);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(10,3.071233);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(11,1.637611);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(12,0.7650149);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(13,0.3640281);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(14,0.06973058);
   Zmm_2bjet_dR_2b_stack_3->SetEntries(48154);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dR_2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_stack_3->SetLineColor(ci);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_dR_2b_stack_4 = new TH1D("Zmm_2bjet_XX_dR_2b_stack_4","",25,0,10);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(2,27.67856);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(3,-0.2388367);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(4,22.64862);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(5,15.55936);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(6,29.57603);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(7,41.79687);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(8,82.92929);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(9,13.68033);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(10,0.03310144);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(11,1.563361);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(12,-1.088519);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(13,-1.092913);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(2,15.94969);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(3,4.850678);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(4,14.08142);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(5,12.99418);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(6,15.56509);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(7,19.78378);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(8,32.25587);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(9,11.8145);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(10,5.621705);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(11,2.134588);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(12,1.088519);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(13,1.092913);
   Zmm_2bjet_XX_dR_2b_stack_4->SetEntries(117);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_dR_2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_dR_2b_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_dR_2b_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_dR_2b_stack_5 = new TH1D("Zmm_2bjet_bX_dR_2b_stack_5","",25,0,10);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(2,8.118678);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(3,14.65023);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(4,7.468232);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(5,23.99972);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(6,19.02185);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(7,32.66122);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(8,13.5179);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(9,24.63547);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(10,14.14143);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(11,2.697689);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(12,0.9322742);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(13,1.620717);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(2,7.411006);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(3,6.708142);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(4,6.413204);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(5,7.620537);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(6,8.754098);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(7,11.17924);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(8,11.98715);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(9,9.284743);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(10,6.727729);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(11,3.704445);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(12,1.307371);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(13,2.131835);
   Zmm_2bjet_bX_dR_2b_stack_5->SetEntries(396);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_dR_2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_dR_2b_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_dR_2b_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_dR_2b_stack_6 = new TH1D("Zmm_2bjet_bb_dR_2b_stack_6","",25,0,10);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(1,4.403753);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(2,358.2904);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(3,451.4264);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(4,572.1348);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(5,759.2094);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(6,928.6333);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(7,1285.698);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(8,1775.142);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(9,1095.74);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(10,525.569);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(11,272.9635);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(12,101.9501);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(13,34.0432);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(14,4.840207);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(1,2.570028);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(2,31.2277);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(3,40.57581);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(4,45.0784);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(5,51.98939);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(6,60.91927);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(7,66.06065);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(8,76.84929);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(9,75.65531);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(10,41.41647);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(11,29.51769);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(12,18.01974);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(13,9.119764);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(14,4.209282);
   Zmm_2bjet_bb_dR_2b_stack_6->SetEntries(21441);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_dR_2b_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_dR_2b_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_dR_2b_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dR_2b__621 = new TH1D("Zmm_2bjet_dR_2b__621","",25,0,10);
   Zmm_2bjet_dR_2b__621->SetBinContent(2,635);
   Zmm_2bjet_dR_2b__621->SetBinContent(3,751);
   Zmm_2bjet_dR_2b__621->SetBinContent(4,922);
   Zmm_2bjet_dR_2b__621->SetBinContent(5,1139);
   Zmm_2bjet_dR_2b__621->SetBinContent(6,1369);
   Zmm_2bjet_dR_2b__621->SetBinContent(7,1796);
   Zmm_2bjet_dR_2b__621->SetBinContent(8,2135);
   Zmm_2bjet_dR_2b__621->SetBinContent(9,1136);
   Zmm_2bjet_dR_2b__621->SetBinContent(10,526);
   Zmm_2bjet_dR_2b__621->SetBinContent(11,226);
   Zmm_2bjet_dR_2b__621->SetBinContent(12,94);
   Zmm_2bjet_dR_2b__621->SetBinContent(13,23);
   Zmm_2bjet_dR_2b__621->SetBinContent(14,5);
   Zmm_2bjet_dR_2b__621->SetBinError(2,25.19921);
   Zmm_2bjet_dR_2b__621->SetBinError(3,27.40438);
   Zmm_2bjet_dR_2b__621->SetBinError(4,30.36445);
   Zmm_2bjet_dR_2b__621->SetBinError(5,33.74907);
   Zmm_2bjet_dR_2b__621->SetBinError(6,37);
   Zmm_2bjet_dR_2b__621->SetBinError(7,42.37924);
   Zmm_2bjet_dR_2b__621->SetBinError(8,46.20606);
   Zmm_2bjet_dR_2b__621->SetBinError(9,33.7046);
   Zmm_2bjet_dR_2b__621->SetBinError(10,22.93469);
   Zmm_2bjet_dR_2b__621->SetBinError(11,15.0333);
   Zmm_2bjet_dR_2b__621->SetBinError(12,9.69536);
   Zmm_2bjet_dR_2b__621->SetBinError(13,4.795832);
   Zmm_2bjet_dR_2b__621->SetBinError(14,2.236068);
   Zmm_2bjet_dR_2b__621->SetEntries(10757);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b__621->SetLineColor(ci);
   Zmm_2bjet_dR_2b__621->SetLineWidth(2);
   Zmm_2bjet_dR_2b__621->SetMarkerStyle(20);
   Zmm_2bjet_dR_2b__621->SetMarkerSize(1.2);
   Zmm_2bjet_dR_2b__621->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b__621->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b__621->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b__621->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b__621->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b__621->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b__621->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b__621->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b__621->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b__621->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b__621->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b__621->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b__621->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b__621->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b__621->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dR_2b_fx1621[25] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dR_2b_fy1621[25] = {
   4.403753,
   543.6298,
   740.4594,
   986.7798,
   1316.23,
   1623.538,
   2181.663,
   2787.206,
   1485.487,
   650.1946,
   307.6773,
   109.7018,
   36.50563,
   5.149118,
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
   Double_t Graph_from_Zmm_2bjet_bb_dR_2b_fex1621[25] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dR_2b_fey1621[25] = {
   2.570028,
   36.09342,
   41.82235,
   48.17507,
   54.75036,
   64.09906,
   70.62229,
   84.80079,
   77.35283,
   42.46581,
   29.8813,
   18.12494,
   9.444005,
   4.216648,
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
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_bb_dR_2b_fx1621,Graph_from_Zmm_2bjet_bb_dR_2b_fy1621,Graph_from_Zmm_2bjet_bb_dR_2b_fex1621,Graph_from_Zmm_2bjet_bb_dR_2b_fey1621);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dR_2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621","",100,0,11);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621->SetMinimum(0);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621->SetMaximum(3159.208);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dR_2b1621);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dR_2b","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_dR_2b_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_dR_2b_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_dR_2b_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_dR_2b","MC unc. (stat.)","fl");

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
   dR_2b_Z_2bjet_Zmm_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__622 = new TH1D("data_mc_ratio__622","",25,0,10);
   data_mc_ratio__622->SetBinContent(2,1.168074);
   data_mc_ratio__622->SetBinContent(3,1.014235);
   data_mc_ratio__622->SetBinContent(4,0.9343524);
   data_mc_ratio__622->SetBinContent(5,0.8653504);
   data_mc_ratio__622->SetBinContent(6,0.84322);
   data_mc_ratio__622->SetBinContent(7,0.8232251);
   data_mc_ratio__622->SetBinContent(8,0.766);
   data_mc_ratio__622->SetBinContent(9,0.7647322);
   data_mc_ratio__622->SetBinContent(10,0.8089886);
   data_mc_ratio__622->SetBinContent(11,0.7345357);
   data_mc_ratio__622->SetBinContent(12,0.8568684);
   data_mc_ratio__622->SetBinContent(13,0.6300398);
   data_mc_ratio__622->SetBinContent(14,0.97104);
   data_mc_ratio__622->SetBinError(2,0.04635361);
   data_mc_ratio__622->SetBinError(3,0.03700997);
   data_mc_ratio__622->SetBinError(4,0.03077126);
   data_mc_ratio__622->SetBinError(5,0.02564071);
   data_mc_ratio__622->SetBinError(6,0.02278973);
   data_mc_ratio__622->SetBinError(7,0.0194252);
   data_mc_ratio__622->SetBinError(8,0.01657791);
   data_mc_ratio__622->SetBinError(9,0.02268925);
   data_mc_ratio__622->SetBinError(10,0.03527358);
   data_mc_ratio__622->SetBinError(11,0.04886059);
   data_mc_ratio__622->SetBinError(12,0.08837923);
   data_mc_ratio__622->SetBinError(13,0.1313724);
   data_mc_ratio__622->SetBinError(14,0.4342623);
   data_mc_ratio__622->SetMinimum(0.4);
   data_mc_ratio__622->SetMaximum(1.6);
   data_mc_ratio__622->SetEntries(134.7739);
   data_mc_ratio__622->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__622->SetLineColor(ci);
   data_mc_ratio__622->SetLineWidth(2);
   data_mc_ratio__622->SetMarkerStyle(20);
   data_mc_ratio__622->SetMarkerSize(1.2);
   data_mc_ratio__622->GetXaxis()->SetTitle("#DeltaR_{bb}");
   data_mc_ratio__622->GetXaxis()->SetRange(1,15);
   data_mc_ratio__622->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__622->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__622->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__622->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__622->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__622->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__622->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__622->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__622->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__622->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__622->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__622->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__622->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__622->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__622->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__622->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__622->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1622[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1622[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1622[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1622[25] = {
   0.5835994,
   0.06639339,
   0.05648162,
   0.04882049,
   0.04159635,
   0.03948109,
   0.03237085,
   0.03042501,
   0.05207236,
   0.06531246,
   0.09711895,
   0.1652201,
   0.2586999,
   0.8189068,
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
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1622,Graph_from_mc_statistical_error_fy1622,Graph_from_mc_statistical_error_fex1622,Graph_from_mc_statistical_error_fey1622);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1622 = new TH1F("Graph_Graph_from_mc_statistical_error1622","",100,0,11);
   Graph_Graph_from_mc_statistical_error1622->SetMinimum(0.01731181);
   Graph_Graph_from_mc_statistical_error1622->SetMaximum(1.982688);
   Graph_Graph_from_mc_statistical_error1622->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1622->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1622->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1622->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1622->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1622->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1622->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1622->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1622->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1622->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1622->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1622->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1622->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1622->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1622->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1622->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1622);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dR_2b_Z_2bjet_Zmm_18_amcnlo->cd();
   dR_2b_Z_2bjet_Zmm_18_amcnlo->Modified();
   dR_2b_Z_2bjet_Zmm_18_amcnlo->cd();
   dR_2b_Z_2bjet_Zmm_18_amcnlo->SetSelected(dR_2b_Z_2bjet_Zmm_18_amcnlo);
}

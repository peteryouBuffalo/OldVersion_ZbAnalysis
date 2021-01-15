void dR_2b_Z_2bjet_Zee_All_amcnlo()
{
//=========Macro generated from canvas: dR_2b_Z_2bjet_Zee_All_amcnlo/dR_2b_Z_2bjet_Zee_All_amcnlo
//=========  (Thu Jan 14 10:42:51 2021) by ROOT version 6.14/09
   TCanvas *dR_2b_Z_2bjet_Zee_All_amcnlo = new TCanvas("dR_2b_Z_2bjet_Zee_All_amcnlo", "dR_2b_Z_2bjet_Zee_All_amcnlo",0,0,600,600);
   dR_2b_Z_2bjet_Zee_All_amcnlo->SetHighLightColor(2);
   dR_2b_Z_2bjet_Zee_All_amcnlo->Range(0,0,1,1);
   dR_2b_Z_2bjet_Zee_All_amcnlo->SetFillColor(0);
   dR_2b_Z_2bjet_Zee_All_amcnlo->SetFillStyle(4000);
   dR_2b_Z_2bjet_Zee_All_amcnlo->SetBorderMode(0);
   dR_2b_Z_2bjet_Zee_All_amcnlo->SetBorderSize(2);
   dR_2b_Z_2bjet_Zee_All_amcnlo->SetFrameFillStyle(1000);
   dR_2b_Z_2bjet_Zee_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-5.501169,6.314516,5505.668);
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
   st->SetMaximum(4718.62);
   
   TH1F *st_stack_224 = new TH1F("st_stack_224","",25,0,10);
   st_stack_224->SetMinimum(0.01);
   st_stack_224->SetMaximum(4954.551);
   st_stack_224->SetDirectory(0);
   st_stack_224->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_224->SetLineColor(ci);
   st_stack_224->GetXaxis()->SetRange(1,15);
   st_stack_224->GetXaxis()->SetLabelFont(42);
   st_stack_224->GetXaxis()->SetLabelSize(0.035);
   st_stack_224->GetXaxis()->SetTitleSize(0.035);
   st_stack_224->GetXaxis()->SetTitleFont(42);
   st_stack_224->GetYaxis()->SetTitle("Events/0.4");
   st_stack_224->GetYaxis()->SetLabelFont(42);
   st_stack_224->GetYaxis()->SetLabelSize(0.05);
   st_stack_224->GetYaxis()->SetTitleSize(0.057);
   st_stack_224->GetYaxis()->SetTitleOffset(1.2);
   st_stack_224->GetYaxis()->SetTitleFont(42);
   st_stack_224->GetZaxis()->SetLabelFont(42);
   st_stack_224->GetZaxis()->SetLabelSize(0.035);
   st_stack_224->GetZaxis()->SetTitleSize(0.035);
   st_stack_224->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_224);
   
   
   TH1D *Zee_2bjet_dR_2b_all_stack_1 = new TH1D("Zee_2bjet_dR_2b_all_stack_1","",25,0,10);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(2,3.469517);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(3,3.146354);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(4,9.859463);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(5,10.85931);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(6,11.47122);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(7,16.91078);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(8,17.34741);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(9,10.74145);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(10,3.37972);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(11,0.7090727);
   Zee_2bjet_dR_2b_all_stack_1->SetBinContent(13,0.2312799);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(2,0.8441387);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(3,0.7410465);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(4,1.528755);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(5,1.585082);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(6,1.544548);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(7,1.970257);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(8,1.974989);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(9,1.596847);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(10,0.8696891);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(11,0.3448625);
   Zee_2bjet_dR_2b_all_stack_1->SetBinError(13,0.163622);
   Zee_2bjet_dR_2b_all_stack_1->SetEntries(475);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_dR_2b_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_all_stack_1->SetLineColor(ci);
   Zee_2bjet_dR_2b_all_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_all_stack_1,"");
   
   TH1D *Zee_2bjet_dR_2b_all_stack_2 = new TH1D("Zee_2bjet_dR_2b_all_stack_2","",25,0,10);
   Zee_2bjet_dR_2b_all_stack_2->SetBinContent(2,11.23677);
   Zee_2bjet_dR_2b_all_stack_2->SetBinContent(3,20.96086);
   Zee_2bjet_dR_2b_all_stack_2->SetBinContent(4,36.41416);
   Zee_2bjet_dR_2b_all_stack_2->SetBinContent(5,37.08037);
   Zee_2bjet_dR_2b_all_stack_2->SetBinContent(6,29.05281);
   Zee_2bjet_dR_2b_all_stack_2->SetBinContent(7,35.14045);
   Zee_2bjet_dR_2b_all_stack_2->SetBinContent(8,32.88147);
   Zee_2bjet_dR_2b_all_stack_2->SetBinContent(9,3.511967);
   Zee_2bjet_dR_2b_all_stack_2->SetBinError(2,2.129907);
   Zee_2bjet_dR_2b_all_stack_2->SetBinError(3,2.743179);
   Zee_2bjet_dR_2b_all_stack_2->SetBinError(4,3.8255);
   Zee_2bjet_dR_2b_all_stack_2->SetBinError(5,3.912706);
   Zee_2bjet_dR_2b_all_stack_2->SetBinError(6,3.314379);
   Zee_2bjet_dR_2b_all_stack_2->SetBinError(7,3.669691);
   Zee_2bjet_dR_2b_all_stack_2->SetBinError(8,3.634025);
   Zee_2bjet_dR_2b_all_stack_2->SetBinError(9,1.098798);
   Zee_2bjet_dR_2b_all_stack_2->SetEntries(618);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dR_2b_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_all_stack_2->SetLineColor(ci);
   Zee_2bjet_dR_2b_all_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_all_stack_2,"");
   
   TH1D *Zee_2bjet_dR_2b_all_stack_3 = new TH1D("Zee_2bjet_dR_2b_all_stack_3","",25,0,10);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(2,135.5284);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(3,245.6227);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(4,336.6792);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(5,445.5958);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(6,558.4819);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(7,705.4571);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(8,815.1232);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(9,330.5806);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(10,103.0407);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(11,25.12882);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(12,6.289199);
   Zee_2bjet_dR_2b_all_stack_3->SetBinContent(13,0.9716346);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(2,4.969574);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(3,6.639572);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(4,7.798592);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(5,8.974112);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(6,10.02696);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(7,11.23877);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(8,11.95532);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(9,7.716255);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(10,4.336874);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(11,2.059969);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(12,1.084596);
   Zee_2bjet_dR_2b_all_stack_3->SetBinError(13,0.3601765);
   Zee_2bjet_dR_2b_all_stack_3->SetEntries(32755);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dR_2b_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_all_stack_3->SetLineColor(ci);
   Zee_2bjet_dR_2b_all_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_all_stack_3,"");
   
   TH1D *Zee_2bjet_XX_dR_2b_all_stack_4 = new TH1D("Zee_2bjet_XX_dR_2b_all_stack_4","",25,0,10);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinContent(2,4.156607);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinContent(3,3.973392);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinContent(4,3.051447);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinContent(5,0.8457765);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinContent(6,9.621528);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinContent(7,10.18272);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinContent(8,8.012272);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinContent(9,10.38537);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinContent(10,3.261749);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinContent(11,1.455681);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinContent(12,0.8717388);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinContent(14,-0.4198303);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinError(2,2.773407);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinError(3,1.460898);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinError(4,2.144885);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinError(5,1.76424);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinError(6,10.63283);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinError(7,4.781624);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinError(8,4.473858);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinError(9,7.362061);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinError(10,2.823316);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinError(11,1.844233);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinError(12,1.212371);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetBinError(14,0.4198303);
   Zee_2bjet_XX_dR_2b_all_stack_4->SetEntries(129);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_dR_2b_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_dR_2b_all_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_dR_2b_all_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_XX_dR_2b_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dR_2b_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dR_2b_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dR_2b_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dR_2b_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dR_2b_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dR_2b_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dR_2b_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_dR_2b_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dR_2b_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dR_2b_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dR_2b_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dR_2b_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_dR_2b_all_stack_4,"");
   
   TH1D *Zee_2bjet_bX_dR_2b_all_stack_5 = new TH1D("Zee_2bjet_bX_dR_2b_all_stack_5","",25,0,10);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinContent(2,18.81194);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinContent(3,7.416481);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinContent(4,9.077069);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinContent(5,14.06968);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinContent(6,15.51519);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinContent(7,22.63798);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinContent(8,17.42797);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinContent(9,7.444768);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinContent(10,14.68502);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinContent(11,3.790993);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinContent(12,4.581354);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinContent(13,0.6921544);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinError(2,6.19848);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinError(3,5.143437);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinError(4,5.492082);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinError(5,5.91957);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinError(6,7.219922);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinError(7,7.945585);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinError(8,8.969999);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinError(9,6.89625);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinError(10,5.757381);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinError(11,3.856338);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinError(12,3.305859);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetBinError(13,0.6921544);
   Zee_2bjet_bX_dR_2b_all_stack_5->SetEntries(615);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_dR_2b_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_dR_2b_all_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_dR_2b_all_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bX_dR_2b_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dR_2b_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dR_2b_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dR_2b_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dR_2b_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dR_2b_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dR_2b_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dR_2b_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_dR_2b_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dR_2b_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dR_2b_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dR_2b_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dR_2b_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_dR_2b_all_stack_5,"");
   
   TH1D *Zee_2bjet_bb_dR_2b_all_stack_6 = new TH1D("Zee_2bjet_bb_dR_2b_all_stack_6","",25,0,10);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinContent(2,505.2873);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinContent(3,504.7043);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinContent(4,674.0103);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinContent(5,753.9442);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinContent(6,1025.59);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinContent(7,1235.564);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinContent(8,1704.449);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinContent(9,1005.656);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinContent(10,553.9205);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinContent(11,213.65);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinContent(12,108.9466);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinContent(13,4.636276);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinContent(14,3.695352);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinError(2,29.60551);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinError(3,33.6783);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinError(4,42.65777);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinError(5,44.44586);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinError(6,51.72464);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinError(7,57.21009);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinError(8,63.68379);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinError(9,48.39008);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinError(10,35.57559);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinError(11,24.63581);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinError(12,15.76516);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinError(13,8.185489);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetBinError(14,2.687744);
   Zee_2bjet_bb_dR_2b_all_stack_6->SetEntries(34449);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_dR_2b_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_dR_2b_all_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_dR_2b_all_stack_6->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bb_dR_2b_all_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dR_2b_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dR_2b_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dR_2b_all_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dR_2b_all_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dR_2b_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dR_2b_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dR_2b_all_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_dR_2b_all_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dR_2b_all_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dR_2b_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dR_2b_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dR_2b_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_dR_2b_all_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dR_2b_all__447 = new TH1D("Zee_2bjet_dR_2b_all__447","",25,0,10);
   Zee_2bjet_dR_2b_all__447->SetBinContent(2,641);
   Zee_2bjet_dR_2b_all__447->SetBinContent(3,804);
   Zee_2bjet_dR_2b_all__447->SetBinContent(4,886);
   Zee_2bjet_dR_2b_all__447->SetBinContent(5,1105);
   Zee_2bjet_dR_2b_all__447->SetBinContent(6,1448);
   Zee_2bjet_dR_2b_all__447->SetBinContent(7,1786);
   Zee_2bjet_dR_2b_all__447->SetBinContent(8,2117);
   Zee_2bjet_dR_2b_all__447->SetBinContent(9,1062);
   Zee_2bjet_dR_2b_all__447->SetBinContent(10,515);
   Zee_2bjet_dR_2b_all__447->SetBinContent(11,212);
   Zee_2bjet_dR_2b_all__447->SetBinContent(12,85);
   Zee_2bjet_dR_2b_all__447->SetBinContent(13,25);
   Zee_2bjet_dR_2b_all__447->SetBinContent(14,3);
   Zee_2bjet_dR_2b_all__447->SetBinError(2,25.31798);
   Zee_2bjet_dR_2b_all__447->SetBinError(3,28.35489);
   Zee_2bjet_dR_2b_all__447->SetBinError(4,29.76575);
   Zee_2bjet_dR_2b_all__447->SetBinError(5,33.24154);
   Zee_2bjet_dR_2b_all__447->SetBinError(6,38.0526);
   Zee_2bjet_dR_2b_all__447->SetBinError(7,42.26109);
   Zee_2bjet_dR_2b_all__447->SetBinError(8,46.01087);
   Zee_2bjet_dR_2b_all__447->SetBinError(9,32.58834);
   Zee_2bjet_dR_2b_all__447->SetBinError(10,22.69361);
   Zee_2bjet_dR_2b_all__447->SetBinError(11,14.56022);
   Zee_2bjet_dR_2b_all__447->SetBinError(12,9.219544);
   Zee_2bjet_dR_2b_all__447->SetBinError(13,5);
   Zee_2bjet_dR_2b_all__447->SetBinError(14,1.732051);
   Zee_2bjet_dR_2b_all__447->SetEntries(10689);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_all__447->SetLineColor(ci);
   Zee_2bjet_dR_2b_all__447->SetLineWidth(2);
   Zee_2bjet_dR_2b_all__447->SetMarkerStyle(20);
   Zee_2bjet_dR_2b_all__447->SetMarkerSize(1.2);
   Zee_2bjet_dR_2b_all__447->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_all__447->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all__447->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all__447->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all__447->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all__447->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all__447->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all__447->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all__447->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_all__447->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all__447->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_all__447->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_all__447->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_all__447->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_all__447->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dR_2b_all_fx1447[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dR_2b_all_fy1447[25] = {
   0,
   678.4905,
   785.824,
   1069.092,
   1262.395,
   1649.732,
   2025.893,
   2595.241,
   1368.32,
   678.2878,
   244.7346,
   120.6889,
   6.531345,
   3.275521,
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
   Double_t Graph_from_Zee_2bjet_bb_dR_2b_all_fex1447[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dR_2b_all_fey1447[25] = {
   0,
   30.86332,
   34.8565,
   43.95723,
   45.9559,
   54.35561,
   59.18318,
   65.69732,
   50.06652,
   36.41849,
   25.091,
   16.18997,
   8.22422,
   2.720336,
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
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_bb_dR_2b_all_fx1447,Graph_from_Zee_2bjet_bb_dR_2b_all_fy1447,Graph_from_Zee_2bjet_bb_dR_2b_all_fex1447,Graph_from_Zee_2bjet_bb_dR_2b_all_fey1447);
   gre->SetName("Graph_from_Zee_2bjet_bb_dR_2b_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447","",100,0,11);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447->SetMinimum(-267.956);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447->SetMaximum(2927.201);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dR_2b_all1447);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dR_2b_all","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_dR_2b_all_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_dR_2b_all_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_dR_2b_all_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_dR_2b_all","MC unc. (stat.)","fl");

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
   dR_2b_Z_2bjet_Zee_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__448 = new TH1D("data_mc_ratio__448","",25,0,10);
   data_mc_ratio__448->SetBinContent(2,0.9447442);
   data_mc_ratio__448->SetBinContent(3,1.02313);
   data_mc_ratio__448->SetBinContent(4,0.8287409);
   data_mc_ratio__448->SetBinContent(5,0.8753202);
   data_mc_ratio__448->SetBinContent(6,0.8777181);
   data_mc_ratio__448->SetBinContent(7,0.8815867);
   data_mc_ratio__448->SetBinContent(8,0.8157239);
   data_mc_ratio__448->SetBinContent(9,0.776134);
   data_mc_ratio__448->SetBinContent(10,0.7592648);
   data_mc_ratio__448->SetBinContent(11,0.8662445);
   data_mc_ratio__448->SetBinContent(12,0.70429);
   data_mc_ratio__448->SetBinContent(13,3.827696);
   data_mc_ratio__448->SetBinContent(14,0.9158848);
   data_mc_ratio__448->SetBinError(2,0.03731515);
   data_mc_ratio__448->SetBinError(3,0.03608301);
   data_mc_ratio__448->SetBinError(4,0.0278421);
   data_mc_ratio__448->SetBinError(5,0.02633212);
   data_mc_ratio__448->SetBinError(6,0.02306592);
   data_mc_ratio__448->SetBinError(7,0.02086048);
   data_mc_ratio__448->SetBinError(8,0.01772894);
   data_mc_ratio__448->SetBinError(9,0.02381631);
   data_mc_ratio__448->SetBinError(10,0.0334572);
   data_mc_ratio__448->SetBinError(11,0.05949392);
   data_mc_ratio__448->SetBinError(12,0.07639098);
   data_mc_ratio__448->SetBinError(13,0.7655392);
   data_mc_ratio__448->SetBinError(14,0.5287863);
   data_mc_ratio__448->SetMinimum(0.4);
   data_mc_ratio__448->SetMaximum(1.6);
   data_mc_ratio__448->SetEntries(8.038921);
   data_mc_ratio__448->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__448->SetLineColor(ci);
   data_mc_ratio__448->SetLineWidth(2);
   data_mc_ratio__448->SetMarkerStyle(20);
   data_mc_ratio__448->SetMarkerSize(1.2);
   data_mc_ratio__448->GetXaxis()->SetTitle("#DeltaR_{bb}");
   data_mc_ratio__448->GetXaxis()->SetRange(1,15);
   data_mc_ratio__448->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__448->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__448->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__448->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__448->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__448->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__448->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__448->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__448->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__448->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__448->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__448->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__448->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__448->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__448->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__448->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__448->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1448[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1448[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1448[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1448[25] = {
   0,
   0.04548821,
   0.04435662,
   0.04111643,
   0.03640374,
   0.03294814,
   0.02921338,
   0.02531454,
   0.03658976,
   0.0536918,
   0.1025233,
   0.1341463,
   1.259193,
   0.8305047,
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
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1448,Graph_from_mc_statistical_error_fy1448,Graph_from_mc_statistical_error_fex1448,Graph_from_mc_statistical_error_fey1448);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1448 = new TH1F("Graph_Graph_from_mc_statistical_error1448","",100,0,11);
   Graph_Graph_from_mc_statistical_error1448->SetMinimum(-0.5110311);
   Graph_Graph_from_mc_statistical_error1448->SetMaximum(2.511031);
   Graph_Graph_from_mc_statistical_error1448->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1448->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1448->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1448->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1448->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1448->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1448->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1448->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1448->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1448->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1448->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1448->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1448->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1448->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1448->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1448->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1448);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dR_2b_Z_2bjet_Zee_All_amcnlo->cd();
   dR_2b_Z_2bjet_Zee_All_amcnlo->Modified();
   dR_2b_Z_2bjet_Zee_All_amcnlo->cd();
   dR_2b_Z_2bjet_Zee_All_amcnlo->SetSelected(dR_2b_Z_2bjet_Zee_All_amcnlo);
}

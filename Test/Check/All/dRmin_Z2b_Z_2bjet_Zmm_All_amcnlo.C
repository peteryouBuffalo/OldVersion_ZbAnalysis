void dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo()
{
//=========Macro generated from canvas: dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo/dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo
//=========  (Thu Jan 14 10:43:07 2021) by ROOT version 6.14/09
   TCanvas *dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo = new TCanvas("dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo", "dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo",0,0,600,600);
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->SetHighLightColor(2);
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->Range(0,0,1,1);
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->SetFillColor(0);
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->SetFillStyle(4000);
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->SetBorderMode(0);
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->SetBorderSize(2);
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->SetFrameFillStyle(1000);
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-11.20333,6.314516,11202.12);
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
   st->SetMaximum(9600.752);
   
   TH1F *st_stack_332 = new TH1F("st_stack_332","",25,0,10);
   st_stack_332->SetMinimum(0.01);
   st_stack_332->SetMaximum(10080.79);
   st_stack_332->SetDirectory(0);
   st_stack_332->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_332->SetLineColor(ci);
   st_stack_332->GetXaxis()->SetRange(1,15);
   st_stack_332->GetXaxis()->SetLabelFont(42);
   st_stack_332->GetXaxis()->SetLabelSize(0.035);
   st_stack_332->GetXaxis()->SetTitleSize(0.035);
   st_stack_332->GetXaxis()->SetTitleFont(42);
   st_stack_332->GetYaxis()->SetTitle("Events/0.4");
   st_stack_332->GetYaxis()->SetLabelFont(42);
   st_stack_332->GetYaxis()->SetLabelSize(0.05);
   st_stack_332->GetYaxis()->SetTitleSize(0.057);
   st_stack_332->GetYaxis()->SetTitleOffset(1.2);
   st_stack_332->GetYaxis()->SetTitleFont(42);
   st_stack_332->GetZaxis()->SetLabelFont(42);
   st_stack_332->GetZaxis()->SetLabelSize(0.035);
   st_stack_332->GetZaxis()->SetTitleSize(0.035);
   st_stack_332->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_332);
   
   
   TH1D *Zmm_2bjet_dRmin_Z2b_all_stack_1 = new TH1D("Zmm_2bjet_dRmin_Z2b_all_stack_1","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(1,1.481887);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(2,11.69948);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(3,13.76285);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(4,24.90918);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(5,37.84418);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(6,37.57536);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(7,41.68925);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(8,24.65432);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(9,4.087674);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(10,1.51871);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinContent(11,0.2753587);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(1,0.5669301);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(2,1.908595);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(3,1.808283);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(4,2.387213);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(5,3.253041);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(6,3.019862);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(7,3.180203);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(8,2.465529);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(9,0.9128004);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(10,0.6523224);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetBinError(11,0.2254671);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetEntries(971);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_all_stack_1->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_all_stack_1,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_all_stack_2 = new TH1D("Zmm_2bjet_dRmin_Z2b_all_stack_2","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(1,4.841314);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(2,12.79246);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(3,27.78327);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(4,41.7848);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(5,66.53893);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(6,100.3641);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(7,98.56933);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(8,69.5295);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(9,17.12935);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(10,11.39658);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(11,3.075344);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinContent(12,1.347577);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(1,1.491039);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(2,2.252489);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(3,3.551502);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(4,4.991381);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(5,5.317614);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(6,6.432057);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(7,6.496351);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(8,5.434252);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(9,2.655508);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(10,2.230217);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(11,1.161083);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetBinError(12,0.6299391);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetEntries(1245);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_all_stack_2->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_all_stack_2,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_all_stack_3 = new TH1D("Zmm_2bjet_dRmin_Z2b_all_stack_3","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(1,145.3814);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(2,448.1663);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(3,815.4112);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(4,1353.605);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(5,1788.1);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(6,1701.04);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(7,1156.51);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(8,508.0853);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(9,79.16721);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(10,22.89352);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(11,7.302976);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(12,2.670054);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(13,1.584166);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(14,0.1432561);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinContent(16,0.5345187);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(1,5.55659);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(2,9.574169);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(3,12.63436);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(4,16.40062);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(5,18.97581);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(6,18.55881);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(7,15.33596);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(8,9.973844);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(9,4.055049);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(10,1.98018);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(11,1.176898);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(12,0.6584314);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(13,0.5124489);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(14,0.1086829);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetBinError(16,0.5345187);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetEntries(64896);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_all_stack_3->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_all_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_dRmin_Z2b_all_stack_4 = new TH1D("Zmm_2bjet_XX_dRmin_Z2b_all_stack_4","",25,0,10);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(1,4.690026);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(2,9.698593);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(3,23.75379);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(4,17.60614);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(5,64.50315);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(6,1.60274);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(7,30.26956);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(8,25.06664);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(9,28.28395);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(10,28.0107);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(11,25.49112);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(12,17.71867);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(13,34.24047);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(14,19.48859);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(15,45.78118);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinContent(16,2.987887);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(1,3.561319);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(2,4.816049);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(3,9.848582);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(4,7.301546);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(5,20.18445);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(6,8.515675);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(7,15.9322);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(8,17.33613);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(9,15.95253);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(10,13.38249);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(11,12.04203);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(12,8.968728);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(13,19.62521);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(14,11.33953);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(15,22.95655);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetBinError(16,4.073816);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetEntries(413);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_dRmin_Z2b_all_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_dRmin_Z2b_all_stack_5 = new TH1D("Zmm_2bjet_bX_dRmin_Z2b_all_stack_5","",25,0,10);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(1,9.229401);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(2,15.47078);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(3,14.82065);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(4,49.83675);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(5,39.60154);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(6,76.67445);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(7,59.71088);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(8,42.55444);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(9,12.49471);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(10,4.89243);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(11,6.282994);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(12,5.03535);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(13,2.043195);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(14,0.4786356);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinContent(15,0.5190137);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(1,4.705824);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(2,6.795106);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(3,8.56799);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(4,10.7116);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(5,11.78754);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(6,14.30284);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(7,13.74691);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(8,12.86541);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(9,7.150649);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(10,6.011528);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(11,4.307401);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(12,2.192606);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(13,1.605163);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(14,0.4786356);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetBinError(15,0.5190137);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetEntries(1366);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_dRmin_Z2b_all_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_dRmin_Z2b_all_stack_6 = new TH1D("Zmm_2bjet_bb_dRmin_Z2b_all_stack_6","",25,0,10);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(1,280.8357);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(2,720.9652);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(3,1154.79);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(4,1870.697);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(5,2672.903);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(6,3363.157);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(7,3428.468);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(8,2800.035);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(9,640.2906);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(10,199.304);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(11,95.42539);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(12,41.53616);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(13,20.65686);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(14,7.741223);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(15,3.358789);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(16,-1.777188);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(17,0.4364118);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(18,-1.523426);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinContent(19,-0.5376612);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(1,24.25312);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(2,41.98276);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(3,72.99837);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(4,69.97174);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(5,85.27144);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(6,96.32593);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(7,97.30438);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(8,84.72011);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(9,42.84203);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(10,24.82284);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(11,17.37162);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(12,12.95905);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(13,7.565417);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(14,5.161617);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(15,3.053438);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(16,1.9244);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(17,1.3681);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(18,1.254447);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetBinError(19,0.5376612);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetEntries(67424);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_dRmin_Z2b_all_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_all__663 = new TH1D("Zmm_2bjet_dRmin_Z2b_all__663","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(1,316);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(2,1041);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(3,1797);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(4,2946);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(5,3974);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(6,4451);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(7,4069);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(8,2927);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(9,752);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(10,260);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(11,127);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(12,70);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(13,42);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(14,18);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(15,7);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(16,6);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(17,1);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(18,2);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinContent(20,1);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(1,17.77639);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(2,32.26453);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(3,42.39104);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(4,54.27707);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(5,63.03967);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(6,66.71582);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(7,63.78871);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(8,54.10176);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(9,27.42262);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(10,16.12452);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(11,11.26943);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(12,8.3666);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(13,6.480741);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(14,4.242641);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(15,2.645751);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(16,2.44949);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(17,1);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(18,1.414214);
   Zmm_2bjet_dRmin_Z2b_all__663->SetBinError(20,1);
   Zmm_2bjet_dRmin_Z2b_all__663->SetEntries(22807);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_all__663->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_all__663->SetLineWidth(2);
   Zmm_2bjet_dRmin_Z2b_all__663->SetMarkerStyle(20);
   Zmm_2bjet_dRmin_Z2b_all__663->SetMarkerSize(1.2);
   Zmm_2bjet_dRmin_Z2b_all__663->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_all__663->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all__663->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all__663->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all__663->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all__663->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all__663->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all__663->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all__663->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_all__663->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all__663->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_all__663->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all__663->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_all__663->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_all__663->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all_fx1663[25] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all_fy1663[25] = {
   446.4597,
   1218.793,
   2050.321,
   3358.439,
   4669.49,
   5280.414,
   4815.217,
   3469.925,
   781.4535,
   268.0159,
   137.8532,
   68.30781,
   58.5247,
   27.85171,
   49.65898,
   1.745218,
   0.4364118,
   -1.523426,
   -0.5376612,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all_fex1663[25] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all_fey1663[25] = {
   25.62151,
   43.95795,
   75.33046,
   73.23721,
   90.64501,
   99.75316,
   100.9874,
   88.19663,
   46.53367,
   28.99523,
   21.63612,
   15.93778,
   21.10032,
   12.46869,
   23.16455,
   4.53707,
   1.3681,
   1.254447,
   0.5376612,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all_fx1663,Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all_fy1663,Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all_fex1663,Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all_fey1663);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663","",100,0,11);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663->SetMinimum(-541.0877);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663->SetMaximum(5918.463);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all1663);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_all","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_dRmin_Z2b_all_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_dRmin_Z2b_all_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_dRmin_Z2b_all_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_dRmin_Z2b_all","MC unc. (stat.)","fl");

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
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__664 = new TH1D("data_mc_ratio__664","",25,0,10);
   data_mc_ratio__664->SetBinContent(1,0.7077906);
   data_mc_ratio__664->SetBinContent(2,0.8541238);
   data_mc_ratio__664->SetBinContent(3,0.876448);
   data_mc_ratio__664->SetBinContent(4,0.8771932);
   data_mc_ratio__664->SetBinContent(5,0.8510565);
   data_mc_ratio__664->SetBinContent(6,0.8429264);
   data_mc_ratio__664->SetBinContent(7,0.8450294);
   data_mc_ratio__664->SetBinContent(8,0.843534);
   data_mc_ratio__664->SetBinContent(9,0.9623093);
   data_mc_ratio__664->SetBinContent(10,0.9700917);
   data_mc_ratio__664->SetBinContent(11,0.92127);
   data_mc_ratio__664->SetBinContent(12,1.024773);
   data_mc_ratio__664->SetBinContent(13,0.7176458);
   data_mc_ratio__664->SetBinContent(14,0.64628);
   data_mc_ratio__664->SetBinContent(15,0.1409614);
   data_mc_ratio__664->SetBinContent(16,3.437966);
   data_mc_ratio__664->SetBinContent(17,2.291414);
   data_mc_ratio__664->SetBinContent(18,-1.31283);
   data_mc_ratio__664->SetBinError(1,0.03981633);
   data_mc_ratio__664->SetBinError(2,0.02647253);
   data_mc_ratio__664->SetBinError(3,0.02067531);
   data_mc_ratio__664->SetBinError(4,0.0161614);
   data_mc_ratio__664->SetBinError(5,0.01350033);
   data_mc_ratio__664->SetBinError(6,0.01263458);
   data_mc_ratio__664->SetBinError(7,0.01324732);
   data_mc_ratio__664->SetBinError(8,0.01559162);
   data_mc_ratio__664->SetBinError(9,0.03509181);
   data_mc_ratio__664->SetBinError(10,0.06016253);
   data_mc_ratio__664->SetBinError(11,0.08174949);
   data_mc_ratio__664->SetBinError(12,0.1224838);
   data_mc_ratio__664->SetBinError(13,0.1107351);
   data_mc_ratio__664->SetBinError(14,0.1523297);
   data_mc_ratio__664->SetBinError(15,0.05327841);
   data_mc_ratio__664->SetBinError(16,1.403544);
   data_mc_ratio__664->SetBinError(17,2.291414);
   data_mc_ratio__664->SetBinError(18,0.9283111);
   data_mc_ratio__664->SetMinimum(0.4);
   data_mc_ratio__664->SetMaximum(1.6);
   data_mc_ratio__664->SetEntries(1.929623);
   data_mc_ratio__664->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__664->SetLineColor(ci);
   data_mc_ratio__664->SetLineWidth(2);
   data_mc_ratio__664->SetMarkerStyle(20);
   data_mc_ratio__664->SetMarkerSize(1.2);
   data_mc_ratio__664->GetXaxis()->SetTitle("min[#Delta R(Z,b)]");
   data_mc_ratio__664->GetXaxis()->SetRange(1,15);
   data_mc_ratio__664->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__664->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__664->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__664->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__664->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__664->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__664->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__664->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__664->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__664->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__664->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__664->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__664->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__664->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__664->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__664->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__664->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1664[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1664[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1664[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1664[25] = {
   0.05738818,
   0.0360668,
   0.03674081,
   0.02180692,
   0.01941219,
   0.01889116,
   0.02097256,
   0.02541744,
   0.05954759,
   0.1081847,
   0.1569504,
   0.233323,
   0.360537,
   0.4476814,
   0.4664724,
   2.599715,
   3.134883,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1664,Graph_from_mc_statistical_error_fy1664,Graph_from_mc_statistical_error_fex1664,Graph_from_mc_statistical_error_fey1664);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1664 = new TH1F("Graph_Graph_from_mc_statistical_error1664","",100,0,11);
   Graph_Graph_from_mc_statistical_error1664->SetMinimum(-2.76186);
   Graph_Graph_from_mc_statistical_error1664->SetMaximum(4.76186);
   Graph_Graph_from_mc_statistical_error1664->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1664->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1664->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1664->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1664->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1664->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1664->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1664->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1664->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1664->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1664->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1664->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1664->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1664->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1664->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1664->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1664);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->Modified();
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo->SetSelected(dRmin_Z2b_Z_2bjet_Zmm_All_amcnlo);
}

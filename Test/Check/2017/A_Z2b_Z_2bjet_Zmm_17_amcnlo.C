void A_Z2b_Z_2bjet_Zmm_17_amcnlo()
{
//=========Macro generated from canvas: A_Z2b_Z_2bjet_Zmm_17_amcnlo/A_Z2b_Z_2bjet_Zmm_17_amcnlo
//=========  (Thu Jan 14 10:43:06 2021) by ROOT version 6.14/09
   TCanvas *A_Z2b_Z_2bjet_Zmm_17_amcnlo = new TCanvas("A_Z2b_Z_2bjet_Zmm_17_amcnlo", "A_Z2b_Z_2bjet_Zmm_17_amcnlo",0,0,600,600);
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->SetHighLightColor(2);
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->Range(0,0,1,1);
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->SetFillColor(0);
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->SetFillStyle(4000);
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->SetBorderMode(0);
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->SetBorderSize(2);
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->SetFrameFillStyle(1000);
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.394795,1.052419,2402.4);
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
   st->SetMaximum(2058.972);
   
   TH1F *st_stack_318 = new TH1F("st_stack_318","",25,0,1);
   st_stack_318->SetMinimum(0.01);
   st_stack_318->SetMaximum(2161.921);
   st_stack_318->SetDirectory(0);
   st_stack_318->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_318->SetLineColor(ci);
   st_stack_318->GetXaxis()->SetRange(1,25);
   st_stack_318->GetXaxis()->SetLabelFont(42);
   st_stack_318->GetXaxis()->SetLabelSize(0.035);
   st_stack_318->GetXaxis()->SetTitleSize(0.035);
   st_stack_318->GetXaxis()->SetTitleFont(42);
   st_stack_318->GetYaxis()->SetTitle("Events/0.04");
   st_stack_318->GetYaxis()->SetLabelFont(42);
   st_stack_318->GetYaxis()->SetLabelSize(0.05);
   st_stack_318->GetYaxis()->SetTitleSize(0.057);
   st_stack_318->GetYaxis()->SetTitleOffset(1.2);
   st_stack_318->GetYaxis()->SetTitleFont(42);
   st_stack_318->GetZaxis()->SetLabelFont(42);
   st_stack_318->GetZaxis()->SetLabelSize(0.035);
   st_stack_318->GetZaxis()->SetTitleSize(0.035);
   st_stack_318->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_318);
   
   
   TH1D *Zmm_2bjet_A_Z2b_stack_1 = new TH1D("Zmm_2bjet_A_Z2b_stack_1","",25,0,1);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(1,8.463278);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(2,9.248069);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(3,6.175196);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(4,4.879383);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(5,7.436093);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(6,2.587707);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(7,3.659766);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(8,2.057305);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(9,1.892853);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(10,2.833287);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(11,0.7178786);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(12,1.318448);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(13,0.7618853);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(14,1.844389);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(15,0.6532137);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(16,1.185323);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(17,0.2071972);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(18,1.90649);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(19,0.8706806);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(20,0.3547285);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(21,0.2106795);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(23,0.1382261);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(1,1.284627);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(2,1.350739);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(3,1.070531);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(4,0.9325819);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(5,1.322456);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(6,0.7192821);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(7,0.8620857);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(8,0.6301233);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(9,0.6016071);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(10,0.7206631);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(11,0.3318687);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(12,0.4909287);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(13,0.3876685);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(14,0.624275);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(15,0.3772375);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(16,0.4708704);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(17,0.2071972);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(18,1.097978);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(19,0.436947);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(20,0.2511651);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(21,0.2106795);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(23,0.1382261);
   Zmm_2bjet_A_Z2b_stack_1->SetEntries(345);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_A_Z2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_stack_1->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_stack_1,"");
   
   TH1D *Zmm_2bjet_A_Z2b_stack_2 = new TH1D("Zmm_2bjet_A_Z2b_stack_2","",25,0,1);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(1,24.8081);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(2,28.19534);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(3,17.21531);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(4,14.32304);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(5,12.52351);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(6,8.780991);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(7,9.15655);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(8,3.928812);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(9,4.728415);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(10,3.968423);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(11,2.534457);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(12,2.258788);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(13,0.732965);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(14,0.2916038);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(15,0.3712171);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(16,0.3734881);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(17,0.6263274);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(18,0.2168402);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(19,0.2271045);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(20,0.3336768);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(22,0.709876);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(25,0.3935548);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(1,3.040226);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(2,3.235206);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(3,2.369384);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(4,2.209111);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(5,2.131122);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(6,1.742241);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(7,1.750607);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(8,1.178998);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(9,1.277618);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(10,1.173161);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(11,0.9145575);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(12,0.8646197);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(13,0.5186515);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(14,0.2352068);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(15,0.3712171);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(16,0.3734881);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(17,0.4560087);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(18,0.2168402);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(19,0.2271045);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(20,0.3336768);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(22,0.5020014);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(25,0.3935548);
   Zmm_2bjet_A_Z2b_stack_2->SetEntries(434);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_A_Z2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_stack_2->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_stack_2,"");
   
   TH1D *Zmm_2bjet_A_Z2b_stack_3 = new TH1D("Zmm_2bjet_A_Z2b_stack_3","",25,0,1);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(1,301.3094);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(2,303.0629);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(3,258.9864);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(4,223.5181);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(5,210.9736);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(6,179.2257);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(7,153.8705);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(8,139.1135);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(9,109.1251);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(10,83.83029);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(11,80.44954);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(12,61.49383);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(13,55.32389);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(14,41.49001);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(15,33.41135);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(16,30.29849);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(17,22.83469);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(18,17.14039);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(19,19.3725);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(20,10.72288);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(21,10.24406);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(22,10.23804);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(23,4.805084);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(24,2.145664);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(25,2.568207);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(1,10.84994);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(2,10.85156);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(3,10.02559);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(4,9.362718);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(5,9.091653);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(6,8.383374);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(7,7.712116);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(8,7.34807);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(9,6.428846);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(10,5.680499);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(11,5.57916);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(12,4.863274);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(13,4.623785);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(14,4.030134);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(15,3.626062);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(16,3.418615);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(17,2.942473);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(18,2.553596);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(19,2.75204);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(20,2.051039);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(21,2.01798);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(22,2.029438);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(23,1.394971);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(24,0.9338149);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(25,1.068629);
   Zmm_2bjet_A_Z2b_stack_3->SetEntries(6946);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_A_Z2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_stack_3->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_A_Z2b_stack_4 = new TH1D("Zmm_2bjet_XX_A_Z2b_stack_4","",25,0,1);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(1,-2.85331);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(2,9.760331);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(3,9.423339);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(4,6.1402);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(5,7.8185);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(6,2.424853);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(7,2.449074);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(8,6.748667);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(9,2.161221);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(10,0.6817875);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(11,0.3592599);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(12,-0.4887244);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(13,2.847399);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(15,2.054134);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(16,0.7440834);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(18,1.201837);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(19,0.981621);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(21,0.1330832);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(22,3.359778);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(1,4.914116);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(2,5.42688);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(3,6.174771);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(4,4.905672);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(5,4.355326);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(6,3.768317);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(7,4.278896);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(8,3.60753);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(9,1.537811);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(10,0.6817875);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(11,1.716901);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(12,0.5728129);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(13,2.847399);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(15,2.02358);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(16,0.7440834);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(18,1.201837);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(19,0.981621);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(21,0.1330832);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(22,3.359778);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetEntries(108);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_A_Z2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_A_Z2b_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_A_Z2b_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_A_Z2b_stack_5 = new TH1D("Zmm_2bjet_bX_A_Z2b_stack_5","",25,0,1);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(1,1.195768);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(2,11.56497);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(3,20.41509);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(4,6.681653);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(5,8.459197);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(6,8.186865);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(7,4.040222);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(8,10.07406);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(9,1.553692);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(10,4.114932);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(11,0.4631408);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(12,3.120099);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(13,1.181087);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(14,0.9182824);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(15,-0.8820589);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(16,1.009656);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(17,-0.5747265);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(18,0.5833328);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(19,0.8588731);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(20,1.307509);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(21,0.7093863);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(22,0.350748);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(24,0.9594577);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(1,5.374395);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(2,4.763987);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(3,4.798007);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(4,4.21157);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(5,5.286736);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(6,3.783883);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(7,4.088615);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(8,3.249429);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(9,2.4884);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(10,2.553942);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(11,2.814474);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(12,2.716506);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(13,2.419503);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(14,1.442214);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(15,2.09537);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(16,2.072699);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(17,0.5747265);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(18,1.329165);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(19,0.8588731);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(20,1.307509);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(21,0.7093863);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(22,1.178016);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(24,0.9594577);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetEntries(333);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_A_Z2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_A_Z2b_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_A_Z2b_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_A_Z2b_stack_6 = new TH1D("Zmm_2bjet_bb_A_Z2b_stack_6","",25,0,1);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(1,799.5113);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(2,719.8993);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(3,656.4384);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(4,482.2188);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(5,443.4826);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(6,313.5826);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(7,234.9136);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(8,182.8281);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(9,224.1145);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(10,140.9539);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(11,129.7831);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(12,87.57144);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(13,92.87498);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(14,74.75649);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(15,48.29313);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(16,50.83907);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(17,43.74122);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(18,26.88536);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(19,29.9604);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(20,27.8319);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(21,14.48685);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(22,19.07846);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(23,13.35044);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(24,2.972119);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(25,3.663695);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(1,43.43343);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(2,42.78649);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(3,38.86391);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(4,35.7731);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(5,33.32468);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(6,27.88639);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(7,25.99659);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(8,24.0763);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(9,21.0841);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(10,18.9665);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(11,17.47949);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(12,16.49061);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(13,15.04003);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(14,13.26855);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(15,12.46055);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(16,10.94698);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(17,10.89232);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(18,9.473952);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(19,8.05811);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(20,7.341132);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(21,6.384375);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(22,5.651621);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(23,5.064854);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(24,2.829252);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(25,1.964905);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetEntries(17994);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_A_Z2b_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_A_Z2b_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_A_Z2b_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_A_Z2b__635 = new TH1D("Zmm_2bjet_A_Z2b__635","",25,0,1);
   Zmm_2bjet_A_Z2b__635->SetBinContent(1,1001);
   Zmm_2bjet_A_Z2b__635->SetBinContent(2,906);
   Zmm_2bjet_A_Z2b__635->SetBinContent(3,818);
   Zmm_2bjet_A_Z2b__635->SetBinContent(4,648);
   Zmm_2bjet_A_Z2b__635->SetBinContent(5,560);
   Zmm_2bjet_A_Z2b__635->SetBinContent(6,476);
   Zmm_2bjet_A_Z2b__635->SetBinContent(7,401);
   Zmm_2bjet_A_Z2b__635->SetBinContent(8,282);
   Zmm_2bjet_A_Z2b__635->SetBinContent(9,279);
   Zmm_2bjet_A_Z2b__635->SetBinContent(10,228);
   Zmm_2bjet_A_Z2b__635->SetBinContent(11,207);
   Zmm_2bjet_A_Z2b__635->SetBinContent(12,148);
   Zmm_2bjet_A_Z2b__635->SetBinContent(13,122);
   Zmm_2bjet_A_Z2b__635->SetBinContent(14,107);
   Zmm_2bjet_A_Z2b__635->SetBinContent(15,75);
   Zmm_2bjet_A_Z2b__635->SetBinContent(16,73);
   Zmm_2bjet_A_Z2b__635->SetBinContent(17,59);
   Zmm_2bjet_A_Z2b__635->SetBinContent(18,50);
   Zmm_2bjet_A_Z2b__635->SetBinContent(19,32);
   Zmm_2bjet_A_Z2b__635->SetBinContent(20,30);
   Zmm_2bjet_A_Z2b__635->SetBinContent(21,16);
   Zmm_2bjet_A_Z2b__635->SetBinContent(22,11);
   Zmm_2bjet_A_Z2b__635->SetBinContent(23,9);
   Zmm_2bjet_A_Z2b__635->SetBinContent(24,8);
   Zmm_2bjet_A_Z2b__635->SetBinContent(25,1);
   Zmm_2bjet_A_Z2b__635->SetBinError(1,31.63858);
   Zmm_2bjet_A_Z2b__635->SetBinError(2,30.09983);
   Zmm_2bjet_A_Z2b__635->SetBinError(3,28.6007);
   Zmm_2bjet_A_Z2b__635->SetBinError(4,25.45584);
   Zmm_2bjet_A_Z2b__635->SetBinError(5,23.66432);
   Zmm_2bjet_A_Z2b__635->SetBinError(6,21.81742);
   Zmm_2bjet_A_Z2b__635->SetBinError(7,20.02498);
   Zmm_2bjet_A_Z2b__635->SetBinError(8,16.79286);
   Zmm_2bjet_A_Z2b__635->SetBinError(9,16.70329);
   Zmm_2bjet_A_Z2b__635->SetBinError(10,15.09967);
   Zmm_2bjet_A_Z2b__635->SetBinError(11,14.38749);
   Zmm_2bjet_A_Z2b__635->SetBinError(12,12.16553);
   Zmm_2bjet_A_Z2b__635->SetBinError(13,11.04536);
   Zmm_2bjet_A_Z2b__635->SetBinError(14,10.34408);
   Zmm_2bjet_A_Z2b__635->SetBinError(15,8.660254);
   Zmm_2bjet_A_Z2b__635->SetBinError(16,8.544004);
   Zmm_2bjet_A_Z2b__635->SetBinError(17,7.681146);
   Zmm_2bjet_A_Z2b__635->SetBinError(18,7.071068);
   Zmm_2bjet_A_Z2b__635->SetBinError(19,5.656854);
   Zmm_2bjet_A_Z2b__635->SetBinError(20,5.477226);
   Zmm_2bjet_A_Z2b__635->SetBinError(21,4);
   Zmm_2bjet_A_Z2b__635->SetBinError(22,3.316625);
   Zmm_2bjet_A_Z2b__635->SetBinError(23,3);
   Zmm_2bjet_A_Z2b__635->SetBinError(24,2.828427);
   Zmm_2bjet_A_Z2b__635->SetBinError(25,1);
   Zmm_2bjet_A_Z2b__635->SetEntries(6547);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b__635->SetLineColor(ci);
   Zmm_2bjet_A_Z2b__635->SetLineWidth(2);
   Zmm_2bjet_A_Z2b__635->SetMarkerStyle(20);
   Zmm_2bjet_A_Z2b__635->SetMarkerSize(1.2);
   Zmm_2bjet_A_Z2b__635->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b__635->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b__635->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b__635->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b__635->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b__635->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b__635->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b__635->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b__635->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b__635->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b__635->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b__635->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b__635->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b__635->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b__635->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_A_Z2b_fx1635[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_Zmm_2bjet_bb_A_Z2b_fy1635[25] = {
   1132.435,
   1081.731,
   968.6537,
   737.7612,
   690.6935,
   514.7887,
   408.0897,
   344.7505,
   343.5758,
   236.3826,
   214.3074,
   155.2739,
   153.7222,
   119.3008,
   83.90098,
   84.45011,
   66.83471,
   47.93425,
   52.27118,
   40.55069,
   25.78406,
   33.7369,
   18.29375,
   6.077241,
   6.625458};
   Double_t Graph_from_Zmm_2bjet_bb_A_Z2b_fex1635[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_Zmm_2bjet_bb_A_Z2b_fey1635[25] = {
   45.47648,
   44.86511,
   40.97346,
   37.61553,
   35.30441,
   29.66484,
   27.82324,
   25.67143,
   22.2805,
   20.02197,
   18.66749,
   17.44384,
   16.18527,
   13.95785,
   13.31087,
   11.69334,
   11.30849,
   10.03695,
   8.628476,
   7.744868,
   6.73779,
   6.999091,
   5.255264,
   3.130054,
   2.271058};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_bb_A_Z2b_fx1635,Graph_from_Zmm_2bjet_bb_A_Z2b_fy1635,Graph_from_Zmm_2bjet_bb_A_Z2b_fex1635,Graph_from_Zmm_2bjet_bb_A_Z2b_fey1635);
   gre->SetName("Graph_from_Zmm_2bjet_bb_A_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635","",100,0,1.1);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635->SetMinimum(2.652469);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635->SetMaximum(1295.407);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1635);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_A_Z2b","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_A_Z2b_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_A_Z2b_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_A_Z2b_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_A_Z2b","MC unc. (stat.)","fl");

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
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__636 = new TH1D("data_mc_ratio__636","",25,0,1);
   data_mc_ratio__636->SetBinContent(1,0.8839363);
   data_mc_ratio__636->SetBinContent(2,0.8375465);
   data_mc_ratio__636->SetBinContent(3,0.844471);
   data_mc_ratio__636->SetBinContent(4,0.878333);
   data_mc_ratio__636->SetBinContent(5,0.8107793);
   data_mc_ratio__636->SetBinContent(6,0.9246512);
   data_mc_ratio__636->SetBinContent(7,0.982627);
   data_mc_ratio__636->SetBinContent(8,0.8179829);
   data_mc_ratio__636->SetBinContent(9,0.8120479);
   data_mc_ratio__636->SetBinContent(10,0.9645381);
   data_mc_ratio__636->SetBinContent(11,0.9659023);
   data_mc_ratio__636->SetBinContent(12,0.9531545);
   data_mc_ratio__636->SetBinContent(13,0.7936394);
   data_mc_ratio__636->SetBinContent(14,0.8968927);
   data_mc_ratio__636->SetBinContent(15,0.8939109);
   data_mc_ratio__636->SetBinContent(16,0.8644157);
   data_mc_ratio__636->SetBinContent(17,0.8827748);
   data_mc_ratio__636->SetBinContent(18,1.043096);
   data_mc_ratio__636->SetBinContent(19,0.612192);
   data_mc_ratio__636->SetBinContent(20,0.7398147);
   data_mc_ratio__636->SetBinContent(21,0.6205385);
   data_mc_ratio__636->SetBinContent(22,0.3260524);
   data_mc_ratio__636->SetBinContent(23,0.4919712);
   data_mc_ratio__636->SetBinContent(24,1.316387);
   data_mc_ratio__636->SetBinContent(25,0.150933);
   data_mc_ratio__636->SetBinError(1,0.02793855);
   data_mc_ratio__636->SetBinError(2,0.02782562);
   data_mc_ratio__636->SetBinError(3,0.02952624);
   data_mc_ratio__636->SetBinError(4,0.03450418);
   data_mc_ratio__636->SetBinError(5,0.03426168);
   data_mc_ratio__636->SetBinError(6,0.04238132);
   data_mc_ratio__636->SetBinError(7,0.04907005);
   data_mc_ratio__636->SetBinError(8,0.04871017);
   data_mc_ratio__636->SetBinError(9,0.04861604);
   data_mc_ratio__636->SetBinError(10,0.0638781);
   data_mc_ratio__636->SetBinError(11,0.06713485);
   data_mc_ratio__636->SetBinError(12,0.07834882);
   data_mc_ratio__636->SetBinError(13,0.07185273);
   data_mc_ratio__636->SetBinError(14,0.08670589);
   data_mc_ratio__636->SetBinError(15,0.1032199);
   data_mc_ratio__636->SetBinError(16,0.1011722);
   data_mc_ratio__636->SetBinError(17,0.1149275);
   data_mc_ratio__636->SetBinError(18,0.147516);
   data_mc_ratio__636->SetBinError(19,0.1082213);
   data_mc_ratio__636->SetBinError(20,0.1350711);
   data_mc_ratio__636->SetBinError(21,0.1551346);
   data_mc_ratio__636->SetBinError(22,0.09830851);
   data_mc_ratio__636->SetBinError(23,0.1639904);
   data_mc_ratio__636->SetBinError(24,0.465413);
   data_mc_ratio__636->SetBinError(25,0.150933);
   data_mc_ratio__636->SetMinimum(0.4);
   data_mc_ratio__636->SetMaximum(1.6);
   data_mc_ratio__636->SetEntries(362.0135);
   data_mc_ratio__636->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__636->SetLineColor(ci);
   data_mc_ratio__636->SetLineWidth(2);
   data_mc_ratio__636->SetMarkerStyle(20);
   data_mc_ratio__636->SetMarkerSize(1.2);
   data_mc_ratio__636->GetXaxis()->SetTitle("A_{Zbb}");
   data_mc_ratio__636->GetXaxis()->SetRange(1,25);
   data_mc_ratio__636->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__636->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__636->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__636->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__636->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__636->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__636->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__636->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__636->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__636->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__636->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__636->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__636->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__636->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__636->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__636->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__636->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1636[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1636[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1636[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1636[25] = {
   0.04015815,
   0.04147529,
   0.04229939,
   0.05098605,
   0.05111444,
   0.05762527,
   0.06817923,
   0.0744638,
   0.06484886,
   0.08470157,
   0.08710616,
   0.1123424,
   0.1052891,
   0.1169971,
   0.1586497,
   0.1384645,
   0.1692009,
   0.2093899,
   0.1650714,
   0.1909923,
   0.2613161,
   0.207461,
   0.287271,
   0.5150452,
   0.3427776};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1636,Graph_from_mc_statistical_error_fy1636,Graph_from_mc_statistical_error_fex1636,Graph_from_mc_statistical_error_fey1636);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1636 = new TH1F("Graph_Graph_from_mc_statistical_error1636","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1636->SetMinimum(0.3819458);
   Graph_Graph_from_mc_statistical_error1636->SetMaximum(1.618054);
   Graph_Graph_from_mc_statistical_error1636->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1636->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1636->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1636->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1636->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1636->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1636->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1636->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1636->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1636->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1636->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1636->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1636->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1636->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1636->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1636->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1636);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->cd();
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->Modified();
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->cd();
   A_Z2b_Z_2bjet_Zmm_17_amcnlo->SetSelected(A_Z2b_Z_2bjet_Zmm_17_amcnlo);
}

void dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo/dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo
//=========  (Thu Jan 14 10:43:07 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo = new TCanvas("dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo", "dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo",0,0,600,600);
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->SetHighLightColor(2);
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->Range(0,0,1,1);
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->SetFillColor(0);
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->SetFillStyle(4000);
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->SetBorderMode(0);
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->SetBorderSize(2);
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-2.695078,3.416482,2702.383);
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
   st->SetMaximum(2316.072);
   
   TH1F *st_stack_328 = new TH1F("st_stack_328","",30,0,3.141593);
   st_stack_328->SetMinimum(0.01);
   st_stack_328->SetMaximum(2431.875);
   st_stack_328->SetDirectory(0);
   st_stack_328->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_328->SetLineColor(ci);
   st_stack_328->GetXaxis()->SetRange(1,31);
   st_stack_328->GetXaxis()->SetLabelFont(42);
   st_stack_328->GetXaxis()->SetLabelSize(0.035);
   st_stack_328->GetXaxis()->SetTitleSize(0.035);
   st_stack_328->GetXaxis()->SetTitleFont(42);
   st_stack_328->GetYaxis()->SetTitle("Events/0.105");
   st_stack_328->GetYaxis()->SetLabelFont(42);
   st_stack_328->GetYaxis()->SetLabelSize(0.05);
   st_stack_328->GetYaxis()->SetTitleSize(0.057);
   st_stack_328->GetYaxis()->SetTitleOffset(1.2);
   st_stack_328->GetYaxis()->SetTitleFont(42);
   st_stack_328->GetZaxis()->SetLabelFont(42);
   st_stack_328->GetZaxis()->SetLabelSize(0.035);
   st_stack_328->GetZaxis()->SetTitleSize(0.035);
   st_stack_328->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_328);
   
   
   TH1D *Zmm_2bjet_dPhi_Zb1_all_stack_1 = new TH1D("Zmm_2bjet_dPhi_Zb1_all_stack_1","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(1,3.218139);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(2,3.597825);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(3,4.728842);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(4,5.708724);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(5,3.982687);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(6,4.810716);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(7,2.309138);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(8,5.292427);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(9,4.007898);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(10,6.579836);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(11,3.759756);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(12,4.76652);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(13,6.127216);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(14,4.629975);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(15,7.845184);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(16,5.958783);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(17,6.701367);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(18,6.925333);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(19,5.906956);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(20,7.690975);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(21,7.32918);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(22,7.502915);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(23,12.11824);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(24,9.688381);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(25,10.19695);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(26,11.26998);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(27,8.666975);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(28,11.01236);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(29,11.42459);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinContent(30,5.740367);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(1,0.8690019);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(2,0.9686867);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(3,1.110511);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(4,1.456349);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(5,0.9977548);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(6,1.042451);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(7,0.6385594);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(8,1.120067);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(9,0.9995973);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(10,1.304053);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(11,0.8988752);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(12,1.031092);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(13,1.414461);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(14,1.028152);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(15,1.34778);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(16,1.192766);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(17,1.250268);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(18,1.31942);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(19,1.278895);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(20,1.382564);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(21,1.332985);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(22,1.366013);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(23,1.920381);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(24,1.59471);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(25,1.543073);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(26,1.679559);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(27,1.402615);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(28,1.585404);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(29,1.65416);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetBinError(30,1.154411);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetEntries(971);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_all_stack_1->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_all_stack_1,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_all_stack_2 = new TH1D("Zmm_2bjet_dPhi_Zb1_all_stack_2","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(1,8.461157);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(2,5.29483);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(3,9.155352);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(4,7.121859);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(5,7.207231);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(6,8.231);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(7,5.653232);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(8,8.706312);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(9,7.701566);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(10,7.745109);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(11,13.88004);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(12,11.01495);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(13,15.35539);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(14,12.50878);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(15,13.37062);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(16,14.54743);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(17,18.68948);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(18,23.73013);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(19,25.37333);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(20,21.62072);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(21,20.62376);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(22,30.00771);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(23,27.88903);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(24,22.10055);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(25,24.01648);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(26,19.76407);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(27,18.3268);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(28,19.88142);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(29,17.22348);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinContent(30,9.95074);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(1,1.954014);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(2,1.371866);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(3,1.911233);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(4,1.610429);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(5,1.852832);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(6,1.88503);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(7,1.499893);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(8,1.943966);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(9,1.705191);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(10,1.729288);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(11,2.369841);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(12,2.090915);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(13,2.582094);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(14,2.190539);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(15,2.264992);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(16,2.522283);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(17,2.890537);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(18,3.310734);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(19,3.258947);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(20,3.097581);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(21,2.919059);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(22,4.618657);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(23,3.376804);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(24,3.229682);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(25,3.149819);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(26,2.803149);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(27,2.752324);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(28,2.98333);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(29,2.634414);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetBinError(30,1.93854);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetEntries(1245);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_all_stack_2->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_all_stack_2,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_all_stack_3 = new TH1D("Zmm_2bjet_dPhi_Zb1_all_stack_3","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(1,162.1244);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(2,156.507);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(3,152.4316);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(4,148.4403);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(5,155.9799);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(6,164.7998);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(7,185.9498);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(8,182.0444);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(9,185.6027);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(10,203.3095);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(11,225.1464);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(12,243.4875);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(13,257.0377);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(14,271.637);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(15,285.5272);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(16,305.1325);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(17,318.0886);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(18,331.9334);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(19,342.7802);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(20,350.584);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(21,359.0456);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(22,368.73);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(23,352.6182);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(24,355.087);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(25,337.9695);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(26,342.2357);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(27,339.3728);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(28,330.3011);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(29,302.9805);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinContent(30,313.7102);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(1,5.747388);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(2,5.735947);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(3,5.538025);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(4,5.385294);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(5,5.466999);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(6,5.704288);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(7,6.110941);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(8,6.124605);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(9,5.979239);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(10,6.284568);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(11,6.804491);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(12,6.998314);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(13,7.309224);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(14,7.410474);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(15,7.54564);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(16,7.827971);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(17,7.837995);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(18,8.060988);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(19,8.302901);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(20,8.444867);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(21,8.577176);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(22,8.793779);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(23,8.423487);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(24,8.486538);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(25,8.141038);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(26,8.26523);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(27,8.230819);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(28,8.211156);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(29,7.729095);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetBinError(30,7.941373);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetEntries(64896);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_all_stack_3->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_all_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_dPhi_Zb1_all_stack_4 = new TH1D("Zmm_2bjet_XX_dPhi_Zb1_all_stack_4","",30,0,3.141593);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(1,6.207684);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(2,12.54302);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(3,14.91924);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(4,20.26644);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(5,9.797793);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(6,27.26298);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(7,8.064651);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(8,2.170962);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(9,11.58238);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(10,5.3733);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(11,19.7774);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(12,15.91982);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(13,9.766758);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(14,1.216103);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(15,11.28445);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(16,2.339932);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(17,2.605172);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(18,0.6021442);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(19,10.04065);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(20,6.520107);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(21,14.45621);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(22,17.49238);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(23,31.50742);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(24,24.90973);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(25,11.74294);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(26,7.296546);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(27,41.1196);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(28,12.45428);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(29,6.730556);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinContent(30,13.22257);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(1,4.698613);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(2,5.695684);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(3,9.445062);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(4,13.35806);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(5,5.675094);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(6,15.92074);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(7,3.377629);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(8,3.275939);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(9,11.55305);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(10,4.310117);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(11,11.55667);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(12,14.49765);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(13,8.62619);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(14,5.543148);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(15,10.24862);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(16,3.214993);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(17,3.34126);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(18,12.89714);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(19,5.057716);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(20,4.752687);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(21,13.47392);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(22,13.75151);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(23,17.45475);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(24,15.21837);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(25,4.657299);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(26,5.380371);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(27,16.6349);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(28,8.505093);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(29,3.937671);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetBinError(30,6.540687);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetEntries(413);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_dPhi_Zb1_all_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_dPhi_Zb1_all_stack_5 = new TH1D("Zmm_2bjet_bX_dPhi_Zb1_all_stack_5","",30,0,3.141593);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(1,15.93993);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(2,14.37927);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(3,2.94277);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(4,2.459019);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(5,14.45843);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(6,6.83922);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(7,8.318683);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(8,5.570272);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(9,-2.029712);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(10,13.11276);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(11,10.54675);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(12,18.82285);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(13,1.448612);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(14,14.65595);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(15,9.992778);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(16,2.574919);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(17,4.397248);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(18,24.91908);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(19,19.89739);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(20,6.541829);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(21,15.25251);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(22,14.18877);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(23,8.373537);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(24,13.54704);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(25,16.41539);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(26,17.70819);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(27,10.55534);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(28,17.40471);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(29,14.10829);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinContent(30,16.30339);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(1,5.647297);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(2,5.265826);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(3,5.799992);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(4,3.591753);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(5,5.268029);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(6,3.643635);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(7,5.302736);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(8,5.380206);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(9,5.783922);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(10,6.484067);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(11,5.592783);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(12,6.044403);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(13,4.834967);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(14,6.068856);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(15,5.838724);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(16,6.47258);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(17,5.474643);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(18,6.37631);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(19,6.95699);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(20,6.789754);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(21,6.441093);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(22,7.880123);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(23,5.767646);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(24,6.092619);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(25,5.996568);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(26,6.429425);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(27,6.31699);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(28,6.700586);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(29,6.961578);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetBinError(30,5.896336);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetEntries(1366);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_dPhi_Zb1_all_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_dPhi_Zb1_all_stack_6 = new TH1D("Zmm_2bjet_bb_dPhi_Zb1_all_stack_6","",30,0,3.141593);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(1,326.0707);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(2,413.452);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(3,365.1011);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(4,425.038);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(5,360.5482);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(6,383.5625);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(7,417.6621);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(8,394.349);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(9,381.0612);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(10,475.7295);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(11,431.7928);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(12,490.2498);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(13,497.4159);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(14,510.3101);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(15,536.9769);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(16,509.6577);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(17,602.2601);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(18,677.3271);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(19,661.5205);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(20,636.4969);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(21,681.2208);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(22,813.42);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(23,757.8158);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(24,794.3016);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(25,873.4981);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(26,799.9194);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(27,755.5579);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(28,742.773);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(29,825.615);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinContent(30,756.058);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(1,31.62238);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(2,31.77341);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(3,31.05014);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(4,32.28844);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(5,31.57891);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(6,31.656);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(7,32.89364);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(8,57.228);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(9,32.72875);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(10,35.64288);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(11,35.08611);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(12,36.24833);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(13,38.59666);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(14,37.18409);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(15,39.60539);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(16,39.91877);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(17,41.74906);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(18,43.27245);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(19,42.58646);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(20,43.67997);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(21,44.29292);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(22,43.55112);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(23,45.9581);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(24,46.48278);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(25,46.8736);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(26,45.14608);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(27,46.11795);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(28,43.63621);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(29,43.01567);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetBinError(30,43.75486);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetEntries(67424);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_dPhi_Zb1_all_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_all__655 = new TH1D("Zmm_2bjet_dPhi_Zb1_all__655","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(1,458);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(2,505);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(3,454);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(4,483);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(5,499);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(6,518);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(7,518);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(8,500);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(9,516);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(10,552);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(11,578);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(12,603);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(13,683);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(14,727);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(15,836);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(16,765);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(17,811);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(18,848);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(19,916);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(20,989);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(21,1004);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(22,970);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(23,1027);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(24,1006);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(25,1053);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(26,1026);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(27,1002);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(28,1008);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(29,995);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinContent(30,957);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(1,21.40093);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(2,22.47221);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(3,21.30728);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(4,21.97726);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(5,22.33831);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(6,22.75961);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(7,22.75961);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(8,22.36068);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(9,22.71563);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(10,23.49468);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(11,24.04163);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(12,24.55606);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(13,26.13427);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(14,26.96294);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(15,28.91366);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(16,27.65863);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(17,28.47806);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(18,29.12044);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(19,30.26549);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(20,31.44837);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(21,31.68596);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(22,31.14482);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(23,32.04684);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(24,31.7175);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(25,32.44996);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(26,32.03123);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(27,31.65438);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(28,31.74902);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(29,31.54362);
   Zmm_2bjet_dPhi_Zb1_all__655->SetBinError(30,30.93542);
   Zmm_2bjet_dPhi_Zb1_all__655->SetEntries(22807);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_all__655->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_all__655->SetLineWidth(2);
   Zmm_2bjet_dPhi_Zb1_all__655->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_Zb1_all__655->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_Zb1_all__655->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_all__655->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all__655->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all__655->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all__655->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all__655->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all__655->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all__655->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all__655->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_all__655->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all__655->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_all__655->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all__655->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_all__655->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_all__655->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all_fx1655[30] = {
   0.05235988,
   0.1570796,
   0.2617994,
   0.3665191,
   0.4712389,
   0.5759587,
   0.6806784,
   0.7853982,
   0.8901179,
   0.9948377,
   1.099557,
   1.204277,
   1.308997,
   1.413717,
   1.518436,
   1.623156,
   1.727876,
   1.832596,
   1.937315,
   2.042035,
   2.146755,
   2.251475,
   2.356194,
   2.460914,
   2.565634,
   2.670354,
   2.775074,
   2.879793,
   2.984513,
   3.089233};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all_fy1655[30] = {
   522.022,
   605.7739,
   549.2789,
   609.0343,
   551.9743,
   595.5062,
   627.9576,
   598.1333,
   587.926,
   711.85,
   704.9031,
   784.2614,
   787.1517,
   814.958,
   864.9971,
   840.2113,
   952.742,
   1065.437,
   1065.519,
   1029.454,
   1097.928,
   1251.342,
   1190.322,
   1219.634,
   1273.839,
   1198.194,
   1173.599,
   1133.827,
   1178.082,
   1114.985};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all_fex1655[30] = {
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all_fey1655[30] = {
   33.03861,
   33.24817,
   33.50397,
   35.60334,
   33.0379,
   36.139,
   34.08108,
   57.94193,
   35.74571,
   37.08399,
   38.06043,
   40.18793,
   40.61506,
   38.87139,
   42.09033,
   41.41015,
   43.07519,
   46.44545,
   44.37095,
   45.38117,
   47.63153,
   47.4176,
   50.35997,
   50.14342,
   48.30489,
   46.77015,
   50.20736,
   45.82783,
   44.53911,
   45.38933};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all_fx1655,Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all_fy1655,Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all_fex1655,Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all_fey1655);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655->SetMinimum(405.6674);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655->SetMaximum(1405.46);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all1655);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_all","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_dPhi_Zb1_all_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_dPhi_Zb1_all_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_dPhi_Zb1_all_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_dPhi_Zb1_all","MC unc. (stat.)","fl");

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
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.4974175,-0.2774193,3.416482,1.658065);
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
   
   TH1D *data_mc_ratio__656 = new TH1D("data_mc_ratio__656","",30,0,3.141593);
   data_mc_ratio__656->SetBinContent(1,0.8773576);
   data_mc_ratio__656->SetBinContent(2,0.8336443);
   data_mc_ratio__656->SetBinContent(3,0.8265382);
   data_mc_ratio__656->SetBinContent(4,0.7930588);
   data_mc_ratio__656->SetBinContent(5,0.9040276);
   data_mc_ratio__656->SetBinContent(6,0.8698482);
   data_mc_ratio__656->SetBinContent(7,0.8248964);
   data_mc_ratio__656->SetBinContent(8,0.835934);
   data_mc_ratio__656->SetBinContent(9,0.8776615);
   data_mc_ratio__656->SetBinContent(10,0.7754443);
   data_mc_ratio__656->SetBinContent(11,0.8199708);
   data_mc_ratio__656->SetBinContent(12,0.7688763);
   data_mc_ratio__656->SetBinContent(13,0.8676854);
   data_mc_ratio__656->SetBinContent(14,0.8920705);
   data_mc_ratio__656->SetBinContent(15,0.9664772);
   data_mc_ratio__656->SetBinContent(16,0.9104852);
   data_mc_ratio__656->SetBinContent(17,0.8512273);
   data_mc_ratio__656->SetBinContent(18,0.7959174);
   data_mc_ratio__656->SetBinContent(19,0.8596749);
   data_mc_ratio__656->SetBinContent(20,0.960703);
   data_mc_ratio__656->SetBinContent(21,0.9144497);
   data_mc_ratio__656->SetBinContent(22,0.7751679);
   data_mc_ratio__656->SetBinContent(23,0.8627916);
   data_mc_ratio__656->SetBinContent(24,0.8248374);
   data_mc_ratio__656->SetBinContent(25,0.8266349);
   data_mc_ratio__656->SetBinContent(26,0.8562889);
   data_mc_ratio__656->SetBinContent(27,0.8537836);
   data_mc_ratio__656->SetBinContent(28,0.8890246);
   data_mc_ratio__656->SetBinContent(29,0.8445928);
   data_mc_ratio__656->SetBinContent(30,0.8583073);
   data_mc_ratio__656->SetBinError(1,0.04099623);
   data_mc_ratio__656->SetBinError(2,0.03709669);
   data_mc_ratio__656->SetBinError(3,0.03879136);
   data_mc_ratio__656->SetBinError(4,0.03608543);
   data_mc_ratio__656->SetBinError(5,0.04046983);
   data_mc_ratio__656->SetBinError(6,0.03821894);
   data_mc_ratio__656->SetBinError(7,0.03624387);
   data_mc_ratio__656->SetBinError(8,0.03738411);
   data_mc_ratio__656->SetBinError(9,0.03863689);
   data_mc_ratio__656->SetBinError(10,0.0330051);
   data_mc_ratio__656->SetBinError(11,0.03410629);
   data_mc_ratio__656->SetBinError(12,0.03131106);
   data_mc_ratio__656->SetBinError(13,0.03320106);
   data_mc_ratio__656->SetBinError(14,0.03308507);
   data_mc_ratio__656->SetBinError(15,0.03342631);
   data_mc_ratio__656->SetBinError(16,0.03291866);
   data_mc_ratio__656->SetBinError(17,0.02989063);
   data_mc_ratio__656->SetBinError(18,0.02733191);
   data_mc_ratio__656->SetBinError(19,0.02840446);
   data_mc_ratio__656->SetBinError(20,0.03054858);
   data_mc_ratio__656->SetBinError(21,0.02885978);
   data_mc_ratio__656->SetBinError(22,0.02488914);
   data_mc_ratio__656->SetBinError(23,0.02692283);
   data_mc_ratio__656->SetBinError(24,0.02600575);
   data_mc_ratio__656->SetBinError(25,0.02547414);
   data_mc_ratio__656->SetBinError(26,0.02673293);
   data_mc_ratio__656->SetBinError(27,0.02697205);
   data_mc_ratio__656->SetBinError(28,0.02800164);
   data_mc_ratio__656->SetBinError(29,0.02677539);
   data_mc_ratio__656->SetBinError(30,0.02774513);
   data_mc_ratio__656->SetMinimum(0.4);
   data_mc_ratio__656->SetMaximum(1.6);
   data_mc_ratio__656->SetEntries(7355.923);
   data_mc_ratio__656->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__656->SetLineColor(ci);
   data_mc_ratio__656->SetLineWidth(2);
   data_mc_ratio__656->SetMarkerStyle(20);
   data_mc_ratio__656->SetMarkerSize(1.2);
   data_mc_ratio__656->GetXaxis()->SetTitle("dPhi_{Zb1}");
   data_mc_ratio__656->GetXaxis()->SetRange(1,31);
   data_mc_ratio__656->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__656->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__656->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__656->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__656->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__656->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__656->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__656->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__656->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__656->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__656->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__656->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__656->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__656->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__656->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__656->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__656->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1656[30] = {
   0.05235988,
   0.1570796,
   0.2617994,
   0.3665191,
   0.4712389,
   0.5759587,
   0.6806784,
   0.7853982,
   0.8901179,
   0.9948377,
   1.099557,
   1.204277,
   1.308997,
   1.413717,
   1.518436,
   1.623156,
   1.727876,
   1.832596,
   1.937315,
   2.042035,
   2.146755,
   2.251475,
   2.356194,
   2.460914,
   2.565634,
   2.670354,
   2.775074,
   2.879793,
   2.984513,
   3.089233};
   Double_t Graph_from_mc_statistical_error_fy1656[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1656[30] = {
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988};
   Double_t Graph_from_mc_statistical_error_fey1656[30] = {
   0.06328968,
   0.05488544,
   0.06099629,
   0.05845868,
   0.05985405,
   0.06068619,
   0.05427289,
   0.09687126,
   0.06079968,
   0.05209523,
   0.05399384,
   0.05124303,
   0.0515975,
   0.04769741,
   0.0486595,
   0.0492854,
   0.04521181,
   0.04359285,
   0.04164257,
   0.04408274,
   0.04338311,
   0.03789341,
   0.04230785,
   0.04111349,
   0.03792071,
   0.03903388,
   0.04278066,
   0.04041872,
   0.03780644,
   0.04070845};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1656,Graph_from_mc_statistical_error_fy1656,Graph_from_mc_statistical_error_fex1656,Graph_from_mc_statistical_error_fey1656);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1656 = new TH1F("Graph_Graph_from_mc_statistical_error1656","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1656->SetMinimum(0.8837545);
   Graph_Graph_from_mc_statistical_error1656->SetMaximum(1.116246);
   Graph_Graph_from_mc_statistical_error1656->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1656->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1656->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1656->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1656->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1656->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1656->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1656->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1656->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1656->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1656->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1656->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1656->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1656->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1656->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1656->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1656);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->Modified();
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo->SetSelected(dPhi_Zb1_Z_2bjet_Zmm_All_amcnlo);
}

void A_Z2b_Z_2bjet_Zmm_All_amcnlo()
{
//=========Macro generated from canvas: A_Z2b_Z_2bjet_Zmm_All_amcnlo/A_Z2b_Z_2bjet_Zmm_All_amcnlo
//=========  (Thu Jan 14 10:43:06 2021) by ROOT version 6.14/09
   TCanvas *A_Z2b_Z_2bjet_Zmm_All_amcnlo = new TCanvas("A_Z2b_Z_2bjet_Zmm_All_amcnlo", "A_Z2b_Z_2bjet_Zmm_All_amcnlo",0,0,600,600);
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->SetHighLightColor(2);
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->Range(0,0,1,1);
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->SetFillColor(0);
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->SetFillStyle(4000);
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->SetBorderMode(0);
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->SetBorderSize(2);
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->SetFrameFillStyle(1000);
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-8.505515,1.052419,8507.009);
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
   st->SetMaximum(7290.912);
   
   TH1F *st_stack_320 = new TH1F("st_stack_320","",25,0,1);
   st_stack_320->SetMinimum(0.01);
   st_stack_320->SetMaximum(7655.458);
   st_stack_320->SetDirectory(0);
   st_stack_320->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_320->SetLineColor(ci);
   st_stack_320->GetXaxis()->SetRange(1,25);
   st_stack_320->GetXaxis()->SetLabelFont(42);
   st_stack_320->GetXaxis()->SetLabelSize(0.035);
   st_stack_320->GetXaxis()->SetTitleSize(0.035);
   st_stack_320->GetXaxis()->SetTitleFont(42);
   st_stack_320->GetYaxis()->SetTitle("Events/0.04");
   st_stack_320->GetYaxis()->SetLabelFont(42);
   st_stack_320->GetYaxis()->SetLabelSize(0.05);
   st_stack_320->GetYaxis()->SetTitleSize(0.057);
   st_stack_320->GetYaxis()->SetTitleOffset(1.2);
   st_stack_320->GetYaxis()->SetTitleFont(42);
   st_stack_320->GetZaxis()->SetLabelFont(42);
   st_stack_320->GetZaxis()->SetLabelSize(0.035);
   st_stack_320->GetZaxis()->SetTitleSize(0.035);
   st_stack_320->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_320);
   
   
   TH1D *Zmm_2bjet_A_Z2b_all_stack_1 = new TH1D("Zmm_2bjet_A_Z2b_all_stack_1","",25,0,1);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(1,30.41898);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(2,29.67388);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(3,19.25871);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(4,17.39698);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(5,20.94348);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(6,15.01109);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(7,10.46316);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(8,10.32162);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(9,9.615715);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(10,6.832431);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(11,5.485662);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(12,4.448671);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(13,1.858569);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(14,4.586545);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(15,2.320537);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(16,2.543023);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(17,0.822498);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(18,2.886413);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(19,2.275459);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(20,1.508272);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(21,0.2307776);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(22,0.4575532);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinContent(23,0.1382261);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(1,2.729239);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(2,2.76082);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(3,2.143115);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(4,2.207322);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(5,2.257517);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(6,1.976989);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(7,1.555208);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(8,1.620655);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(9,1.532696);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(10,1.234325);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(11,1.123152);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(12,1.03796);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(13,0.6340988);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(14,1.051396);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(15,0.7313578);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(16,0.7502096);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(17,0.4335685);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(18,1.198833);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(19,0.7230857);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(20,0.6426569);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(21,0.211636);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(22,0.3300039);
   Zmm_2bjet_A_Z2b_all_stack_1->SetBinError(23,0.1382261);
   Zmm_2bjet_A_Z2b_all_stack_1->SetEntries(971);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_A_Z2b_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_all_stack_1->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_all_stack_1,"");
   
   TH1D *Zmm_2bjet_A_Z2b_all_stack_2 = new TH1D("Zmm_2bjet_A_Z2b_all_stack_2","",25,0,1);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(1,79.84271);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(2,80.40737);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(3,61.73041);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(4,54.47268);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(5,39.96122);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(6,24.81052);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(7,31.13692);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(8,18.63469);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(9,11.71362);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(10,12.42475);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(11,8.026935);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(12,8.100276);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(13,5.359623);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(14,4.905681);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(15,4.039546);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(16,1.037625);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(17,2.425402);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(18,1.338802);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(19,0.9723421);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(20,0.848641);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(22,0.9916531);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(23,0.4804393);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(24,1.09715);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinContent(25,0.3935548);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(1,5.759763);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(2,5.955792);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(3,5.126263);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(4,4.733973);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(5,4.018076);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(6,3.146924);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(7,4.661267);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(8,2.81874);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(9,2.084728);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(10,2.206442);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(11,1.786734);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(12,1.96311);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(13,1.604766);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(14,1.536218);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(15,1.313024);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(16,0.7619521);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(17,0.9553658);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(18,0.6952781);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(19,0.5751503);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(20,0.613619);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(22,0.5756768);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(23,0.4804393);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(24,0.7741032);
   Zmm_2bjet_A_Z2b_all_stack_2->SetBinError(25,0.3935548);
   Zmm_2bjet_A_Z2b_all_stack_2->SetEntries(1245);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_A_Z2b_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_all_stack_2->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_all_stack_2,"");
   
   TH1D *Zmm_2bjet_A_Z2b_all_stack_3 = new TH1D("Zmm_2bjet_A_Z2b_all_stack_3","",25,0,1);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(1,1030.261);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(2,1003.028);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(3,898.9572);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(4,794.9177);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(5,705.873);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(6,599.6687);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(7,510.8883);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(8,454.9348);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(9,367.4467);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(10,310.6668);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(11,264.8683);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(12,212.6288);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(13,179.2782);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(14,142.6137);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(15,120.3558);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(16,100.4273);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(17,81.49027);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(18,66.32072);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(19,57.52439);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(20,37.14415);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(21,34.54094);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(22,25.77752);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(23,17.76418);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(24,9.014565);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinContent(25,4.203546);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(1,14.38576);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(2,14.2648);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(3,13.40615);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(4,12.54018);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(5,11.965);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(6,10.98462);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(7,10.12776);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(8,9.676381);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(9,8.547672);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(10,7.774181);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(11,7.307216);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(12,6.465558);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(13,6.040276);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(14,5.353811);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(15,4.874255);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(16,4.471642);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(17,3.9634);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(18,3.559469);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(19,3.538711);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(20,2.70851);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(21,2.683102);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(22,2.443345);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(23,1.883367);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(24,1.321914);
   Zmm_2bjet_A_Z2b_all_stack_3->SetBinError(25,1.151917);
   Zmm_2bjet_A_Z2b_all_stack_3->SetEntries(64896);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_A_Z2b_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_all_stack_3->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_all_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_A_Z2b_all_stack_4 = new TH1D("Zmm_2bjet_XX_A_Z2b_all_stack_4","",25,0,1);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(1,53.43359);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(2,78.82671);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(3,59.33241);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(4,50.63376);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(5,32.0625);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(6,24.03688);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(7,9.122825);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(8,18.47507);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(9,16.31371);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(10,3.368777);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(11,3.987974);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(12,-0.3922553);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(13,12.63121);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(14,2.184075);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(15,5.767545);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(16,0.4207668);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(17,-0.09437002);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(18,1.201837);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(19,1.506777);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(20,1.550318);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(21,0.3943018);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(22,4.428808);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(1,27.02796);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(2,22.24624);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(3,24.31949);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(4,20.50376);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(5,13.70378);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(6,11.90021);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(7,8.21313);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(8,5.97883);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(9,11.33406);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(10,2.995987);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(11,4.137273);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(12,1.562824);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(13,8.14863);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(14,3.257573);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(15,3.442187);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(16,1.670367);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(17,0.7435582);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(18,1.201837);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(19,1.113269);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(20,1.550318);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(21,0.5193931);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetBinError(22,3.525753);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetEntries(413);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_A_Z2b_all_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_A_Z2b_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_A_Z2b_all_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_A_Z2b_all_stack_5 = new TH1D("Zmm_2bjet_bX_A_Z2b_all_stack_5","",25,0,1);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(1,34.09859);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(2,59.07876);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(3,48.54431);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(4,37.20657);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(5,20.30986);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(6,28.71393);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(7,21.85145);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(8,31.82641);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(9,1.451923);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(10,9.487584);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(11,7.142175);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(12,2.763876);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(13,1.444054);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(14,11.9107);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(15,0.8100874);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(16,10.20034);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(17,-0.1269117);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(18,2.422838);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(19,-1.156148);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(20,4.766228);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(21,-0.005763237);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(22,3.323786);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(23,1.576339);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(24,2.004232);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(1,13.38926);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(2,10.64348);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(3,12.08705);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(4,9.728569);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(5,9.183279);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(6,9.158124);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(7,8.020962);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(8,7.843968);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(9,6.468526);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(10,5.818547);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(11,5.493403);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(12,4.871995);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(13,3.834712);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(14,4.499155);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(15,3.766465);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(16,4.05961);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(17,3.636773);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(18,1.717308);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(19,2.306013);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(20,3.120422);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(21,1.306972);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(22,3.095551);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(23,1.260812);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetBinError(24,1.219224);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetEntries(1366);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_A_Z2b_all_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_A_Z2b_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_A_Z2b_all_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_A_Z2b_all_stack_6 = new TH1D("Zmm_2bjet_bb_A_Z2b_all_stack_6","",25,0,1);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(1,2781.946);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(2,2626.165);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(3,2198.616);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(4,1685.895);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(5,1458.409);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(6,1170.452);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(7,907.978);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(8,671.4653);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(9,710.7572);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(10,514.4942);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(11,454.7547);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(12,377.0109);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(13,408.4304);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(14,264.1629);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(15,158.8565);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(16,200.5011);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(17,145.2805);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(18,136.6593);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(19,95.59711);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(20,111.5936);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(21,86.1866);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(22,69.17098);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(23,35.98338);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(24,21.87125);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(25,4.524145);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(1,84.95516);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(2,82.73649);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(3,77.25086);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(4,69.76407);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(5,64.58282);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(6,55.49625);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(7,50.83779);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(8,46.3355);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(9,41.45667);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(10,37.21803);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(11,33.92097);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(12,32.36424);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(13,29.73076);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(14,26.62828);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(15,53.47629);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(16,21.57662);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(17,20.56208);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(18,17.78001);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(19,16.11429);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(20,16.20933);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(21,12.61917);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(22,11.45305);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(23,9.167212);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(24,6.636186);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetBinError(25,3.663961);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetEntries(67424);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_A_Z2b_all_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_A_Z2b_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_A_Z2b_all_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_A_Z2b_all__639 = new TH1D("Zmm_2bjet_A_Z2b_all__639","",25,0,1);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(1,3515);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(2,3135);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(3,2888);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(4,2337);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(5,1906);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(6,1597);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(7,1315);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(8,1058);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(9,968);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(10,719);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(11,653);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(12,498);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(13,431);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(14,365);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(15,287);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(16,275);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(17,220);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(18,177);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(19,138);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(20,112);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(21,84);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(22,56);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(23,42);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(24,27);
   Zmm_2bjet_A_Z2b_all__639->SetBinContent(25,4);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(1,59.28744);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(2,55.99107);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(3,53.74012);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(4,48.34253);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(5,43.65776);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(6,39.96248);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(7,36.26293);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(8,32.52691);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(9,31.1127);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(10,26.81418);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(11,25.55386);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(12,22.31591);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(13,20.76054);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(14,19.10497);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(15,16.94107);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(16,16.58312);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(17,14.8324);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(18,13.30413);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(19,11.74734);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(20,10.58301);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(21,9.165151);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(22,7.483315);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(23,6.480741);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(24,5.196152);
   Zmm_2bjet_A_Z2b_all__639->SetBinError(25,2);
   Zmm_2bjet_A_Z2b_all__639->SetEntries(22807);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_all__639->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_all__639->SetLineWidth(2);
   Zmm_2bjet_A_Z2b_all__639->SetMarkerStyle(20);
   Zmm_2bjet_A_Z2b_all__639->SetMarkerSize(1.2);
   Zmm_2bjet_A_Z2b_all__639->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_all__639->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all__639->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all__639->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all__639->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all__639->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all__639->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all__639->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all__639->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_all__639->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all__639->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_all__639->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_all__639->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_all__639->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_all__639->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_A_Z2b_all_fx1639[25] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_A_Z2b_all_fy1639[25] = {
   4010.002,
   3877.179,
   3286.439,
   2640.523,
   2277.559,
   1862.693,
   1491.441,
   1205.658,
   1117.299,
   857.2746,
   744.2657,
   604.5603,
   609.002,
   430.3636,
   292.1501,
   315.1301,
   229.7974,
   210.8299,
   156.7199,
   157.4113,
   121.3469,
   104.1503,
   55.94257,
   33.98719,
   9.121246};
   Double_t Graph_from_Zmm_2bjet_bb_A_Z2b_all_fex1639[25] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_A_Z2b_all_fey1639[25] = {
   91.51358,
   87.75012,
   83.16144,
   74.60974,
   67.87834,
   58.64975,
   53.31969,
   48.46088,
   44.37022,
   38.6632,
   35.43693,
   33.47174,
   31.69362,
   27.78575,
   53.96078,
   22.49356,
   21.2929,
   18.30608,
   16.72135,
   16.82285,
   12.97941,
   12.63313,
   9.456449,
   6.918972,
   3.860882};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_bb_A_Z2b_all_fx1639,Graph_from_Zmm_2bjet_bb_A_Z2b_all_fy1639,Graph_from_Zmm_2bjet_bb_A_Z2b_all_fex1639,Graph_from_Zmm_2bjet_bb_A_Z2b_all_fey1639);
   gre->SetName("Graph_from_Zmm_2bjet_bb_A_Z2b_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639","",100,0,1.1);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639->SetMinimum(4.734328);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639->SetMaximum(4511.141);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_A_Z2b_all1639);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_A_Z2b_all","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_A_Z2b_all_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_A_Z2b_all_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_A_Z2b_all_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_A_Z2b_all","MC unc. (stat.)","fl");

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
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__640 = new TH1D("data_mc_ratio__640","",25,0,1);
   data_mc_ratio__640->SetBinContent(1,0.8765582);
   data_mc_ratio__640->SetBinContent(2,0.8085775);
   data_mc_ratio__640->SetBinContent(3,0.8787627);
   data_mc_ratio__640->SetBinContent(4,0.8850519);
   data_mc_ratio__640->SetBinContent(5,0.8368608);
   data_mc_ratio__640->SetBinContent(6,0.8573608);
   data_mc_ratio__640->SetBinContent(7,0.8816979);
   data_mc_ratio__640->SetBinContent(8,0.8775292);
   data_mc_ratio__640->SetBinContent(9,0.8663752);
   data_mc_ratio__640->SetBinContent(10,0.8387045);
   data_mc_ratio__640->SetBinContent(11,0.8773748);
   data_mc_ratio__640->SetBinContent(12,0.8237392);
   data_mc_ratio__640->SetBinContent(13,0.7077152);
   data_mc_ratio__640->SetBinContent(14,0.8481201);
   data_mc_ratio__640->SetBinContent(15,0.9823718);
   data_mc_ratio__640->SetBinContent(16,0.8726553);
   data_mc_ratio__640->SetBinContent(17,0.9573652);
   data_mc_ratio__640->SetBinContent(18,0.8395392);
   data_mc_ratio__640->SetBinContent(19,0.8805517);
   data_mc_ratio__640->SetBinContent(20,0.711512);
   data_mc_ratio__640->SetBinContent(21,0.6922306);
   data_mc_ratio__640->SetBinContent(22,0.5376845);
   data_mc_ratio__640->SetBinContent(23,0.75077);
   data_mc_ratio__640->SetBinContent(24,0.7944169);
   data_mc_ratio__640->SetBinContent(25,0.4385366);
   data_mc_ratio__640->SetBinError(1,0.01478489);
   data_mc_ratio__640->SetBinError(2,0.01444119);
   data_mc_ratio__640->SetBinError(3,0.01635208);
   data_mc_ratio__640->SetBinError(4,0.01830794);
   data_mc_ratio__640->SetBinError(5,0.01916866);
   data_mc_ratio__640->SetBinError(6,0.02145414);
   data_mc_ratio__640->SetBinError(7,0.02431403);
   data_mc_ratio__640->SetBinError(8,0.02697856);
   data_mc_ratio__640->SetBinError(9,0.02784635);
   data_mc_ratio__640->SetBinError(10,0.0312784);
   data_mc_ratio__640->SetBinError(11,0.03433433);
   data_mc_ratio__640->SetBinError(12,0.03691264);
   data_mc_ratio__640->SetBinError(13,0.03408944);
   data_mc_ratio__640->SetBinError(14,0.04439263);
   data_mc_ratio__640->SetBinError(15,0.05798757);
   data_mc_ratio__640->SetBinError(16,0.0526231);
   data_mc_ratio__640->SetBinError(17,0.06454555);
   data_mc_ratio__640->SetBinError(18,0.06310363);
   data_mc_ratio__640->SetBinError(19,0.07495754);
   data_mc_ratio__640->SetBinError(20,0.06723157);
   data_mc_ratio__640->SetBinError(21,0.07552855);
   data_mc_ratio__640->SetBinError(22,0.07185111);
   data_mc_ratio__640->SetBinError(23,0.1158463);
   data_mc_ratio__640->SetBinError(24,0.1528856);
   data_mc_ratio__640->SetBinError(25,0.2192683);
   data_mc_ratio__640->SetMinimum(0.4);
   data_mc_ratio__640->SetMaximum(1.6);
   data_mc_ratio__640->SetEntries(1385.631);
   data_mc_ratio__640->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__640->SetLineColor(ci);
   data_mc_ratio__640->SetLineWidth(2);
   data_mc_ratio__640->SetMarkerStyle(20);
   data_mc_ratio__640->SetMarkerSize(1.2);
   data_mc_ratio__640->GetXaxis()->SetTitle("A_{Zbb}");
   data_mc_ratio__640->GetXaxis()->SetRange(1,25);
   data_mc_ratio__640->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__640->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__640->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__640->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__640->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__640->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__640->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__640->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__640->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__640->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__640->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__640->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__640->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__640->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__640->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__640->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__640->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1640[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1640[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1640[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1640[25] = {
   0.02282133,
   0.02263247,
   0.02530442,
   0.02825567,
   0.02980311,
   0.03148654,
   0.03575046,
   0.04019456,
   0.03971204,
   0.04510014,
   0.04761328,
   0.05536543,
   0.0520419,
   0.06456344,
   0.1847022,
   0.07137864,
   0.09265945,
   0.08682867,
   0.1066958,
   0.106872,
   0.1069613,
   0.1212971,
   0.1690385,
   0.2035758,
   0.4232845};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1640,Graph_from_mc_statistical_error_fy1640,Graph_from_mc_statistical_error_fex1640,Graph_from_mc_statistical_error_fey1640);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1640 = new TH1F("Graph_Graph_from_mc_statistical_error1640","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1640->SetMinimum(0.4920586);
   Graph_Graph_from_mc_statistical_error1640->SetMaximum(1.507941);
   Graph_Graph_from_mc_statistical_error1640->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1640->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1640->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1640->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1640->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1640->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1640->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1640->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1640->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1640->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1640->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1640->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1640->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1640->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1640->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1640->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1640);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->cd();
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->Modified();
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->cd();
   A_Z2b_Z_2bjet_Zmm_All_amcnlo->SetSelected(A_Z2b_Z_2bjet_Zmm_All_amcnlo);
}

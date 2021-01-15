void dPhi_2b_Z_2bjet_Zmm_16_amcnlo()
{
//=========Macro generated from canvas: dPhi_2b_Z_2bjet_Zmm_16_amcnlo/dPhi_2b_Z_2bjet_Zmm_16_amcnlo
//=========  (Thu Jan 14 10:43:05 2021) by ROOT version 6.14/09
   TCanvas *dPhi_2b_Z_2bjet_Zmm_16_amcnlo = new TCanvas("dPhi_2b_Z_2bjet_Zmm_16_amcnlo", "dPhi_2b_Z_2bjet_Zmm_16_amcnlo",0,0,600,600);
   dPhi_2b_Z_2bjet_Zmm_16_amcnlo->SetHighLightColor(2);
   dPhi_2b_Z_2bjet_Zmm_16_amcnlo->Range(0,0,1,1);
   dPhi_2b_Z_2bjet_Zmm_16_amcnlo->SetFillColor(0);
   dPhi_2b_Z_2bjet_Zmm_16_amcnlo->SetFillStyle(4000);
   dPhi_2b_Z_2bjet_Zmm_16_amcnlo->SetBorderMode(0);
   dPhi_2b_Z_2bjet_Zmm_16_amcnlo->SetBorderSize(2);
   dPhi_2b_Z_2bjet_Zmm_16_amcnlo->SetFrameFillStyle(1000);
   dPhi_2b_Z_2bjet_Zmm_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4813718,-1.029716,3.306273,1038.686);
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
   st->SetMaximum(890.2046);
   Double_t xAxis37[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1F *st_stack_313 = new TH1F("st_stack_313","",31, xAxis37);
   st_stack_313->SetMinimum(0.01);
   st_stack_313->SetMaximum(934.7148);
   st_stack_313->SetDirectory(0);
   st_stack_313->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_313->SetLineColor(ci);
   st_stack_313->GetXaxis()->SetRange(1,31);
   st_stack_313->GetXaxis()->SetLabelFont(42);
   st_stack_313->GetXaxis()->SetLabelSize(0.035);
   st_stack_313->GetXaxis()->SetTitleSize(0.035);
   st_stack_313->GetXaxis()->SetTitleFont(42);
   st_stack_313->GetYaxis()->SetTitle("Events/0.10000000149");
   st_stack_313->GetYaxis()->SetLabelFont(42);
   st_stack_313->GetYaxis()->SetLabelSize(0.05);
   st_stack_313->GetYaxis()->SetTitleSize(0.057);
   st_stack_313->GetYaxis()->SetTitleOffset(1.2);
   st_stack_313->GetYaxis()->SetTitleFont(42);
   st_stack_313->GetZaxis()->SetLabelFont(42);
   st_stack_313->GetZaxis()->SetLabelSize(0.035);
   st_stack_313->GetZaxis()->SetTitleSize(0.035);
   st_stack_313->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_313);
   
   Double_t xAxis38[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_dPhi_2b_stack_1 = new TH1D("Zmm_2bjet_dPhi_2b_stack_1","",31, xAxis38);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(1,0.7688227);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(2,1.137832);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(3,0.5854489);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(4,0.6031901);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(5,1.157217);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(6,0.5984639);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(7,1.583105);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(8,1.374123);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(10,0.5665009);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(11,1.367042);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(12,0.665638);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(13,1.31175);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(14,0.6725428);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(15,1.014679);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(16,1.184594);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(17,1.035701);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(18,0.9773253);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(19,2.56263);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(20,0.8551558);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(21,0.5630056);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(22,1.401466);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(23,1.138254);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(24,2.3554);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(25,2.099304);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(26,2.737047);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(27,1.40714);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(28,2.083302);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(29,1.845432);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(30,2.304542);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(31,2.078889);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(1,0.3845263);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(2,0.4663613);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(3,0.338946);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(4,0.3485715);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(5,0.4725823);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(6,0.3462599);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(7,0.5576673);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(8,0.5199456);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(10,0.3285191);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(11,0.5173678);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(12,0.3307766);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(13,0.5009884);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(14,0.3427446);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(15,0.4543365);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(16,0.4573094);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(17,0.4300424);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(18,0.4377381);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(19,0.6997219);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(20,0.376095);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(21,0.3257603);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(22,0.5007793);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(23,0.4587316);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(24,0.6699419);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(25,0.639671);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(26,0.7334189);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(27,0.4975661);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(28,0.6326675);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(29,0.586626);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(30,0.6691728);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(31,0.6266873);
   Zmm_2bjet_dPhi_2b_stack_1->SetEntries(230);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_dPhi_2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_2b_stack_1->SetLineColor(ci);
   Zmm_2bjet_dPhi_2b_stack_1->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_dPhi_2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_2b_stack_1,"");
   Double_t xAxis39[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_dPhi_2b_stack_2 = new TH1D("Zmm_2bjet_dPhi_2b_stack_2","",31, xAxis39);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(1,0.71136);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(2,1.430443);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(3,0.6413681);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(4,2.609364);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(5,2.653814);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(6,1.015112);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(7,2.729826);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(8,3.554067);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(9,3.109125);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(10,2.048501);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(11,3.967767);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(12,2.987617);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(13,4.575277);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(14,3.205004);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(15,3.219864);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(16,2.852482);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(17,3.512281);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(18,2.829942);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(19,1.754066);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(20,2.582252);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(21,3.753427);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(22,4.561306);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(23,4.350641);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(24,3.711328);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(25,3.598139);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(26,3.647671);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(27,4.459457);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(28,4.069945);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(29,4.676898);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(30,3.767182);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(31,6.030766);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(1,0.4558827);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(2,0.6414774);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(3,0.4501335);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(4,0.8736067);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(5,0.8973821);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(6,0.5699498);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(7,0.9185434);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(8,1.017494);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(9,0.9856841);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(10,0.8331486);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(11,1.081463);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(12,0.928934);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(13,1.138397);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(14,0.9704155);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(15,0.9723876);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(16,0.9046933);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(17,1.00749);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(18,0.9563761);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(19,0.7089834);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(20,0.8613516);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(21,1.042224);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(22,1.146434);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(23,1.126016);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(24,1.024934);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(25,1.024011);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(26,1.005499);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(27,1.134868);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(28,1.085332);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(29,1.16017);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(30,1.066543);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(31,1.331136);
   Zmm_2bjet_dPhi_2b_stack_2->SetEntries(357);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dPhi_2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_2b_stack_2->SetLineColor(ci);
   Zmm_2bjet_dPhi_2b_stack_2->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_dPhi_2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_2b_stack_2,"");
   Double_t xAxis40[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_dPhi_2b_stack_3 = new TH1D("Zmm_2bjet_dPhi_2b_stack_3","",31, xAxis40);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(1,22.40268);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(2,21.83713);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(3,19.66914);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(4,28.66664);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(5,24.60245);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(6,27.69668);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(7,35.22954);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(8,33.1326);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(9,30.2001);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(10,32.8837);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(11,33.60337);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(12,36.75172);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(13,36.2942);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(14,37.55517);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(15,44.51402);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(16,47.29871);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(17,49.81969);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(18,55.45136);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(19,56.21118);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(20,64.67587);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(21,65.40422);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(22,70.58694);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(23,74.19707);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(24,79.77038);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(25,90.52923);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(26,91.09568);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(27,100.7462);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(28,104.0882);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(29,100.1543);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(30,100.2708);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(31,157.5286);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(1,2.051749);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(2,2.029246);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(3,1.92443);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(4,2.335114);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(5,2.160023);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(6,2.294701);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(7,2.588427);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(8,2.501046);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(9,2.397099);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(10,2.506132);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(11,2.526912);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(12,2.651178);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(13,2.610036);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(14,2.682011);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(15,2.917483);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(16,2.991592);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(17,3.070765);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(18,3.2481);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(19,3.278171);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(20,3.509924);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(21,3.544143);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(22,3.662886);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(23,3.767908);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(24,3.920836);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(25,4.160275);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(26,4.187208);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(27,4.413397);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(28,4.485123);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(29,4.408351);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(30,4.395889);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(31,5.519966);
   Zmm_2bjet_dPhi_2b_stack_3->SetEntries(9796);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dPhi_2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_2b_stack_3->SetLineColor(ci);
   Zmm_2bjet_dPhi_2b_stack_3->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_dPhi_2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_2b_stack_3,"");
   Double_t xAxis41[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_XX_dPhi_2b_stack_4 = new TH1D("Zmm_2bjet_XX_dPhi_2b_stack_4","",31, xAxis41);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(1,-0.9623299);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(2,7.733818);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(3,0.2333002);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(4,3.515275);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(5,-1.982481);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(6,0.5545615);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(7,5.59469);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(8,2.9962);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(9,2.657898);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(10,-0.4448861);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(11,0.5303977);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(12,0.5201023);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(13,0.01477548);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(14,0.7959052);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(15,0.4514545);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(16,2.567517);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(17,1.724689);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(18,0.01697628);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(19,1.160415);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(20,6.023357);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(21,2.940825);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(22,3.513445);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(23,1.087297);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(24,2.469523);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(25,2.638154);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(26,3.159299);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(27,2.921893);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(28,2.599648);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(29,14.9768);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(30,8.779006);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(31,11.4133);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(1,0.9682218);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(2,4.215099);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(3,0.8544038);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(4,2.70602);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(5,1.200099);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(6,0.4448784);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(7,3.625424);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(8,2.894018);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(9,1.161148);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(10,0.8384505);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(11,0.8584378);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(12,0.8960949);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(13,0.6718318);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(14,1.132812);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(15,0.8489442);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(16,2.567517);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(17,0.9965365);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(18,0.6892134);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(19,0.7764951);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(20,4.30742);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(21,2.866015);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(22,1.648677);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(23,3.844854);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(24,2.975069);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(25,2.765915);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(26,1.602508);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(27,3.60498);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(28,1.706876);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(29,5.765286);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(30,4.63575);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(31,5.300445);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetEntries(188);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_dPhi_2b_stack_4,"");
   Double_t xAxis42[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_bX_dPhi_2b_stack_5 = new TH1D("Zmm_2bjet_bX_dPhi_2b_stack_5","",31, xAxis42);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(1,-0.3006782);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(2,3.536165);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(3,4.645414);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(4,3.202903);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(5,0.585051);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(6,2.027774);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(7,1.37957);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(8,6.383572);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(9,0.7436226);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(10,2.554648);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(11,0.4012371);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(12,-0.6224406);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(13,0.3250196);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(14,2.536593);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(15,0.299434);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(16,6.394154);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(17,1.430556);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(18,1.225198);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(19,3.245343);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(20,6.166396);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(21,1.609783);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(22,3.067226);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(23,4.301212);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(24,5.590223);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(25,0.9550395);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(26,1.164598);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(27,5.414869);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(28,2.553864);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(29,6.266582);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(30,3.842248);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(31,8.96339);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(1,1.627018);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(2,2.093628);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(3,1.787598);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(4,2.036066);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(5,1.684436);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(6,1.768844);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(7,1.812684);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(8,1.902951);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(9,1.534302);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(10,1.486307);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(11,1.468402);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(12,1.494768);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(13,1.773167);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(14,2.171458);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(15,2.112009);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(16,2.631758);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(17,1.468562);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(18,2.157472);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(19,1.822337);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(20,2.084365);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(21,2.282645);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(22,3.006253);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(23,2.32612);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(24,2.542758);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(25,2.995143);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(26,1.949621);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(27,2.510326);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(28,3.207416);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(29,3.318873);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(30,3.224031);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(31,3.409912);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetEntries(637);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_dPhi_2b_stack_5,"");
   Double_t xAxis43[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_bb_dPhi_2b_stack_6 = new TH1D("Zmm_2bjet_bb_dPhi_2b_stack_6","",31, xAxis43);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(1,73.48097);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(2,81.68874);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(3,86.44734);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(4,93.60343);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(5,105.0573);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(6,102.3773);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(7,106.5034);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(8,94.76151);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(9,114.0609);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(10,106.3054);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(11,94.47734);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(12,94.52147);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(13,92.52114);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(14,110.2187);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(15,97.9562);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(16,107.1082);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(17,92.85289);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(18,134.0298);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(19,126.5997);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(20,130.829);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(21,151.8413);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(22,165.0446);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(23,182.1014);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(24,160.9145);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(25,200.0057);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(26,202.1169);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(27,185.6934);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(28,203.5793);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(29,225.0206);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(30,237.3694);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(31,303.5976);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(1,10.53645);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(2,10.95754);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(3,11.37499);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(4,11.98687);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(5,12.69337);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(6,12.72717);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(7,12.48665);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(8,11.88156);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(9,11.61714);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(10,12.28759);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(11,12.962);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(12,12.46319);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(13,12.57829);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(14,12.77867);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(15,13.11085);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(16,12.88884);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(17,12.90407);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(18,13.68071);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(19,13.98612);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(20,14.24116);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(21,15.17337);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(22,15.63301);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(23,15.9777);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(24,15.81286);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(25,16.48046);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(26,17.23155);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(27,17.79907);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(28,18.15496);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(29,18.77362);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(30,19.1565);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(31,22.49368);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetEntries(27989);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_dPhi_2b_stack_6,"");
   st->Draw("hist");
   Double_t xAxis44[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_dPhi_2b__625 = new TH1D("Zmm_2bjet_dPhi_2b__625","",31, xAxis44);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(1,86);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(2,100);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(3,100);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(4,115);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(5,140);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(6,138);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(7,140);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(8,119);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(9,133);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(10,124);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(11,115);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(12,120);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(13,126);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(14,144);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(15,147);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(16,135);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(17,138);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(18,167);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(19,155);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(20,168);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(21,167);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(22,205);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(23,206);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(24,235);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(25,245);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(26,268);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(27,252);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(28,243);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(29,297);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(30,308);
   Zmm_2bjet_dPhi_2b__625->SetBinContent(31,467);
   Zmm_2bjet_dPhi_2b__625->SetBinError(1,9.273618);
   Zmm_2bjet_dPhi_2b__625->SetBinError(2,10);
   Zmm_2bjet_dPhi_2b__625->SetBinError(3,10);
   Zmm_2bjet_dPhi_2b__625->SetBinError(4,10.72381);
   Zmm_2bjet_dPhi_2b__625->SetBinError(5,11.83216);
   Zmm_2bjet_dPhi_2b__625->SetBinError(6,11.74734);
   Zmm_2bjet_dPhi_2b__625->SetBinError(7,11.83216);
   Zmm_2bjet_dPhi_2b__625->SetBinError(8,10.90871);
   Zmm_2bjet_dPhi_2b__625->SetBinError(9,11.53256);
   Zmm_2bjet_dPhi_2b__625->SetBinError(10,11.13553);
   Zmm_2bjet_dPhi_2b__625->SetBinError(11,10.72381);
   Zmm_2bjet_dPhi_2b__625->SetBinError(12,10.95445);
   Zmm_2bjet_dPhi_2b__625->SetBinError(13,11.22497);
   Zmm_2bjet_dPhi_2b__625->SetBinError(14,12);
   Zmm_2bjet_dPhi_2b__625->SetBinError(15,12.12436);
   Zmm_2bjet_dPhi_2b__625->SetBinError(16,11.61895);
   Zmm_2bjet_dPhi_2b__625->SetBinError(17,11.74734);
   Zmm_2bjet_dPhi_2b__625->SetBinError(18,12.92285);
   Zmm_2bjet_dPhi_2b__625->SetBinError(19,12.4499);
   Zmm_2bjet_dPhi_2b__625->SetBinError(20,12.96148);
   Zmm_2bjet_dPhi_2b__625->SetBinError(21,12.92285);
   Zmm_2bjet_dPhi_2b__625->SetBinError(22,14.31782);
   Zmm_2bjet_dPhi_2b__625->SetBinError(23,14.3527);
   Zmm_2bjet_dPhi_2b__625->SetBinError(24,15.32971);
   Zmm_2bjet_dPhi_2b__625->SetBinError(25,15.65248);
   Zmm_2bjet_dPhi_2b__625->SetBinError(26,16.37071);
   Zmm_2bjet_dPhi_2b__625->SetBinError(27,15.87451);
   Zmm_2bjet_dPhi_2b__625->SetBinError(28,15.58846);
   Zmm_2bjet_dPhi_2b__625->SetBinError(29,17.23369);
   Zmm_2bjet_dPhi_2b__625->SetBinError(30,17.54993);
   Zmm_2bjet_dPhi_2b__625->SetBinError(31,21.61018);
   Zmm_2bjet_dPhi_2b__625->SetEntries(5503);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_2b__625->SetLineColor(ci);
   Zmm_2bjet_dPhi_2b__625->SetLineWidth(2);
   Zmm_2bjet_dPhi_2b__625->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_2b__625->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_2b__625->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_dPhi_2b__625->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b__625->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b__625->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b__625->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b__625->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b__625->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b__625->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b__625->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_2b__625->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b__625->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b__625->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b__625->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b__625->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b__625->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_2b_fx1625[31] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95,
   1.05,
   1.15,
   1.25,
   1.35,
   1.45,
   1.55,
   1.65,
   1.75,
   1.85,
   1.95,
   2.05,
   2.15,
   2.25,
   2.35,
   2.45,
   2.55,
   2.65,
   2.75,
   2.85,
   2.95,
   3.070796};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_2b_fy1625[31] = {
   96.10083,
   117.3641,
   112.222,
   132.2008,
   132.0734,
   134.2699,
   153.0202,
   142.2021,
   150.7716,
   143.9139,
   134.3472,
   134.8241,
   135.0422,
   154.9839,
   147.4557,
   167.4057,
   150.3758,
   194.5306,
   191.5333,
   211.1321,
   226.1126,
   248.1749,
   267.1759,
   254.8114,
   299.8255,
   303.9212,
   300.643,
   318.9743,
   352.9407,
   356.3332,
   489.6125};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_2b_fex1625[31] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05000001,
   0.04999998,
   0.05000001,
   0.04999998,
   0.05000001,
   0.05000001,
   0.05000001,
   0.04999995,
   0.05000001,
   0.05000001,
   0.05000001,
   0.05000001,
   0.04999995,
   0.05000001,
   0.05000001,
   0.04999995,
   0.05000007,
   0.04999995,
   0.05000007,
   0.04999995,
   0.04999995,
   0.05000007,
   0.04999995,
   0.05000007,
   0.04999995,
   0.07079637};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_2b_fey1625[31] = {
   10.91635,
   12.1229,
   11.71908,
   12.70789,
   13.08028,
   13.07739,
   13.42388,
   12.67789,
   12.05728,
   12.68778,
   13.36896,
   12.89843,
   13.04485,
   13.32462,
   13.66526,
   13.77017,
   13.42738,
   14.28104,
   14.53527,
   15.45678,
   16.04397,
   16.46598,
   17.0633,
   16.79986,
   17.5212,
   17.95486,
   18.89757,
   19.09183,
   20.44079,
   20.48817,
   24.04834};
   TGraphErrors *gre = new TGraphErrors(31,Graph_from_Zmm_2bjet_bb_dPhi_2b_fx1625,Graph_from_Zmm_2bjet_bb_dPhi_2b_fy1625,Graph_from_Zmm_2bjet_bb_dPhi_2b_fex1625,Graph_from_Zmm_2bjet_bb_dPhi_2b_fey1625);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dPhi_2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625->SetMinimum(42.33685);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625->SetMaximum(556.5085);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1625);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dPhi_2b","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_dPhi_2b_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_dPhi_2b_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_dPhi_2b_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_dPhi_2b","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dPhi_2b_Z_2bjet_Zmm_16_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.4813718,-0.2774193,3.306273,1.658065);
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
   Double_t xAxis45[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *data_mc_ratio__626 = new TH1D("data_mc_ratio__626","",31, xAxis45);
   data_mc_ratio__626->SetBinContent(1,0.8948934);
   data_mc_ratio__626->SetBinContent(2,0.8520491);
   data_mc_ratio__626->SetBinContent(3,0.8910908);
   data_mc_ratio__626->SetBinContent(4,0.8698889);
   data_mc_ratio__626->SetBinContent(5,1.060017);
   data_mc_ratio__626->SetBinContent(6,1.027781);
   data_mc_ratio__626->SetBinContent(7,0.914912);
   data_mc_ratio__626->SetBinContent(8,0.8368373);
   data_mc_ratio__626->SetBinContent(9,0.8821288);
   data_mc_ratio__626->SetBinContent(10,0.8616263);
   data_mc_ratio__626->SetBinContent(11,0.8559913);
   data_mc_ratio__626->SetBinContent(12,0.8900486);
   data_mc_ratio__626->SetBinContent(13,0.9330419);
   data_mc_ratio__626->SetBinContent(14,0.9291285);
   data_mc_ratio__626->SetBinContent(15,0.9969099);
   data_mc_ratio__626->SetBinContent(16,0.8064242);
   data_mc_ratio__626->SetBinContent(17,0.9177008);
   data_mc_ratio__626->SetBinContent(18,0.8584767);
   data_mc_ratio__626->SetBinContent(19,0.8092587);
   data_mc_ratio__626->SetBinContent(20,0.7957105);
   data_mc_ratio__626->SetBinContent(21,0.7385702);
   data_mc_ratio__626->SetBinContent(22,0.8260302);
   data_mc_ratio__626->SetBinContent(23,0.7710277);
   data_mc_ratio__626->SetBinContent(24,0.9222508);
   data_mc_ratio__626->SetBinContent(25,0.8171419);
   data_mc_ratio__626->SetBinContent(26,0.8818076);
   data_mc_ratio__626->SetBinContent(27,0.8382034);
   data_mc_ratio__626->SetBinContent(28,0.7618169);
   data_mc_ratio__626->SetBinContent(29,0.8415012);
   data_mc_ratio__626->SetBinContent(30,0.8643596);
   data_mc_ratio__626->SetBinContent(31,0.9538155);
   data_mc_ratio__626->SetBinError(1,0.09649884);
   data_mc_ratio__626->SetBinError(2,0.08520491);
   data_mc_ratio__626->SetBinError(3,0.08910908);
   data_mc_ratio__626->SetBinError(4,0.08111755);
   data_mc_ratio__626->SetBinError(5,0.08958778);
   data_mc_ratio__626->SetBinError(6,0.0874905);
   data_mc_ratio__626->SetBinError(7,0.07732418);
   data_mc_ratio__626->SetBinError(8,0.07671275);
   data_mc_ratio__626->SetBinError(9,0.07649026);
   data_mc_ratio__626->SetBinError(10,0.07737632);
   data_mc_ratio__626->SetBinError(11,0.0798216);
   data_mc_ratio__626->SetBinError(12,0.08124995);
   data_mc_ratio__626->SetBinError(13,0.08312198);
   data_mc_ratio__626->SetBinError(14,0.07742737);
   data_mc_ratio__626->SetBinError(15,0.08222374);
   data_mc_ratio__626->SetBinError(16,0.06940595);
   data_mc_ratio__626->SetBinError(17,0.07811988);
   data_mc_ratio__626->SetBinError(18,0.06643093);
   data_mc_ratio__626->SetBinError(19,0.06500122);
   data_mc_ratio__626->SetBinError(20,0.0613904);
   data_mc_ratio__626->SetBinError(21,0.05715228);
   data_mc_ratio__626->SetBinError(22,0.05769245);
   data_mc_ratio__626->SetBinError(23,0.05372004);
   data_mc_ratio__626->SetBinError(24,0.06016101);
   data_mc_ratio__626->SetBinError(25,0.05220528);
   data_mc_ratio__626->SetBinError(26,0.05386497);
   data_mc_ratio__626->SetBinError(27,0.05280185);
   data_mc_ratio__626->SetBinError(28,0.04887058);
   data_mc_ratio__626->SetBinError(29,0.04882885);
   data_mc_ratio__626->SetBinError(30,0.04925146);
   data_mc_ratio__626->SetBinError(31,0.04413732);
   data_mc_ratio__626->SetMinimum(0.4);
   data_mc_ratio__626->SetMaximum(1.6);
   data_mc_ratio__626->SetEntries(2272.473);
   data_mc_ratio__626->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__626->SetLineColor(ci);
   data_mc_ratio__626->SetLineWidth(2);
   data_mc_ratio__626->SetMarkerStyle(20);
   data_mc_ratio__626->SetMarkerSize(1.2);
   data_mc_ratio__626->GetXaxis()->SetTitle("dPhi_{bb}");
   data_mc_ratio__626->GetXaxis()->SetRange(1,31);
   data_mc_ratio__626->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__626->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__626->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__626->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__626->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__626->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__626->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__626->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__626->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__626->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__626->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__626->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__626->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__626->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__626->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__626->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__626->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1626[31] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95,
   1.05,
   1.15,
   1.25,
   1.35,
   1.45,
   1.55,
   1.65,
   1.75,
   1.85,
   1.95,
   2.05,
   2.15,
   2.25,
   2.35,
   2.45,
   2.55,
   2.65,
   2.75,
   2.85,
   2.95,
   3.070796};
   Double_t Graph_from_mc_statistical_error_fy1626[31] = {
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
   Double_t Graph_from_mc_statistical_error_fex1626[31] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05000001,
   0.04999998,
   0.05000001,
   0.04999998,
   0.05000001,
   0.05000001,
   0.05000001,
   0.04999995,
   0.05000001,
   0.05000001,
   0.05000001,
   0.05000001,
   0.04999995,
   0.05000001,
   0.05000001,
   0.04999995,
   0.05000007,
   0.04999995,
   0.05000007,
   0.04999995,
   0.04999995,
   0.05000007,
   0.04999995,
   0.05000007,
   0.04999995,
   0.07079637};
   Double_t Graph_from_mc_statistical_error_fey1626[31] = {
   0.1135927,
   0.1032931,
   0.1044276,
   0.09612569,
   0.09903795,
   0.09739628,
   0.08772622,
   0.08915402,
   0.07997045,
   0.08816227,
   0.09951053,
   0.09566857,
   0.09659835,
   0.08597416,
   0.09267368,
   0.08225632,
   0.08929213,
   0.0734128,
   0.07588899,
   0.07320907,
   0.07095567,
   0.06634826,
   0.06386542,
   0.06593058,
   0.05843799,
   0.05907736,
   0.06285717,
   0.05985382,
   0.05791565,
   0.05749723,
   0.04911708};
   gre = new TGraphErrors(31,Graph_from_mc_statistical_error_fx1626,Graph_from_mc_statistical_error_fy1626,Graph_from_mc_statistical_error_fex1626,Graph_from_mc_statistical_error_fey1626);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1626 = new TH1F("Graph_Graph_from_mc_statistical_error1626","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1626->SetMinimum(0.8636888);
   Graph_Graph_from_mc_statistical_error1626->SetMaximum(1.136311);
   Graph_Graph_from_mc_statistical_error1626->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1626->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1626->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1626->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1626->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1626->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1626->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1626->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1626->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1626->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1626->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1626->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1626->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1626->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1626->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1626->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1626);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.141593,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_2b_Z_2bjet_Zmm_16_amcnlo->cd();
   dPhi_2b_Z_2bjet_Zmm_16_amcnlo->Modified();
   dPhi_2b_Z_2bjet_Zmm_16_amcnlo->cd();
   dPhi_2b_Z_2bjet_Zmm_16_amcnlo->SetSelected(dPhi_2b_Z_2bjet_Zmm_16_amcnlo);
}

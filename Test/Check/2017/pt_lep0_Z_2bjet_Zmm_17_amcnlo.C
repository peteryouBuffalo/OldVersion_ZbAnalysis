void pt_lep0_Z_2bjet_Zmm_17_amcnlo()
{
//=========Macro generated from canvas: pt_lep0_Z_2bjet_Zmm_17_amcnlo/pt_lep0_Z_2bjet_Zmm_17_amcnlo
//=========  (Thu Jan 14 10:42:55 2021) by ROOT version 6.14/09
   TCanvas *pt_lep0_Z_2bjet_Zmm_17_amcnlo = new TCanvas("pt_lep0_Z_2bjet_Zmm_17_amcnlo", "pt_lep0_Z_2bjet_Zmm_17_amcnlo",0,0,600,600);
   pt_lep0_Z_2bjet_Zmm_17_amcnlo->SetHighLightColor(2);
   pt_lep0_Z_2bjet_Zmm_17_amcnlo->Range(0,0,1,1);
   pt_lep0_Z_2bjet_Zmm_17_amcnlo->SetFillColor(0);
   pt_lep0_Z_2bjet_Zmm_17_amcnlo->SetFillStyle(4000);
   pt_lep0_Z_2bjet_Zmm_17_amcnlo->SetBorderMode(0);
   pt_lep0_Z_2bjet_Zmm_17_amcnlo->SetBorderSize(2);
   pt_lep0_Z_2bjet_Zmm_17_amcnlo->SetFrameFillStyle(1000);
   pt_lep0_Z_2bjet_Zmm_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-1.89854,210.4839,1906.642);
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
   st->SetMaximum(1634.083);
   
   TH1F *st_stack_258 = new TH1F("st_stack_258","",40,0,200);
   st_stack_258->SetMinimum(0.01);
   st_stack_258->SetMaximum(1715.788);
   st_stack_258->SetDirectory(0);
   st_stack_258->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_258->SetLineColor(ci);
   st_stack_258->GetXaxis()->SetRange(1,40);
   st_stack_258->GetXaxis()->SetLabelFont(42);
   st_stack_258->GetXaxis()->SetLabelSize(0.035);
   st_stack_258->GetXaxis()->SetTitleSize(0.035);
   st_stack_258->GetXaxis()->SetTitleFont(42);
   st_stack_258->GetYaxis()->SetTitle("Events/5.0");
   st_stack_258->GetYaxis()->SetLabelFont(42);
   st_stack_258->GetYaxis()->SetLabelSize(0.05);
   st_stack_258->GetYaxis()->SetTitleSize(0.057);
   st_stack_258->GetYaxis()->SetTitleOffset(1.2);
   st_stack_258->GetYaxis()->SetTitleFont(42);
   st_stack_258->GetZaxis()->SetLabelFont(42);
   st_stack_258->GetZaxis()->SetLabelSize(0.035);
   st_stack_258->GetZaxis()->SetTitleSize(0.035);
   st_stack_258->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_258);
   
   
   TH1D *Zmm_2bjet_pt_lep0_stack_1 = new TH1D("Zmm_2bjet_pt_lep0_stack_1","",40,0,200);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(8,2.746808);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(9,4.170813);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(10,5.607443);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(11,5.557433);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(12,6.16203);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(13,4.663792);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(14,5.661246);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(15,3.064242);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(16,3.69408);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(17,3.281827);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(18,1.904728);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(19,2.384065);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(20,1.691873);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(21,1.367124);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(22,1.599659);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(23,1.096013);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(24,1.386387);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(26,0.2044596);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(27,0.9394565);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(28,0.8030402);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(29,0.0342037);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(31,0.7790356);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(32,0.1521732);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(35,0.1697208);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(37,0.1999497);
   Zmm_2bjet_pt_lep0_stack_1->SetBinContent(41,0.08047577);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(8,0.7358649);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(9,0.8829095);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(10,1.361711);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(11,1.05305);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(12,1.080635);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(13,0.9470029);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(14,1.214882);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(15,0.7577479);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(16,0.8725006);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(17,0.7729612);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(18,0.5932192);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(19,0.6766814);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(20,0.5997131);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(21,0.5253813);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(22,0.5481332);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(23,0.4518936);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(24,0.4953572);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(26,0.2044596);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(27,0.4263698);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(28,0.4111454);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(29,0.0342037);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(31,0.3925355);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(32,0.1521732);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(35,0.1697208);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(37,0.1999497);
   Zmm_2bjet_pt_lep0_stack_1->SetBinError(41,0.08047577);
   Zmm_2bjet_pt_lep0_stack_1->SetEntries(345);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_pt_lep0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep0_stack_1->SetLineColor(ci);
   Zmm_2bjet_pt_lep0_stack_1->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep0_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep0_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep0_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep0_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep0_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep0_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep0_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep0_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep0_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep0_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep0_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep0_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep0_stack_1,"");
   
   TH1D *Zmm_2bjet_pt_lep0_stack_2 = new TH1D("Zmm_2bjet_pt_lep0_stack_2","",40,0,200);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(8,3.716458);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(9,8.368302);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(10,18.77091);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(11,17.62361);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(12,13.81197);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(13,11.13995);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(14,10.31311);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(15,6.721014);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(16,10.87409);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(17,3.35484);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(18,3.831251);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(19,4.010931);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(20,2.660352);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(21,2.650692);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(22,2.080002);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(23,1.571466);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(24,3.304123);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(25,0.7292718);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(26,1.5111);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(27,3.280543);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(28,1.062678);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(29,0.5857133);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(30,0.7387795);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(32,0.2708722);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(33,0.8270274);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(35,0.04897975);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(36,0.5380637);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(40,0.3445642);
   Zmm_2bjet_pt_lep0_stack_2->SetBinContent(41,1.957727);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(8,1.095503);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(9,1.723066);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(10,2.657804);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(11,2.531649);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(12,2.175733);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(13,1.973044);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(14,1.890074);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(15,1.574684);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(16,1.94012);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(17,1.032646);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(18,1.07664);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(19,1.127586);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(20,0.9088646);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(21,0.9456239);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(22,0.8593473);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(23,0.7135738);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(24,1.03475);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(25,0.5156764);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(26,0.7261786);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(27,1.32408);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(28,0.5379417);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(29,0.4227945);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(30,0.5310949);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(32,0.2508018);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(33,0.5767051);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(35,0.04897975);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(36,0.4111456);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(40,0.3445642);
   Zmm_2bjet_pt_lep0_stack_2->SetBinError(41,0.8071595);
   Zmm_2bjet_pt_lep0_stack_2->SetEntries(434);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_pt_lep0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep0_stack_2->SetLineColor(ci);
   Zmm_2bjet_pt_lep0_stack_2->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep0_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep0_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep0_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep0_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep0_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep0_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep0_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep0_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep0_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep0_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep0_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep0_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep0_stack_2,"");
   
   TH1D *Zmm_2bjet_pt_lep0_stack_3 = new TH1D("Zmm_2bjet_pt_lep0_stack_3","",40,0,200);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(8,115.8919);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(9,200.1605);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(10,255.7414);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(11,275.487);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(12,299.5268);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(13,242.5119);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(14,220.1356);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(15,181.9202);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(16,132.0263);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(17,109.9817);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(18,79.80109);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(19,59.47411);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(20,45.70549);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(21,35.64627);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(22,27.91653);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(23,15.71993);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(24,12.85769);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(25,13.134);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(26,11.31341);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(27,7.44794);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(28,5.05304);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(29,4.951399);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(30,2.003967);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(31,1.463605);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(32,1.398992);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(33,1.291276);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(34,2.78651);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(35,0.244841);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(36,0.378153);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(37,0.3574239);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(38,0.7734954);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(39,0.4434384);
   Zmm_2bjet_pt_lep0_stack_3->SetBinContent(41,2.008072);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(8,6.622919);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(9,8.827848);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(10,9.953045);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(11,10.36687);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(12,10.78212);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(13,9.750568);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(14,9.249299);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(15,8.485107);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(16,7.180484);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(17,6.554581);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(18,5.52234);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(19,4.811571);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(20,4.221693);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(21,3.71019);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(22,3.271742);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(23,2.432925);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(24,2.223305);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(25,2.272971);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(26,2.10665);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(27,1.753203);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(28,1.357515);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(29,1.364271);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(30,0.9140467);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(31,0.7460875);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(32,0.7670091);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(33,0.6464965);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(34,1.059282);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(35,0.244841);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(36,0.378153);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(37,0.2953607);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(38,0.5469771);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(39,0.4434384);
   Zmm_2bjet_pt_lep0_stack_3->SetBinError(41,0.8877754);
   Zmm_2bjet_pt_lep0_stack_3->SetEntries(6946);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_pt_lep0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep0_stack_3->SetLineColor(ci);
   Zmm_2bjet_pt_lep0_stack_3->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep0_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep0_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep0_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep0_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep0_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep0_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep0_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep0_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep0_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep0_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep0_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep0_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep0_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_pt_lep0_stack_4 = new TH1D("Zmm_2bjet_XX_pt_lep0_stack_4","",40,0,200);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(8,1.706683);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(9,18.68078);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(10,12.7935);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(11,7.97797);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(12,3.332922);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(13,1.795125);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(14,0.5651934);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(15,2.206631);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(16,1.691269);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(17,0.0307879);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(18,0.3438347);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(19,-0.3560625);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(21,-0.1515842);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(22,1.84676);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(25,0.4747015);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(26,0.5562588);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(27,1.80636);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(32,-0.3449834);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(39,0.07709415);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinContent(40,0.9138898);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(8,5.436204);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(9,8.253482);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(10,7.465105);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(11,4.792975);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(12,2.390752);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(13,3.281922);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(14,2.148734);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(15,1.56654);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(16,1.699358);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(17,0.0307879);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(18,1.072723);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(19,1.213232);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(21,1.267154);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(22,1.540003);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(25,0.4747015);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(26,0.5562588);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(27,1.395259);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(32,0.3449834);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(39,0.07709415);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetBinError(40,0.9138898);
   Zmm_2bjet_XX_pt_lep0_stack_4->SetEntries(108);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_pt_lep0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_pt_lep0_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_pt_lep0_stack_4->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_XX_pt_lep0_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_pt_lep0_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_pt_lep0_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_pt_lep0_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_pt_lep0_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_pt_lep0_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_pt_lep0_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_pt_lep0_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_pt_lep0_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_pt_lep0_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_pt_lep0_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_pt_lep0_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_pt_lep0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_pt_lep0_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_pt_lep0_stack_5 = new TH1D("Zmm_2bjet_bX_pt_lep0_stack_5","",40,0,200);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(8,2.349452);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(9,2.51585);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(10,8.927878);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(11,12.44741);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(12,15.43516);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(13,2.788898);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(14,3.932046);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(15,5.869418);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(16,3.616704);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(17,5.944439);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(18,3.638326);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(19,-1.961717);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(20,2.007542);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(21,5.906732);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(22,4.167036);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(23,-2.493225);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(24,-0.9310395);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(25,-1.268975);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(26,3.45224);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(27,-0.6808015);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(28,0.7968806);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(29,0.8933972);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(30,1.566688);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(31,0.958387);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(32,-0.6758693);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(34,0.658313);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(35,-0.8926461);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(37,0.7066748);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(38,0.3635723);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(39,1.637214);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinContent(41,4.615251);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(8,3.127496);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(9,2.859352);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(10,5.545695);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(11,4.355329);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(12,4.803366);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(13,3.752368);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(14,3.595688);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(15,3.6556);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(16,3.919406);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(17,3.217416);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(18,2.566386);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(19,2.562642);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(20,1.806951);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(21,2.249176);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(22,2.12117);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(23,1.250712);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(24,1.717523);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(25,1.77806);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(26,2.156259);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(27,1.356128);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(28,1.499046);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(29,0.8933972);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(30,1.142756);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(31,0.958387);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(32,0.6758693);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(34,0.6502479);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(35,0.8926461);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(37,0.7066748);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(38,1.233287);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(39,1.204574);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetBinError(41,2.544593);
   Zmm_2bjet_bX_pt_lep0_stack_5->SetEntries(333);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_pt_lep0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_pt_lep0_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_pt_lep0_stack_5->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_bX_pt_lep0_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_pt_lep0_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_pt_lep0_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_pt_lep0_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_pt_lep0_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_pt_lep0_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_pt_lep0_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_pt_lep0_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_pt_lep0_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_pt_lep0_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_pt_lep0_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_pt_lep0_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_pt_lep0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_pt_lep0_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_pt_lep0_stack_6 = new TH1D("Zmm_2bjet_bb_pt_lep0_stack_6","",40,0,200);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(8,136.3491);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(9,267.9774);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(10,456.5435);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(11,579.6524);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(12,525.5533);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(13,463.033);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(14,433.5072);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(15,351.1481);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(16,258.6853);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(17,213.7046);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(18,187.7017);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(19,174.1376);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(20,131.4488);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(21,56.54663);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(22,92.69155);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(23,61.48614);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(24,60.26072);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(25,44.69855);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(26,49.00529);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(27,49.83165);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(28,23.57327);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(29,28.90723);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(30,30.43425);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(31,30.13456);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(32,19.11704);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(33,21.85701);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(34,10.77072);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(35,18.40505);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(36,13.63158);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(37,10.14296);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(38,6.995954);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(39,8.604554);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(40,2.999365);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinContent(41,44.49576);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(8,19.88909);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(9,26.53064);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(10,34.67847);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(11,37.43474);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(12,37.42865);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(13,33.61347);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(14,32.09958);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(15,29.83679);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(16,26.08843);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(17,23.86925);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(18,21.25186);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(19,20.15325);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(20,16.60863);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(21,14.71373);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(22,14.27021);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(23,12.44269);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(24,12.00999);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(25,11.16579);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(26,10.47066);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(27,9.226109);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(28,9.045033);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(29,7.661192);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(30,7.078016);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(31,6.703136);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(32,6.66787);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(33,5.748567);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(34,5.963584);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(35,5.471191);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(36,4.955142);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(37,5.049917);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(38,4.106811);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(39,3.709073);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(40,2.652193);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetBinError(41,10.18936);
   Zmm_2bjet_bb_pt_lep0_stack_6->SetEntries(17994);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_pt_lep0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_pt_lep0_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_pt_lep0_stack_6->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_bb_pt_lep0_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_pt_lep0_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_pt_lep0_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_pt_lep0_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_pt_lep0_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_pt_lep0_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_pt_lep0_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_pt_lep0_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_pt_lep0_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_pt_lep0_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_pt_lep0_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_pt_lep0_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_pt_lep0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_pt_lep0_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_pt_lep0__515 = new TH1D("Zmm_2bjet_pt_lep0__515","",40,0,200);
   Zmm_2bjet_pt_lep0__515->SetBinContent(8,239);
   Zmm_2bjet_pt_lep0__515->SetBinContent(9,459);
   Zmm_2bjet_pt_lep0__515->SetBinContent(10,690);
   Zmm_2bjet_pt_lep0__515->SetBinContent(11,761);
   Zmm_2bjet_pt_lep0__515->SetBinContent(12,731);
   Zmm_2bjet_pt_lep0__515->SetBinContent(13,576);
   Zmm_2bjet_pt_lep0__515->SetBinContent(14,564);
   Zmm_2bjet_pt_lep0__515->SetBinContent(15,459);
   Zmm_2bjet_pt_lep0__515->SetBinContent(16,358);
   Zmm_2bjet_pt_lep0__515->SetBinContent(17,266);
   Zmm_2bjet_pt_lep0__515->SetBinContent(18,255);
   Zmm_2bjet_pt_lep0__515->SetBinContent(19,180);
   Zmm_2bjet_pt_lep0__515->SetBinContent(20,159);
   Zmm_2bjet_pt_lep0__515->SetBinContent(21,135);
   Zmm_2bjet_pt_lep0__515->SetBinContent(22,102);
   Zmm_2bjet_pt_lep0__515->SetBinContent(23,92);
   Zmm_2bjet_pt_lep0__515->SetBinContent(24,60);
   Zmm_2bjet_pt_lep0__515->SetBinContent(25,65);
   Zmm_2bjet_pt_lep0__515->SetBinContent(26,57);
   Zmm_2bjet_pt_lep0__515->SetBinContent(27,44);
   Zmm_2bjet_pt_lep0__515->SetBinContent(28,47);
   Zmm_2bjet_pt_lep0__515->SetBinContent(29,25);
   Zmm_2bjet_pt_lep0__515->SetBinContent(30,30);
   Zmm_2bjet_pt_lep0__515->SetBinContent(31,24);
   Zmm_2bjet_pt_lep0__515->SetBinContent(32,22);
   Zmm_2bjet_pt_lep0__515->SetBinContent(33,15);
   Zmm_2bjet_pt_lep0__515->SetBinContent(34,12);
   Zmm_2bjet_pt_lep0__515->SetBinContent(35,15);
   Zmm_2bjet_pt_lep0__515->SetBinContent(36,7);
   Zmm_2bjet_pt_lep0__515->SetBinContent(37,12);
   Zmm_2bjet_pt_lep0__515->SetBinContent(38,8);
   Zmm_2bjet_pt_lep0__515->SetBinContent(39,9);
   Zmm_2bjet_pt_lep0__515->SetBinContent(40,2);
   Zmm_2bjet_pt_lep0__515->SetBinContent(41,67);
   Zmm_2bjet_pt_lep0__515->SetBinError(8,15.45962);
   Zmm_2bjet_pt_lep0__515->SetBinError(9,21.42429);
   Zmm_2bjet_pt_lep0__515->SetBinError(10,26.26785);
   Zmm_2bjet_pt_lep0__515->SetBinError(11,27.58623);
   Zmm_2bjet_pt_lep0__515->SetBinError(12,27.03701);
   Zmm_2bjet_pt_lep0__515->SetBinError(13,24);
   Zmm_2bjet_pt_lep0__515->SetBinError(14,23.74868);
   Zmm_2bjet_pt_lep0__515->SetBinError(15,21.42429);
   Zmm_2bjet_pt_lep0__515->SetBinError(16,18.92089);
   Zmm_2bjet_pt_lep0__515->SetBinError(17,16.30951);
   Zmm_2bjet_pt_lep0__515->SetBinError(18,15.96872);
   Zmm_2bjet_pt_lep0__515->SetBinError(19,13.41641);
   Zmm_2bjet_pt_lep0__515->SetBinError(20,12.60952);
   Zmm_2bjet_pt_lep0__515->SetBinError(21,11.61895);
   Zmm_2bjet_pt_lep0__515->SetBinError(22,10.0995);
   Zmm_2bjet_pt_lep0__515->SetBinError(23,9.591663);
   Zmm_2bjet_pt_lep0__515->SetBinError(24,7.745967);
   Zmm_2bjet_pt_lep0__515->SetBinError(25,8.062258);
   Zmm_2bjet_pt_lep0__515->SetBinError(26,7.549834);
   Zmm_2bjet_pt_lep0__515->SetBinError(27,6.63325);
   Zmm_2bjet_pt_lep0__515->SetBinError(28,6.855655);
   Zmm_2bjet_pt_lep0__515->SetBinError(29,5);
   Zmm_2bjet_pt_lep0__515->SetBinError(30,5.477226);
   Zmm_2bjet_pt_lep0__515->SetBinError(31,4.898979);
   Zmm_2bjet_pt_lep0__515->SetBinError(32,4.690416);
   Zmm_2bjet_pt_lep0__515->SetBinError(33,3.872983);
   Zmm_2bjet_pt_lep0__515->SetBinError(34,3.464102);
   Zmm_2bjet_pt_lep0__515->SetBinError(35,3.872983);
   Zmm_2bjet_pt_lep0__515->SetBinError(36,2.645751);
   Zmm_2bjet_pt_lep0__515->SetBinError(37,3.464102);
   Zmm_2bjet_pt_lep0__515->SetBinError(38,2.828427);
   Zmm_2bjet_pt_lep0__515->SetBinError(39,3);
   Zmm_2bjet_pt_lep0__515->SetBinError(40,1.414214);
   Zmm_2bjet_pt_lep0__515->SetBinError(41,8.185353);
   Zmm_2bjet_pt_lep0__515->SetEntries(6547);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep0__515->SetLineColor(ci);
   Zmm_2bjet_pt_lep0__515->SetLineWidth(2);
   Zmm_2bjet_pt_lep0__515->SetMarkerStyle(20);
   Zmm_2bjet_pt_lep0__515->SetMarkerSize(1.2);
   Zmm_2bjet_pt_lep0__515->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep0__515->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep0__515->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep0__515->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep0__515->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep0__515->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep0__515->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep0__515->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep0__515->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep0__515->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep0__515->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep0__515->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep0__515->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep0__515->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep0__515->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep0_fx1515[40] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep0_fy1515[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   262.7604,
   501.8736,
   758.3847,
   898.7459,
   863.8222,
   725.9327,
   674.1144,
   550.9297,
   410.5877,
   336.2983,
   277.2209,
   237.6889,
   183.514,
   101.9659,
   130.3015,
   77.38032,
   76.87788,
   57.76755,
   66.04276,
   62.62515,
   31.28891,
   35.37194,
   34.74369,
   33.33558,
   19.91822,
   23.97531,
   14.21554,
   17.97595,
   14.54779,
   11.40701,
   8.133022,
   10.7623,
   4.257819};
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep0_fex1515[40] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep0_fey1515[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   21.92063,
   29.35728,
   37.37727,
   39.4752,
   39.3935,
   35.42005,
   33.74207,
   31.32255,
   27.47618,
   24.9944,
   22.16723,
   20.95407,
   17.26615,
   15.4303,
   14.90815,
   12.76782,
   12.38745,
   11.55396,
   10.93621,
   9.691007,
   9.293063,
   7.844309,
   7.247188,
   6.823582,
   6.760966,
   5.813481,
   6.091735,
   5.551747,
   4.98653,
   5.111582,
   4.32274,
   3.925659,
   2.826313};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zmm_2bjet_bb_pt_lep0_fx1515,Graph_from_Zmm_2bjet_bb_pt_lep0_fy1515,Graph_from_Zmm_2bjet_bb_pt_lep0_fex1515,Graph_from_Zmm_2bjet_bb_pt_lep0_fey1515);
   gre->SetName("Graph_from_Zmm_2bjet_bb_pt_lep0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515","",100,0,220);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515->SetMinimum(0);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515->SetMaximum(1032.043);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_pt_lep01515);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_pt_lep0","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_pt_lep0_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_pt_lep0_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_pt_lep0_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep0_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep0_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_pt_lep0","MC unc. (stat.)","fl");

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
   pt_lep0_Z_2bjet_Zmm_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__516 = new TH1D("data_mc_ratio__516","",40,0,200);
   data_mc_ratio__516->SetBinContent(8,0.9095739);
   data_mc_ratio__516->SetBinContent(9,0.9145729);
   data_mc_ratio__516->SetBinContent(10,0.9098285);
   data_mc_ratio__516->SetBinContent(11,0.8467355);
   data_mc_ratio__516->SetBinContent(12,0.846239);
   data_mc_ratio__516->SetBinContent(13,0.793462);
   data_mc_ratio__516->SetBinContent(14,0.8366532);
   data_mc_ratio__516->SetBinContent(15,0.8331372);
   data_mc_ratio__516->SetBinContent(16,0.8719209);
   data_mc_ratio__516->SetBinContent(17,0.7909646);
   data_mc_ratio__516->SetBinContent(18,0.919844);
   data_mc_ratio__516->SetBinContent(19,0.7572924);
   data_mc_ratio__516->SetBinContent(20,0.8664188);
   data_mc_ratio__516->SetBinContent(21,1.323972);
   data_mc_ratio__516->SetBinContent(22,0.7827997);
   data_mc_ratio__516->SetBinContent(23,1.188933);
   data_mc_ratio__516->SetBinContent(24,0.7804586);
   data_mc_ratio__516->SetBinContent(25,1.125199);
   data_mc_ratio__516->SetBinContent(26,0.8630772);
   data_mc_ratio__516->SetBinContent(27,0.7025932);
   data_mc_ratio__516->SetBinContent(28,1.50213);
   data_mc_ratio__516->SetBinContent(29,0.7067749);
   data_mc_ratio__516->SetBinContent(30,0.8634662);
   data_mc_ratio__516->SetBinContent(31,0.7199514);
   data_mc_ratio__516->SetBinContent(32,1.104516);
   data_mc_ratio__516->SetBinContent(33,0.6256436);
   data_mc_ratio__516->SetBinContent(34,0.8441464);
   data_mc_ratio__516->SetBinContent(35,0.8344484);
   data_mc_ratio__516->SetBinContent(36,0.4811727);
   data_mc_ratio__516->SetBinContent(37,1.051985);
   data_mc_ratio__516->SetBinContent(38,0.9836443);
   data_mc_ratio__516->SetBinContent(39,0.8362524);
   data_mc_ratio__516->SetBinContent(40,0.469724);
   data_mc_ratio__516->SetBinContent(41,1.26041);
   data_mc_ratio__516->SetBinError(8,0.05883544);
   data_mc_ratio__516->SetBinError(9,0.04268861);
   data_mc_ratio__516->SetBinError(10,0.03463658);
   data_mc_ratio__516->SetBinError(11,0.03069414);
   data_mc_ratio__516->SetBinError(12,0.03129928);
   data_mc_ratio__516->SetBinError(13,0.03306092);
   data_mc_ratio__516->SetBinError(14,0.03522946);
   data_mc_ratio__516->SetBinError(15,0.03888752);
   data_mc_ratio__516->SetBinError(16,0.04608245);
   data_mc_ratio__516->SetBinError(17,0.04849715);
   data_mc_ratio__516->SetBinError(18,0.05760287);
   data_mc_ratio__516->SetBinError(19,0.05644524);
   data_mc_ratio__516->SetBinError(20,0.06871148);
   data_mc_ratio__516->SetBinError(21,0.1139494);
   data_mc_ratio__516->SetBinError(22,0.07750872);
   data_mc_ratio__516->SetBinError(23,0.1239548);
   data_mc_ratio__516->SetBinError(24,0.1007568);
   data_mc_ratio__516->SetBinError(25,0.1395638);
   data_mc_ratio__516->SetBinError(26,0.1143174);
   data_mc_ratio__516->SetBinError(27,0.1059199);
   data_mc_ratio__516->SetBinError(28,0.2191082);
   data_mc_ratio__516->SetBinError(29,0.141355);
   data_mc_ratio__516->SetBinError(30,0.1576466);
   data_mc_ratio__516->SetBinError(31,0.1469595);
   data_mc_ratio__516->SetBinError(32,0.2354837);
   data_mc_ratio__516->SetBinError(33,0.1615405);
   data_mc_ratio__516->SetBinError(34,0.2436841);
   data_mc_ratio__516->SetBinError(35,0.2154537);
   data_mc_ratio__516->SetBinError(36,0.1818662);
   data_mc_ratio__516->SetBinError(37,0.3036818);
   data_mc_ratio__516->SetBinError(38,0.3477708);
   data_mc_ratio__516->SetBinError(39,0.2787508);
   data_mc_ratio__516->SetBinError(40,0.332145);
   data_mc_ratio__516->SetBinError(41,0.2941676);
   data_mc_ratio__516->SetMinimum(0.4);
   data_mc_ratio__516->SetMaximum(1.6);
   data_mc_ratio__516->SetEntries(343.1792);
   data_mc_ratio__516->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__516->SetLineColor(ci);
   data_mc_ratio__516->SetLineWidth(2);
   data_mc_ratio__516->SetMarkerStyle(20);
   data_mc_ratio__516->SetMarkerSize(1.2);
   data_mc_ratio__516->GetXaxis()->SetTitle("Leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__516->GetXaxis()->SetRange(1,40);
   data_mc_ratio__516->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__516->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__516->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__516->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__516->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__516->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__516->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__516->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__516->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__516->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__516->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__516->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__516->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__516->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__516->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__516->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__516->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1516[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1516[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1516[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1516[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.0834244,
   0.05849537,
   0.04928537,
   0.04392254,
   0.04560371,
   0.04879247,
   0.05005392,
   0.056854,
   0.06691914,
   0.07432212,
   0.07996233,
   0.08815754,
   0.09408629,
   0.1513281,
   0.1144127,
   0.1650009,
   0.1611315,
   0.2000078,
   0.1655929,
   0.1547463,
   0.2970083,
   0.2217664,
   0.2085901,
   0.2046936,
   0.3394362,
   0.2424778,
   0.4285264,
   0.3088431,
   0.3427688,
   0.4481088,
   0.5315048,
   0.3647602,
   0.6637935};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1516,Graph_from_mc_statistical_error_fy1516,Graph_from_mc_statistical_error_fex1516,Graph_from_mc_statistical_error_fey1516);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1516 = new TH1F("Graph_Graph_from_mc_statistical_error1516","",100,0,220);
   Graph_Graph_from_mc_statistical_error1516->SetMinimum(0.2034478);
   Graph_Graph_from_mc_statistical_error1516->SetMaximum(1.796552);
   Graph_Graph_from_mc_statistical_error1516->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1516->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1516->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1516->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1516->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1516->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1516->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1516->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1516->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1516->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1516->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1516->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1516->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1516->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1516->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1516->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1516);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep0_Z_2bjet_Zmm_17_amcnlo->cd();
   pt_lep0_Z_2bjet_Zmm_17_amcnlo->Modified();
   pt_lep0_Z_2bjet_Zmm_17_amcnlo->cd();
   pt_lep0_Z_2bjet_Zmm_17_amcnlo->SetSelected(pt_lep0_Z_2bjet_Zmm_17_amcnlo);
}

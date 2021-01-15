void dRmin_Z2b_Z_2bjet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: dRmin_Z2b_Z_2bjet_Zee_16_amcnlo/dRmin_Z2b_Z_2bjet_Zee_16_amcnlo
//=========  (Thu Jan 14 10:42:53 2021) by ROOT version 6.14/09
   TCanvas *dRmin_Z2b_Z_2bjet_Zee_16_amcnlo = new TCanvas("dRmin_Z2b_Z_2bjet_Zee_16_amcnlo", "dRmin_Z2b_Z_2bjet_Zee_16_amcnlo",0,0,600,600);
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->SetHighLightColor(2);
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->Range(0,0,1,1);
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->SetFillColor(0);
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->SetFillStyle(4000);
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->SetBorderMode(0);
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->SetBorderSize(2);
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.161843,6.314516,1170.681);
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
   st->SetMaximum(1003.33);
   
   TH1F *st_stack_241 = new TH1F("st_stack_241","",25,0,10);
   st_stack_241->SetMinimum(0.01);
   st_stack_241->SetMaximum(1053.496);
   st_stack_241->SetDirectory(0);
   st_stack_241->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_241->SetLineColor(ci);
   st_stack_241->GetXaxis()->SetRange(1,15);
   st_stack_241->GetXaxis()->SetLabelFont(42);
   st_stack_241->GetXaxis()->SetLabelSize(0.035);
   st_stack_241->GetXaxis()->SetTitleSize(0.035);
   st_stack_241->GetXaxis()->SetTitleFont(42);
   st_stack_241->GetYaxis()->SetTitle("Events/0.4");
   st_stack_241->GetYaxis()->SetLabelFont(42);
   st_stack_241->GetYaxis()->SetLabelSize(0.05);
   st_stack_241->GetYaxis()->SetTitleSize(0.057);
   st_stack_241->GetYaxis()->SetTitleOffset(1.2);
   st_stack_241->GetYaxis()->SetTitleFont(42);
   st_stack_241->GetZaxis()->SetLabelFont(42);
   st_stack_241->GetZaxis()->SetLabelSize(0.035);
   st_stack_241->GetZaxis()->SetTitleSize(0.035);
   st_stack_241->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_241);
   
   
   TH1D *Zee_2bjet_dRmin_Z2b_stack_1 = new TH1D("Zee_2bjet_dRmin_Z2b_stack_1","",25,0,10);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(1,0.6972295);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(2,1.081817);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(3,2.201288);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(4,2.665346);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(5,2.521196);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(6,3.550908);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(7,3.012622);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(8,2.137937);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(10,0.23868);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinContent(11,0.1296642);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(1,0.3487014);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(2,0.4427608);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(3,0.6136737);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(4,0.6827059);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(5,0.6656537);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(6,0.7831528);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(7,0.7522167);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(8,0.6181916);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(10,0.1786481);
   Zee_2bjet_dRmin_Z2b_stack_1->SetBinError(11,0.1296642);
   Zee_2bjet_dRmin_Z2b_stack_1->SetEntries(109);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_dRmin_Z2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_stack_1->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_stack_1,"");
   
   TH1D *Zee_2bjet_dRmin_Z2b_stack_2 = new TH1D("Zee_2bjet_dRmin_Z2b_stack_2","",25,0,10);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(1,0.2938692);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(2,0.5691825);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(3,3.383279);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(4,3.46779);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(5,6.961928);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(6,7.096835);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(7,10.60289);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(8,8.855438);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(9,1.120114);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(10,0.5255063);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(11,0.2686988);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(12,0.2549442);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinContent(13,0.1718952);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(1,0.2938692);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(2,0.402774);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(3,0.9415176);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(4,0.9629132);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(5,1.363754);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(6,1.374378);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(7,1.695943);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(8,1.547042);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(9,0.5601433);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(10,0.3718752);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(11,0.2686988);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(12,0.2549442);
   Zee_2bjet_dRmin_Z2b_stack_2->SetBinError(13,0.1718952);
   Zee_2bjet_dRmin_Z2b_stack_2->SetEntries(170);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dRmin_Z2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_stack_2->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_stack_2,"");
   
   TH1D *Zee_2bjet_dRmin_Z2b_stack_3 = new TH1D("Zee_2bjet_dRmin_Z2b_stack_3","",25,0,10);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(1,15.19566);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(2,44.28964);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(3,79.62031);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(4,143.2141);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(5,181.5947);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(6,163.4665);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(7,105.8128);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(8,40.91828);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(9,7.573566);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(10,1.251539);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(11,0.3682414);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(12,0.1683945);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinContent(13,0.3498965);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(1,1.650922);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(2,2.790736);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(3,3.754832);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(4,5.026146);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(5,5.666062);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(6,5.358679);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(7,4.282243);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(8,2.653427);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(9,1.136608);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(10,0.4741924);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(11,0.2622492);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(12,0.1683945);
   Zee_2bjet_dRmin_Z2b_stack_3->SetBinError(13,0.2474165);
   Zee_2bjet_dRmin_Z2b_stack_3->SetEntries(4701);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dRmin_Z2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b_stack_3->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dRmin_Z2b_stack_3,"");
   
   TH1D *Zee_2bjet_XX_dRmin_Z2b_stack_4 = new TH1D("Zee_2bjet_XX_dRmin_Z2b_stack_4","",25,0,10);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(2,0.9365942);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(3,0.3526009);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(4,0.2671233);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(5,0.4177671);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(6,2.659465);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(7,3.034873);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(8,0.3035642);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(9,0.5226742);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(10,0.4965971);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(11,0.4490946);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(12,0.6103233);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(13,-0.4093724);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(14,0.42812);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(2,0.664237);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(3,0.8374253);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(4,1.106162);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(5,1.177165);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(6,1.697945);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(7,2.040854);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(8,1.127192);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(9,0.9211533);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(10,0.4965971);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(11,0.4490946);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(12,0.6103233);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(13,0.4093724);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(14,0.42812);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetEntries(60);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_dRmin_Z2b_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_dRmin_Z2b_stack_4,"");
   
   TH1D *Zee_2bjet_bX_dRmin_Z2b_stack_5 = new TH1D("Zee_2bjet_bX_dRmin_Z2b_stack_5","",25,0,10);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(1,-0.601155);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(2,1.899698);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(3,5.335487);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(4,4.717123);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(5,7.035464);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(6,5.016964);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(7,4.651995);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(8,5.100143);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(9,1.421118);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(10,2.097928);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(11,0.8297015);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(12,0.5007482);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(13,-0.4424413);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(1,0.848992);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(2,1.765988);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(3,2.470934);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(4,2.275307);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(5,2.450256);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(6,2.979841);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(7,2.90616);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(8,2.996436);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(9,1.793498);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(10,1.208224);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(11,0.5763591);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(12,0.5007482);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(13,0.4424413);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetEntries(253);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_dRmin_Z2b_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_dRmin_Z2b_stack_5,"");
   
   TH1D *Zee_2bjet_bb_dRmin_Z2b_stack_6 = new TH1D("Zee_2bjet_bb_dRmin_Z2b_stack_6","",25,0,10);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(1,27.34407);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(2,89.00987);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(3,153.2607);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(4,210.0059);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(5,318.7388);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(6,370.0408);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(7,396.5166);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(8,292.6205);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(9,75.39524);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(10,24.27305);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(11,10.17858);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(12,1.984818);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(13,4.663478);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(14,1.269767);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(15,0.4387996);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(16,0.4046011);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(1,5.96073);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(2,10.77595);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(3,14.47028);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(4,17.36425);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(5,20.56167);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(6,23.07202);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(7,22.98475);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(8,19.96223);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(9,10.27617);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(10,5.774579);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(11,3.095988);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(12,2.493056);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(13,2.358626);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(14,0.9802653);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(15,0.4387996);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(16,0.4046011);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetEntries(13604);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_dRmin_Z2b_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_dRmin_Z2b_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dRmin_Z2b__481 = new TH1D("Zee_2bjet_dRmin_Z2b__481","",25,0,10);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(1,42);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(2,119);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(3,216);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(4,351);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(5,429);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(6,529);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(7,443);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(8,308);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(9,66);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(10,26);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(11,11);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(12,6);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(13,2);
   Zee_2bjet_dRmin_Z2b__481->SetBinContent(14,1);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(1,6.480741);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(2,10.90871);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(3,14.69694);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(4,18.73499);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(5,20.71232);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(6,23);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(7,21.04757);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(8,17.54993);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(9,8.124038);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(10,5.09902);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(11,3.316625);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(12,2.44949);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(13,1.414214);
   Zee_2bjet_dRmin_Z2b__481->SetBinError(14,1);
   Zee_2bjet_dRmin_Z2b__481->SetEntries(2549);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dRmin_Z2b__481->SetLineColor(ci);
   Zee_2bjet_dRmin_Z2b__481->SetLineWidth(2);
   Zee_2bjet_dRmin_Z2b__481->SetMarkerStyle(20);
   Zee_2bjet_dRmin_Z2b__481->SetMarkerSize(1.2);
   Zee_2bjet_dRmin_Z2b__481->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dRmin_Z2b__481->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b__481->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b__481->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b__481->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b__481->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b__481->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b__481->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b__481->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dRmin_Z2b__481->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b__481->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dRmin_Z2b__481->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dRmin_Z2b__481->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dRmin_Z2b__481->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dRmin_Z2b__481->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dRmin_Z2b_fx1481[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dRmin_Z2b_fy1481[25] = {
   42.92968,
   137.7868,
   244.1537,
   364.3374,
   517.2698,
   551.8315,
   523.6318,
   349.9358,
   86.03271,
   28.8833,
   12.22398,
   3.519228,
   4.333456,
   1.697887,
   0.4387996,
   0.4046011,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zee_2bjet_bb_dRmin_Z2b_fex1481[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dRmin_Z2b_fey1481[25] = {
   6.25976,
   11.30608,
   15.21702,
   18.29134,
   21.55409,
   23.98538,
   23.72107,
   20.45864,
   10.54848,
   5.953759,
   3.205745,
   2.632855,
   2.453002,
   1.069676,
   0.4387996,
   0.4046011,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_bb_dRmin_Z2b_fx1481,Graph_from_Zee_2bjet_bb_dRmin_Z2b_fy1481,Graph_from_Zee_2bjet_bb_dRmin_Z2b_fex1481,Graph_from_Zee_2bjet_bb_dRmin_Z2b_fey1481);
   gre->SetName("Graph_from_Zee_2bjet_bb_dRmin_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481","",100,0,11);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481->SetMinimum(0);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481->SetMaximum(633.3986);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dRmin_Z2b1481);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_dRmin_Z2b_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_dRmin_Z2b_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_dRmin_Z2b_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dRmin_Z2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_dRmin_Z2b","MC unc. (stat.)","fl");

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
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__482 = new TH1D("data_mc_ratio__482","",25,0,10);
   data_mc_ratio__482->SetBinContent(1,0.9783441);
   data_mc_ratio__482->SetBinContent(2,0.8636531);
   data_mc_ratio__482->SetBinContent(3,0.8846887);
   data_mc_ratio__482->SetBinContent(4,0.9633928);
   data_mc_ratio__482->SetBinContent(5,0.8293544);
   data_mc_ratio__482->SetBinContent(6,0.958626);
   data_mc_ratio__482->SetBinContent(7,0.8460143);
   data_mc_ratio__482->SetBinContent(8,0.8801613);
   data_mc_ratio__482->SetBinContent(9,0.7671501);
   data_mc_ratio__482->SetBinContent(10,0.9001741);
   data_mc_ratio__482->SetBinContent(11,0.8998703);
   data_mc_ratio__482->SetBinContent(12,1.704919);
   data_mc_ratio__482->SetBinContent(13,0.4615254);
   data_mc_ratio__482->SetBinContent(14,0.5889674);
   data_mc_ratio__482->SetBinError(1,0.1509618);
   data_mc_ratio__482->SetBinError(2,0.07917095);
   data_mc_ratio__482->SetBinError(3,0.06019544);
   data_mc_ratio__482->SetBinError(4,0.0514221);
   data_mc_ratio__482->SetBinError(5,0.04004161);
   data_mc_ratio__482->SetBinError(6,0.04167939);
   data_mc_ratio__482->SetBinError(7,0.04019535);
   data_mc_ratio__482->SetBinError(8,0.05015185);
   data_mc_ratio__482->SetBinError(9,0.09442965);
   data_mc_ratio__482->SetBinError(10,0.1765387);
   data_mc_ratio__482->SetBinError(11,0.2713211);
   data_mc_ratio__482->SetBinError(12,0.6960304);
   data_mc_ratio__482->SetBinError(13,0.3263477);
   data_mc_ratio__482->SetBinError(14,0.5889674);
   data_mc_ratio__482->SetMinimum(0.4);
   data_mc_ratio__482->SetMaximum(1.6);
   data_mc_ratio__482->SetEntries(51.21532);
   data_mc_ratio__482->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__482->SetLineColor(ci);
   data_mc_ratio__482->SetLineWidth(2);
   data_mc_ratio__482->SetMarkerStyle(20);
   data_mc_ratio__482->SetMarkerSize(1.2);
   data_mc_ratio__482->GetXaxis()->SetTitle("min[#Delta R(Z,b)]");
   data_mc_ratio__482->GetXaxis()->SetRange(1,15);
   data_mc_ratio__482->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__482->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__482->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__482->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__482->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__482->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__482->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__482->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__482->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__482->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__482->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__482->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__482->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__482->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__482->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__482->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__482->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1482[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1482[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1482[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1482[25] = {
   0.1458143,
   0.08205487,
   0.06232557,
   0.05020441,
   0.04166896,
   0.04346504,
   0.04530105,
   0.05846398,
   0.1226102,
   0.2061315,
   0.2622504,
   0.7481341,
   0.5660614,
   0.6300043,
   1,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1482,Graph_from_mc_statistical_error_fy1482,Graph_from_mc_statistical_error_fex1482,Graph_from_mc_statistical_error_fey1482);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1482 = new TH1F("Graph_Graph_from_mc_statistical_error1482","",100,0,11);
   Graph_Graph_from_mc_statistical_error1482->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1482->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1482->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1482->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1482->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1482->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1482->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1482);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->Modified();
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zee_16_amcnlo->SetSelected(dRmin_Z2b_Z_2bjet_Zee_16_amcnlo);
}

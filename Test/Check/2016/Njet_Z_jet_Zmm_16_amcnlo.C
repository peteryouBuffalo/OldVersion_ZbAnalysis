void Njet_Z_jet_Zmm_16_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_jet_Zmm_16_amcnlo/Njet_Z_jet_Zmm_16_amcnlo
//=========  (Thu Jan 14 10:42:28 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_jet_Zmm_16_amcnlo = new TCanvas("Njet_Z_jet_Zmm_16_amcnlo", "Njet_Z_jet_Zmm_16_amcnlo",0,0,600,600);
   Njet_Z_jet_Zmm_16_amcnlo->SetHighLightColor(2);
   Njet_Z_jet_Zmm_16_amcnlo->Range(0,0,1,1);
   Njet_Z_jet_Zmm_16_amcnlo->SetFillColor(0);
   Njet_Z_jet_Zmm_16_amcnlo->SetFillStyle(4000);
   Njet_Z_jet_Zmm_16_amcnlo->SetBorderMode(0);
   Njet_Z_jet_Zmm_16_amcnlo->SetBorderSize(2);
   Njet_Z_jet_Zmm_16_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_jet_Zmm_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-34350.24,10.52419,3.43159e+07);
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
   st->SetMaximum(2.941036e+07);
   
   TH1F *st_stack_73 = new TH1F("st_stack_73","",15,0,15);
   st_stack_73->SetMinimum(0.01);
   st_stack_73->SetMaximum(3.088087e+07);
   st_stack_73->SetDirectory(0);
   st_stack_73->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_73->SetLineColor(ci);
   st_stack_73->GetXaxis()->SetRange(1,10);
   st_stack_73->GetXaxis()->SetLabelFont(42);
   st_stack_73->GetXaxis()->SetLabelSize(0.035);
   st_stack_73->GetXaxis()->SetTitleSize(0.035);
   st_stack_73->GetXaxis()->SetTitleFont(42);
   st_stack_73->GetYaxis()->SetTitle("Events/1.0");
   st_stack_73->GetYaxis()->SetLabelFont(42);
   st_stack_73->GetYaxis()->SetLabelSize(0.05);
   st_stack_73->GetYaxis()->SetTitleSize(0.057);
   st_stack_73->GetYaxis()->SetTitleOffset(1.2);
   st_stack_73->GetYaxis()->SetTitleFont(42);
   st_stack_73->GetZaxis()->SetLabelFont(42);
   st_stack_73->GetZaxis()->SetLabelSize(0.035);
   st_stack_73->GetZaxis()->SetTitleSize(0.035);
   st_stack_73->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_73);
   
   
   TH1D *Zmm_jet_Njet_stack_1 = new TH1D("Zmm_jet_Njet_stack_1","",15,0,15);
   Zmm_jet_Njet_stack_1->SetBinContent(1,705.1409);
   Zmm_jet_Njet_stack_1->SetBinContent(2,2111.571);
   Zmm_jet_Njet_stack_1->SetBinContent(3,1016.533);
   Zmm_jet_Njet_stack_1->SetBinContent(4,352.312);
   Zmm_jet_Njet_stack_1->SetBinContent(5,104.7537);
   Zmm_jet_Njet_stack_1->SetBinContent(6,25.61602);
   Zmm_jet_Njet_stack_1->SetBinContent(7,7.430991);
   Zmm_jet_Njet_stack_1->SetBinContent(8,1.184939);
   Zmm_jet_Njet_stack_1->SetBinContent(9,1.035632);
   Zmm_jet_Njet_stack_1->SetBinError(1,11.56734);
   Zmm_jet_Njet_stack_1->SetBinError(2,20.59978);
   Zmm_jet_Njet_stack_1->SetBinError(3,14.32455);
   Zmm_jet_Njet_stack_1->SetBinError(4,8.446522);
   Zmm_jet_Njet_stack_1->SetBinError(5,4.595398);
   Zmm_jet_Njet_stack_1->SetBinError(6,2.285336);
   Zmm_jet_Njet_stack_1->SetBinError(7,1.21789);
   Zmm_jet_Njet_stack_1->SetBinError(8,0.4521156);
   Zmm_jet_Njet_stack_1->SetBinError(9,0.4633694);
   Zmm_jet_Njet_stack_1->SetEntries(24831);

   ci = TColor::GetColor("#cccc00");
   Zmm_jet_Njet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_stack_1->SetLineColor(ci);
   Zmm_jet_Njet_stack_1->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_stack_1,"");
   
   TH1D *Zmm_jet_Njet_stack_2 = new TH1D("Zmm_jet_Njet_stack_2","",15,0,15);
   Zmm_jet_Njet_stack_2->SetBinContent(1,15782.26);
   Zmm_jet_Njet_stack_2->SetBinContent(2,12182.12);
   Zmm_jet_Njet_stack_2->SetBinContent(3,6741.292);
   Zmm_jet_Njet_stack_2->SetBinContent(4,1894.633);
   Zmm_jet_Njet_stack_2->SetBinContent(5,460.165);
   Zmm_jet_Njet_stack_2->SetBinContent(6,100.9739);
   Zmm_jet_Njet_stack_2->SetBinContent(7,21.37613);
   Zmm_jet_Njet_stack_2->SetBinContent(8,2.46187);
   Zmm_jet_Njet_stack_2->SetBinContent(9,0.1441173);
   Zmm_jet_Njet_stack_2->SetBinContent(10,0.6820911);
   Zmm_jet_Njet_stack_2->SetBinError(1,82.44382);
   Zmm_jet_Njet_stack_2->SetBinError(2,69.80933);
   Zmm_jet_Njet_stack_2->SetBinError(3,51.21025);
   Zmm_jet_Njet_stack_2->SetBinError(4,27.15221);
   Zmm_jet_Njet_stack_2->SetBinError(5,13.43291);
   Zmm_jet_Njet_stack_2->SetBinError(6,6.188159);
   Zmm_jet_Njet_stack_2->SetBinError(7,2.842539);
   Zmm_jet_Njet_stack_2->SetBinError(8,0.947696);
   Zmm_jet_Njet_stack_2->SetBinError(9,0.1441173);
   Zmm_jet_Njet_stack_2->SetBinError(10,0.502092);
   Zmm_jet_Njet_stack_2->SetEntries(101316);

   ci = TColor::GetColor("#0000cc");
   Zmm_jet_Njet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_stack_2->SetLineColor(ci);
   Zmm_jet_Njet_stack_2->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_stack_2,"");
   
   TH1D *Zmm_jet_Njet_stack_3 = new TH1D("Zmm_jet_Njet_stack_3","",15,0,15);
   Zmm_jet_Njet_stack_3->SetBinContent(1,1773.551);
   Zmm_jet_Njet_stack_3->SetBinContent(2,10176.92);
   Zmm_jet_Njet_stack_3->SetBinContent(3,17068.3);
   Zmm_jet_Njet_stack_3->SetBinContent(4,8323.166);
   Zmm_jet_Njet_stack_3->SetBinContent(5,2968.344);
   Zmm_jet_Njet_stack_3->SetBinContent(6,905.374);
   Zmm_jet_Njet_stack_3->SetBinContent(7,245.8233);
   Zmm_jet_Njet_stack_3->SetBinContent(8,62.19327);
   Zmm_jet_Njet_stack_3->SetBinContent(9,15.16318);
   Zmm_jet_Njet_stack_3->SetBinContent(10,4.037692);
   Zmm_jet_Njet_stack_3->SetBinContent(11,1.287822);
   Zmm_jet_Njet_stack_3->SetBinError(1,18.86392);
   Zmm_jet_Njet_stack_3->SetBinError(2,45.361);
   Zmm_jet_Njet_stack_3->SetBinError(3,58.86687);
   Zmm_jet_Njet_stack_3->SetBinError(4,41.06013);
   Zmm_jet_Njet_stack_3->SetBinError(5,24.48431);
   Zmm_jet_Njet_stack_3->SetBinError(6,13.5071);
   Zmm_jet_Njet_stack_3->SetBinError(7,7.018798);
   Zmm_jet_Njet_stack_3->SetBinError(8,3.517299);
   Zmm_jet_Njet_stack_3->SetBinError(9,1.751085);
   Zmm_jet_Njet_stack_3->SetBinError(10,0.8880699);
   Zmm_jet_Njet_stack_3->SetBinError(11,0.498546);
   Zmm_jet_Njet_stack_3->SetEntries(220766);

   ci = TColor::GetColor("#cc0000");
   Zmm_jet_Njet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_stack_3->SetLineColor(ci);
   Zmm_jet_Njet_stack_3->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_stack_3,"");
   
   TH1D *Zmm_jet_Njet_stack_4 = new TH1D("Zmm_jet_Njet_stack_4","",15,0,15);
   Zmm_jet_Njet_stack_4->SetBinContent(1,1.615744e+07);
   Zmm_jet_Njet_stack_4->SetBinContent(2,2708244);
   Zmm_jet_Njet_stack_4->SetBinContent(3,595946);
   Zmm_jet_Njet_stack_4->SetBinContent(4,128408);
   Zmm_jet_Njet_stack_4->SetBinContent(5,25405.06);
   Zmm_jet_Njet_stack_4->SetBinContent(6,5003.801);
   Zmm_jet_Njet_stack_4->SetBinContent(7,1040.808);
   Zmm_jet_Njet_stack_4->SetBinContent(8,185.4309);
   Zmm_jet_Njet_stack_4->SetBinContent(9,35.67834);
   Zmm_jet_Njet_stack_4->SetBinContent(10,11.52115);
   Zmm_jet_Njet_stack_4->SetBinContent(11,2.082497);
   Zmm_jet_Njet_stack_4->SetBinContent(12,-0.1589776);
   Zmm_jet_Njet_stack_4->SetBinContent(13,0.5239947);
   Zmm_jet_Njet_stack_4->SetBinError(1,6600.731);
   Zmm_jet_Njet_stack_4->SetBinError(2,2234.07);
   Zmm_jet_Njet_stack_4->SetBinError(3,988.064);
   Zmm_jet_Njet_stack_4->SetBinError(4,442.8907);
   Zmm_jet_Njet_stack_4->SetBinError(5,194.9228);
   Zmm_jet_Njet_stack_4->SetBinError(6,87.67817);
   Zmm_jet_Njet_stack_4->SetBinError(7,39.63145);
   Zmm_jet_Njet_stack_4->SetBinError(8,17.93224);
   Zmm_jet_Njet_stack_4->SetBinError(9,7.855011);
   Zmm_jet_Njet_stack_4->SetBinError(10,3.734799);
   Zmm_jet_Njet_stack_4->SetBinError(11,1.042212);
   Zmm_jet_Njet_stack_4->SetBinError(12,0.7381152);
   Zmm_jet_Njet_stack_4->SetBinError(13,0.5239947);
   Zmm_jet_Njet_stack_4->SetEntries(2.551742e+07);

   ci = TColor::GetColor("#00cc00");
   Zmm_jet_Njet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_stack_4->SetLineColor(ci);
   Zmm_jet_Njet_stack_4->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_stack_4,"");
   st->Draw("hist");
   
   TH1D *Zmm_jet_Njet__145 = new TH1D("Zmm_jet_Njet__145","",15,0,15);
   Zmm_jet_Njet__145->SetBinContent(1,1.594727e+07);
   Zmm_jet_Njet__145->SetBinContent(2,2610629);
   Zmm_jet_Njet__145->SetBinContent(3,597050);
   Zmm_jet_Njet__145->SetBinContent(4,135186);
   Zmm_jet_Njet__145->SetBinContent(5,31444);
   Zmm_jet_Njet__145->SetBinContent(6,7407);
   Zmm_jet_Njet__145->SetBinContent(7,1738);
   Zmm_jet_Njet__145->SetBinContent(8,373);
   Zmm_jet_Njet__145->SetBinContent(9,94);
   Zmm_jet_Njet__145->SetBinContent(10,25);
   Zmm_jet_Njet__145->SetBinContent(11,3);
   Zmm_jet_Njet__145->SetBinError(1,3993.404);
   Zmm_jet_Njet__145->SetBinError(2,1615.744);
   Zmm_jet_Njet__145->SetBinError(3,772.6901);
   Zmm_jet_Njet__145->SetBinError(4,367.6765);
   Zmm_jet_Njet__145->SetBinError(5,177.3246);
   Zmm_jet_Njet__145->SetBinError(6,86.06393);
   Zmm_jet_Njet__145->SetBinError(7,41.68933);
   Zmm_jet_Njet__145->SetBinError(8,19.31321);
   Zmm_jet_Njet__145->SetBinError(9,9.69536);
   Zmm_jet_Njet__145->SetBinError(10,5);
   Zmm_jet_Njet__145->SetBinError(11,1.732051);
   Zmm_jet_Njet__145->SetEntries(1.933122e+07);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet__145->SetLineColor(ci);
   Zmm_jet_Njet__145->SetLineWidth(2);
   Zmm_jet_Njet__145->SetMarkerStyle(20);
   Zmm_jet_Njet__145->SetMarkerSize(1.2);
   Zmm_jet_Njet__145->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet__145->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet__145->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet__145->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet__145->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet__145->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet__145->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet__145->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet__145->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet__145->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet__145->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet__145->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet__145->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet__145->GetZaxis()->SetTitleFont(42);
   Zmm_jet_Njet__145->Draw("same E");
   
   Double_t Graph_from_Zmm_jet_Njet_fx1145[15] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5};
   Double_t Graph_from_Zmm_jet_Njet_fy1145[15] = {
   1.61757e+07,
   2732715,
   620772.1,
   138978.1,
   28938.32,
   6035.765,
   1315.438,
   251.271,
   52.02127,
   16.24093,
   3.370319,
   -0.1589776,
   0.5239947,
   0,
   0};
   Double_t Graph_from_Zmm_jet_Njet_fex1145[15] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_Zmm_jet_Njet_fey1145[15] = {
   6601.283,
   2235.716,
   991.2434,
   445.698,
   196.9668,
   88.95741,
   40.36681,
   18.30408,
   8.062442,
   3.871626,
   1.155315,
   0.7381152,
   0.5239947,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zmm_jet_Njet_fx1145,Graph_from_Zmm_jet_Njet_fy1145,Graph_from_Zmm_jet_Njet_fex1145,Graph_from_Zmm_jet_Njet_fey1145);
   gre->SetName("Graph_from_Zmm_jet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_jet_Njet1145 = new TH1F("Graph_Graph_from_Zmm_jet_Njet1145","",100,0,16.5);
   Graph_Graph_from_Zmm_jet_Njet1145->SetMinimum(-1618231);
   Graph_Graph_from_Zmm_jet_Njet1145->SetMaximum(1.780053e+07);
   Graph_Graph_from_Zmm_jet_Njet1145->SetDirectory(0);
   Graph_Graph_from_Zmm_jet_Njet1145->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_jet_Njet1145->SetLineColor(ci);
   Graph_Graph_from_Zmm_jet_Njet1145->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet1145->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1145->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1145->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_jet_Njet1145->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet1145->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1145->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1145->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_jet_Njet1145->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_jet_Njet1145->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet1145->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1145->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1145->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_jet_Njet1145);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_jet_Njet","Data (Z(#mu#mu) + jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_jet_Njet_stack_4","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_jet_Njet_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_jet_Njet_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_jet_Njet_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_jet_Njet","MC unc. (stat.)","fl");

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
   Njet_Z_jet_Zmm_16_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-1.532254,-0.2774193,10.52419,1.658065);
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
   
   TH1D *data_mc_ratio__146 = new TH1D("data_mc_ratio__146","",15,0,15);
   data_mc_ratio__146->SetBinContent(1,0.9858786);
   data_mc_ratio__146->SetBinContent(2,0.9553244);
   data_mc_ratio__146->SetBinContent(3,0.9617861);
   data_mc_ratio__146->SetBinContent(4,0.9727146);
   data_mc_ratio__146->SetBinContent(5,1.086587);
   data_mc_ratio__146->SetBinContent(6,1.227185);
   data_mc_ratio__146->SetBinContent(7,1.321233);
   data_mc_ratio__146->SetBinContent(8,1.484453);
   data_mc_ratio__146->SetBinContent(9,1.806953);
   data_mc_ratio__146->SetBinContent(10,1.53932);
   data_mc_ratio__146->SetBinContent(11,0.8901235);
   data_mc_ratio__146->SetBinError(1,0.0002468768);
   data_mc_ratio__146->SetBinError(2,0.0005912597);
   data_mc_ratio__146->SetBinError(3,0.001244724);
   data_mc_ratio__146->SetBinError(4,0.002645572);
   data_mc_ratio__146->SetBinError(5,0.006127673);
   data_mc_ratio__146->SetBinError(6,0.01425899);
   data_mc_ratio__146->SetBinError(7,0.03169236);
   data_mc_ratio__146->SetBinError(8,0.07686207);
   data_mc_ratio__146->SetBinError(9,0.186373);
   data_mc_ratio__146->SetBinError(10,0.3078641);
   data_mc_ratio__146->SetBinError(11,0.5139131);
   data_mc_ratio__146->SetMinimum(0.4);
   data_mc_ratio__146->SetMaximum(1.6);
   data_mc_ratio__146->SetEntries(242.9223);
   data_mc_ratio__146->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__146->SetLineColor(ci);
   data_mc_ratio__146->SetLineWidth(2);
   data_mc_ratio__146->SetMarkerStyle(20);
   data_mc_ratio__146->SetMarkerSize(1.2);
   data_mc_ratio__146->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__146->GetXaxis()->SetRange(1,10);
   data_mc_ratio__146->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__146->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__146->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__146->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__146->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__146->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__146->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__146->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__146->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__146->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__146->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__146->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__146->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__146->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__146->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__146->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__146->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1146[15] = {
   0.5,
   1.5,
   2.5,
   3.5,
   4.5,
   5.5,
   6.5,
   7.5,
   8.5,
   9.5,
   10.5,
   11.5,
   12.5,
   13.5,
   14.5};
   Double_t Graph_from_mc_statistical_error_fy1146[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1146[15] = {
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5,
   0.5};
   Double_t Graph_from_mc_statistical_error_fey1146[15] = {
   0.0004080988,
   0.0008181299,
   0.001596791,
   0.003206966,
   0.006806435,
   0.01473838,
   0.03068697,
   0.07284596,
   0.1549836,
   0.2383869,
   0.3427911,
   0,
   1,
   0,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1146,Graph_from_mc_statistical_error_fy1146,Graph_from_mc_statistical_error_fex1146,Graph_from_mc_statistical_error_fey1146);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1146 = new TH1F("Graph_Graph_from_mc_statistical_error1146","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1146->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1146->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1146->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1146->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1146->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1146->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1146->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1146->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1146->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1146->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1146->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1146->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1146->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1146->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1146->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1146->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1146->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1146->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1146);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_jet_Zmm_16_amcnlo->cd();
   Njet_Z_jet_Zmm_16_amcnlo->Modified();
   Njet_Z_jet_Zmm_16_amcnlo->cd();
   Njet_Z_jet_Zmm_16_amcnlo->SetSelected(Njet_Z_jet_Zmm_16_amcnlo);
}

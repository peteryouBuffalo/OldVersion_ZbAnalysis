void Njet_Z_jet_Zmm_17_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_jet_Zmm_17_amcnlo/Njet_Z_jet_Zmm_17_amcnlo
//=========  (Thu Jan 14 10:42:28 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_jet_Zmm_17_amcnlo = new TCanvas("Njet_Z_jet_Zmm_17_amcnlo", "Njet_Z_jet_Zmm_17_amcnlo",0,0,600,600);
   Njet_Z_jet_Zmm_17_amcnlo->SetHighLightColor(2);
   Njet_Z_jet_Zmm_17_amcnlo->Range(0,0,1,1);
   Njet_Z_jet_Zmm_17_amcnlo->SetFillColor(0);
   Njet_Z_jet_Zmm_17_amcnlo->SetFillStyle(4000);
   Njet_Z_jet_Zmm_17_amcnlo->SetBorderMode(0);
   Njet_Z_jet_Zmm_17_amcnlo->SetBorderSize(2);
   Njet_Z_jet_Zmm_17_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_jet_Zmm_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-39844.46,10.52419,3.980462e+07);
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
   st->SetMaximum(3.411445e+07);
   
   TH1F *st_stack_74 = new TH1F("st_stack_74","",15,0,15);
   st_stack_74->SetMinimum(0.01);
   st_stack_74->SetMaximum(3.582017e+07);
   st_stack_74->SetDirectory(0);
   st_stack_74->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_74->SetLineColor(ci);
   st_stack_74->GetXaxis()->SetRange(1,10);
   st_stack_74->GetXaxis()->SetLabelFont(42);
   st_stack_74->GetXaxis()->SetLabelSize(0.035);
   st_stack_74->GetXaxis()->SetTitleSize(0.035);
   st_stack_74->GetXaxis()->SetTitleFont(42);
   st_stack_74->GetYaxis()->SetTitle("Events/1.0");
   st_stack_74->GetYaxis()->SetLabelFont(42);
   st_stack_74->GetYaxis()->SetLabelSize(0.05);
   st_stack_74->GetYaxis()->SetTitleSize(0.057);
   st_stack_74->GetYaxis()->SetTitleOffset(1.2);
   st_stack_74->GetYaxis()->SetTitleFont(42);
   st_stack_74->GetZaxis()->SetLabelFont(42);
   st_stack_74->GetZaxis()->SetLabelSize(0.035);
   st_stack_74->GetZaxis()->SetTitleSize(0.035);
   st_stack_74->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_74);
   
   
   TH1D *Zmm_jet_Njet_stack_1 = new TH1D("Zmm_jet_Njet_stack_1","",15,0,15);
   Zmm_jet_Njet_stack_1->SetBinContent(1,849.1571);
   Zmm_jet_Njet_stack_1->SetBinContent(2,2517.512);
   Zmm_jet_Njet_stack_1->SetBinContent(3,1274.572);
   Zmm_jet_Njet_stack_1->SetBinContent(4,432.15);
   Zmm_jet_Njet_stack_1->SetBinContent(5,121.9975);
   Zmm_jet_Njet_stack_1->SetBinContent(6,28.69064);
   Zmm_jet_Njet_stack_1->SetBinContent(7,6.505642);
   Zmm_jet_Njet_stack_1->SetBinContent(8,1.693991);
   Zmm_jet_Njet_stack_1->SetBinContent(9,0.6156707);
   Zmm_jet_Njet_stack_1->SetBinError(1,17.68908);
   Zmm_jet_Njet_stack_1->SetBinError(2,25.64901);
   Zmm_jet_Njet_stack_1->SetBinError(3,17.84102);
   Zmm_jet_Njet_stack_1->SetBinError(4,10.08111);
   Zmm_jet_Njet_stack_1->SetBinError(5,5.278489);
   Zmm_jet_Njet_stack_1->SetBinError(6,2.657159);
   Zmm_jet_Njet_stack_1->SetBinError(7,1.157233);
   Zmm_jet_Njet_stack_1->SetBinError(8,0.616508);
   Zmm_jet_Njet_stack_1->SetBinError(9,0.3596901);
   Zmm_jet_Njet_stack_1->SetEntries(27378);

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
   Zmm_jet_Njet_stack_2->SetBinContent(1,17592.13);
   Zmm_jet_Njet_stack_2->SetBinContent(2,14406.68);
   Zmm_jet_Njet_stack_2->SetBinContent(3,8247.205);
   Zmm_jet_Njet_stack_2->SetBinContent(4,2162.652);
   Zmm_jet_Njet_stack_2->SetBinContent(5,452.1814);
   Zmm_jet_Njet_stack_2->SetBinContent(6,90.82381);
   Zmm_jet_Njet_stack_2->SetBinContent(7,14.81459);
   Zmm_jet_Njet_stack_2->SetBinContent(8,2.885095);
   Zmm_jet_Njet_stack_2->SetBinContent(9,0.4300259);
   Zmm_jet_Njet_stack_2->SetBinError(1,85.31341);
   Zmm_jet_Njet_stack_2->SetBinError(2,70.92911);
   Zmm_jet_Njet_stack_2->SetBinError(3,52.57301);
   Zmm_jet_Njet_stack_2->SetBinError(4,26.68452);
   Zmm_jet_Njet_stack_2->SetBinError(5,12.07714);
   Zmm_jet_Njet_stack_2->SetBinError(6,5.42414);
   Zmm_jet_Njet_stack_2->SetBinError(7,2.095597);
   Zmm_jet_Njet_stack_2->SetBinError(8,0.9815723);
   Zmm_jet_Njet_stack_2->SetBinError(9,0.4300259);
   Zmm_jet_Njet_stack_2->SetEntries(147497);

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
   Zmm_jet_Njet_stack_3->SetBinContent(1,1881.671);
   Zmm_jet_Njet_stack_3->SetBinContent(2,11475.11);
   Zmm_jet_Njet_stack_3->SetBinContent(3,20246);
   Zmm_jet_Njet_stack_3->SetBinContent(4,10486.67);
   Zmm_jet_Njet_stack_3->SetBinContent(5,3842.177);
   Zmm_jet_Njet_stack_3->SetBinContent(6,1127.708);
   Zmm_jet_Njet_stack_3->SetBinContent(7,293.4971);
   Zmm_jet_Njet_stack_3->SetBinContent(8,90.0409);
   Zmm_jet_Njet_stack_3->SetBinContent(9,9.85394);
   Zmm_jet_Njet_stack_3->SetBinContent(10,3.821495);
   Zmm_jet_Njet_stack_3->SetBinContent(11,0.5940296);
   Zmm_jet_Njet_stack_3->SetBinContent(12,0.5079495);
   Zmm_jet_Njet_stack_3->SetBinError(1,28.12388);
   Zmm_jet_Njet_stack_3->SetBinError(2,70.09714);
   Zmm_jet_Njet_stack_3->SetBinError(3,93.07765);
   Zmm_jet_Njet_stack_3->SetBinError(4,66.15834);
   Zmm_jet_Njet_stack_3->SetBinError(5,39.70678);
   Zmm_jet_Njet_stack_3->SetBinError(6,21.34468);
   Zmm_jet_Njet_stack_3->SetBinError(7,10.82724);
   Zmm_jet_Njet_stack_3->SetBinError(8,6.011407);
   Zmm_jet_Njet_stack_3->SetBinError(9,1.976385);
   Zmm_jet_Njet_stack_3->SetBinError(10,1.276858);
   Zmm_jet_Njet_stack_3->SetBinError(11,0.4088823);
   Zmm_jet_Njet_stack_3->SetBinError(12,0.4515214);
   Zmm_jet_Njet_stack_3->SetEntries(159298);

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
   Zmm_jet_Njet_stack_4->SetBinContent(1,1.802658e+07);
   Zmm_jet_Njet_stack_4->SetBinContent(2,3291558);
   Zmm_jet_Njet_stack_4->SetBinContent(3,757587.9);
   Zmm_jet_Njet_stack_4->SetBinContent(4,147424);
   Zmm_jet_Njet_stack_4->SetBinContent(5,26154.63);
   Zmm_jet_Njet_stack_4->SetBinContent(6,4585.774);
   Zmm_jet_Njet_stack_4->SetBinContent(7,895.0699);
   Zmm_jet_Njet_stack_4->SetBinContent(8,177.9876);
   Zmm_jet_Njet_stack_4->SetBinContent(9,32.81758);
   Zmm_jet_Njet_stack_4->SetBinContent(10,3.728926);
   Zmm_jet_Njet_stack_4->SetBinError(1,7992.48);
   Zmm_jet_Njet_stack_4->SetBinError(2,2821.598);
   Zmm_jet_Njet_stack_4->SetBinError(3,1441.232);
   Zmm_jet_Njet_stack_4->SetBinError(4,624.8164);
   Zmm_jet_Njet_stack_4->SetBinError(5,259.4619);
   Zmm_jet_Njet_stack_4->SetBinError(6,109.6178);
   Zmm_jet_Njet_stack_4->SetBinError(7,47.41676);
   Zmm_jet_Njet_stack_4->SetBinError(8,20.42141);
   Zmm_jet_Njet_stack_4->SetBinError(9,8.042123);
   Zmm_jet_Njet_stack_4->SetBinError(10,2.904782);
   Zmm_jet_Njet_stack_4->SetEntries(2.205743e+07);

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
   
   TH1D *Zmm_jet_Njet__147 = new TH1D("Zmm_jet_Njet__147","",15,0,15);
   Zmm_jet_Njet__147->SetBinContent(1,1.876295e+07);
   Zmm_jet_Njet__147->SetBinContent(2,3328006);
   Zmm_jet_Njet__147->SetBinContent(3,787659);
   Zmm_jet_Njet__147->SetBinContent(4,183931);
   Zmm_jet_Njet__147->SetBinContent(5,43585);
   Zmm_jet_Njet__147->SetBinContent(6,10305);
   Zmm_jet_Njet__147->SetBinContent(7,2474);
   Zmm_jet_Njet__147->SetBinContent(8,544);
   Zmm_jet_Njet__147->SetBinContent(9,129);
   Zmm_jet_Njet__147->SetBinContent(10,33);
   Zmm_jet_Njet__147->SetBinContent(11,9);
   Zmm_jet_Njet__147->SetBinContent(12,1);
   Zmm_jet_Njet__147->SetBinContent(13,1);
   Zmm_jet_Njet__147->SetBinError(1,4331.622);
   Zmm_jet_Njet__147->SetBinError(2,1824.282);
   Zmm_jet_Njet__147->SetBinError(3,887.5015);
   Zmm_jet_Njet__147->SetBinError(4,428.8718);
   Zmm_jet_Njet__147->SetBinError(5,208.7702);
   Zmm_jet_Njet__147->SetBinError(6,101.5135);
   Zmm_jet_Njet__147->SetBinError(7,49.73932);
   Zmm_jet_Njet__147->SetBinError(8,23.32381);
   Zmm_jet_Njet__147->SetBinError(9,11.35782);
   Zmm_jet_Njet__147->SetBinError(10,5.744563);
   Zmm_jet_Njet__147->SetBinError(11,3);
   Zmm_jet_Njet__147->SetBinError(12,1);
   Zmm_jet_Njet__147->SetBinError(13,1);
   Zmm_jet_Njet__147->SetEntries(2.311962e+07);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet__147->SetLineColor(ci);
   Zmm_jet_Njet__147->SetLineWidth(2);
   Zmm_jet_Njet__147->SetMarkerStyle(20);
   Zmm_jet_Njet__147->SetMarkerSize(1.2);
   Zmm_jet_Njet__147->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet__147->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet__147->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet__147->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet__147->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet__147->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet__147->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet__147->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet__147->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet__147->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet__147->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet__147->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet__147->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet__147->GetZaxis()->SetTitleFont(42);
   Zmm_jet_Njet__147->Draw("same E");
   
   Double_t Graph_from_Zmm_jet_Njet_fx1147[15] = {
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
   Double_t Graph_from_Zmm_jet_Njet_fy1147[15] = {
   1.80469e+07,
   3319957,
   787355.7,
   160505.5,
   30570.98,
   5832.996,
   1209.887,
   272.6076,
   43.71722,
   7.550421,
   0.5940296,
   0.5079495,
   0,
   0,
   0};
   Double_t Graph_from_Zmm_jet_Njet_fex1147[15] = {
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
   Double_t Graph_from_Zmm_jet_Njet_fey1147[15] = {
   7993.005,
   2823.476,
   1445.302,
   628.9564,
   262.8133,
   111.8398,
   48.69609,
   21.31934,
   8.30037,
   3.173031,
   0.4088823,
   0.4515214,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zmm_jet_Njet_fx1147,Graph_from_Zmm_jet_Njet_fy1147,Graph_from_Zmm_jet_Njet_fex1147,Graph_from_Zmm_jet_Njet_fey1147);
   gre->SetName("Graph_from_Zmm_jet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_jet_Njet1147 = new TH1F("Graph_Graph_from_Zmm_jet_Njet1147","",100,0,16.5);
   Graph_Graph_from_Zmm_jet_Njet1147->SetMinimum(0);
   Graph_Graph_from_Zmm_jet_Njet1147->SetMaximum(1.986039e+07);
   Graph_Graph_from_Zmm_jet_Njet1147->SetDirectory(0);
   Graph_Graph_from_Zmm_jet_Njet1147->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_jet_Njet1147->SetLineColor(ci);
   Graph_Graph_from_Zmm_jet_Njet1147->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet1147->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1147->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1147->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_jet_Njet1147->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet1147->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1147->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1147->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_jet_Njet1147->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_jet_Njet1147->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet1147->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1147->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1147->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_jet_Njet1147);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Njet_Z_jet_Zmm_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__148 = new TH1D("data_mc_ratio__148","",15,0,15);
   data_mc_ratio__148->SetBinContent(1,1.039677);
   data_mc_ratio__148->SetBinContent(2,1.002424);
   data_mc_ratio__148->SetBinContent(3,1.000385);
   data_mc_ratio__148->SetBinContent(4,1.145948);
   data_mc_ratio__148->SetBinContent(5,1.425698);
   data_mc_ratio__148->SetBinContent(6,1.766674);
   data_mc_ratio__148->SetBinContent(7,2.044819);
   data_mc_ratio__148->SetBinContent(8,1.995542);
   data_mc_ratio__148->SetBinContent(9,2.950782);
   data_mc_ratio__148->SetBinContent(10,4.370617);
   data_mc_ratio__148->SetBinContent(11,15.15076);
   data_mc_ratio__148->SetBinContent(12,1.9687);
   data_mc_ratio__148->SetBinError(1,0.0002400202);
   data_mc_ratio__148->SetBinError(2,0.0005494898);
   data_mc_ratio__148->SetBinError(3,0.001127193);
   data_mc_ratio__148->SetBinError(4,0.002672007);
   data_mc_ratio__148->SetBinError(5,0.006829032);
   data_mc_ratio__148->SetBinError(6,0.01740333);
   data_mc_ratio__148->SetBinError(7,0.04111071);
   data_mc_ratio__148->SetBinError(8,0.08555817);
   data_mc_ratio__148->SetBinError(9,0.2598019);
   data_mc_ratio__148->SetBinError(10,0.7608268);
   data_mc_ratio__148->SetBinError(11,5.050253);
   data_mc_ratio__148->SetBinError(12,1.9687);
   data_mc_ratio__148->SetMinimum(0.4);
   data_mc_ratio__148->SetMaximum(1.6);
   data_mc_ratio__148->SetEntries(8.83458);
   data_mc_ratio__148->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__148->SetLineColor(ci);
   data_mc_ratio__148->SetLineWidth(2);
   data_mc_ratio__148->SetMarkerStyle(20);
   data_mc_ratio__148->SetMarkerSize(1.2);
   data_mc_ratio__148->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__148->GetXaxis()->SetRange(1,10);
   data_mc_ratio__148->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__148->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__148->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__148->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__148->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__148->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__148->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__148->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__148->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__148->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__148->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__148->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__148->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__148->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__148->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__148->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__148->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1148[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1148[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1148[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1148[15] = {
   0.0004429017,
   0.0008504557,
   0.00183564,
   0.003918597,
   0.008596822,
   0.01917364,
   0.04024846,
   0.07820524,
   0.189865,
   0.4202456,
   0.6883198,
   0.88891,
   0,
   0,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1148,Graph_from_mc_statistical_error_fy1148,Graph_from_mc_statistical_error_fex1148,Graph_from_mc_statistical_error_fey1148);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1148 = new TH1F("Graph_Graph_from_mc_statistical_error1148","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1148->SetMinimum(0.09998098);
   Graph_Graph_from_mc_statistical_error1148->SetMaximum(2.066692);
   Graph_Graph_from_mc_statistical_error1148->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1148->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1148->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1148->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1148->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1148->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1148->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1148->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1148->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1148->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1148->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1148->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1148->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1148->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1148->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1148->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1148);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_jet_Zmm_17_amcnlo->cd();
   Njet_Z_jet_Zmm_17_amcnlo->Modified();
   Njet_Z_jet_Zmm_17_amcnlo->cd();
   Njet_Z_jet_Zmm_17_amcnlo->SetSelected(Njet_Z_jet_Zmm_17_amcnlo);
}

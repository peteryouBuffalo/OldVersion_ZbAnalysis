void Njet_Z_jet_Zmm_18_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_jet_Zmm_18_amcnlo/Njet_Z_jet_Zmm_18_amcnlo
//=========  (Thu Jan 14 10:42:28 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_jet_Zmm_18_amcnlo = new TCanvas("Njet_Z_jet_Zmm_18_amcnlo", "Njet_Z_jet_Zmm_18_amcnlo",0,0,600,600);
   Njet_Z_jet_Zmm_18_amcnlo->SetHighLightColor(2);
   Njet_Z_jet_Zmm_18_amcnlo->Range(0,0,1,1);
   Njet_Z_jet_Zmm_18_amcnlo->SetFillColor(0);
   Njet_Z_jet_Zmm_18_amcnlo->SetFillStyle(4000);
   Njet_Z_jet_Zmm_18_amcnlo->SetBorderMode(0);
   Njet_Z_jet_Zmm_18_amcnlo->SetBorderSize(2);
   Njet_Z_jet_Zmm_18_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_jet_Zmm_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-56964.14,10.52419,5.690719e+07);
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
   st->SetMaximum(4.877216e+07);
   
   TH1F *st_stack_75 = new TH1F("st_stack_75","",15,0,15);
   st_stack_75->SetMinimum(0.01);
   st_stack_75->SetMaximum(5.121077e+07);
   st_stack_75->SetDirectory(0);
   st_stack_75->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_75->SetLineColor(ci);
   st_stack_75->GetXaxis()->SetRange(1,10);
   st_stack_75->GetXaxis()->SetLabelFont(42);
   st_stack_75->GetXaxis()->SetLabelSize(0.035);
   st_stack_75->GetXaxis()->SetTitleSize(0.035);
   st_stack_75->GetXaxis()->SetTitleFont(42);
   st_stack_75->GetYaxis()->SetTitle("Events/1.0");
   st_stack_75->GetYaxis()->SetLabelFont(42);
   st_stack_75->GetYaxis()->SetLabelSize(0.05);
   st_stack_75->GetYaxis()->SetTitleSize(0.057);
   st_stack_75->GetYaxis()->SetTitleOffset(1.2);
   st_stack_75->GetYaxis()->SetTitleFont(42);
   st_stack_75->GetZaxis()->SetLabelFont(42);
   st_stack_75->GetZaxis()->SetLabelSize(0.035);
   st_stack_75->GetZaxis()->SetTitleSize(0.035);
   st_stack_75->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_75);
   
   
   TH1D *Zmm_jet_Njet_stack_1 = new TH1D("Zmm_jet_Njet_stack_1","",15,0,15);
   Zmm_jet_Njet_stack_1->SetBinContent(1,1200.874);
   Zmm_jet_Njet_stack_1->SetBinContent(2,3694.251);
   Zmm_jet_Njet_stack_1->SetBinContent(3,1960.801);
   Zmm_jet_Njet_stack_1->SetBinContent(4,668.8514);
   Zmm_jet_Njet_stack_1->SetBinContent(5,174.3652);
   Zmm_jet_Njet_stack_1->SetBinContent(6,41.88476);
   Zmm_jet_Njet_stack_1->SetBinContent(7,10.84699);
   Zmm_jet_Njet_stack_1->SetBinContent(8,1.130203);
   Zmm_jet_Njet_stack_1->SetBinContent(9,0.2562986);
   Zmm_jet_Njet_stack_1->SetBinError(1,17.33409);
   Zmm_jet_Njet_stack_1->SetBinError(2,32.16983);
   Zmm_jet_Njet_stack_1->SetBinError(3,23.72095);
   Zmm_jet_Njet_stack_1->SetBinError(4,13.93175);
   Zmm_jet_Njet_stack_1->SetBinError(5,7.191001);
   Zmm_jet_Njet_stack_1->SetBinError(6,3.41582);
   Zmm_jet_Njet_stack_1->SetBinError(7,1.848447);
   Zmm_jet_Njet_stack_1->SetBinError(8,0.5754507);
   Zmm_jet_Njet_stack_1->SetBinError(9,0.2535192);
   Zmm_jet_Njet_stack_1->SetEntries(40587);

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
   Zmm_jet_Njet_stack_2->SetBinContent(1,26390.91);
   Zmm_jet_Njet_stack_2->SetBinContent(2,21489.51);
   Zmm_jet_Njet_stack_2->SetBinContent(3,12302.61);
   Zmm_jet_Njet_stack_2->SetBinContent(4,3302.634);
   Zmm_jet_Njet_stack_2->SetBinContent(5,715.5119);
   Zmm_jet_Njet_stack_2->SetBinContent(6,127.9056);
   Zmm_jet_Njet_stack_2->SetBinContent(7,27.92195);
   Zmm_jet_Njet_stack_2->SetBinContent(8,3.349069);
   Zmm_jet_Njet_stack_2->SetBinContent(9,0.204909);
   Zmm_jet_Njet_stack_2->SetBinError(1,143.546);
   Zmm_jet_Njet_stack_2->SetBinError(2,124.3633);
   Zmm_jet_Njet_stack_2->SetBinError(3,92.33979);
   Zmm_jet_Njet_stack_2->SetBinError(4,47.88289);
   Zmm_jet_Njet_stack_2->SetBinError(5,22.26064);
   Zmm_jet_Njet_stack_2->SetBinError(6,9.147763);
   Zmm_jet_Njet_stack_2->SetBinError(7,4.58986);
   Zmm_jet_Njet_stack_2->SetBinError(8,1.412223);
   Zmm_jet_Njet_stack_2->SetBinError(9,0.204909);
   Zmm_jet_Njet_stack_2->SetEntries(102395);

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
   Zmm_jet_Njet_stack_3->SetBinContent(1,2768.204);
   Zmm_jet_Njet_stack_3->SetBinContent(2,16934.74);
   Zmm_jet_Njet_stack_3->SetBinContent(3,30176.27);
   Zmm_jet_Njet_stack_3->SetBinContent(4,15506.81);
   Zmm_jet_Njet_stack_3->SetBinContent(5,5753.851);
   Zmm_jet_Njet_stack_3->SetBinContent(6,1731.691);
   Zmm_jet_Njet_stack_3->SetBinContent(7,464.8446);
   Zmm_jet_Njet_stack_3->SetBinContent(8,112.9044);
   Zmm_jet_Njet_stack_3->SetBinContent(9,23.62056);
   Zmm_jet_Njet_stack_3->SetBinContent(10,5.592931);
   Zmm_jet_Njet_stack_3->SetBinContent(11,1.22647);
   Zmm_jet_Njet_stack_3->SetBinContent(12,0.3840803);
   Zmm_jet_Njet_stack_3->SetBinContent(13,0.03037312);
   Zmm_jet_Njet_stack_3->SetBinError(1,16.21358);
   Zmm_jet_Njet_stack_3->SetBinError(2,40.26899);
   Zmm_jet_Njet_stack_3->SetBinError(3,53.62411);
   Zmm_jet_Njet_stack_3->SetBinError(4,38.57051);
   Zmm_jet_Njet_stack_3->SetBinError(5,23.30919);
   Zmm_jet_Njet_stack_3->SetBinError(6,12.72249);
   Zmm_jet_Njet_stack_3->SetBinError(7,6.599424);
   Zmm_jet_Njet_stack_3->SetBinError(8,3.26057);
   Zmm_jet_Njet_stack_3->SetBinError(9,1.456305);
   Zmm_jet_Njet_stack_3->SetBinError(10,0.7113837);
   Zmm_jet_Njet_stack_3->SetBinError(11,0.3242533);
   Zmm_jet_Njet_stack_3->SetBinError(12,0.1725957);
   Zmm_jet_Njet_stack_3->SetBinError(13,0.03037312);
   Zmm_jet_Njet_stack_3->SetEntries(883028);

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
   Zmm_jet_Njet_stack_4->SetBinContent(1,2.662051e+07);
   Zmm_jet_Njet_stack_4->SetBinContent(2,4913844);
   Zmm_jet_Njet_stack_4->SetBinContent(3,1137356);
   Zmm_jet_Njet_stack_4->SetBinContent(4,209033.7);
   Zmm_jet_Njet_stack_4->SetBinContent(5,36596.9);
   Zmm_jet_Njet_stack_4->SetBinContent(6,6653.663);
   Zmm_jet_Njet_stack_4->SetBinContent(7,1329.962);
   Zmm_jet_Njet_stack_4->SetBinContent(8,161.8473);
   Zmm_jet_Njet_stack_4->SetBinContent(9,46.83406);
   Zmm_jet_Njet_stack_4->SetBinContent(10,-3.984799);
   Zmm_jet_Njet_stack_4->SetBinContent(11,1.664798);
   Zmm_jet_Njet_stack_4->SetBinError(1,12200.26);
   Zmm_jet_Njet_stack_4->SetBinError(2,4113.628);
   Zmm_jet_Njet_stack_4->SetBinError(3,2027.073);
   Zmm_jet_Njet_stack_4->SetBinError(4,859.9421);
   Zmm_jet_Njet_stack_4->SetBinError(5,356.665);
   Zmm_jet_Njet_stack_4->SetBinError(6,151.4515);
   Zmm_jet_Njet_stack_4->SetBinError(7,64.48052);
   Zmm_jet_Njet_stack_4->SetBinError(8,25.55093);
   Zmm_jet_Njet_stack_4->SetBinError(9,12.17015);
   Zmm_jet_Njet_stack_4->SetBinError(10,5.06182);
   Zmm_jet_Njet_stack_4->SetBinError(11,1.395713);
   Zmm_jet_Njet_stack_4->SetEntries(2.233672e+07);

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
   
   TH1D *Zmm_jet_Njet__149 = new TH1D("Zmm_jet_Njet__149","",15,0,15);
   Zmm_jet_Njet__149->SetBinContent(1,2.682469e+07);
   Zmm_jet_Njet__149->SetBinContent(2,4686475);
   Zmm_jet_Njet__149->SetBinContent(3,1104831);
   Zmm_jet_Njet__149->SetBinContent(4,258103);
   Zmm_jet_Njet__149->SetBinContent(5,61011);
   Zmm_jet_Njet__149->SetBinContent(6,14252);
   Zmm_jet_Njet__149->SetBinContent(7,3374);
   Zmm_jet_Njet__149->SetBinContent(8,770);
   Zmm_jet_Njet__149->SetBinContent(9,185);
   Zmm_jet_Njet__149->SetBinContent(10,41);
   Zmm_jet_Njet__149->SetBinContent(11,9);
   Zmm_jet_Njet__149->SetBinContent(12,3);
   Zmm_jet_Njet__149->SetBinContent(16,1);
   Zmm_jet_Njet__149->SetBinError(1,5179.256);
   Zmm_jet_Njet__149->SetBinError(2,2164.827);
   Zmm_jet_Njet__149->SetBinError(3,1051.109);
   Zmm_jet_Njet__149->SetBinError(4,508.0384);
   Zmm_jet_Njet__149->SetBinError(5,247.004);
   Zmm_jet_Njet__149->SetBinError(6,119.3817);
   Zmm_jet_Njet__149->SetBinError(7,58.08614);
   Zmm_jet_Njet__149->SetBinError(8,27.74887);
   Zmm_jet_Njet__149->SetBinError(9,13.60147);
   Zmm_jet_Njet__149->SetBinError(10,6.403124);
   Zmm_jet_Njet__149->SetBinError(11,3);
   Zmm_jet_Njet__149->SetBinError(12,1.732051);
   Zmm_jet_Njet__149->SetBinError(16,1);
   Zmm_jet_Njet__149->SetEntries(3.295374e+07);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet__149->SetLineColor(ci);
   Zmm_jet_Njet__149->SetLineWidth(2);
   Zmm_jet_Njet__149->SetMarkerStyle(20);
   Zmm_jet_Njet__149->SetMarkerSize(1.2);
   Zmm_jet_Njet__149->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet__149->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet__149->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet__149->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet__149->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet__149->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet__149->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet__149->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet__149->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet__149->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet__149->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet__149->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet__149->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet__149->GetZaxis()->SetTitleFont(42);
   Zmm_jet_Njet__149->Draw("same E");
   
   Double_t Graph_from_Zmm_jet_Njet_fx1149[15] = {
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
   Double_t Graph_from_Zmm_jet_Njet_fy1149[15] = {
   2.665087e+07,
   4955962,
   1181796,
   228512,
   43240.63,
   8555.144,
   1833.575,
   279.231,
   70.91583,
   1.608132,
   2.891268,
   0.3840803,
   0.03037312,
   0,
   0};
   Double_t Graph_from_Zmm_jet_Njet_fex1149[15] = {
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
   Double_t Graph_from_Zmm_jet_Njet_fey1149[15] = {
   12201.13,
   4115.83,
   2030.022,
   862.2499,
   358.1906,
   152.2982,
   65.00595,
   25.80323,
   12.26131,
   5.111564,
   1.432883,
   0.1725957,
   0.03037312,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zmm_jet_Njet_fx1149,Graph_from_Zmm_jet_Njet_fy1149,Graph_from_Zmm_jet_Njet_fex1149,Graph_from_Zmm_jet_Njet_fey1149);
   gre->SetName("Graph_from_Zmm_jet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_jet_Njet1149 = new TH1F("Graph_Graph_from_Zmm_jet_Njet1149","",100,0,16.5);
   Graph_Graph_from_Zmm_jet_Njet1149->SetMinimum(-2666311);
   Graph_Graph_from_Zmm_jet_Njet1149->SetMaximum(2.932938e+07);
   Graph_Graph_from_Zmm_jet_Njet1149->SetDirectory(0);
   Graph_Graph_from_Zmm_jet_Njet1149->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_jet_Njet1149->SetLineColor(ci);
   Graph_Graph_from_Zmm_jet_Njet1149->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet1149->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1149->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1149->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_jet_Njet1149->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet1149->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1149->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1149->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_jet_Njet1149->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_jet_Njet1149->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet1149->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1149->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet1149->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_jet_Njet1149);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Njet_Z_jet_Zmm_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__150 = new TH1D("data_mc_ratio__150","",15,0,15);
   data_mc_ratio__150->SetBinContent(1,1.006522);
   data_mc_ratio__150->SetBinContent(2,0.9456236);
   data_mc_ratio__150->SetBinContent(3,0.9348744);
   data_mc_ratio__150->SetBinContent(4,1.129494);
   data_mc_ratio__150->SetBinContent(5,1.410965);
   data_mc_ratio__150->SetBinContent(6,1.665898);
   data_mc_ratio__150->SetBinContent(7,1.840121);
   data_mc_ratio__150->SetBinContent(8,2.757574);
   data_mc_ratio__150->SetBinContent(9,2.608727);
   data_mc_ratio__150->SetBinContent(10,25.49542);
   data_mc_ratio__150->SetBinContent(11,3.112821);
   data_mc_ratio__150->SetBinContent(12,7.810868);
   data_mc_ratio__150->SetBinError(1,0.0001943372);
   data_mc_ratio__150->SetBinError(2,0.0004368126);
   data_mc_ratio__150->SetBinError(3,0.0008894168);
   data_mc_ratio__150->SetBinError(4,0.002223246);
   data_mc_ratio__150->SetBinError(5,0.005712314);
   data_mc_ratio__150->SetBinError(6,0.01395438);
   data_mc_ratio__150->SetBinError(7,0.03167917);
   data_mc_ratio__150->SetBinError(8,0.09937606);
   data_mc_ratio__150->SetBinError(9,0.1917974);
   data_mc_ratio__150->SetBinError(10,3.981716);
   data_mc_ratio__150->SetBinError(11,1.037607);
   data_mc_ratio__150->SetBinError(12,4.509606);
   data_mc_ratio__150->SetMinimum(0.4);
   data_mc_ratio__150->SetMaximum(1.6);
   data_mc_ratio__150->SetEntries(0.3886037);
   data_mc_ratio__150->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__150->SetLineColor(ci);
   data_mc_ratio__150->SetLineWidth(2);
   data_mc_ratio__150->SetMarkerStyle(20);
   data_mc_ratio__150->SetMarkerSize(1.2);
   data_mc_ratio__150->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__150->GetXaxis()->SetRange(1,10);
   data_mc_ratio__150->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__150->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__150->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__150->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__150->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__150->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__150->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__150->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__150->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__150->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__150->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__150->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__150->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__150->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__150->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__150->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__150->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1150[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1150[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1150[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1150[15] = {
   0.0004578134,
   0.0008304805,
   0.001717743,
   0.003773324,
   0.008283659,
   0.01780195,
   0.03545312,
   0.0924082,
   0.1728995,
   3.178573,
   0.4955899,
   0.4493739,
   1,
   0,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1150,Graph_from_mc_statistical_error_fy1150,Graph_from_mc_statistical_error_fex1150,Graph_from_mc_statistical_error_fey1150);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1150 = new TH1F("Graph_Graph_from_mc_statistical_error1150","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1150->SetMinimum(-2.814288);
   Graph_Graph_from_mc_statistical_error1150->SetMaximum(4.814288);
   Graph_Graph_from_mc_statistical_error1150->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1150->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1150->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1150->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1150->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1150->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1150->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1150->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1150->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1150->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1150->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1150->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1150);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_jet_Zmm_18_amcnlo->cd();
   Njet_Z_jet_Zmm_18_amcnlo->Modified();
   Njet_Z_jet_Zmm_18_amcnlo->cd();
   Njet_Z_jet_Zmm_18_amcnlo->SetSelected(Njet_Z_jet_Zmm_18_amcnlo);
}

void Njet_Z_jet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_jet_Zee_16_amcnlo/Njet_Z_jet_Zee_16_amcnlo
//=========  (Thu Jan 14 10:42:22 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_jet_Zee_16_amcnlo = new TCanvas("Njet_Z_jet_Zee_16_amcnlo", "Njet_Z_jet_Zee_16_amcnlo",0,0,600,600);
   Njet_Z_jet_Zee_16_amcnlo->SetHighLightColor(2);
   Njet_Z_jet_Zee_16_amcnlo->Range(0,0,1,1);
   Njet_Z_jet_Zee_16_amcnlo->SetFillColor(0);
   Njet_Z_jet_Zee_16_amcnlo->SetFillStyle(4000);
   Njet_Z_jet_Zee_16_amcnlo->SetBorderMode(0);
   Njet_Z_jet_Zee_16_amcnlo->SetBorderSize(2);
   Njet_Z_jet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_jet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-14094.08,10.52419,1.408e+07);
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
   st->SetMaximum(1.206723e+07);
   
   TH1F *st_stack_33 = new TH1F("st_stack_33","",15,0,15);
   st_stack_33->SetMinimum(0.01);
   st_stack_33->SetMaximum(1.267059e+07);
   st_stack_33->SetDirectory(0);
   st_stack_33->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_33->SetLineColor(ci);
   st_stack_33->GetXaxis()->SetRange(1,10);
   st_stack_33->GetXaxis()->SetLabelFont(42);
   st_stack_33->GetXaxis()->SetLabelSize(0.035);
   st_stack_33->GetXaxis()->SetTitleSize(0.035);
   st_stack_33->GetXaxis()->SetTitleFont(42);
   st_stack_33->GetYaxis()->SetTitle("Events/1.0");
   st_stack_33->GetYaxis()->SetLabelFont(42);
   st_stack_33->GetYaxis()->SetLabelSize(0.05);
   st_stack_33->GetYaxis()->SetTitleSize(0.057);
   st_stack_33->GetYaxis()->SetTitleOffset(1.2);
   st_stack_33->GetYaxis()->SetTitleFont(42);
   st_stack_33->GetZaxis()->SetLabelFont(42);
   st_stack_33->GetZaxis()->SetLabelSize(0.035);
   st_stack_33->GetZaxis()->SetTitleSize(0.035);
   st_stack_33->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_33);
   
   
   TH1D *Zee_jet_Njet_stack_1 = new TH1D("Zee_jet_Njet_stack_1","",15,0,15);
   Zee_jet_Njet_stack_1->SetBinContent(1,261.0155);
   Zee_jet_Njet_stack_1->SetBinContent(2,940.5987);
   Zee_jet_Njet_stack_1->SetBinContent(3,441.1146);
   Zee_jet_Njet_stack_1->SetBinContent(4,157.5722);
   Zee_jet_Njet_stack_1->SetBinContent(5,45.49507);
   Zee_jet_Njet_stack_1->SetBinContent(6,12.10135);
   Zee_jet_Njet_stack_1->SetBinContent(7,2.908412);
   Zee_jet_Njet_stack_1->SetBinContent(9,0.1812893);
   Zee_jet_Njet_stack_1->SetBinError(1,6.918341);
   Zee_jet_Njet_stack_1->SetBinError(2,13.29599);
   Zee_jet_Njet_stack_1->SetBinError(3,9.111);
   Zee_jet_Njet_stack_1->SetBinError(4,5.447226);
   Zee_jet_Njet_stack_1->SetBinError(5,2.915393);
   Zee_jet_Njet_stack_1->SetBinError(6,1.506203);
   Zee_jet_Njet_stack_1->SetBinError(7,0.7506841);
   Zee_jet_Njet_stack_1->SetBinError(9,0.1812893);
   Zee_jet_Njet_stack_1->SetEntries(10775);

   ci = TColor::GetColor("#cccc00");
   Zee_jet_Njet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_stack_1->SetLineColor(ci);
   Zee_jet_Njet_stack_1->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_stack_1,"");
   
   TH1D *Zee_jet_Njet_stack_2 = new TH1D("Zee_jet_Njet_stack_2","",15,0,15);
   Zee_jet_Njet_stack_2->SetBinContent(1,6685.86);
   Zee_jet_Njet_stack_2->SetBinContent(2,5534.824);
   Zee_jet_Njet_stack_2->SetBinContent(3,3070.791);
   Zee_jet_Njet_stack_2->SetBinContent(4,871.0599);
   Zee_jet_Njet_stack_2->SetBinContent(5,209.3158);
   Zee_jet_Njet_stack_2->SetBinContent(6,54.42866);
   Zee_jet_Njet_stack_2->SetBinContent(7,8.422499);
   Zee_jet_Njet_stack_2->SetBinContent(8,0.8571035);
   Zee_jet_Njet_stack_2->SetBinError(1,51.27725);
   Zee_jet_Njet_stack_2->SetBinError(2,45.14404);
   Zee_jet_Njet_stack_2->SetBinError(3,33.06399);
   Zee_jet_Njet_stack_2->SetBinError(4,17.71136);
   Zee_jet_Njet_stack_2->SetBinError(5,8.654681);
   Zee_jet_Njet_stack_2->SetBinError(6,4.482065);
   Zee_jet_Njet_stack_2->SetBinError(7,1.687873);
   Zee_jet_Njet_stack_2->SetBinError(8,0.4948927);
   Zee_jet_Njet_stack_2->SetEntries(48549);

   ci = TColor::GetColor("#0000cc");
   Zee_jet_Njet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_stack_2->SetLineColor(ci);
   Zee_jet_Njet_stack_2->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_stack_2,"");
   
   TH1D *Zee_jet_Njet_stack_3 = new TH1D("Zee_jet_Njet_stack_3","",15,0,15);
   Zee_jet_Njet_stack_3->SetBinContent(1,685.6922);
   Zee_jet_Njet_stack_3->SetBinContent(2,4265.698);
   Zee_jet_Njet_stack_3->SetBinContent(3,7317.354);
   Zee_jet_Njet_stack_3->SetBinContent(4,3595.038);
   Zee_jet_Njet_stack_3->SetBinContent(5,1289.788);
   Zee_jet_Njet_stack_3->SetBinContent(6,410.0799);
   Zee_jet_Njet_stack_3->SetBinContent(7,112.9425);
   Zee_jet_Njet_stack_3->SetBinContent(8,25.91394);
   Zee_jet_Njet_stack_3->SetBinContent(9,7.253106);
   Zee_jet_Njet_stack_3->SetBinContent(10,1.143139);
   Zee_jet_Njet_stack_3->SetBinContent(11,0.4175993);
   Zee_jet_Njet_stack_3->SetBinContent(12,0.6781466);
   Zee_jet_Njet_stack_3->SetBinError(1,11.22478);
   Zee_jet_Njet_stack_3->SetBinError(2,28.12005);
   Zee_jet_Njet_stack_3->SetBinError(3,36.92151);
   Zee_jet_Njet_stack_3->SetBinError(4,25.85908);
   Zee_jet_Njet_stack_3->SetBinError(5,15.46976);
   Zee_jet_Njet_stack_3->SetBinError(6,8.719231);
   Zee_jet_Njet_stack_3->SetBinError(7,4.568772);
   Zee_jet_Njet_stack_3->SetBinError(8,2.197062);
   Zee_jet_Njet_stack_3->SetBinError(9,1.158749);
   Zee_jet_Njet_stack_3->SetBinError(10,0.4672188);
   Zee_jet_Njet_stack_3->SetBinError(11,0.2914282);
   Zee_jet_Njet_stack_3->SetBinError(12,0.3426711);
   Zee_jet_Njet_stack_3->SetEntries(101728);

   ci = TColor::GetColor("#cc0000");
   Zee_jet_Njet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_stack_3->SetLineColor(ci);
   Zee_jet_Njet_stack_3->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_stack_3,"");
   
   TH1D *Zee_jet_Njet_stack_4 = new TH1D("Zee_jet_Njet_stack_4","",15,0,15);
   Zee_jet_Njet_stack_4->SetBinContent(1,6496566);
   Zee_jet_Njet_stack_4->SetBinContent(2,1146873);
   Zee_jet_Njet_stack_4->SetBinContent(3,255142.2);
   Zee_jet_Njet_stack_4->SetBinContent(4,56493.9);
   Zee_jet_Njet_stack_4->SetBinContent(5,11181.58);
   Zee_jet_Njet_stack_4->SetBinContent(6,2131.167);
   Zee_jet_Njet_stack_4->SetBinContent(7,429.9067);
   Zee_jet_Njet_stack_4->SetBinContent(8,83.29805);
   Zee_jet_Njet_stack_4->SetBinContent(9,11.49254);
   Zee_jet_Njet_stack_4->SetBinContent(10,-0.4499981);
   Zee_jet_Njet_stack_4->SetBinContent(11,-0.9220073);
   Zee_jet_Njet_stack_4->SetBinError(1,3990.533);
   Zee_jet_Njet_stack_4->SetBinError(2,1379.769);
   Zee_jet_Njet_stack_4->SetBinError(3,612.3727);
   Zee_jet_Njet_stack_4->SetBinError(4,275.1029);
   Zee_jet_Njet_stack_4->SetBinError(5,121.9755);
   Zee_jet_Njet_stack_4->SetBinError(6,54.60155);
   Zee_jet_Njet_stack_4->SetBinError(7,24.63751);
   Zee_jet_Njet_stack_4->SetBinError(8,11.28005);
   Zee_jet_Njet_stack_4->SetBinError(9,4.848012);
   Zee_jet_Njet_stack_4->SetBinError(10,2.238452);
   Zee_jet_Njet_stack_4->SetBinError(11,1.38702);
   Zee_jet_Njet_stack_4->SetEntries(1.152603e+07);

   ci = TColor::GetColor("#00cc00");
   Zee_jet_Njet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_stack_4->SetLineColor(ci);
   Zee_jet_Njet_stack_4->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_stack_4,"");
   st->Draw("hist");
   
   TH1D *Zee_jet_Njet__65 = new TH1D("Zee_jet_Njet__65","",15,0,15);
   Zee_jet_Njet__65->SetBinContent(1,6636975);
   Zee_jet_Njet__65->SetBinContent(2,1141040);
   Zee_jet_Njet__65->SetBinContent(3,266493);
   Zee_jet_Njet__65->SetBinContent(4,61415);
   Zee_jet_Njet__65->SetBinContent(5,14563);
   Zee_jet_Njet__65->SetBinContent(6,3380);
   Zee_jet_Njet__65->SetBinContent(7,782);
   Zee_jet_Njet__65->SetBinContent(8,201);
   Zee_jet_Njet__65->SetBinContent(9,55);
   Zee_jet_Njet__65->SetBinContent(10,13);
   Zee_jet_Njet__65->SetBinContent(11,1);
   Zee_jet_Njet__65->SetBinContent(13,1);
   Zee_jet_Njet__65->SetBinError(1,2576.233);
   Zee_jet_Njet__65->SetBinError(2,1068.195);
   Zee_jet_Njet__65->SetBinError(3,516.2296);
   Zee_jet_Njet__65->SetBinError(4,247.8205);
   Zee_jet_Njet__65->SetBinError(5,120.6773);
   Zee_jet_Njet__65->SetBinError(6,58.13777);
   Zee_jet_Njet__65->SetBinError(7,27.96426);
   Zee_jet_Njet__65->SetBinError(8,14.17745);
   Zee_jet_Njet__65->SetBinError(9,7.416198);
   Zee_jet_Njet__65->SetBinError(10,3.605551);
   Zee_jet_Njet__65->SetBinError(11,1);
   Zee_jet_Njet__65->SetBinError(13,1);
   Zee_jet_Njet__65->SetEntries(8124919);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet__65->SetLineColor(ci);
   Zee_jet_Njet__65->SetLineWidth(2);
   Zee_jet_Njet__65->SetMarkerStyle(20);
   Zee_jet_Njet__65->SetMarkerSize(1.2);
   Zee_jet_Njet__65->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet__65->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet__65->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet__65->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet__65->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet__65->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet__65->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet__65->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet__65->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet__65->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet__65->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet__65->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet__65->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet__65->GetZaxis()->SetTitleFont(42);
   Zee_jet_Njet__65->Draw("same E");
   
   Double_t Graph_from_Zee_jet_Njet_fx1065[15] = {
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
   Double_t Graph_from_Zee_jet_Njet_fy1065[15] = {
   6504198,
   1157614,
   265971.5,
   61117.57,
   12726.18,
   2607.777,
   554.1801,
   110.0691,
   18.92693,
   0.6931409,
   -0.504408,
   0.6781466,
   0,
   0,
   0};
   Double_t Graph_from_Zee_jet_Njet_fex1065[15] = {
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
   Double_t Graph_from_Zee_jet_Njet_fey1065[15] = {
   3990.884,
   1380.857,
   614.4426,
   276.9362,
   123.2913,
   55.49515,
   25.12555,
   11.50267,
   4.987864,
   2.286692,
   1.417305,
   0.3426711,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zee_jet_Njet_fx1065,Graph_from_Zee_jet_Njet_fy1065,Graph_from_Zee_jet_Njet_fex1065,Graph_from_Zee_jet_Njet_fey1065);
   gre->SetName("Graph_from_Zee_jet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_jet_Njet1065 = new TH1F("Graph_Graph_from_Zee_jet_Njet1065","",100,0,16.5);
   Graph_Graph_from_Zee_jet_Njet1065->SetMinimum(-650821);
   Graph_Graph_from_Zee_jet_Njet1065->SetMaximum(7159008);
   Graph_Graph_from_Zee_jet_Njet1065->SetDirectory(0);
   Graph_Graph_from_Zee_jet_Njet1065->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_jet_Njet1065->SetLineColor(ci);
   Graph_Graph_from_Zee_jet_Njet1065->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet1065->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1065->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1065->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_jet_Njet1065->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet1065->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1065->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1065->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_jet_Njet1065->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_jet_Njet1065->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet1065->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1065->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1065->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_jet_Njet1065);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_jet_Njet","Data (Z(ee) + jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_jet_Njet_stack_4","Z+jets","F");

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
   entry=leg->AddEntry("Zee_jet_Njet_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_jet_Njet_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_jet_Njet_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_jet_Njet","MC unc. (stat.)","fl");

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
   Njet_Z_jet_Zee_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__66 = new TH1D("data_mc_ratio__66","",15,0,15);
   data_mc_ratio__66->SetBinContent(1,1.020414);
   data_mc_ratio__66->SetBinContent(2,0.9856824);
   data_mc_ratio__66->SetBinContent(3,1.001961);
   data_mc_ratio__66->SetBinContent(4,1.004866);
   data_mc_ratio__66->SetBinContent(5,1.144334);
   data_mc_ratio__66->SetBinContent(6,1.296123);
   data_mc_ratio__66->SetBinContent(7,1.411094);
   data_mc_ratio__66->SetBinContent(8,1.826126);
   data_mc_ratio__66->SetBinContent(9,2.905912);
   data_mc_ratio__66->SetBinContent(10,18.7552);
   data_mc_ratio__66->SetBinContent(11,-1.982522);
   data_mc_ratio__66->SetBinError(1,0.0003960877);
   data_mc_ratio__66->SetBinError(2,0.0009227553);
   data_mc_ratio__66->SetBinError(3,0.001940921);
   data_mc_ratio__66->SetBinError(4,0.004054816);
   data_mc_ratio__66->SetBinError(5,0.009482601);
   data_mc_ratio__66->SetBinError(6,0.02229399);
   data_mc_ratio__66->SetBinError(7,0.0504606);
   data_mc_ratio__66->SetBinError(8,0.128805);
   data_mc_ratio__66->SetBinError(9,0.3918331);
   data_mc_ratio__66->SetBinError(10,5.201758);
   data_mc_ratio__66->SetBinError(11,1.982522);
   data_mc_ratio__66->SetMinimum(0.4);
   data_mc_ratio__66->SetMaximum(1.6);
   data_mc_ratio__66->SetEntries(0.2216662);
   data_mc_ratio__66->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__66->SetLineColor(ci);
   data_mc_ratio__66->SetLineWidth(2);
   data_mc_ratio__66->SetMarkerStyle(20);
   data_mc_ratio__66->SetMarkerSize(1.2);
   data_mc_ratio__66->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__66->GetXaxis()->SetRange(1,10);
   data_mc_ratio__66->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__66->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__66->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__66->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__66->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__66->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__66->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__66->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__66->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__66->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__66->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__66->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__66->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__66->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__66->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__66->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__66->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1066[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1066[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1066[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1066[15] = {
   0.0006135858,
   0.001192848,
   0.002310183,
   0.004531204,
   0.00968801,
   0.02128063,
   0.04533823,
   0.1045041,
   0.2635327,
   3.299029,
   0,
   0.5053054,
   0,
   0,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1066,Graph_from_mc_statistical_error_fy1066,Graph_from_mc_statistical_error_fex1066,Graph_from_mc_statistical_error_fey1066);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1066 = new TH1F("Graph_Graph_from_mc_statistical_error1066","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1066->SetMinimum(-2.958835);
   Graph_Graph_from_mc_statistical_error1066->SetMaximum(4.958835);
   Graph_Graph_from_mc_statistical_error1066->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1066->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1066->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1066->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1066->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1066->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1066->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1066->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1066->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1066->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1066->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1066->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1066->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1066->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1066->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1066->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1066);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_jet_Zee_16_amcnlo->cd();
   Njet_Z_jet_Zee_16_amcnlo->Modified();
   Njet_Z_jet_Zee_16_amcnlo->cd();
   Njet_Z_jet_Zee_16_amcnlo->SetSelected(Njet_Z_jet_Zee_16_amcnlo);
}

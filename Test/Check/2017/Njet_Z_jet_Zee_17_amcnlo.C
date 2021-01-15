void Njet_Z_jet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_jet_Zee_17_amcnlo/Njet_Z_jet_Zee_17_amcnlo
//=========  (Thu Jan 14 10:42:22 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_jet_Zee_17_amcnlo = new TCanvas("Njet_Z_jet_Zee_17_amcnlo", "Njet_Z_jet_Zee_17_amcnlo",0,0,600,600);
   Njet_Z_jet_Zee_17_amcnlo->SetHighLightColor(2);
   Njet_Z_jet_Zee_17_amcnlo->Range(0,0,1,1);
   Njet_Z_jet_Zee_17_amcnlo->SetFillColor(0);
   Njet_Z_jet_Zee_17_amcnlo->SetFillStyle(4000);
   Njet_Z_jet_Zee_17_amcnlo->SetBorderMode(0);
   Njet_Z_jet_Zee_17_amcnlo->SetBorderSize(2);
   Njet_Z_jet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_jet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-16847.97,10.52419,1.683113e+07);
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
   st->SetMaximum(1.442508e+07);
   
   TH1F *st_stack_34 = new TH1F("st_stack_34","",15,0,15);
   st_stack_34->SetMinimum(0.01);
   st_stack_34->SetMaximum(1.514633e+07);
   st_stack_34->SetDirectory(0);
   st_stack_34->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_34->SetLineColor(ci);
   st_stack_34->GetXaxis()->SetRange(1,10);
   st_stack_34->GetXaxis()->SetLabelFont(42);
   st_stack_34->GetXaxis()->SetLabelSize(0.035);
   st_stack_34->GetXaxis()->SetTitleSize(0.035);
   st_stack_34->GetXaxis()->SetTitleFont(42);
   st_stack_34->GetYaxis()->SetTitle("Events/1.0");
   st_stack_34->GetYaxis()->SetLabelFont(42);
   st_stack_34->GetYaxis()->SetLabelSize(0.05);
   st_stack_34->GetYaxis()->SetTitleSize(0.057);
   st_stack_34->GetYaxis()->SetTitleOffset(1.2);
   st_stack_34->GetYaxis()->SetTitleFont(42);
   st_stack_34->GetZaxis()->SetLabelFont(42);
   st_stack_34->GetZaxis()->SetLabelSize(0.035);
   st_stack_34->GetZaxis()->SetTitleSize(0.035);
   st_stack_34->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_34);
   
   
   TH1D *Zee_jet_Njet_stack_1 = new TH1D("Zee_jet_Njet_stack_1","",15,0,15);
   Zee_jet_Njet_stack_1->SetBinContent(1,302.0024);
   Zee_jet_Njet_stack_1->SetBinContent(2,1102.542);
   Zee_jet_Njet_stack_1->SetBinContent(3,580.4606);
   Zee_jet_Njet_stack_1->SetBinContent(4,186.6302);
   Zee_jet_Njet_stack_1->SetBinContent(5,49.64842);
   Zee_jet_Njet_stack_1->SetBinContent(6,11.56361);
   Zee_jet_Njet_stack_1->SetBinContent(7,2.392268);
   Zee_jet_Njet_stack_1->SetBinContent(8,0.3444917);
   Zee_jet_Njet_stack_1->SetBinContent(9,0.1465598);
   Zee_jet_Njet_stack_1->SetBinError(1,8.316233);
   Zee_jet_Njet_stack_1->SetBinError(2,14.89895);
   Zee_jet_Njet_stack_1->SetBinError(3,10.67269);
   Zee_jet_Njet_stack_1->SetBinError(4,6.113294);
   Zee_jet_Njet_stack_1->SetBinError(5,3.153154);
   Zee_jet_Njet_stack_1->SetBinError(6,1.474744);
   Zee_jet_Njet_stack_1->SetBinError(7,0.690368);
   Zee_jet_Njet_stack_1->SetBinError(8,0.2572456);
   Zee_jet_Njet_stack_1->SetBinError(9,0.1465598);
   Zee_jet_Njet_stack_1->SetEntries(13291);

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
   Zee_jet_Njet_stack_2->SetBinContent(1,7828.481);
   Zee_jet_Njet_stack_2->SetBinContent(2,6750.437);
   Zee_jet_Njet_stack_2->SetBinContent(3,4007.18);
   Zee_jet_Njet_stack_2->SetBinContent(4,1109.908);
   Zee_jet_Njet_stack_2->SetBinContent(5,240.96);
   Zee_jet_Njet_stack_2->SetBinContent(6,48.41237);
   Zee_jet_Njet_stack_2->SetBinContent(7,7.29419);
   Zee_jet_Njet_stack_2->SetBinContent(8,2.451066);
   Zee_jet_Njet_stack_2->SetBinError(1,52.23116);
   Zee_jet_Njet_stack_2->SetBinError(2,44.9787);
   Zee_jet_Njet_stack_2->SetBinError(3,34.1932);
   Zee_jet_Njet_stack_2->SetBinError(4,17.8627);
   Zee_jet_Njet_stack_2->SetBinError(5,8.233669);
   Zee_jet_Njet_stack_2->SetBinError(6,3.767525);
   Zee_jet_Njet_stack_2->SetBinError(7,1.423497);
   Zee_jet_Njet_stack_2->SetBinError(8,0.8355461);
   Zee_jet_Njet_stack_2->SetEntries(79934);

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
   Zee_jet_Njet_stack_3->SetBinContent(1,762.6393);
   Zee_jet_Njet_stack_3->SetBinContent(2,5023.582);
   Zee_jet_Njet_stack_3->SetBinContent(3,9185.168);
   Zee_jet_Njet_stack_3->SetBinContent(4,4730.959);
   Zee_jet_Njet_stack_3->SetBinContent(5,1702.707);
   Zee_jet_Njet_stack_3->SetBinContent(6,529.2214);
   Zee_jet_Njet_stack_3->SetBinContent(7,133.7767);
   Zee_jet_Njet_stack_3->SetBinContent(8,30.17489);
   Zee_jet_Njet_stack_3->SetBinContent(9,7.482477);
   Zee_jet_Njet_stack_3->SetBinContent(10,0.5103884);
   Zee_jet_Njet_stack_3->SetBinContent(11,1.184123);
   Zee_jet_Njet_stack_3->SetBinError(1,16.87726);
   Zee_jet_Njet_stack_3->SetBinError(2,43.82825);
   Zee_jet_Njet_stack_3->SetBinError(3,59.24943);
   Zee_jet_Njet_stack_3->SetBinError(4,42.31459);
   Zee_jet_Njet_stack_3->SetBinError(5,25.30032);
   Zee_jet_Njet_stack_3->SetBinError(6,14.05206);
   Zee_jet_Njet_stack_3->SetBinError(7,7.134182);
   Zee_jet_Njet_stack_3->SetBinError(8,3.356892);
   Zee_jet_Njet_stack_3->SetBinError(9,1.728005);
   Zee_jet_Njet_stack_3->SetBinError(10,0.3944475);
   Zee_jet_Njet_stack_3->SetBinError(11,0.7017451);
   Zee_jet_Njet_stack_3->SetEntries(69557);

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
   Zee_jet_Njet_stack_4->SetBinContent(1,7580989);
   Zee_jet_Njet_stack_4->SetBinContent(2,1474225);
   Zee_jet_Njet_stack_4->SetBinContent(3,341298.1);
   Zee_jet_Njet_stack_4->SetBinContent(4,67183.21);
   Zee_jet_Njet_stack_4->SetBinContent(5,11856.29);
   Zee_jet_Njet_stack_4->SetBinContent(6,2218.946);
   Zee_jet_Njet_stack_4->SetBinContent(7,410.673);
   Zee_jet_Njet_stack_4->SetBinContent(8,73.90186);
   Zee_jet_Njet_stack_4->SetBinContent(9,13.75102);
   Zee_jet_Njet_stack_4->SetBinContent(10,6.90734);
   Zee_jet_Njet_stack_4->SetBinContent(11,1.949019);
   Zee_jet_Njet_stack_4->SetBinContent(13,0.9511377);
   Zee_jet_Njet_stack_4->SetBinError(1,4732.433);
   Zee_jet_Njet_stack_4->SetBinError(2,1740.685);
   Zee_jet_Njet_stack_4->SetBinError(3,894.5555);
   Zee_jet_Njet_stack_4->SetBinError(4,390.0232);
   Zee_jet_Njet_stack_4->SetBinError(5,162.1191);
   Zee_jet_Njet_stack_4->SetBinError(6,68.67597);
   Zee_jet_Njet_stack_4->SetBinError(7,28.93898);
   Zee_jet_Njet_stack_4->SetBinError(8,12.2603);
   Zee_jet_Njet_stack_4->SetBinError(9,5.442231);
   Zee_jet_Njet_stack_4->SetBinError(10,2.636649);
   Zee_jet_Njet_stack_4->SetBinError(11,1.378197);
   Zee_jet_Njet_stack_4->SetBinError(13,0.9511377);
   Zee_jet_Njet_stack_4->SetEntries(1.129657e+07);

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
   
   TH1D *Zee_jet_Njet__67 = new TH1D("Zee_jet_Njet__67","",15,0,15);
   Zee_jet_Njet__67->SetBinContent(1,7933793);
   Zee_jet_Njet__67->SetBinContent(2,1456241);
   Zee_jet_Njet__67->SetBinContent(3,349902);
   Zee_jet_Njet__67->SetBinContent(4,82244);
   Zee_jet_Njet__67->SetBinContent(5,19476);
   Zee_jet_Njet__67->SetBinContent(6,4709);
   Zee_jet_Njet__67->SetBinContent(7,1072);
   Zee_jet_Njet__67->SetBinContent(8,289);
   Zee_jet_Njet__67->SetBinContent(9,58);
   Zee_jet_Njet__67->SetBinContent(10,11);
   Zee_jet_Njet__67->SetBinContent(11,2);
   Zee_jet_Njet__67->SetBinContent(12,2);
   Zee_jet_Njet__67->SetBinError(1,2816.699);
   Zee_jet_Njet__67->SetBinError(2,1206.748);
   Zee_jet_Njet__67->SetBinError(3,591.5251);
   Zee_jet_Njet__67->SetBinError(4,286.7821);
   Zee_jet_Njet__67->SetBinError(5,139.5564);
   Zee_jet_Njet__67->SetBinError(6,68.62215);
   Zee_jet_Njet__67->SetBinError(7,32.74141);
   Zee_jet_Njet__67->SetBinError(8,17);
   Zee_jet_Njet__67->SetBinError(9,7.615773);
   Zee_jet_Njet__67->SetBinError(10,3.316625);
   Zee_jet_Njet__67->SetBinError(11,1.414214);
   Zee_jet_Njet__67->SetBinError(12,1.414214);
   Zee_jet_Njet__67->SetEntries(9847799);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet__67->SetLineColor(ci);
   Zee_jet_Njet__67->SetLineWidth(2);
   Zee_jet_Njet__67->SetMarkerStyle(20);
   Zee_jet_Njet__67->SetMarkerSize(1.2);
   Zee_jet_Njet__67->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet__67->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet__67->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet__67->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet__67->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet__67->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet__67->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet__67->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet__67->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet__67->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet__67->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet__67->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet__67->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet__67->GetZaxis()->SetTitleFont(42);
   Zee_jet_Njet__67->Draw("same E");
   
   Double_t Graph_from_Zee_jet_Njet_fx1067[15] = {
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
   Double_t Graph_from_Zee_jet_Njet_fy1067[15] = {
   7589882,
   1487102,
   355070.9,
   73210.71,
   13849.61,
   2808.144,
   554.1362,
   106.8723,
   21.38006,
   7.417728,
   3.133142,
   0,
   0.9511377,
   0,
   0};
   Double_t Graph_from_Zee_jet_Njet_fex1067[15] = {
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
   Double_t Graph_from_Zee_jet_Njet_fey1067[15] = {
   4732.759,
   1741.881,
   897.2308,
   392.7659,
   164.3181,
   70.21551,
   29.84735,
   12.74158,
   5.711861,
   2.665991,
   1.546568,
   0,
   0.9511377,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zee_jet_Njet_fx1067,Graph_from_Zee_jet_Njet_fy1067,Graph_from_Zee_jet_Njet_fex1067,Graph_from_Zee_jet_Njet_fey1067);
   gre->SetName("Graph_from_Zee_jet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_jet_Njet1067 = new TH1F("Graph_Graph_from_Zee_jet_Njet1067","",100,0,16.5);
   Graph_Graph_from_Zee_jet_Njet1067->SetMinimum(0);
   Graph_Graph_from_Zee_jet_Njet1067->SetMaximum(8354077);
   Graph_Graph_from_Zee_jet_Njet1067->SetDirectory(0);
   Graph_Graph_from_Zee_jet_Njet1067->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_jet_Njet1067->SetLineColor(ci);
   Graph_Graph_from_Zee_jet_Njet1067->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet1067->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1067->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1067->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_jet_Njet1067->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet1067->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1067->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1067->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_jet_Njet1067->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_jet_Njet1067->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet1067->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1067->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1067->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_jet_Njet1067);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Njet_Z_jet_Zee_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__68 = new TH1D("data_mc_ratio__68","",15,0,15);
   data_mc_ratio__68->SetBinContent(1,1.045312);
   data_mc_ratio__68->SetBinContent(2,0.9792479);
   data_mc_ratio__68->SetBinContent(3,0.9854425);
   data_mc_ratio__68->SetBinContent(4,1.123388);
   data_mc_ratio__68->SetBinContent(5,1.406249);
   data_mc_ratio__68->SetBinContent(6,1.676908);
   data_mc_ratio__68->SetBinContent(7,1.934542);
   data_mc_ratio__68->SetBinContent(8,2.704162);
   data_mc_ratio__68->SetBinContent(9,2.712808);
   data_mc_ratio__68->SetBinContent(10,1.482934);
   data_mc_ratio__68->SetBinContent(11,0.6383369);
   data_mc_ratio__68->SetBinError(1,0.0003711123);
   data_mc_ratio__68->SetBinError(2,0.0008114766);
   data_mc_ratio__68->SetBinError(3,0.001665935);
   data_mc_ratio__68->SetBinError(4,0.003917216);
   data_mc_ratio__68->SetBinError(5,0.01007656);
   data_mc_ratio__68->SetBinError(6,0.02443684);
   data_mc_ratio__68->SetBinError(7,0.05908549);
   data_mc_ratio__68->SetBinError(8,0.1590683);
   data_mc_ratio__68->SetBinError(9,0.3562092);
   data_mc_ratio__68->SetBinError(10,0.4471214);
   data_mc_ratio__68->SetBinError(11,0.4513723);
   data_mc_ratio__68->SetMinimum(0.4);
   data_mc_ratio__68->SetMaximum(1.6);
   data_mc_ratio__68->SetEntries(175.6712);
   data_mc_ratio__68->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__68->SetLineColor(ci);
   data_mc_ratio__68->SetLineWidth(2);
   data_mc_ratio__68->SetMarkerStyle(20);
   data_mc_ratio__68->SetMarkerSize(1.2);
   data_mc_ratio__68->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__68->GetXaxis()->SetRange(1,10);
   data_mc_ratio__68->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__68->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__68->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__68->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__68->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__68->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__68->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__68->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__68->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__68->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__68->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__68->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__68->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__68->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__68->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__68->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__68->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1068[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1068[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1068[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1068[15] = {
   0.0006235616,
   0.001171326,
   0.002526906,
   0.00536487,
   0.01186446,
   0.02500425,
   0.05386284,
   0.1192225,
   0.2671584,
   0.359408,
   0.4936157,
   0,
   1,
   0,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1068,Graph_from_mc_statistical_error_fy1068,Graph_from_mc_statistical_error_fex1068,Graph_from_mc_statistical_error_fey1068);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1068 = new TH1F("Graph_Graph_from_mc_statistical_error1068","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1068->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1068->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1068->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1068->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1068->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1068->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1068->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1068->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1068->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1068->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1068->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1068->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1068->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1068->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1068->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1068->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1068->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1068->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1068);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_jet_Zee_17_amcnlo->cd();
   Njet_Z_jet_Zee_17_amcnlo->Modified();
   Njet_Z_jet_Zee_17_amcnlo->cd();
   Njet_Z_jet_Zee_17_amcnlo->SetSelected(Njet_Z_jet_Zee_17_amcnlo);
}

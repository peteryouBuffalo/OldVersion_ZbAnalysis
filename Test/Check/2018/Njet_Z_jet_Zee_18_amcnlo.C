void Njet_Z_jet_Zee_18_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_jet_Zee_18_amcnlo/Njet_Z_jet_Zee_18_amcnlo
//=========  (Thu Jan 14 10:42:22 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_jet_Zee_18_amcnlo = new TCanvas("Njet_Z_jet_Zee_18_amcnlo", "Njet_Z_jet_Zee_18_amcnlo",0,0,600,600);
   Njet_Z_jet_Zee_18_amcnlo->SetHighLightColor(2);
   Njet_Z_jet_Zee_18_amcnlo->Range(0,0,1,1);
   Njet_Z_jet_Zee_18_amcnlo->SetFillColor(0);
   Njet_Z_jet_Zee_18_amcnlo->SetFillStyle(4000);
   Njet_Z_jet_Zee_18_amcnlo->SetBorderMode(0);
   Njet_Z_jet_Zee_18_amcnlo->SetBorderSize(2);
   Njet_Z_jet_Zee_18_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_jet_Zee_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-24994.78,10.52419,2.49698e+07);
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
   st->SetMaximum(2.14003e+07);
   
   TH1F *st_stack_35 = new TH1F("st_stack_35","",15,0,15);
   st_stack_35->SetMinimum(0.01);
   st_stack_35->SetMaximum(2.247032e+07);
   st_stack_35->SetDirectory(0);
   st_stack_35->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_35->SetLineColor(ci);
   st_stack_35->GetXaxis()->SetRange(1,10);
   st_stack_35->GetXaxis()->SetLabelFont(42);
   st_stack_35->GetXaxis()->SetLabelSize(0.035);
   st_stack_35->GetXaxis()->SetTitleSize(0.035);
   st_stack_35->GetXaxis()->SetTitleFont(42);
   st_stack_35->GetYaxis()->SetTitle("Events/1.0");
   st_stack_35->GetYaxis()->SetLabelFont(42);
   st_stack_35->GetYaxis()->SetLabelSize(0.05);
   st_stack_35->GetYaxis()->SetTitleSize(0.057);
   st_stack_35->GetYaxis()->SetTitleOffset(1.2);
   st_stack_35->GetYaxis()->SetTitleFont(42);
   st_stack_35->GetZaxis()->SetLabelFont(42);
   st_stack_35->GetZaxis()->SetLabelSize(0.035);
   st_stack_35->GetZaxis()->SetTitleSize(0.035);
   st_stack_35->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_35);
   
   
   TH1D *Zee_jet_Njet_stack_1 = new TH1D("Zee_jet_Njet_stack_1","",15,0,15);
   Zee_jet_Njet_stack_1->SetBinContent(1,454.4986);
   Zee_jet_Njet_stack_1->SetBinContent(2,1633.505);
   Zee_jet_Njet_stack_1->SetBinContent(3,857.3827);
   Zee_jet_Njet_stack_1->SetBinContent(4,303.4233);
   Zee_jet_Njet_stack_1->SetBinContent(5,81.70689);
   Zee_jet_Njet_stack_1->SetBinContent(6,23.68703);
   Zee_jet_Njet_stack_1->SetBinContent(7,3.983652);
   Zee_jet_Njet_stack_1->SetBinContent(8,1.305432);
   Zee_jet_Njet_stack_1->SetBinContent(9,0.05488546);
   Zee_jet_Njet_stack_1->SetBinError(1,10.93056);
   Zee_jet_Njet_stack_1->SetBinError(2,20.98017);
   Zee_jet_Njet_stack_1->SetBinError(3,15.33597);
   Zee_jet_Njet_stack_1->SetBinError(4,9.072832);
   Zee_jet_Njet_stack_1->SetBinError(5,4.69598);
   Zee_jet_Njet_stack_1->SetBinError(6,2.549689);
   Zee_jet_Njet_stack_1->SetBinError(7,1.04344);
   Zee_jet_Njet_stack_1->SetBinError(8,0.5864644);
   Zee_jet_Njet_stack_1->SetBinError(9,0.05488546);
   Zee_jet_Njet_stack_1->SetEntries(15307);

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
   Zee_jet_Njet_stack_2->SetBinContent(1,12405.59);
   Zee_jet_Njet_stack_2->SetBinContent(2,10412.82);
   Zee_jet_Njet_stack_2->SetBinContent(3,6129.983);
   Zee_jet_Njet_stack_2->SetBinContent(4,1647.385);
   Zee_jet_Njet_stack_2->SetBinContent(5,354.2982);
   Zee_jet_Njet_stack_2->SetBinContent(6,60.60787);
   Zee_jet_Njet_stack_2->SetBinContent(7,9.385569);
   Zee_jet_Njet_stack_2->SetBinContent(8,4.161532);
   Zee_jet_Njet_stack_2->SetBinError(1,95.68226);
   Zee_jet_Njet_stack_2->SetBinError(2,84.23219);
   Zee_jet_Njet_stack_2->SetBinError(3,64.18209);
   Zee_jet_Njet_stack_2->SetBinError(4,32.62201);
   Zee_jet_Njet_stack_2->SetBinError(5,15.17667);
   Zee_jet_Njet_stack_2->SetBinError(6,6.145332);
   Zee_jet_Njet_stack_2->SetBinError(7,2.293636);
   Zee_jet_Njet_stack_2->SetBinError(8,1.768041);
   Zee_jet_Njet_stack_2->SetEntries(52544);

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
   Zee_jet_Njet_stack_3->SetBinContent(1,1155.399);
   Zee_jet_Njet_stack_3->SetBinContent(2,7578.656);
   Zee_jet_Njet_stack_3->SetBinContent(3,13825.98);
   Zee_jet_Njet_stack_3->SetBinContent(4,7104.737);
   Zee_jet_Njet_stack_3->SetBinContent(5,2628.45);
   Zee_jet_Njet_stack_3->SetBinContent(6,783.9906);
   Zee_jet_Njet_stack_3->SetBinContent(7,206.9758);
   Zee_jet_Njet_stack_3->SetBinContent(8,49.29242);
   Zee_jet_Njet_stack_3->SetBinContent(9,11.70247);
   Zee_jet_Njet_stack_3->SetBinContent(10,2.431616);
   Zee_jet_Njet_stack_3->SetBinContent(11,0.3637887);
   Zee_jet_Njet_stack_3->SetBinContent(14,0.08241254);
   Zee_jet_Njet_stack_3->SetBinError(1,10.15866);
   Zee_jet_Njet_stack_3->SetBinError(2,25.89091);
   Zee_jet_Njet_stack_3->SetBinError(3,34.7963);
   Zee_jet_Njet_stack_3->SetBinError(4,24.93801);
   Zee_jet_Njet_stack_3->SetBinError(5,15.23658);
   Zee_jet_Njet_stack_3->SetBinError(6,8.323755);
   Zee_jet_Njet_stack_3->SetBinError(7,4.275437);
   Zee_jet_Njet_stack_3->SetBinError(8,2.05943);
   Zee_jet_Njet_stack_3->SetBinError(9,1.025126);
   Zee_jet_Njet_stack_3->SetBinError(10,0.4445883);
   Zee_jet_Njet_stack_3->SetBinError(11,0.1796806);
   Zee_jet_Njet_stack_3->SetBinError(14,0.08241254);
   Zee_jet_Njet_stack_3->SetEntries(428504);

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
   Zee_jet_Njet_stack_4->SetBinContent(1,1.175615e+07);
   Zee_jet_Njet_stack_4->SetBinContent(2,2265606);
   Zee_jet_Njet_stack_4->SetBinContent(3,529225.4);
   Zee_jet_Njet_stack_4->SetBinContent(4,97809.51);
   Zee_jet_Njet_stack_4->SetBinContent(5,17231.61);
   Zee_jet_Njet_stack_4->SetBinContent(6,3144.811);
   Zee_jet_Njet_stack_4->SetBinContent(7,542.5569);
   Zee_jet_Njet_stack_4->SetBinContent(8,80.38825);
   Zee_jet_Njet_stack_4->SetBinContent(9,15.76015);
   Zee_jet_Njet_stack_4->SetBinContent(10,5.981608);
   Zee_jet_Njet_stack_4->SetBinContent(11,0.1863593);
   Zee_jet_Njet_stack_4->SetBinError(1,7799.357);
   Zee_jet_Njet_stack_4->SetBinError(2,2689.135);
   Zee_jet_Njet_stack_4->SetBinError(3,1330.535);
   Zee_jet_Njet_stack_4->SetBinError(4,563.4077);
   Zee_jet_Njet_stack_4->SetBinError(5,235.0632);
   Zee_jet_Njet_stack_4->SetBinError(6,102.7359);
   Zee_jet_Njet_stack_4->SetBinError(7,42.01204);
   Zee_jet_Njet_stack_4->SetBinError(8,17.36423);
   Zee_jet_Njet_stack_4->SetBinError(9,7.922742);
   Zee_jet_Njet_stack_4->SetBinError(10,3.12388);
   Zee_jet_Njet_stack_4->SetBinError(11,0.1863593);
   Zee_jet_Njet_stack_4->SetEntries(1.090019e+07);

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
   
   TH1D *Zee_jet_Njet__69 = new TH1D("Zee_jet_Njet__69","",15,0,15);
   Zee_jet_Njet__69->SetBinContent(1,1.16752e+07);
   Zee_jet_Njet__69->SetBinContent(2,2105408);
   Zee_jet_Njet__69->SetBinContent(3,505049);
   Zee_jet_Njet__69->SetBinContent(4,118679);
   Zee_jet_Njet__69->SetBinContent(5,28597);
   Zee_jet_Njet__69->SetBinContent(6,6850);
   Zee_jet_Njet__69->SetBinContent(7,1632);
   Zee_jet_Njet__69->SetBinContent(8,384);
   Zee_jet_Njet__69->SetBinContent(9,91);
   Zee_jet_Njet__69->SetBinContent(10,24);
   Zee_jet_Njet__69->SetBinContent(11,2);
   Zee_jet_Njet__69->SetBinContent(12,1);
   Zee_jet_Njet__69->SetBinError(1,3416.899);
   Zee_jet_Njet__69->SetBinError(2,1451.002);
   Zee_jet_Njet__69->SetBinError(3,710.668);
   Zee_jet_Njet__69->SetBinError(4,344.4982);
   Zee_jet_Njet__69->SetBinError(5,169.1065);
   Zee_jet_Njet__69->SetBinError(6,82.76473);
   Zee_jet_Njet__69->SetBinError(7,40.39802);
   Zee_jet_Njet__69->SetBinError(8,19.59592);
   Zee_jet_Njet__69->SetBinError(9,9.539392);
   Zee_jet_Njet__69->SetBinError(10,4.898979);
   Zee_jet_Njet__69->SetBinError(11,1.414214);
   Zee_jet_Njet__69->SetBinError(12,1);
   Zee_jet_Njet__69->SetEntries(1.444192e+07);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet__69->SetLineColor(ci);
   Zee_jet_Njet__69->SetLineWidth(2);
   Zee_jet_Njet__69->SetMarkerStyle(20);
   Zee_jet_Njet__69->SetMarkerSize(1.2);
   Zee_jet_Njet__69->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet__69->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet__69->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet__69->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet__69->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet__69->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet__69->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet__69->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet__69->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet__69->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet__69->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet__69->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet__69->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet__69->GetZaxis()->SetTitleFont(42);
   Zee_jet_Njet__69->Draw("same E");
   
   Double_t Graph_from_Zee_jet_Njet_fx1069[15] = {
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
   Double_t Graph_from_Zee_jet_Njet_fy1069[15] = {
   1.177017e+07,
   2285231,
   550038.7,
   106865.1,
   20296.06,
   4013.096,
   762.9019,
   135.1476,
   27.5175,
   8.413224,
   0.550148,
   0,
   0,
   0.08241254,
   0};
   Double_t Graph_from_Zee_jet_Njet_fex1069[15] = {
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
   Double_t Graph_from_Zee_jet_Njet_fey1069[15] = {
   7799.958,
   2690.661,
   1332.625,
   564.9749,
   236.0916,
   103.287,
   42.30415,
   17.58487,
   7.988976,
   3.155358,
   0.2588724,
   0,
   0,
   0.08241254,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zee_jet_Njet_fx1069,Graph_from_Zee_jet_Njet_fy1069,Graph_from_Zee_jet_Njet_fex1069,Graph_from_Zee_jet_Njet_fey1069);
   gre->SetName("Graph_from_Zee_jet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_jet_Njet1069 = new TH1F("Graph_Graph_from_Zee_jet_Njet1069","",100,0,16.5);
   Graph_Graph_from_Zee_jet_Njet1069->SetMinimum(0);
   Graph_Graph_from_Zee_jet_Njet1069->SetMaximum(1.295576e+07);
   Graph_Graph_from_Zee_jet_Njet1069->SetDirectory(0);
   Graph_Graph_from_Zee_jet_Njet1069->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_jet_Njet1069->SetLineColor(ci);
   Graph_Graph_from_Zee_jet_Njet1069->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet1069->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1069->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1069->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_jet_Njet1069->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet1069->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1069->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1069->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_jet_Njet1069->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_jet_Njet1069->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet1069->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1069->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet1069->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_jet_Njet1069);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Njet_Z_jet_Zee_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__70 = new TH1D("data_mc_ratio__70","",15,0,15);
   data_mc_ratio__70->SetBinContent(1,0.9919315);
   data_mc_ratio__70->SetBinContent(2,0.9213108);
   data_mc_ratio__70->SetBinContent(3,0.9182062);
   data_mc_ratio__70->SetBinContent(4,1.11055);
   data_mc_ratio__70->SetBinContent(5,1.408993);
   data_mc_ratio__70->SetBinContent(6,1.706911);
   data_mc_ratio__70->SetBinContent(7,2.1392);
   data_mc_ratio__70->SetBinContent(8,2.841337);
   data_mc_ratio__70->SetBinContent(9,3.306986);
   data_mc_ratio__70->SetBinContent(10,2.852652);
   data_mc_ratio__70->SetBinContent(11,3.635385);
   data_mc_ratio__70->SetBinError(1,0.0002903017);
   data_mc_ratio__70->SetBinError(2,0.0006349478);
   data_mc_ratio__70->SetBinError(3,0.001292033);
   data_mc_ratio__70->SetBinError(4,0.003223675);
   data_mc_ratio__70->SetBinError(5,0.008331985);
   data_mc_ratio__70->SetBinError(6,0.02062366);
   data_mc_ratio__70->SetBinError(7,0.0529531);
   data_mc_ratio__70->SetBinError(8,0.1449964);
   data_mc_ratio__70->SetBinError(9,0.3466663);
   data_mc_ratio__70->SetBinError(10,0.5822951);
   data_mc_ratio__70->SetBinError(11,2.570605);
   data_mc_ratio__70->SetMinimum(0.4);
   data_mc_ratio__70->SetMaximum(1.6);
   data_mc_ratio__70->SetEntries(38.95477);
   data_mc_ratio__70->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__70->SetLineColor(ci);
   data_mc_ratio__70->SetLineWidth(2);
   data_mc_ratio__70->SetMarkerStyle(20);
   data_mc_ratio__70->SetMarkerSize(1.2);
   data_mc_ratio__70->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__70->GetXaxis()->SetRange(1,10);
   data_mc_ratio__70->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__70->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__70->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__70->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__70->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__70->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__70->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__70->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__70->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__70->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__70->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__70->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__70->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__70->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__70->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__70->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__70->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1070[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1070[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1070[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1070[15] = {
   0.0006626888,
   0.001177413,
   0.002422783,
   0.005286806,
   0.01163239,
   0.02573749,
   0.05545162,
   0.130116,
   0.2903235,
   0.3750474,
   0.4705504,
   0,
   0,
   1,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1070,Graph_from_mc_statistical_error_fy1070,Graph_from_mc_statistical_error_fex1070,Graph_from_mc_statistical_error_fey1070);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1070 = new TH1F("Graph_Graph_from_mc_statistical_error1070","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1070->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1070->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1070->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1070->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1070->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1070->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1070->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1070->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1070->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1070->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1070->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1070->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1070->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1070->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1070);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_jet_Zee_18_amcnlo->cd();
   Njet_Z_jet_Zee_18_amcnlo->Modified();
   Njet_Z_jet_Zee_18_amcnlo->cd();
   Njet_Z_jet_Zee_18_amcnlo->SetSelected(Njet_Z_jet_Zee_18_amcnlo);
}

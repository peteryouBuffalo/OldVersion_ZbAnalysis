void Njet_Z_bjet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_bjet_Zee_17_amcnlo/Njet_Z_bjet_Zee_17_amcnlo
//=========  (Thu Jan 14 10:42:34 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_bjet_Zee_17_amcnlo = new TCanvas("Njet_Z_bjet_Zee_17_amcnlo", "Njet_Z_bjet_Zee_17_amcnlo",0,0,600,600);
   Njet_Z_bjet_Zee_17_amcnlo->SetHighLightColor(2);
   Njet_Z_bjet_Zee_17_amcnlo->Range(0,0,1,1);
   Njet_Z_bjet_Zee_17_amcnlo->SetFillColor(0);
   Njet_Z_bjet_Zee_17_amcnlo->SetFillStyle(4000);
   Njet_Z_bjet_Zee_17_amcnlo->SetBorderMode(0);
   Njet_Z_bjet_Zee_17_amcnlo->SetBorderSize(2);
   Njet_Z_bjet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_bjet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-24652.84,10.52419,2.46282e+07);
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
   st->SetMaximum(2.110754e+07);
   
   TH1F *st_stack_114 = new TH1F("st_stack_114","",15,0,15);
   st_stack_114->SetMinimum(0.01);
   st_stack_114->SetMaximum(2.216292e+07);
   st_stack_114->SetDirectory(0);
   st_stack_114->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_114->SetLineColor(ci);
   st_stack_114->GetXaxis()->SetRange(1,10);
   st_stack_114->GetXaxis()->SetLabelFont(42);
   st_stack_114->GetXaxis()->SetLabelSize(0.035);
   st_stack_114->GetXaxis()->SetTitleSize(0.035);
   st_stack_114->GetXaxis()->SetTitleFont(42);
   st_stack_114->GetYaxis()->SetTitle("Events/1.0");
   st_stack_114->GetYaxis()->SetLabelFont(42);
   st_stack_114->GetYaxis()->SetLabelSize(0.05);
   st_stack_114->GetYaxis()->SetTitleSize(0.057);
   st_stack_114->GetYaxis()->SetTitleOffset(1.2);
   st_stack_114->GetYaxis()->SetTitleFont(42);
   st_stack_114->GetZaxis()->SetLabelFont(42);
   st_stack_114->GetZaxis()->SetLabelSize(0.035);
   st_stack_114->GetZaxis()->SetTitleSize(0.035);
   st_stack_114->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_114);
   
   
   TH1D *Zee_bjet_Njet_stack_1 = new TH1D("Zee_bjet_Njet_stack_1","",15,0,15);
   Zee_bjet_Njet_stack_1->SetBinContent(1,1346.557);
   Zee_bjet_Njet_stack_1->SetBinContent(2,1197.31);
   Zee_bjet_Njet_stack_1->SetBinContent(3,118.3972);
   Zee_bjet_Njet_stack_1->SetBinContent(4,1.358797);
   Zee_bjet_Njet_stack_1->SetBinError(1,18.38369);
   Zee_bjet_Njet_stack_1->SetBinError(2,16.72587);
   Zee_bjet_Njet_stack_1->SetBinError(3,5.186565);
   Zee_bjet_Njet_stack_1->SetBinError(4,0.5590652);
   Zee_bjet_Njet_stack_1->SetEntries(13291);

   ci = TColor::GetColor("#cccc00");
   Zee_bjet_Njet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_stack_1->SetLineColor(ci);
   Zee_bjet_Njet_stack_1->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_Njet_stack_1,"");
   
   TH1D *Zee_bjet_Njet_stack_2 = new TH1D("Zee_bjet_Njet_stack_2","",15,0,15);
   Zee_bjet_Njet_stack_2->SetBinContent(1,23202.44);
   Zee_bjet_Njet_stack_2->SetBinContent(2,675.1119);
   Zee_bjet_Njet_stack_2->SetBinContent(3,109.0491);
   Zee_bjet_Njet_stack_2->SetBinContent(4,0.7179869);
   Zee_bjet_Njet_stack_2->SetBinError(1,93.75461);
   Zee_bjet_Njet_stack_2->SetBinError(2,16.1863);
   Zee_bjet_Njet_stack_2->SetBinError(3,6.72978);
   Zee_bjet_Njet_stack_2->SetBinError(4,0.5088684);
   Zee_bjet_Njet_stack_2->SetEntries(79934);

   ci = TColor::GetColor("#0000cc");
   Zee_bjet_Njet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_stack_2->SetLineColor(ci);
   Zee_bjet_Njet_stack_2->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_Njet_stack_2,"");
   
   TH1D *Zee_bjet_Njet_stack_3 = new TH1D("Zee_bjet_Njet_stack_3","",15,0,15);
   Zee_bjet_Njet_stack_3->SetBinContent(1,8717.495);
   Zee_bjet_Njet_stack_3->SetBinContent(2,12930.99);
   Zee_bjet_Njet_stack_3->SetBinContent(3,4678.301);
   Zee_bjet_Njet_stack_3->SetBinContent(4,49.58871);
   Zee_bjet_Njet_stack_3->SetBinContent(5,1.652848);
   Zee_bjet_Njet_stack_3->SetBinError(1,62.43841);
   Zee_bjet_Njet_stack_3->SetBinError(2,76.61602);
   Zee_bjet_Njet_stack_3->SetBinError(3,46.35732);
   Zee_bjet_Njet_stack_3->SetBinError(4,4.8024);
   Zee_bjet_Njet_stack_3->SetBinError(5,0.9589365);
   Zee_bjet_Njet_stack_3->SetEntries(69557);

   ci = TColor::GetColor("#cc0000");
   Zee_bjet_Njet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_stack_3->SetLineColor(ci);
   Zee_bjet_Njet_stack_3->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_Njet_stack_3,"");
   
   TH1D *Zee_bjet_Njet_stack_4 = new TH1D("Zee_bjet_Njet_stack_4","",15,0,15);
   Zee_bjet_Njet_stack_4->SetBinContent(1,1.157588e+07);
   Zee_bjet_Njet_stack_4->SetBinContent(2,83743.62);
   Zee_bjet_Njet_stack_4->SetBinContent(3,4031.429);
   Zee_bjet_Njet_stack_4->SetBinContent(4,21.7704);
   Zee_bjet_Njet_stack_4->SetBinContent(5,3.400131);
   Zee_bjet_Njet_stack_4->SetBinError(1,6304.142);
   Zee_bjet_Njet_stack_4->SetBinError(2,489.4058);
   Zee_bjet_Njet_stack_4->SetBinError(3,106.7587);
   Zee_bjet_Njet_stack_4->SetBinError(4,6.601553);
   Zee_bjet_Njet_stack_4->SetBinError(5,2.279917);
   Zee_bjet_Njet_stack_4->SetEntries(1.129657e+07);

   ci = TColor::GetColor("#00cc00");
   Zee_bjet_Njet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_stack_4->SetLineColor(ci);
   Zee_bjet_Njet_stack_4->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_Njet_stack_4,"");
   st->Draw("hist");
   
   TH1D *Zee_bjet_Njet__227 = new TH1D("Zee_bjet_Njet__227","",15,0,15);
   Zee_bjet_Njet__227->SetBinContent(1,9768389);
   Zee_bjet_Njet__227->SetBinContent(2,73272);
   Zee_bjet_Njet__227->SetBinContent(3,6060);
   Zee_bjet_Njet__227->SetBinContent(4,74);
   Zee_bjet_Njet__227->SetBinContent(5,4);
   Zee_bjet_Njet__227->SetBinError(1,3125.442);
   Zee_bjet_Njet__227->SetBinError(2,270.688);
   Zee_bjet_Njet__227->SetBinError(3,77.846);
   Zee_bjet_Njet__227->SetBinError(4,8.602325);
   Zee_bjet_Njet__227->SetBinError(5,2);
   Zee_bjet_Njet__227->SetEntries(9847799);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet__227->SetLineColor(ci);
   Zee_bjet_Njet__227->SetLineWidth(2);
   Zee_bjet_Njet__227->SetMarkerStyle(20);
   Zee_bjet_Njet__227->SetMarkerSize(1.2);
   Zee_bjet_Njet__227->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet__227->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet__227->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet__227->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet__227->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet__227->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet__227->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet__227->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet__227->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet__227->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet__227->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet__227->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet__227->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet__227->GetZaxis()->SetTitleFont(42);
   Zee_bjet_Njet__227->Draw("same E");
   
   Double_t Graph_from_Zee_bjet_Njet_fx1227[15] = {
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
   Double_t Graph_from_Zee_bjet_Njet_fy1227[15] = {
   1.160915e+07,
   98547.03,
   8937.177,
   73.4359,
   5.052979,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zee_bjet_Njet_fex1227[15] = {
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
   Double_t Graph_from_Zee_bjet_Njet_fey1227[15] = {
   6305.175,
   495.9131,
   116.6988,
   8.198479,
   2.473374,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zee_bjet_Njet_fx1227,Graph_from_Zee_bjet_Njet_fy1227,Graph_from_Zee_bjet_Njet_fex1227,Graph_from_Zee_bjet_Njet_fey1227);
   gre->SetName("Graph_from_Zee_bjet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_bjet_Njet1227 = new TH1F("Graph_Graph_from_Zee_bjet_Njet1227","",100,0,16.5);
   Graph_Graph_from_Zee_bjet_Njet1227->SetMinimum(0);
   Graph_Graph_from_Zee_bjet_Njet1227->SetMaximum(1.2777e+07);
   Graph_Graph_from_Zee_bjet_Njet1227->SetDirectory(0);
   Graph_Graph_from_Zee_bjet_Njet1227->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_bjet_Njet1227->SetLineColor(ci);
   Graph_Graph_from_Zee_bjet_Njet1227->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet1227->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1227->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1227->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_Njet1227->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet1227->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1227->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1227->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_bjet_Njet1227->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_Njet1227->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet1227->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1227->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1227->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_bjet_Njet1227);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_bjet_Njet","Data (Z(ee) + b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_bjet_Njet_stack_4","Z+jets","F");

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
   entry=leg->AddEntry("Zee_bjet_Njet_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_bjet_Njet_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_bjet_Njet_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_bjet_Njet","MC unc. (stat.)","fl");

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
   Njet_Z_bjet_Zee_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__228 = new TH1D("data_mc_ratio__228","",15,0,15);
   data_mc_ratio__228->SetBinContent(1,0.8414391);
   data_mc_ratio__228->SetBinContent(2,0.7435231);
   data_mc_ratio__228->SetBinContent(3,0.6780665);
   data_mc_ratio__228->SetBinContent(4,1.007682);
   data_mc_ratio__228->SetBinContent(5,0.7916122);
   data_mc_ratio__228->SetBinError(1,0.0002692224);
   data_mc_ratio__228->SetBinError(2,0.00274679);
   data_mc_ratio__228->SetBinError(3,0.008710357);
   data_mc_ratio__228->SetBinError(4,0.1171406);
   data_mc_ratio__228->SetBinError(5,0.3958061);
   data_mc_ratio__228->SetMinimum(0.4);
   data_mc_ratio__228->SetMaximum(1.6);
   data_mc_ratio__228->SetEntries(49.50328);
   data_mc_ratio__228->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__228->SetLineColor(ci);
   data_mc_ratio__228->SetLineWidth(2);
   data_mc_ratio__228->SetMarkerStyle(20);
   data_mc_ratio__228->SetMarkerSize(1.2);
   data_mc_ratio__228->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__228->GetXaxis()->SetRange(1,10);
   data_mc_ratio__228->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__228->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__228->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__228->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__228->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__228->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__228->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__228->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__228->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__228->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__228->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__228->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__228->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__228->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__228->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__228->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__228->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1228[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1228[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1228[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1228[15] = {
   0.0005431213,
   0.005032248,
   0.01305768,
   0.1116413,
   0.4894883,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1228,Graph_from_mc_statistical_error_fy1228,Graph_from_mc_statistical_error_fex1228,Graph_from_mc_statistical_error_fey1228);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1228 = new TH1F("Graph_Graph_from_mc_statistical_error1228","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1228->SetMinimum(0.412614);
   Graph_Graph_from_mc_statistical_error1228->SetMaximum(1.587386);
   Graph_Graph_from_mc_statistical_error1228->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1228->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1228->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1228->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1228->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1228);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_bjet_Zee_17_amcnlo->cd();
   Njet_Z_bjet_Zee_17_amcnlo->Modified();
   Njet_Z_bjet_Zee_17_amcnlo->cd();
   Njet_Z_bjet_Zee_17_amcnlo->SetSelected(Njet_Z_bjet_Zee_17_amcnlo);
}

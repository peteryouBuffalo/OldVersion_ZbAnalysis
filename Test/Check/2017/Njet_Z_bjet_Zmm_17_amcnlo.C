void Njet_Z_bjet_Zmm_17_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_bjet_Zmm_17_amcnlo/Njet_Z_bjet_Zmm_17_amcnlo
//=========  (Thu Jan 14 10:42:40 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_bjet_Zmm_17_amcnlo = new TCanvas("Njet_Z_bjet_Zmm_17_amcnlo", "Njet_Z_bjet_Zmm_17_amcnlo",0,0,600,600);
   Njet_Z_bjet_Zmm_17_amcnlo->SetHighLightColor(2);
   Njet_Z_bjet_Zmm_17_amcnlo->Range(0,0,1,1);
   Njet_Z_bjet_Zmm_17_amcnlo->SetFillColor(0);
   Njet_Z_bjet_Zmm_17_amcnlo->SetFillStyle(4000);
   Njet_Z_bjet_Zmm_17_amcnlo->SetBorderMode(0);
   Njet_Z_bjet_Zmm_17_amcnlo->SetBorderSize(2);
   Njet_Z_bjet_Zmm_17_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_bjet_Zmm_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-48720.01,10.52419,4.86713e+07);
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
   st->SetMaximum(4.171362e+07);
   
   TH1F *st_stack_158 = new TH1F("st_stack_158","",15,0,15);
   st_stack_158->SetMinimum(0.01);
   st_stack_158->SetMaximum(4.37993e+07);
   st_stack_158->SetDirectory(0);
   st_stack_158->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_158->SetLineColor(ci);
   st_stack_158->GetXaxis()->SetRange(1,10);
   st_stack_158->GetXaxis()->SetLabelFont(42);
   st_stack_158->GetXaxis()->SetLabelSize(0.035);
   st_stack_158->GetXaxis()->SetTitleSize(0.035);
   st_stack_158->GetXaxis()->SetTitleFont(42);
   st_stack_158->GetYaxis()->SetTitle("Events/1.0");
   st_stack_158->GetYaxis()->SetLabelFont(42);
   st_stack_158->GetYaxis()->SetLabelSize(0.05);
   st_stack_158->GetYaxis()->SetTitleSize(0.057);
   st_stack_158->GetYaxis()->SetTitleOffset(1.2);
   st_stack_158->GetYaxis()->SetTitleFont(42);
   st_stack_158->GetZaxis()->SetLabelFont(42);
   st_stack_158->GetZaxis()->SetLabelSize(0.035);
   st_stack_158->GetZaxis()->SetTitleSize(0.035);
   st_stack_158->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_158);
   
   
   TH1D *Zmm_bjet_Njet_stack_1 = new TH1D("Zmm_bjet_Njet_stack_1","",15,0,15);
   Zmm_bjet_Njet_stack_1->SetBinContent(1,2974.52);
   Zmm_bjet_Njet_stack_1->SetBinContent(2,2073.26);
   Zmm_bjet_Njet_stack_1->SetBinContent(3,187.3242);
   Zmm_bjet_Njet_stack_1->SetBinContent(4,1.105789);
   Zmm_bjet_Njet_stack_1->SetBinContent(5,0.3213646);
   Zmm_bjet_Njet_stack_1->SetBinError(1,30.52409);
   Zmm_bjet_Njet_stack_1->SetBinError(2,21.63338);
   Zmm_bjet_Njet_stack_1->SetBinError(3,6.06638);
   Zmm_bjet_Njet_stack_1->SetBinError(4,0.4338144);
   Zmm_bjet_Njet_stack_1->SetBinError(5,0.2272986);
   Zmm_bjet_Njet_stack_1->SetEntries(27378);

   ci = TColor::GetColor("#cccc00");
   Zmm_bjet_Njet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_stack_1->SetLineColor(ci);
   Zmm_bjet_Njet_stack_1->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_Njet_stack_1,"");
   
   TH1D *Zmm_bjet_Njet_stack_2 = new TH1D("Zmm_bjet_Njet_stack_2","",15,0,15);
   Zmm_bjet_Njet_stack_2->SetBinContent(1,41619.45);
   Zmm_bjet_Njet_stack_2->SetBinContent(2,1184.932);
   Zmm_bjet_Njet_stack_2->SetBinContent(3,167.6791);
   Zmm_bjet_Njet_stack_2->SetBinContent(4,1.115183);
   Zmm_bjet_Njet_stack_2->SetBinError(1,124.418);
   Zmm_bjet_Njet_stack_2->SetBinError(2,20.83933);
   Zmm_bjet_Njet_stack_2->SetBinError(3,7.674728);
   Zmm_bjet_Njet_stack_2->SetBinError(4,0.5858127);
   Zmm_bjet_Njet_stack_2->SetEntries(147497);

   ci = TColor::GetColor("#0000cc");
   Zmm_bjet_Njet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_stack_2->SetLineColor(ci);
   Zmm_bjet_Njet_stack_2->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_Njet_stack_2,"");
   
   TH1D *Zmm_bjet_Njet_stack_3 = new TH1D("Zmm_bjet_Njet_stack_3","",15,0,15);
   Zmm_bjet_Njet_stack_3->SetBinContent(1,18665.99);
   Zmm_bjet_Njet_stack_3->SetBinContent(2,23302.9);
   Zmm_bjet_Njet_stack_3->SetBinContent(3,7457.824);
   Zmm_bjet_Njet_stack_3->SetBinContent(4,67.53749);
   Zmm_bjet_Njet_stack_3->SetBinContent(5,2.033876);
   Zmm_bjet_Njet_stack_3->SetBinContent(6,0.331981);
   Zmm_bjet_Njet_stack_3->SetBinError(1,91.96356);
   Zmm_bjet_Njet_stack_3->SetBinError(2,98.80096);
   Zmm_bjet_Njet_stack_3->SetBinError(3,53.82683);
   Zmm_bjet_Njet_stack_3->SetBinError(4,5.000126);
   Zmm_bjet_Njet_stack_3->SetBinError(5,0.8466179);
   Zmm_bjet_Njet_stack_3->SetBinError(6,0.331981);
   Zmm_bjet_Njet_stack_3->SetEntries(159298);

   ci = TColor::GetColor("#cc0000");
   Zmm_bjet_Njet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_stack_3->SetLineColor(ci);
   Zmm_bjet_Njet_stack_3->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_Njet_stack_3,"");
   
   TH1D *Zmm_bjet_Njet_stack_4 = new TH1D("Zmm_bjet_Njet_stack_4","",15,0,15);
   Zmm_bjet_Njet_stack_4->SetBinContent(1,2.210271e+07);
   Zmm_bjet_Njet_stack_4->SetBinContent(2,146074.9);
   Zmm_bjet_Njet_stack_4->SetBinContent(3,6240.023);
   Zmm_bjet_Njet_stack_4->SetBinContent(4,30.54604);
   Zmm_bjet_Njet_stack_4->SetBinContent(5,1.907993);
   Zmm_bjet_Njet_stack_4->SetBinError(1,8602.081);
   Zmm_bjet_Njet_stack_4->SetBinError(2,619.5615);
   Zmm_bjet_Njet_stack_4->SetBinError(3,124.1655);
   Zmm_bjet_Njet_stack_4->SetBinError(4,8.695096);
   Zmm_bjet_Njet_stack_4->SetBinError(5,1.187955);
   Zmm_bjet_Njet_stack_4->SetEntries(2.205743e+07);

   ci = TColor::GetColor("#00cc00");
   Zmm_bjet_Njet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_stack_4->SetLineColor(ci);
   Zmm_bjet_Njet_stack_4->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_Njet_stack_4,"");
   st->Draw("hist");
   
   TH1D *Zmm_bjet_Njet__315 = new TH1D("Zmm_bjet_Njet__315","",15,0,15);
   Zmm_bjet_Njet__315->SetBinContent(1,2.294249e+07);
   Zmm_bjet_Njet__315->SetBinContent(2,164000);
   Zmm_bjet_Njet__315->SetBinContent(3,12965);
   Zmm_bjet_Njet__315->SetBinContent(4,165);
   Zmm_bjet_Njet__315->SetBinContent(5,6);
   Zmm_bjet_Njet__315->SetBinError(1,4789.832);
   Zmm_bjet_Njet__315->SetBinError(2,404.9691);
   Zmm_bjet_Njet__315->SetBinError(3,113.864);
   Zmm_bjet_Njet__315->SetBinError(4,12.84523);
   Zmm_bjet_Njet__315->SetBinError(5,2.44949);
   Zmm_bjet_Njet__315->SetEntries(2.311962e+07);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet__315->SetLineColor(ci);
   Zmm_bjet_Njet__315->SetLineWidth(2);
   Zmm_bjet_Njet__315->SetMarkerStyle(20);
   Zmm_bjet_Njet__315->SetMarkerSize(1.2);
   Zmm_bjet_Njet__315->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet__315->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet__315->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet__315->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet__315->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet__315->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet__315->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet__315->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet__315->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet__315->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet__315->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet__315->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet__315->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet__315->GetZaxis()->SetTitleFont(42);
   Zmm_bjet_Njet__315->Draw("same E");
   
   Double_t Graph_from_Zmm_bjet_Njet_fx1315[15] = {
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
   Double_t Graph_from_Zmm_bjet_Njet_fy1315[15] = {
   2.216597e+07,
   172636,
   14052.85,
   100.3045,
   4.263234,
   0.331981,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zmm_bjet_Njet_fex1315[15] = {
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
   Double_t Graph_from_Zmm_bjet_Njet_fey1315[15] = {
   8603.526,
   628.1086,
   135.6838,
   10.05671,
   1.476369,
   0.331981,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zmm_bjet_Njet_fx1315,Graph_from_Zmm_bjet_Njet_fy1315,Graph_from_Zmm_bjet_Njet_fex1315,Graph_from_Zmm_bjet_Njet_fey1315);
   gre->SetName("Graph_from_Zmm_bjet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_bjet_Njet1315 = new TH1F("Graph_Graph_from_Zmm_bjet_Njet1315","",100,0,16.5);
   Graph_Graph_from_Zmm_bjet_Njet1315->SetMinimum(0);
   Graph_Graph_from_Zmm_bjet_Njet1315->SetMaximum(2.439203e+07);
   Graph_Graph_from_Zmm_bjet_Njet1315->SetDirectory(0);
   Graph_Graph_from_Zmm_bjet_Njet1315->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_bjet_Njet1315->SetLineColor(ci);
   Graph_Graph_from_Zmm_bjet_Njet1315->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1315->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1315->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1315->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1315->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1315->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1315->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1315->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_bjet_Njet1315->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1315->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1315->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1315->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1315->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_bjet_Njet1315);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_bjet_Njet","Data (Z(#mu#mu) + b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_bjet_Njet_stack_4","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_bjet_Njet_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_bjet_Njet_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_bjet_Njet_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_bjet_Njet","MC unc. (stat.)","fl");

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
   Njet_Z_bjet_Zmm_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__316 = new TH1D("data_mc_ratio__316","",15,0,15);
   data_mc_ratio__316->SetBinContent(1,1.035032);
   data_mc_ratio__316->SetBinContent(2,0.9499756);
   data_mc_ratio__316->SetBinContent(3,0.9225886);
   data_mc_ratio__316->SetBinContent(4,1.644991);
   data_mc_ratio__316->SetBinContent(5,1.407382);
   data_mc_ratio__316->SetBinError(1,0.0002160894);
   data_mc_ratio__316->SetBinError(2,0.002345798);
   data_mc_ratio__316->SetBinError(3,0.008102552);
   data_mc_ratio__316->SetBinError(4,0.1280624);
   data_mc_ratio__316->SetBinError(5,0.5745614);
   data_mc_ratio__316->SetMinimum(0.4);
   data_mc_ratio__316->SetMaximum(1.6);
   data_mc_ratio__316->SetEntries(58.09586);
   data_mc_ratio__316->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__316->SetLineColor(ci);
   data_mc_ratio__316->SetLineWidth(2);
   data_mc_ratio__316->SetMarkerStyle(20);
   data_mc_ratio__316->SetMarkerSize(1.2);
   data_mc_ratio__316->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__316->GetXaxis()->SetRange(1,10);
   data_mc_ratio__316->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__316->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__316->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__316->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__316->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__316->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__316->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__316->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__316->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__316->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__316->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__316->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__316->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__316->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__316->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__316->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__316->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1316[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1316[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1316[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1316[15] = {
   0.0003881412,
   0.003638341,
   0.009655251,
   0.1002618,
   0.3463025,
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
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1316,Graph_from_mc_statistical_error_fy1316,Graph_from_mc_statistical_error_fex1316,Graph_from_mc_statistical_error_fey1316);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1316 = new TH1F("Graph_Graph_from_mc_statistical_error1316","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1316->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1316->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1316->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1316->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1316->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1316->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1316->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1316->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1316->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1316);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_bjet_Zmm_17_amcnlo->cd();
   Njet_Z_bjet_Zmm_17_amcnlo->Modified();
   Njet_Z_bjet_Zmm_17_amcnlo->cd();
   Njet_Z_bjet_Zmm_17_amcnlo->SetSelected(Njet_Z_bjet_Zmm_17_amcnlo);
}

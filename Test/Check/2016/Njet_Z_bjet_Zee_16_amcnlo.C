void Njet_Z_bjet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_bjet_Zee_16_amcnlo/Njet_Z_bjet_Zee_16_amcnlo
//=========  (Thu Jan 14 10:42:34 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_bjet_Zee_16_amcnlo = new TCanvas("Njet_Z_bjet_Zee_16_amcnlo", "Njet_Z_bjet_Zee_16_amcnlo",0,0,600,600);
   Njet_Z_bjet_Zee_16_amcnlo->SetHighLightColor(2);
   Njet_Z_bjet_Zee_16_amcnlo->Range(0,0,1,1);
   Njet_Z_bjet_Zee_16_amcnlo->SetFillColor(0);
   Njet_Z_bjet_Zee_16_amcnlo->SetFillStyle(4000);
   Njet_Z_bjet_Zee_16_amcnlo->SetBorderMode(0);
   Njet_Z_bjet_Zee_16_amcnlo->SetBorderSize(2);
   Njet_Z_bjet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_bjet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-18880.76,10.52419,1.886189e+07);
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
   st->SetMaximum(1.616554e+07);
   
   TH1F *st_stack_113 = new TH1F("st_stack_113","",15,0,15);
   st_stack_113->SetMinimum(0.01);
   st_stack_113->SetMaximum(1.697381e+07);
   st_stack_113->SetDirectory(0);
   st_stack_113->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_113->SetLineColor(ci);
   st_stack_113->GetXaxis()->SetRange(1,10);
   st_stack_113->GetXaxis()->SetLabelFont(42);
   st_stack_113->GetXaxis()->SetLabelSize(0.035);
   st_stack_113->GetXaxis()->SetTitleSize(0.035);
   st_stack_113->GetXaxis()->SetTitleFont(42);
   st_stack_113->GetYaxis()->SetTitle("Events/1.0");
   st_stack_113->GetYaxis()->SetLabelFont(42);
   st_stack_113->GetYaxis()->SetLabelSize(0.05);
   st_stack_113->GetYaxis()->SetTitleSize(0.057);
   st_stack_113->GetYaxis()->SetTitleOffset(1.2);
   st_stack_113->GetYaxis()->SetTitleFont(42);
   st_stack_113->GetZaxis()->SetLabelFont(42);
   st_stack_113->GetZaxis()->SetLabelSize(0.035);
   st_stack_113->GetZaxis()->SetTitleSize(0.035);
   st_stack_113->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_113);
   
   
   TH1D *Zee_bjet_Njet_stack_1 = new TH1D("Zee_bjet_Njet_stack_1","",15,0,15);
   Zee_bjet_Njet_stack_1->SetBinContent(1,1122.563);
   Zee_bjet_Njet_stack_1->SetBinContent(2,866.1519);
   Zee_bjet_Njet_stack_1->SetBinContent(3,77.94352);
   Zee_bjet_Njet_stack_1->SetBinContent(4,0.6261104);
   Zee_bjet_Njet_stack_1->SetBinError(1,15.236);
   Zee_bjet_Njet_stack_1->SetBinError(2,13.46702);
   Zee_bjet_Njet_stack_1->SetBinError(3,4.037882);
   Zee_bjet_Njet_stack_1->SetBinError(4,0.3614961);
   Zee_bjet_Njet_stack_1->SetEntries(10775);

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
   Zee_bjet_Njet_stack_2->SetBinContent(1,17745.46);
   Zee_bjet_Njet_stack_2->SetBinContent(2,493.2606);
   Zee_bjet_Njet_stack_2->SetBinContent(3,60.96787);
   Zee_bjet_Njet_stack_2->SetBinContent(4,0.3355882);
   Zee_bjet_Njet_stack_2->SetBinError(1,86.36235);
   Zee_bjet_Njet_stack_2->SetBinError(2,13.02186);
   Zee_bjet_Njet_stack_2->SetBinError(3,4.437094);
   Zee_bjet_Njet_stack_2->SetBinError(4,0.3355882);
   Zee_bjet_Njet_stack_2->SetEntries(48549);

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
   Zee_bjet_Njet_stack_3->SetBinContent(1,7441.145);
   Zee_bjet_Njet_stack_3->SetBinContent(2,9341.81);
   Zee_bjet_Njet_stack_3->SetBinContent(3,2893.005);
   Zee_bjet_Njet_stack_3->SetBinContent(4,30.1328);
   Zee_bjet_Njet_stack_3->SetBinContent(5,1.161011);
   Zee_bjet_Njet_stack_3->SetBinError(1,39.12802);
   Zee_bjet_Njet_stack_3->SetBinError(2,43.96062);
   Zee_bjet_Njet_stack_3->SetBinError(3,24.52417);
   Zee_bjet_Njet_stack_3->SetBinError(4,2.494063);
   Zee_bjet_Njet_stack_3->SetBinError(5,0.484085);
   Zee_bjet_Njet_stack_3->SetEntries(101728);

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
   Zee_bjet_Njet_stack_4->SetBinContent(1,8864735);
   Zee_bjet_Njet_stack_4->SetBinContent(2,65032.88);
   Zee_bjet_Njet_stack_4->SetBinContent(3,2773.778);
   Zee_bjet_Njet_stack_4->SetBinContent(4,23.44033);
   Zee_bjet_Njet_stack_4->SetBinContent(5,2.188967);
   Zee_bjet_Njet_stack_4->SetBinError(1,4781.228);
   Zee_bjet_Njet_stack_4->SetBinError(2,351.7897);
   Zee_bjet_Njet_stack_4->SetBinError(3,67.31003);
   Zee_bjet_Njet_stack_4->SetBinError(4,6.050293);
   Zee_bjet_Njet_stack_4->SetBinError(5,1.096932);
   Zee_bjet_Njet_stack_4->SetEntries(1.152603e+07);

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
   
   TH1D *Zee_bjet_Njet__225 = new TH1D("Zee_bjet_Njet__225","",15,0,15);
   Zee_bjet_Njet__225->SetBinContent(1,8062593);
   Zee_bjet_Njet__225->SetBinContent(2,57708);
   Zee_bjet_Njet__225->SetBinContent(3,4559);
   Zee_bjet_Njet__225->SetBinContent(4,56);
   Zee_bjet_Njet__225->SetBinContent(5,3);
   Zee_bjet_Njet__225->SetBinError(1,2839.471);
   Zee_bjet_Njet__225->SetBinError(2,240.2249);
   Zee_bjet_Njet__225->SetBinError(3,67.52037);
   Zee_bjet_Njet__225->SetBinError(4,7.483315);
   Zee_bjet_Njet__225->SetBinError(5,1.732051);
   Zee_bjet_Njet__225->SetEntries(8124919);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet__225->SetLineColor(ci);
   Zee_bjet_Njet__225->SetLineWidth(2);
   Zee_bjet_Njet__225->SetMarkerStyle(20);
   Zee_bjet_Njet__225->SetMarkerSize(1.2);
   Zee_bjet_Njet__225->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet__225->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet__225->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet__225->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet__225->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet__225->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet__225->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet__225->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet__225->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet__225->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet__225->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet__225->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet__225->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet__225->GetZaxis()->SetTitleFont(42);
   Zee_bjet_Njet__225->Draw("same E");
   
   Double_t Graph_from_Zee_bjet_Njet_fx1225[15] = {
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
   Double_t Graph_from_Zee_bjet_Njet_fy1225[15] = {
   8891044,
   75734.1,
   5805.694,
   54.53483,
   3.349977,
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
   Double_t Graph_from_Zee_bjet_Njet_fex1225[15] = {
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
   Double_t Graph_from_Zee_bjet_Njet_fey1225[15] = {
   4782.192,
   355.0204,
   71.88927,
   6.562751,
   1.198999,
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
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zee_bjet_Njet_fx1225,Graph_from_Zee_bjet_Njet_fy1225,Graph_from_Zee_bjet_Njet_fex1225,Graph_from_Zee_bjet_Njet_fey1225);
   gre->SetName("Graph_from_Zee_bjet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_bjet_Njet1225 = new TH1F("Graph_Graph_from_Zee_bjet_Njet1225","",100,0,16.5);
   Graph_Graph_from_Zee_bjet_Njet1225->SetMinimum(0);
   Graph_Graph_from_Zee_bjet_Njet1225->SetMaximum(9785409);
   Graph_Graph_from_Zee_bjet_Njet1225->SetDirectory(0);
   Graph_Graph_from_Zee_bjet_Njet1225->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_bjet_Njet1225->SetLineColor(ci);
   Graph_Graph_from_Zee_bjet_Njet1225->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet1225->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1225->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1225->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_Njet1225->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet1225->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1225->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1225->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_bjet_Njet1225->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_Njet1225->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet1225->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1225->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet1225->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_bjet_Njet1225);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Njet_Z_bjet_Zee_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__226 = new TH1D("data_mc_ratio__226","",15,0,15);
   data_mc_ratio__226->SetBinContent(1,0.9068218);
   data_mc_ratio__226->SetBinContent(2,0.7619817);
   data_mc_ratio__226->SetBinContent(3,0.7852635);
   data_mc_ratio__226->SetBinContent(4,1.026867);
   data_mc_ratio__226->SetBinContent(5,0.8955285);
   data_mc_ratio__226->SetBinError(1,0.000319363);
   data_mc_ratio__226->SetBinError(2,0.003171952);
   data_mc_ratio__226->SetBinError(3,0.01163002);
   data_mc_ratio__226->SetBinError(4,0.1372208);
   data_mc_ratio__226->SetBinError(5,0.5170336);
   data_mc_ratio__226->SetMinimum(0.4);
   data_mc_ratio__226->SetMaximum(1.6);
   data_mc_ratio__226->SetEntries(47.36136);
   data_mc_ratio__226->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__226->SetLineColor(ci);
   data_mc_ratio__226->SetLineWidth(2);
   data_mc_ratio__226->SetMarkerStyle(20);
   data_mc_ratio__226->SetMarkerSize(1.2);
   data_mc_ratio__226->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__226->GetXaxis()->SetRange(1,10);
   data_mc_ratio__226->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__226->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__226->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__226->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__226->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__226->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__226->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__226->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__226->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__226->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__226->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__226->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__226->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__226->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__226->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__226->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__226->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1226[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1226[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1226[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1226[15] = {
   0.0005378662,
   0.004687722,
   0.01238255,
   0.1203405,
   0.3579125,
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
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1226,Graph_from_mc_statistical_error_fy1226,Graph_from_mc_statistical_error_fex1226,Graph_from_mc_statistical_error_fey1226);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1226 = new TH1F("Graph_Graph_from_mc_statistical_error1226","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1226->SetMinimum(0.570505);
   Graph_Graph_from_mc_statistical_error1226->SetMaximum(1.429495);
   Graph_Graph_from_mc_statistical_error1226->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1226->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1226->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1226->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1226->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1226);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_bjet_Zee_16_amcnlo->cd();
   Njet_Z_bjet_Zee_16_amcnlo->Modified();
   Njet_Z_bjet_Zee_16_amcnlo->cd();
   Njet_Z_bjet_Zee_16_amcnlo->SetSelected(Njet_Z_bjet_Zee_16_amcnlo);
}

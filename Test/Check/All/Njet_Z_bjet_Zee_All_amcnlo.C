void Njet_Z_bjet_Zee_All_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_bjet_Zee_All_amcnlo/Njet_Z_bjet_Zee_All_amcnlo
//=========  (Thu Jan 14 10:42:34 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_bjet_Zee_All_amcnlo = new TCanvas("Njet_Z_bjet_Zee_All_amcnlo", "Njet_Z_bjet_Zee_All_amcnlo",0,0,600,600);
   Njet_Z_bjet_Zee_All_amcnlo->SetHighLightColor(2);
   Njet_Z_bjet_Zee_All_amcnlo->Range(0,0,1,1);
   Njet_Z_bjet_Zee_All_amcnlo->SetFillColor(0);
   Njet_Z_bjet_Zee_All_amcnlo->SetFillStyle(4000);
   Njet_Z_bjet_Zee_All_amcnlo->SetBorderMode(0);
   Njet_Z_bjet_Zee_All_amcnlo->SetBorderSize(2);
   Njet_Z_bjet_Zee_All_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_bjet_Zee_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-78018.71,10.52419,7.79407e+07);
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
   st->SetMaximum(6.679888e+07);
   
   TH1F *st_stack_116 = new TH1F("st_stack_116","",15,0,15);
   st_stack_116->SetMinimum(0.01);
   st_stack_116->SetMaximum(7.013883e+07);
   st_stack_116->SetDirectory(0);
   st_stack_116->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_116->SetLineColor(ci);
   st_stack_116->GetXaxis()->SetRange(1,10);
   st_stack_116->GetXaxis()->SetLabelFont(42);
   st_stack_116->GetXaxis()->SetLabelSize(0.035);
   st_stack_116->GetXaxis()->SetTitleSize(0.035);
   st_stack_116->GetXaxis()->SetTitleFont(42);
   st_stack_116->GetYaxis()->SetTitle("Events/1.0");
   st_stack_116->GetYaxis()->SetLabelFont(42);
   st_stack_116->GetYaxis()->SetLabelSize(0.05);
   st_stack_116->GetYaxis()->SetTitleSize(0.057);
   st_stack_116->GetYaxis()->SetTitleOffset(1.2);
   st_stack_116->GetYaxis()->SetTitleFont(42);
   st_stack_116->GetZaxis()->SetLabelFont(42);
   st_stack_116->GetZaxis()->SetLabelSize(0.035);
   st_stack_116->GetZaxis()->SetTitleSize(0.035);
   st_stack_116->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_116);
   
   
   TH1D *Zee_bjet_Njet_all_stack_1 = new TH1D("Zee_bjet_Njet_all_stack_1","",15,0,15);
   Zee_bjet_Njet_all_stack_1->SetBinContent(1,4370.878);
   Zee_bjet_Njet_all_stack_1->SetBinContent(2,3725.071);
   Zee_bjet_Njet_all_stack_1->SetBinContent(3,378.2861);
   Zee_bjet_Njet_all_stack_1->SetBinContent(4,2.991614);
   Zee_bjet_Njet_all_stack_1->SetBinError(1,33.67676);
   Zee_bjet_Njet_all_stack_1->SetBinError(2,31.10005);
   Zee_bjet_Njet_all_stack_1->SetBinError(3,9.92175);
   Zee_bjet_Njet_all_stack_1->SetBinError(4,0.835294);
   Zee_bjet_Njet_all_stack_1->SetEntries(39373);

   ci = TColor::GetColor("#cccc00");
   Zee_bjet_Njet_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_all_stack_1->SetLineColor(ci);
   Zee_bjet_Njet_all_stack_1->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_Njet_all_stack_1,"");
   
   TH1D *Zee_bjet_Njet_all_stack_2 = new TH1D("Zee_bjet_Njet_all_stack_2","",15,0,15);
   Zee_bjet_Njet_all_stack_2->SetBinContent(1,74023.5);
   Zee_bjet_Njet_all_stack_2->SetBinContent(2,2125.897);
   Zee_bjet_Njet_all_stack_2->SetBinContent(3,315.3774);
   Zee_bjet_Njet_all_stack_2->SetBinContent(4,1.053575);
   Zee_bjet_Njet_all_stack_2->SetBinError(1,204.5345);
   Zee_bjet_Njet_all_stack_2->SetBinError(2,31.93448);
   Zee_bjet_Njet_all_stack_2->SetBinError(3,12.15525);
   Zee_bjet_Njet_all_stack_2->SetBinError(4,0.6095626);
   Zee_bjet_Njet_all_stack_2->SetEntries(181027);

   ci = TColor::GetColor("#0000cc");
   Zee_bjet_Njet_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_all_stack_2->SetLineColor(ci);
   Zee_bjet_Njet_all_stack_2->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_Njet_all_stack_2,"");
   
   TH1D *Zee_bjet_Njet_all_stack_3 = new TH1D("Zee_bjet_Njet_all_stack_3","",15,0,15);
   Zee_bjet_Njet_all_stack_3->SetBinContent(1,28227.41);
   Zee_bjet_Njet_all_stack_3->SetBinContent(2,40536.73);
   Zee_bjet_Njet_all_stack_3->SetBinContent(3,14355.17);
   Zee_bjet_Njet_all_stack_3->SetBinContent(4,151.7414);
   Zee_bjet_Njet_all_stack_3->SetBinContent(5,6.014304);
   Zee_bjet_Njet_all_stack_3->SetBinContent(6,0.08097122);
   Zee_bjet_Njet_all_stack_3->SetBinError(1,81.26425);
   Zee_bjet_Njet_all_stack_3->SetBinError(2,97.92527);
   Zee_bjet_Njet_all_stack_3->SetBinError(3,58.44769);
   Zee_bjet_Njet_all_stack_3->SetBinError(4,6.024892);
   Zee_bjet_Njet_all_stack_3->SetBinError(5,1.2092);
   Zee_bjet_Njet_all_stack_3->SetBinError(6,0.08097122);
   Zee_bjet_Njet_all_stack_3->SetEntries(599789);

   ci = TColor::GetColor("#cc0000");
   Zee_bjet_Njet_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_all_stack_3->SetLineColor(ci);
   Zee_bjet_Njet_all_stack_3->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_Njet_all_stack_3,"");
   
   TH1D *Zee_bjet_Njet_all_stack_4 = new TH1D("Zee_bjet_Njet_all_stack_4","",15,0,15);
   Zee_bjet_Njet_all_stack_4->SetBinContent(1,3.663276e+07);
   Zee_bjet_Njet_all_stack_4->SetBinContent(2,268534.6);
   Zee_bjet_Njet_all_stack_4->SetBinContent(3,12553.21);
   Zee_bjet_Njet_all_stack_4->SetBinContent(4,83.70467);
   Zee_bjet_Njet_all_stack_4->SetBinContent(5,6.727449);
   Zee_bjet_Njet_all_stack_4->SetBinError(1,12192.94);
   Zee_bjet_Njet_all_stack_4->SetBinError(2,909.1784);
   Zee_bjet_Njet_all_stack_4->SetBinError(3,192.0976);
   Zee_bjet_Njet_all_stack_4->SetBinError(4,13.82965);
   Zee_bjet_Njet_all_stack_4->SetBinError(5,2.774369);
   Zee_bjet_Njet_all_stack_4->SetEntries(3.372279e+07);

   ci = TColor::GetColor("#00cc00");
   Zee_bjet_Njet_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_all_stack_4->SetLineColor(ci);
   Zee_bjet_Njet_all_stack_4->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_Njet_all_stack_4,"");
   st->Draw("hist");
   
   TH1D *Zee_bjet_Njet_all__231 = new TH1D("Zee_bjet_Njet_all__231","",15,0,15);
   Zee_bjet_Njet_all__231->SetBinContent(1,3.215006e+07);
   Zee_bjet_Njet_all__231->SetBinContent(2,243980);
   Zee_bjet_Njet_all__231->SetBinContent(3,20324);
   Zee_bjet_Njet_all__231->SetBinContent(4,259);
   Zee_bjet_Njet_all__231->SetBinContent(5,10);
   Zee_bjet_Njet_all__231->SetBinError(1,5670.102);
   Zee_bjet_Njet_all__231->SetBinError(2,493.9433);
   Zee_bjet_Njet_all__231->SetBinError(3,142.5623);
   Zee_bjet_Njet_all__231->SetBinError(4,16.09348);
   Zee_bjet_Njet_all__231->SetBinError(5,3.162278);
   Zee_bjet_Njet_all__231->SetEntries(3.241463e+07);

   ci = TColor::GetColor("#000099");
   Zee_bjet_Njet_all__231->SetLineColor(ci);
   Zee_bjet_Njet_all__231->SetLineWidth(2);
   Zee_bjet_Njet_all__231->SetMarkerStyle(20);
   Zee_bjet_Njet_all__231->SetMarkerSize(1.2);
   Zee_bjet_Njet_all__231->GetXaxis()->SetRange(1,15);
   Zee_bjet_Njet_all__231->GetXaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all__231->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all__231->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all__231->GetXaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all__231->GetYaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all__231->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all__231->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all__231->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_Njet_all__231->GetYaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all__231->GetZaxis()->SetLabelFont(42);
   Zee_bjet_Njet_all__231->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_Njet_all__231->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_Njet_all__231->GetZaxis()->SetTitleFont(42);
   Zee_bjet_Njet_all__231->Draw("same E");
   
   Double_t Graph_from_Zee_bjet_Njet_all_fx1231[15] = {
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
   Double_t Graph_from_Zee_bjet_Njet_all_fy1231[15] = {
   3.673939e+07,
   314922.3,
   27602.05,
   239.4913,
   12.74175,
   0.08097122,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zee_bjet_Njet_all_fex1231[15] = {
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
   Double_t Graph_from_Zee_bjet_Njet_all_fey1231[15] = {
   12194.98,
   915.5226,
   201.4046,
   15.12045,
   3.026432,
   0.08097122,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zee_bjet_Njet_all_fx1231,Graph_from_Zee_bjet_Njet_all_fy1231,Graph_from_Zee_bjet_Njet_all_fex1231,Graph_from_Zee_bjet_Njet_all_fey1231);
   gre->SetName("Graph_from_Zee_bjet_Njet_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_bjet_Njet_all1231 = new TH1F("Graph_Graph_from_Zee_bjet_Njet_all1231","",100,0,16.5);
   Graph_Graph_from_Zee_bjet_Njet_all1231->SetMinimum(0);
   Graph_Graph_from_Zee_bjet_Njet_all1231->SetMaximum(4.042674e+07);
   Graph_Graph_from_Zee_bjet_Njet_all1231->SetDirectory(0);
   Graph_Graph_from_Zee_bjet_Njet_all1231->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_bjet_Njet_all1231->SetLineColor(ci);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_Njet_all1231->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_bjet_Njet_all1231);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_bjet_Njet_all","Data (Z(ee) + b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_bjet_Njet_all_stack_4","Z+jets","F");

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
   entry=leg->AddEntry("Zee_bjet_Njet_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_bjet_Njet_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_bjet_Njet_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_bjet_Njet_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 137.1 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Njet_Z_bjet_Zee_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__232 = new TH1D("data_mc_ratio__232","",15,0,15);
   data_mc_ratio__232->SetBinContent(1,0.8750843);
   data_mc_ratio__232->SetBinContent(2,0.7747309);
   data_mc_ratio__232->SetBinContent(3,0.7363222);
   data_mc_ratio__232->SetBinContent(4,1.081459);
   data_mc_ratio__232->SetBinContent(5,0.7848214);
   data_mc_ratio__232->SetBinError(1,0.0001543331);
   data_mc_ratio__232->SetBinError(2,0.001568461);
   data_mc_ratio__232->SetBinError(3,0.005164916);
   data_mc_ratio__232->SetBinError(4,0.06719859);
   data_mc_ratio__232->SetBinError(5,0.2481823);
   data_mc_ratio__232->SetMinimum(0.4);
   data_mc_ratio__232->SetMaximum(1.6);
   data_mc_ratio__232->SetEntries(171.2662);
   data_mc_ratio__232->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__232->SetLineColor(ci);
   data_mc_ratio__232->SetLineWidth(2);
   data_mc_ratio__232->SetMarkerStyle(20);
   data_mc_ratio__232->SetMarkerSize(1.2);
   data_mc_ratio__232->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__232->GetXaxis()->SetRange(1,10);
   data_mc_ratio__232->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__232->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__232->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__232->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__232->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__232->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__232->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__232->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__232->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__232->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__232->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__232->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__232->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__232->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__232->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1232[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1232[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1232[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1232[15] = {
   0.000331932,
   0.002907139,
   0.007296726,
   0.06313568,
   0.2375208,
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
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1232,Graph_from_mc_statistical_error_fy1232,Graph_from_mc_statistical_error_fex1232,Graph_from_mc_statistical_error_fey1232);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1232 = new TH1F("Graph_Graph_from_mc_statistical_error1232","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1232->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1232->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1232->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1232->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1232->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1232->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1232->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1232);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_bjet_Zee_All_amcnlo->cd();
   Njet_Z_bjet_Zee_All_amcnlo->Modified();
   Njet_Z_bjet_Zee_All_amcnlo->cd();
   Njet_Z_bjet_Zee_All_amcnlo->SetSelected(Njet_Z_bjet_Zee_All_amcnlo);
}

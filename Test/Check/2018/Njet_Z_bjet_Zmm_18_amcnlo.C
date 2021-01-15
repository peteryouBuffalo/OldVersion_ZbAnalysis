void Njet_Z_bjet_Zmm_18_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_bjet_Zmm_18_amcnlo/Njet_Z_bjet_Zmm_18_amcnlo
//=========  (Thu Jan 14 10:42:40 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_bjet_Zmm_18_amcnlo = new TCanvas("Njet_Z_bjet_Zmm_18_amcnlo", "Njet_Z_bjet_Zmm_18_amcnlo",0,0,600,600);
   Njet_Z_bjet_Zmm_18_amcnlo->SetHighLightColor(2);
   Njet_Z_bjet_Zmm_18_amcnlo->Range(0,0,1,1);
   Njet_Z_bjet_Zmm_18_amcnlo->SetFillColor(0);
   Njet_Z_bjet_Zmm_18_amcnlo->SetFillStyle(4000);
   Njet_Z_bjet_Zmm_18_amcnlo->SetBorderMode(0);
   Njet_Z_bjet_Zmm_18_amcnlo->SetBorderSize(2);
   Njet_Z_bjet_Zmm_18_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_bjet_Zmm_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-69611.59,10.52419,6.954199e+07);
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
   st->SetMaximum(5.960079e+07);
   
   TH1F *st_stack_159 = new TH1F("st_stack_159","",15,0,15);
   st_stack_159->SetMinimum(0.01);
   st_stack_159->SetMaximum(6.258083e+07);
   st_stack_159->SetDirectory(0);
   st_stack_159->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_159->SetLineColor(ci);
   st_stack_159->GetXaxis()->SetRange(1,10);
   st_stack_159->GetXaxis()->SetLabelFont(42);
   st_stack_159->GetXaxis()->SetLabelSize(0.035);
   st_stack_159->GetXaxis()->SetTitleSize(0.035);
   st_stack_159->GetXaxis()->SetTitleFont(42);
   st_stack_159->GetYaxis()->SetTitle("Events/1.0");
   st_stack_159->GetYaxis()->SetLabelFont(42);
   st_stack_159->GetYaxis()->SetLabelSize(0.05);
   st_stack_159->GetYaxis()->SetTitleSize(0.057);
   st_stack_159->GetYaxis()->SetTitleOffset(1.2);
   st_stack_159->GetYaxis()->SetTitleFont(42);
   st_stack_159->GetZaxis()->SetLabelFont(42);
   st_stack_159->GetZaxis()->SetLabelSize(0.035);
   st_stack_159->GetZaxis()->SetTitleSize(0.035);
   st_stack_159->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_159);
   
   
   TH1D *Zmm_bjet_Njet_stack_1 = new TH1D("Zmm_bjet_Njet_stack_1","",15,0,15);
   Zmm_bjet_Njet_stack_1->SetBinContent(1,4182.382);
   Zmm_bjet_Njet_stack_1->SetBinContent(2,3247.495);
   Zmm_bjet_Njet_stack_1->SetBinContent(3,315.7325);
   Zmm_bjet_Njet_stack_1->SetBinContent(4,5.076537);
   Zmm_bjet_Njet_stack_1->SetBinContent(5,0.05298964);
   Zmm_bjet_Njet_stack_1->SetBinError(1,34.00991);
   Zmm_bjet_Njet_stack_1->SetBinError(2,30.20961);
   Zmm_bjet_Njet_stack_1->SetBinError(3,9.457104);
   Zmm_bjet_Njet_stack_1->SetBinError(4,1.249901);
   Zmm_bjet_Njet_stack_1->SetBinError(5,0.05298964);
   Zmm_bjet_Njet_stack_1->SetEntries(40587);

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
   Zmm_bjet_Njet_stack_2->SetBinContent(1,62238.47);
   Zmm_bjet_Njet_stack_2->SetBinContent(2,1854.36);
   Zmm_bjet_Njet_stack_2->SetBinContent(3,262.0739);
   Zmm_bjet_Njet_stack_2->SetBinContent(4,1.751013);
   Zmm_bjet_Njet_stack_2->SetBinError(1,215.0479);
   Zmm_bjet_Njet_stack_2->SetBinError(2,33.30479);
   Zmm_bjet_Njet_stack_2->SetBinError(3,11.95826);
   Zmm_bjet_Njet_stack_2->SetBinError(4,0.9000955);
   Zmm_bjet_Njet_stack_2->SetEntries(102395);

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
   Zmm_bjet_Njet_stack_3->SetBinContent(1,25917.6);
   Zmm_bjet_Njet_stack_3->SetBinContent(2,35341.1);
   Zmm_bjet_Njet_stack_3->SetBinContent(3,12064.77);
   Zmm_bjet_Njet_stack_3->SetBinContent(4,125.2139);
   Zmm_bjet_Njet_stack_3->SetBinContent(5,5.739714);
   Zmm_bjet_Njet_stack_3->SetBinContent(6,0.1487421);
   Zmm_bjet_Njet_stack_3->SetBinError(1,50.39843);
   Zmm_bjet_Njet_stack_3->SetBinError(2,58.12431);
   Zmm_bjet_Njet_stack_3->SetBinError(3,32.97131);
   Zmm_bjet_Njet_stack_3->SetBinError(4,3.384861);
   Zmm_bjet_Njet_stack_3->SetBinError(5,0.6954708);
   Zmm_bjet_Njet_stack_3->SetBinError(6,0.1054541);
   Zmm_bjet_Njet_stack_3->SetEntries(883028);

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
   Zmm_bjet_Njet_stack_4->SetBinContent(1,3.26881e+07);
   Zmm_bjet_Njet_stack_4->SetBinContent(2,227332.7);
   Zmm_bjet_Njet_stack_4->SetBinContent(3,10349.15);
   Zmm_bjet_Njet_stack_4->SetBinContent(4,77.16696);
   Zmm_bjet_Njet_stack_4->SetBinContent(5,0.2399221);
   Zmm_bjet_Njet_stack_4->SetBinError(1,13033.86);
   Zmm_bjet_Njet_stack_4->SetBinError(2,932.3126);
   Zmm_bjet_Njet_stack_4->SetBinError(3,197.4688);
   Zmm_bjet_Njet_stack_4->SetBinError(4,15.15925);
   Zmm_bjet_Njet_stack_4->SetBinError(5,2.015383);
   Zmm_bjet_Njet_stack_4->SetEntries(2.233672e+07);

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
   
   TH1D *Zmm_bjet_Njet__317 = new TH1D("Zmm_bjet_Njet__317","",15,0,15);
   Zmm_bjet_Njet__317->SetBinContent(1,3.26826e+07);
   Zmm_bjet_Njet__317->SetBinContent(2,250172);
   Zmm_bjet_Njet__317->SetBinContent(3,20710);
   Zmm_bjet_Njet__317->SetBinContent(4,257);
   Zmm_bjet_Njet__317->SetBinContent(5,10);
   Zmm_bjet_Njet__317->SetBinError(1,5716.869);
   Zmm_bjet_Njet__317->SetBinError(2,500.172);
   Zmm_bjet_Njet__317->SetBinError(3,143.9097);
   Zmm_bjet_Njet__317->SetBinError(4,16.03122);
   Zmm_bjet_Njet__317->SetBinError(5,3.162278);
   Zmm_bjet_Njet__317->SetEntries(3.295374e+07);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet__317->SetLineColor(ci);
   Zmm_bjet_Njet__317->SetLineWidth(2);
   Zmm_bjet_Njet__317->SetMarkerStyle(20);
   Zmm_bjet_Njet__317->SetMarkerSize(1.2);
   Zmm_bjet_Njet__317->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet__317->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet__317->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet__317->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet__317->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet__317->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet__317->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet__317->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet__317->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet__317->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet__317->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet__317->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet__317->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet__317->GetZaxis()->SetTitleFont(42);
   Zmm_bjet_Njet__317->Draw("same E");
   
   Double_t Graph_from_Zmm_bjet_Njet_fx1317[15] = {
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
   Double_t Graph_from_Zmm_bjet_Njet_fy1317[15] = {
   3.278043e+07,
   267775.6,
   22991.73,
   209.2084,
   6.032626,
   0.1487421,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zmm_bjet_Njet_fex1317[15] = {
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
   Double_t Graph_from_Zmm_bjet_Njet_fey1317[15] = {
   13035.77,
   935.2042,
   200.7821,
   15.60873,
   2.132664,
   0.1054541,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zmm_bjet_Njet_fx1317,Graph_from_Zmm_bjet_Njet_fy1317,Graph_from_Zmm_bjet_Njet_fex1317,Graph_from_Zmm_bjet_Njet_fey1317);
   gre->SetName("Graph_from_Zmm_bjet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_bjet_Njet1317 = new TH1F("Graph_Graph_from_Zmm_bjet_Njet1317","",100,0,16.5);
   Graph_Graph_from_Zmm_bjet_Njet1317->SetMinimum(0);
   Graph_Graph_from_Zmm_bjet_Njet1317->SetMaximum(3.607282e+07);
   Graph_Graph_from_Zmm_bjet_Njet1317->SetDirectory(0);
   Graph_Graph_from_Zmm_bjet_Njet1317->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_bjet_Njet1317->SetLineColor(ci);
   Graph_Graph_from_Zmm_bjet_Njet1317->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1317->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1317->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1317->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1317->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1317->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1317->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1317->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_bjet_Njet1317->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1317->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1317->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1317->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1317->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_bjet_Njet1317);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Njet_Z_bjet_Zmm_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__318 = new TH1D("data_mc_ratio__318","",15,0,15);
   data_mc_ratio__318->SetBinContent(1,0.9970154);
   data_mc_ratio__318->SetBinContent(2,0.9342598);
   data_mc_ratio__318->SetBinContent(3,0.9007587);
   data_mc_ratio__318->SetBinContent(4,1.22844);
   data_mc_ratio__318->SetBinContent(5,1.657653);
   data_mc_ratio__318->SetBinError(1,0.0001743988);
   data_mc_ratio__318->SetBinError(2,0.001867877);
   data_mc_ratio__318->SetBinError(3,0.006259194);
   data_mc_ratio__318->SetBinError(4,0.076628);
   data_mc_ratio__318->SetBinError(5,0.5241959);
   data_mc_ratio__318->SetMinimum(0.4);
   data_mc_ratio__318->SetMaximum(1.6);
   data_mc_ratio__318->SetEntries(51.68799);
   data_mc_ratio__318->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__318->SetLineColor(ci);
   data_mc_ratio__318->SetLineWidth(2);
   data_mc_ratio__318->SetMarkerStyle(20);
   data_mc_ratio__318->SetMarkerSize(1.2);
   data_mc_ratio__318->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__318->GetXaxis()->SetRange(1,10);
   data_mc_ratio__318->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__318->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__318->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__318->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__318->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__318->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__318->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__318->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__318->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__318->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__318->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__318->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__318->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__318->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__318->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__318->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__318->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1318[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1318[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1318[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1318[15] = {
   0.0003976693,
   0.003492492,
   0.008732799,
   0.07460854,
   0.3535217,
   0.7089727,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1318,Graph_from_mc_statistical_error_fy1318,Graph_from_mc_statistical_error_fex1318,Graph_from_mc_statistical_error_fey1318);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1318 = new TH1F("Graph_Graph_from_mc_statistical_error1318","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1318->SetMinimum(0.1492328);
   Graph_Graph_from_mc_statistical_error1318->SetMaximum(1.850767);
   Graph_Graph_from_mc_statistical_error1318->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1318->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1318->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1318->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1318->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1318);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_bjet_Zmm_18_amcnlo->cd();
   Njet_Z_bjet_Zmm_18_amcnlo->Modified();
   Njet_Z_bjet_Zmm_18_amcnlo->cd();
   Njet_Z_bjet_Zmm_18_amcnlo->SetSelected(Njet_Z_bjet_Zmm_18_amcnlo);
}

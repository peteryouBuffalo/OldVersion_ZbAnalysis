void Njet_Z_bjet_Zmm_16_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_bjet_Zmm_16_amcnlo/Njet_Z_bjet_Zmm_16_amcnlo
//=========  (Thu Jan 14 10:42:40 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_bjet_Zmm_16_amcnlo = new TCanvas("Njet_Z_bjet_Zmm_16_amcnlo", "Njet_Z_bjet_Zmm_16_amcnlo",0,0,600,600);
   Njet_Z_bjet_Zmm_16_amcnlo->SetHighLightColor(2);
   Njet_Z_bjet_Zmm_16_amcnlo->Range(0,0,1,1);
   Njet_Z_bjet_Zmm_16_amcnlo->SetFillColor(0);
   Njet_Z_bjet_Zmm_16_amcnlo->SetFillStyle(4000);
   Njet_Z_bjet_Zmm_16_amcnlo->SetBorderMode(0);
   Njet_Z_bjet_Zmm_16_amcnlo->SetBorderSize(2);
   Njet_Z_bjet_Zmm_16_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_bjet_Zmm_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-41498.36,10.52419,4.145687e+07);
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
   st->SetMaximum(3.55305e+07);
   
   TH1F *st_stack_157 = new TH1F("st_stack_157","",15,0,15);
   st_stack_157->SetMinimum(0.01);
   st_stack_157->SetMaximum(3.730703e+07);
   st_stack_157->SetDirectory(0);
   st_stack_157->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_157->SetLineColor(ci);
   st_stack_157->GetXaxis()->SetRange(1,10);
   st_stack_157->GetXaxis()->SetLabelFont(42);
   st_stack_157->GetXaxis()->SetLabelSize(0.035);
   st_stack_157->GetXaxis()->SetTitleSize(0.035);
   st_stack_157->GetXaxis()->SetTitleFont(42);
   st_stack_157->GetYaxis()->SetTitle("Events/1.0");
   st_stack_157->GetYaxis()->SetLabelFont(42);
   st_stack_157->GetYaxis()->SetLabelSize(0.05);
   st_stack_157->GetYaxis()->SetTitleSize(0.057);
   st_stack_157->GetYaxis()->SetTitleOffset(1.2);
   st_stack_157->GetYaxis()->SetTitleFont(42);
   st_stack_157->GetZaxis()->SetLabelFont(42);
   st_stack_157->GetZaxis()->SetLabelSize(0.035);
   st_stack_157->GetZaxis()->SetTitleSize(0.035);
   st_stack_157->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_157);
   
   
   TH1D *Zmm_bjet_Njet_stack_1 = new TH1D("Zmm_bjet_Njet_stack_1","",15,0,15);
   Zmm_bjet_Njet_stack_1->SetBinContent(1,2501.702);
   Zmm_bjet_Njet_stack_1->SetBinContent(2,1676.264);
   Zmm_bjet_Njet_stack_1->SetBinContent(3,147.3513);
   Zmm_bjet_Njet_stack_1->SetBinContent(4,1.978577);
   Zmm_bjet_Njet_stack_1->SetBinError(1,22.46752);
   Zmm_bjet_Njet_stack_1->SetBinError(2,18.20074);
   Zmm_bjet_Njet_stack_1->SetBinError(3,5.320384);
   Zmm_bjet_Njet_stack_1->SetBinError(4,0.607096);
   Zmm_bjet_Njet_stack_1->SetEntries(24831);

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
   Zmm_bjet_Njet_stack_2->SetBinContent(1,36090.03);
   Zmm_bjet_Njet_stack_2->SetBinContent(2,983.6234);
   Zmm_bjet_Njet_stack_2->SetBinContent(3,112.5886);
   Zmm_bjet_Njet_stack_2->SetBinContent(4,0.6989582);
   Zmm_bjet_Njet_stack_2->SetBinError(1,122.0742);
   Zmm_bjet_Njet_stack_2->SetBinError(2,18.01733);
   Zmm_bjet_Njet_stack_2->SetBinError(3,5.773925);
   Zmm_bjet_Njet_stack_2->SetBinError(4,0.4132122);
   Zmm_bjet_Njet_stack_2->SetEntries(101316);

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
   Zmm_bjet_Njet_stack_3->SetBinContent(1,16714.08);
   Zmm_bjet_Njet_stack_3->SetBinContent(2,19215.15);
   Zmm_bjet_Njet_stack_3->SetBinContent(3,5576.198);
   Zmm_bjet_Njet_stack_3->SetBinContent(4,64.66752);
   Zmm_bjet_Njet_stack_3->SetBinContent(5,2.323858);
   Zmm_bjet_Njet_stack_3->SetBinError(1,59.2463);
   Zmm_bjet_Njet_stack_3->SetBinError(2,62.05787);
   Zmm_bjet_Njet_stack_3->SetBinError(3,32.6465);
   Zmm_bjet_Njet_stack_3->SetBinError(4,3.473497);
   Zmm_bjet_Njet_stack_3->SetBinError(5,0.6468248);
   Zmm_bjet_Njet_stack_3->SetEntries(220766);

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
   Zmm_bjet_Njet_stack_4->SetBinContent(1,1.948647e+07);
   Zmm_bjet_Njet_stack_4->SetBinContent(2,130208.5);
   Zmm_bjet_Njet_stack_4->SetBinContent(3,5076.622);
   Zmm_bjet_Njet_stack_4->SetBinContent(4,52.509);
   Zmm_bjet_Njet_stack_4->SetBinContent(5,-0.8253833);
   Zmm_bjet_Njet_stack_4->SetBinError(1,7038.225);
   Zmm_bjet_Njet_stack_4->SetBinError(2,487.7419);
   Zmm_bjet_Njet_stack_4->SetBinError(3,88.87341);
   Zmm_bjet_Njet_stack_4->SetBinError(4,7.550517);
   Zmm_bjet_Njet_stack_4->SetBinError(5,1.339703);
   Zmm_bjet_Njet_stack_4->SetEntries(2.551742e+07);

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
   
   TH1D *Zmm_bjet_Njet__313 = new TH1D("Zmm_bjet_Njet__313","",15,0,15);
   Zmm_bjet_Njet__313->SetBinContent(1,1.91926e+07);
   Zmm_bjet_Njet__313->SetBinContent(2,128682);
   Zmm_bjet_Njet__313->SetBinContent(3,9836);
   Zmm_bjet_Njet__313->SetBinContent(4,101);
   Zmm_bjet_Njet__313->SetBinContent(5,6);
   Zmm_bjet_Njet__313->SetBinError(1,4380.936);
   Zmm_bjet_Njet__313->SetBinError(2,358.7227);
   Zmm_bjet_Njet__313->SetBinError(3,99.17661);
   Zmm_bjet_Njet__313->SetBinError(4,10.04988);
   Zmm_bjet_Njet__313->SetBinError(5,2.44949);
   Zmm_bjet_Njet__313->SetEntries(1.933122e+07);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet__313->SetLineColor(ci);
   Zmm_bjet_Njet__313->SetLineWidth(2);
   Zmm_bjet_Njet__313->SetMarkerStyle(20);
   Zmm_bjet_Njet__313->SetMarkerSize(1.2);
   Zmm_bjet_Njet__313->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet__313->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet__313->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet__313->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet__313->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet__313->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet__313->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet__313->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet__313->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet__313->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet__313->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet__313->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet__313->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet__313->GetZaxis()->SetTitleFont(42);
   Zmm_bjet_Njet__313->Draw("same E");
   
   Double_t Graph_from_Zmm_bjet_Njet_fx1313[15] = {
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
   Double_t Graph_from_Zmm_bjet_Njet_fy1313[15] = {
   1.954178e+07,
   152083.6,
   10912.76,
   119.8541,
   1.498475,
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
   Double_t Graph_from_Zmm_bjet_Njet_fex1313[15] = {
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
   Double_t Graph_from_Zmm_bjet_Njet_fey1313[15] = {
   7039.569,
   492.3406,
   95.00485,
   8.343548,
   1.487678,
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
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zmm_bjet_Njet_fx1313,Graph_from_Zmm_bjet_Njet_fy1313,Graph_from_Zmm_bjet_Njet_fex1313,Graph_from_Zmm_bjet_Njet_fey1313);
   gre->SetName("Graph_from_Zmm_bjet_Njet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_bjet_Njet1313 = new TH1F("Graph_Graph_from_Zmm_bjet_Njet1313","",100,0,16.5);
   Graph_Graph_from_Zmm_bjet_Njet1313->SetMinimum(0);
   Graph_Graph_from_Zmm_bjet_Njet1313->SetMaximum(2.15037e+07);
   Graph_Graph_from_Zmm_bjet_Njet1313->SetDirectory(0);
   Graph_Graph_from_Zmm_bjet_Njet1313->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_bjet_Njet1313->SetLineColor(ci);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet1313->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_bjet_Njet1313);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   Njet_Z_bjet_Zmm_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__314 = new TH1D("data_mc_ratio__314","",15,0,15);
   data_mc_ratio__314->SetBinContent(1,0.9821316);
   data_mc_ratio__314->SetBinContent(2,0.8461269);
   data_mc_ratio__314->SetBinContent(3,0.9013302);
   data_mc_ratio__314->SetBinContent(4,0.8426916);
   data_mc_ratio__314->SetBinContent(5,4.004071);
   data_mc_ratio__314->SetBinError(1,0.0002241831);
   data_mc_ratio__314->SetBinError(2,0.002358721);
   data_mc_ratio__314->SetBinError(3,0.009088132);
   data_mc_ratio__314->SetBinError(4,0.08385095);
   data_mc_ratio__314->SetBinError(5,1.634655);
   data_mc_ratio__314->SetMinimum(0.4);
   data_mc_ratio__314->SetMaximum(1.6);
   data_mc_ratio__314->SetEntries(3.10526);
   data_mc_ratio__314->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__314->SetLineColor(ci);
   data_mc_ratio__314->SetLineWidth(2);
   data_mc_ratio__314->SetMarkerStyle(20);
   data_mc_ratio__314->SetMarkerSize(1.2);
   data_mc_ratio__314->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__314->GetXaxis()->SetRange(1,10);
   data_mc_ratio__314->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__314->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__314->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__314->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__314->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__314->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__314->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__314->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__314->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__314->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__314->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__314->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__314->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__314->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__314->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__314->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__314->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1314[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1314[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1314[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1314[15] = {
   0.0003602318,
   0.003237303,
   0.00870585,
   0.06961423,
   0.9927951,
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
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1314,Graph_from_mc_statistical_error_fy1314,Graph_from_mc_statistical_error_fex1314,Graph_from_mc_statistical_error_fey1314);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1314 = new TH1F("Graph_Graph_from_mc_statistical_error1314","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1314->SetMinimum(0.006484394);
   Graph_Graph_from_mc_statistical_error1314->SetMaximum(2.191354);
   Graph_Graph_from_mc_statistical_error1314->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1314->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1314->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1314->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1314->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1314);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_bjet_Zmm_16_amcnlo->cd();
   Njet_Z_bjet_Zmm_16_amcnlo->Modified();
   Njet_Z_bjet_Zmm_16_amcnlo->cd();
   Njet_Z_bjet_Zmm_16_amcnlo->SetSelected(Njet_Z_bjet_Zmm_16_amcnlo);
}

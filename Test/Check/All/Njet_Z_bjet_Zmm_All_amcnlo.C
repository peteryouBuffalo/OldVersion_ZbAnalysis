void Njet_Z_bjet_Zmm_All_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_bjet_Zmm_All_amcnlo/Njet_Z_bjet_Zmm_All_amcnlo
//=========  (Thu Jan 14 10:42:41 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_bjet_Zmm_All_amcnlo = new TCanvas("Njet_Z_bjet_Zmm_All_amcnlo", "Njet_Z_bjet_Zmm_All_amcnlo",0,0,600,600);
   Njet_Z_bjet_Zmm_All_amcnlo->SetHighLightColor(2);
   Njet_Z_bjet_Zmm_All_amcnlo->Range(0,0,1,1);
   Njet_Z_bjet_Zmm_All_amcnlo->SetFillColor(0);
   Njet_Z_bjet_Zmm_All_amcnlo->SetFillStyle(4000);
   Njet_Z_bjet_Zmm_All_amcnlo->SetBorderMode(0);
   Njet_Z_bjet_Zmm_All_amcnlo->SetBorderSize(2);
   Njet_Z_bjet_Zmm_All_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_bjet_Zmm_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-158880.7,10.52419,1.587218e+08);
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
   st->SetMaximum(1.360321e+08);
   
   TH1F *st_stack_160 = new TH1F("st_stack_160","",15,0,15);
   st_stack_160->SetMinimum(0.01);
   st_stack_160->SetMaximum(1.428338e+08);
   st_stack_160->SetDirectory(0);
   st_stack_160->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_160->SetLineColor(ci);
   st_stack_160->GetXaxis()->SetRange(1,10);
   st_stack_160->GetXaxis()->SetLabelFont(42);
   st_stack_160->GetXaxis()->SetLabelSize(0.035);
   st_stack_160->GetXaxis()->SetTitleSize(0.035);
   st_stack_160->GetXaxis()->SetTitleFont(42);
   st_stack_160->GetYaxis()->SetTitle("Events/1.0");
   st_stack_160->GetYaxis()->SetLabelFont(42);
   st_stack_160->GetYaxis()->SetLabelSize(0.05);
   st_stack_160->GetYaxis()->SetTitleSize(0.057);
   st_stack_160->GetYaxis()->SetTitleOffset(1.2);
   st_stack_160->GetYaxis()->SetTitleFont(42);
   st_stack_160->GetZaxis()->SetLabelFont(42);
   st_stack_160->GetZaxis()->SetLabelSize(0.035);
   st_stack_160->GetZaxis()->SetTitleSize(0.035);
   st_stack_160->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_160);
   
   
   TH1D *Zmm_bjet_Njet_all_stack_1 = new TH1D("Zmm_bjet_Njet_all_stack_1","",15,0,15);
   Zmm_bjet_Njet_all_stack_1->SetBinContent(1,9658.605);
   Zmm_bjet_Njet_all_stack_1->SetBinContent(2,6997.019);
   Zmm_bjet_Njet_all_stack_1->SetBinContent(3,650.408);
   Zmm_bjet_Njet_all_stack_1->SetBinContent(4,8.160903);
   Zmm_bjet_Njet_all_stack_1->SetBinContent(5,0.3743543);
   Zmm_bjet_Njet_all_stack_1->SetBinError(1,50.92331);
   Zmm_bjet_Njet_all_stack_1->SetBinError(2,41.375);
   Zmm_bjet_Njet_all_stack_1->SetBinError(3,12.43158);
   Zmm_bjet_Njet_all_stack_1->SetBinError(4,1.455683);
   Zmm_bjet_Njet_all_stack_1->SetBinError(5,0.2333936);
   Zmm_bjet_Njet_all_stack_1->SetEntries(92796);

   ci = TColor::GetColor("#cccc00");
   Zmm_bjet_Njet_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_all_stack_1->SetLineColor(ci);
   Zmm_bjet_Njet_all_stack_1->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_Njet_all_stack_1,"");
   
   TH1D *Zmm_bjet_Njet_all_stack_2 = new TH1D("Zmm_bjet_Njet_all_stack_2","",15,0,15);
   Zmm_bjet_Njet_all_stack_2->SetBinContent(1,139948);
   Zmm_bjet_Njet_all_stack_2->SetBinContent(2,4022.915);
   Zmm_bjet_Njet_all_stack_2->SetBinContent(3,542.3417);
   Zmm_bjet_Njet_all_stack_2->SetBinContent(4,3.565155);
   Zmm_bjet_Njet_all_stack_2->SetBinError(1,276.8168);
   Zmm_bjet_Njet_all_stack_2->SetBinError(2,43.22165);
   Zmm_bjet_Njet_all_stack_2->SetBinError(3,15.33753);
   Zmm_bjet_Njet_all_stack_2->SetBinError(4,1.150692);
   Zmm_bjet_Njet_all_stack_2->SetEntries(351208);

   ci = TColor::GetColor("#0000cc");
   Zmm_bjet_Njet_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_all_stack_2->SetLineColor(ci);
   Zmm_bjet_Njet_all_stack_2->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_Njet_all_stack_2,"");
   
   TH1D *Zmm_bjet_Njet_all_stack_3 = new TH1D("Zmm_bjet_Njet_all_stack_3","",15,0,15);
   Zmm_bjet_Njet_all_stack_3->SetBinContent(1,61297.66);
   Zmm_bjet_Njet_all_stack_3->SetBinContent(2,77859.14);
   Zmm_bjet_Njet_all_stack_3->SetBinContent(3,25098.8);
   Zmm_bjet_Njet_all_stack_3->SetBinContent(4,257.4189);
   Zmm_bjet_Njet_all_stack_3->SetBinContent(5,10.09745);
   Zmm_bjet_Njet_all_stack_3->SetBinContent(6,0.4807232);
   Zmm_bjet_Njet_all_stack_3->SetBinError(1,120.4468);
   Zmm_bjet_Njet_all_stack_3->SetBinError(2,130.3505);
   Zmm_bjet_Njet_all_stack_3->SetBinError(3,71.06496);
   Zmm_bjet_Njet_all_stack_3->SetBinError(4,6.965897);
   Zmm_bjet_Njet_all_stack_3->SetBinError(5,1.27233);
   Zmm_bjet_Njet_all_stack_3->SetBinError(6,0.3483274);
   Zmm_bjet_Njet_all_stack_3->SetEntries(1263092);

   ci = TColor::GetColor("#cc0000");
   Zmm_bjet_Njet_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_all_stack_3->SetLineColor(ci);
   Zmm_bjet_Njet_all_stack_3->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_Njet_all_stack_3,"");
   
   TH1D *Zmm_bjet_Njet_all_stack_4 = new TH1D("Zmm_bjet_Njet_all_stack_4","",15,0,15);
   Zmm_bjet_Njet_all_stack_4->SetBinContent(1,7.427728e+07);
   Zmm_bjet_Njet_all_stack_4->SetBinContent(2,503616.1);
   Zmm_bjet_Njet_all_stack_4->SetBinContent(3,21665.79);
   Zmm_bjet_Njet_all_stack_4->SetBinContent(4,160.222);
   Zmm_bjet_Njet_all_stack_4->SetBinContent(5,1.322532);
   Zmm_bjet_Njet_all_stack_4->SetBinError(1,17129.33);
   Zmm_bjet_Njet_all_stack_4->SetBinError(2,1221.047);
   Zmm_bjet_Njet_all_stack_4->SetBinError(3,249.6186);
   Zmm_bjet_Njet_all_stack_4->SetBinError(4,19.03727);
   Zmm_bjet_Njet_all_stack_4->SetBinError(5,2.695888);
   Zmm_bjet_Njet_all_stack_4->SetEntries(6.991158e+07);

   ci = TColor::GetColor("#00cc00");
   Zmm_bjet_Njet_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_all_stack_4->SetLineColor(ci);
   Zmm_bjet_Njet_all_stack_4->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_bjet_Njet_all_stack_4,"");
   st->Draw("hist");
   
   TH1D *Zmm_bjet_Njet_all__319 = new TH1D("Zmm_bjet_Njet_all__319","",15,0,15);
   Zmm_bjet_Njet_all__319->SetBinContent(1,7.481768e+07);
   Zmm_bjet_Njet_all__319->SetBinContent(2,542854);
   Zmm_bjet_Njet_all__319->SetBinContent(3,43511);
   Zmm_bjet_Njet_all__319->SetBinContent(4,523);
   Zmm_bjet_Njet_all__319->SetBinContent(5,22);
   Zmm_bjet_Njet_all__319->SetBinError(1,8649.721);
   Zmm_bjet_Njet_all__319->SetBinError(2,736.7863);
   Zmm_bjet_Njet_all__319->SetBinError(3,208.5929);
   Zmm_bjet_Njet_all__319->SetBinError(4,22.86919);
   Zmm_bjet_Njet_all__319->SetBinError(5,4.690416);
   Zmm_bjet_Njet_all__319->SetEntries(7.540459e+07);

   ci = TColor::GetColor("#000099");
   Zmm_bjet_Njet_all__319->SetLineColor(ci);
   Zmm_bjet_Njet_all__319->SetLineWidth(2);
   Zmm_bjet_Njet_all__319->SetMarkerStyle(20);
   Zmm_bjet_Njet_all__319->SetMarkerSize(1.2);
   Zmm_bjet_Njet_all__319->GetXaxis()->SetRange(1,15);
   Zmm_bjet_Njet_all__319->GetXaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all__319->GetXaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all__319->GetXaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all__319->GetXaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all__319->GetYaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all__319->GetYaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all__319->GetYaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all__319->GetYaxis()->SetTitleOffset(0);
   Zmm_bjet_Njet_all__319->GetYaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all__319->GetZaxis()->SetLabelFont(42);
   Zmm_bjet_Njet_all__319->GetZaxis()->SetLabelSize(0.035);
   Zmm_bjet_Njet_all__319->GetZaxis()->SetTitleSize(0.035);
   Zmm_bjet_Njet_all__319->GetZaxis()->SetTitleFont(42);
   Zmm_bjet_Njet_all__319->Draw("same E");
   
   Double_t Graph_from_Zmm_bjet_Njet_all_fx1319[15] = {
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
   Double_t Graph_from_Zmm_bjet_Njet_all_fy1319[15] = {
   7.448818e+07,
   592495.2,
   47957.34,
   429.3669,
   11.79433,
   0.4807232,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zmm_bjet_Njet_all_fex1319[15] = {
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
   Double_t Graph_from_Zmm_bjet_Njet_all_fey1319[15] = {
   17132.06,
   1229.442,
   260.2873,
   20.35644,
   2.990168,
   0.3483274,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zmm_bjet_Njet_all_fx1319,Graph_from_Zmm_bjet_Njet_all_fy1319,Graph_from_Zmm_bjet_Njet_all_fex1319,Graph_from_Zmm_bjet_Njet_all_fey1319);
   gre->SetName("Graph_from_Zmm_bjet_Njet_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_bjet_Njet_all1319 = new TH1F("Graph_Graph_from_Zmm_bjet_Njet_all1319","",100,0,16.5);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->SetMinimum(0);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->SetMaximum(8.195584e+07);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->SetDirectory(0);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_bjet_Njet_all1319->SetLineColor(ci);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_bjet_Njet_all1319->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_bjet_Njet_all1319);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_bjet_Njet_all","Data (Z(#mu#mu) + b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_bjet_Njet_all_stack_4","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_bjet_Njet_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_bjet_Njet_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_bjet_Njet_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_bjet_Njet_all","MC unc. (stat.)","fl");

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
   Njet_Z_bjet_Zmm_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__320 = new TH1D("data_mc_ratio__320","",15,0,15);
   data_mc_ratio__320->SetBinContent(1,1.004424);
   data_mc_ratio__320->SetBinContent(2,0.9162167);
   data_mc_ratio__320->SetBinContent(3,0.9072855);
   data_mc_ratio__320->SetBinContent(4,1.218072);
   data_mc_ratio__320->SetBinContent(5,1.865302);
   data_mc_ratio__320->SetBinError(1,0.0001161221);
   data_mc_ratio__320->SetBinError(2,0.001243531);
   data_mc_ratio__320->SetBinError(3,0.004349551);
   data_mc_ratio__320->SetBinError(4,0.05326258);
   data_mc_ratio__320->SetBinError(5,0.3976838);
   data_mc_ratio__320->SetMinimum(0.4);
   data_mc_ratio__320->SetMaximum(1.6);
   data_mc_ratio__320->SetEntries(90.05835);
   data_mc_ratio__320->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__320->SetLineColor(ci);
   data_mc_ratio__320->SetLineWidth(2);
   data_mc_ratio__320->SetMarkerStyle(20);
   data_mc_ratio__320->SetMarkerSize(1.2);
   data_mc_ratio__320->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__320->GetXaxis()->SetRange(1,10);
   data_mc_ratio__320->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__320->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__320->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__320->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__320->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__320->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__320->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__320->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__320->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__320->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__320->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__320->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__320->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__320->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__320->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__320->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__320->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1320[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1320[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1320[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1320[15] = {
   0.000229997,
   0.002075024,
   0.005427476,
   0.04741035,
   0.2535258,
   0.7245904,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1320,Graph_from_mc_statistical_error_fy1320,Graph_from_mc_statistical_error_fex1320,Graph_from_mc_statistical_error_fey1320);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1320 = new TH1F("Graph_Graph_from_mc_statistical_error1320","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1320->SetMinimum(0.1304915);
   Graph_Graph_from_mc_statistical_error1320->SetMaximum(1.869509);
   Graph_Graph_from_mc_statistical_error1320->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1320->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1320->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1320->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1320->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1320);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_bjet_Zmm_All_amcnlo->cd();
   Njet_Z_bjet_Zmm_All_amcnlo->Modified();
   Njet_Z_bjet_Zmm_All_amcnlo->cd();
   Njet_Z_bjet_Zmm_All_amcnlo->SetSelected(Njet_Z_bjet_Zmm_All_amcnlo);
}

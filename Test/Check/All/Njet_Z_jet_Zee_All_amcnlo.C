void Njet_Z_jet_Zee_All_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_jet_Zee_All_amcnlo/Njet_Z_jet_Zee_All_amcnlo
//=========  (Thu Jan 14 10:42:22 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_jet_Zee_All_amcnlo = new TCanvas("Njet_Z_jet_Zee_All_amcnlo", "Njet_Z_jet_Zee_All_amcnlo",0,0,600,600);
   Njet_Z_jet_Zee_All_amcnlo->SetHighLightColor(2);
   Njet_Z_jet_Zee_All_amcnlo->Range(0,0,1,1);
   Njet_Z_jet_Zee_All_amcnlo->SetFillColor(0);
   Njet_Z_jet_Zee_All_amcnlo->SetFillStyle(4000);
   Njet_Z_jet_Zee_All_amcnlo->SetBorderMode(0);
   Njet_Z_jet_Zee_All_amcnlo->SetBorderSize(2);
   Njet_Z_jet_Zee_All_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_jet_Zee_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-55735.18,10.52419,5.567946e+07);
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
   st->SetMaximum(4.771994e+07);
   
   TH1F *st_stack_36 = new TH1F("st_stack_36","",15,0,15);
   st_stack_36->SetMinimum(0.01);
   st_stack_36->SetMaximum(5.010594e+07);
   st_stack_36->SetDirectory(0);
   st_stack_36->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_36->SetLineColor(ci);
   st_stack_36->GetXaxis()->SetRange(1,10);
   st_stack_36->GetXaxis()->SetLabelFont(42);
   st_stack_36->GetXaxis()->SetLabelSize(0.035);
   st_stack_36->GetXaxis()->SetTitleSize(0.035);
   st_stack_36->GetXaxis()->SetTitleFont(42);
   st_stack_36->GetYaxis()->SetTitle("Events/1.0");
   st_stack_36->GetYaxis()->SetLabelFont(42);
   st_stack_36->GetYaxis()->SetLabelSize(0.05);
   st_stack_36->GetYaxis()->SetTitleSize(0.057);
   st_stack_36->GetYaxis()->SetTitleOffset(1.2);
   st_stack_36->GetYaxis()->SetTitleFont(42);
   st_stack_36->GetZaxis()->SetLabelFont(42);
   st_stack_36->GetZaxis()->SetLabelSize(0.035);
   st_stack_36->GetZaxis()->SetTitleSize(0.035);
   st_stack_36->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_36);
   
   
   TH1D *Zee_jet_Njet_all_stack_1 = new TH1D("Zee_jet_Njet_all_stack_1","",15,0,15);
   Zee_jet_Njet_all_stack_1->SetBinContent(1,1017.517);
   Zee_jet_Njet_all_stack_1->SetBinContent(2,3676.646);
   Zee_jet_Njet_all_stack_1->SetBinContent(3,1878.958);
   Zee_jet_Njet_all_stack_1->SetBinContent(4,647.6256);
   Zee_jet_Njet_all_stack_1->SetBinContent(5,176.8504);
   Zee_jet_Njet_all_stack_1->SetBinContent(6,47.35199);
   Zee_jet_Njet_all_stack_1->SetBinContent(7,9.284332);
   Zee_jet_Njet_all_stack_1->SetBinContent(8,1.649924);
   Zee_jet_Njet_all_stack_1->SetBinContent(9,0.3827346);
   Zee_jet_Njet_all_stack_1->SetBinError(1,15.37857);
   Zee_jet_Njet_all_stack_1->SetBinError(2,28.96428);
   Zee_jet_Njet_all_stack_1->SetBinError(3,20.78722);
   Zee_jet_Njet_all_stack_1->SetBinError(4,12.22133);
   Zee_jet_Njet_all_stack_1->SetBinError(5,6.363499);
   Zee_jet_Njet_all_stack_1->SetBinError(6,3.308237);
   Zee_jet_Njet_all_stack_1->SetBinError(7,1.459075);
   Zee_jet_Njet_all_stack_1->SetBinError(8,0.6404029);
   Zee_jet_Njet_all_stack_1->SetBinError(9,0.2394953);
   Zee_jet_Njet_all_stack_1->SetEntries(39373);

   ci = TColor::GetColor("#cccc00");
   Zee_jet_Njet_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_all_stack_1->SetLineColor(ci);
   Zee_jet_Njet_all_stack_1->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_all_stack_1,"");
   
   TH1D *Zee_jet_Njet_all_stack_2 = new TH1D("Zee_jet_Njet_all_stack_2","",15,0,15);
   Zee_jet_Njet_all_stack_2->SetBinContent(1,26919.93);
   Zee_jet_Njet_all_stack_2->SetBinContent(2,22698.08);
   Zee_jet_Njet_all_stack_2->SetBinContent(3,13207.95);
   Zee_jet_Njet_all_stack_2->SetBinContent(4,3628.353);
   Zee_jet_Njet_all_stack_2->SetBinContent(5,804.574);
   Zee_jet_Njet_all_stack_2->SetBinContent(6,163.4489);
   Zee_jet_Njet_all_stack_2->SetBinContent(7,25.10226);
   Zee_jet_Njet_all_stack_2->SetBinContent(8,7.469701);
   Zee_jet_Njet_all_stack_2->SetBinError(1,120.468);
   Zee_jet_Njet_all_stack_2->SetBinError(2,105.6226);
   Zee_jet_Njet_all_stack_2->SetBinError(3,79.88581);
   Zee_jet_Njet_all_stack_2->SetBinError(4,41.19422);
   Zee_jet_Njet_all_stack_2->SetBinError(5,19.31393);
   Zee_jet_Njet_all_stack_2->SetBinError(6,8.488124);
   Zee_jet_Njet_all_stack_2->SetBinError(7,3.183713);
   Zee_jet_Njet_all_stack_2->SetBinError(8,2.017183);
   Zee_jet_Njet_all_stack_2->SetEntries(181027);

   ci = TColor::GetColor("#0000cc");
   Zee_jet_Njet_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_all_stack_2->SetLineColor(ci);
   Zee_jet_Njet_all_stack_2->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_all_stack_2,"");
   
   TH1D *Zee_jet_Njet_all_stack_3 = new TH1D("Zee_jet_Njet_all_stack_3","",15,0,15);
   Zee_jet_Njet_all_stack_3->SetBinContent(1,2603.731);
   Zee_jet_Njet_all_stack_3->SetBinContent(2,16867.94);
   Zee_jet_Njet_all_stack_3->SetBinContent(3,30328.5);
   Zee_jet_Njet_all_stack_3->SetBinContent(4,15430.73);
   Zee_jet_Njet_all_stack_3->SetBinContent(5,5620.944);
   Zee_jet_Njet_all_stack_3->SetBinContent(6,1723.292);
   Zee_jet_Njet_all_stack_3->SetBinContent(7,453.6951);
   Zee_jet_Njet_all_stack_3->SetBinContent(8,105.3812);
   Zee_jet_Njet_all_stack_3->SetBinContent(9,26.43805);
   Zee_jet_Njet_all_stack_3->SetBinContent(10,4.085144);
   Zee_jet_Njet_all_stack_3->SetBinContent(11,1.965511);
   Zee_jet_Njet_all_stack_3->SetBinContent(12,0.6781466);
   Zee_jet_Njet_all_stack_3->SetBinContent(14,0.08241254);
   Zee_jet_Njet_all_stack_3->SetBinError(1,22.67236);
   Zee_jet_Njet_all_stack_3->SetBinError(2,58.15489);
   Zee_jet_Njet_all_stack_3->SetBinError(3,78.00305);
   Zee_jet_Njet_all_stack_3->SetBinError(4,55.50784);
   Zee_jet_Njet_all_stack_3->SetBinError(5,33.34026);
   Zee_jet_Njet_all_stack_3->SetBinError(6,18.51405);
   Zee_jet_Njet_all_stack_3->SetBinError(7,9.489446);
   Zee_jet_Njet_all_stack_3->SetBinError(8,4.509662);
   Zee_jet_Njet_all_stack_3->SetBinError(9,2.319393);
   Zee_jet_Njet_all_stack_3->SetBinError(10,0.7560032);
   Zee_jet_Njet_all_stack_3->SetBinError(11,0.7808083);
   Zee_jet_Njet_all_stack_3->SetBinError(12,0.3426711);
   Zee_jet_Njet_all_stack_3->SetBinError(14,0.08241254);
   Zee_jet_Njet_all_stack_3->SetEntries(599789);

   ci = TColor::GetColor("#cc0000");
   Zee_jet_Njet_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_all_stack_3->SetLineColor(ci);
   Zee_jet_Njet_all_stack_3->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_all_stack_3,"");
   
   TH1D *Zee_jet_Njet_all_stack_4 = new TH1D("Zee_jet_Njet_all_stack_4","",15,0,15);
   Zee_jet_Njet_all_stack_4->SetBinContent(1,2.583371e+07);
   Zee_jet_Njet_all_stack_4->SetBinContent(2,4886704);
   Zee_jet_Njet_all_stack_4->SetBinContent(3,1125666);
   Zee_jet_Njet_all_stack_4->SetBinContent(4,221486.6);
   Zee_jet_Njet_all_stack_4->SetBinContent(5,40269.47);
   Zee_jet_Njet_all_stack_4->SetBinContent(6,7494.924);
   Zee_jet_Njet_all_stack_4->SetBinContent(7,1383.137);
   Zee_jet_Njet_all_stack_4->SetBinContent(8,237.5882);
   Zee_jet_Njet_all_stack_4->SetBinContent(9,41.0037);
   Zee_jet_Njet_all_stack_4->SetBinContent(10,12.43895);
   Zee_jet_Njet_all_stack_4->SetBinContent(11,1.213371);
   Zee_jet_Njet_all_stack_4->SetBinContent(13,0.9511377);
   Zee_jet_Njet_all_stack_4->SetBinError(1,9957.422);
   Zee_jet_Njet_all_stack_4->SetBinError(2,3487.864);
   Zee_jet_Njet_all_stack_4->SetBinError(3,1716.261);
   Zee_jet_Njet_all_stack_4->SetBinError(4,738.3955);
   Zee_jet_Njet_all_stack_4->SetBinError(5,310.5082);
   Zee_jet_Njet_all_stack_4->SetBinError(6,135.1014);
   Zee_jet_Njet_all_stack_4->SetBinError(7,56.6523);
   Zee_jet_Njet_all_stack_4->SetBinError(8,24.06389);
   Zee_jet_Njet_all_stack_4->SetBinError(9,10.76527);
   Zee_jet_Njet_all_stack_4->SetBinError(10,4.660602);
   Zee_jet_Njet_all_stack_4->SetBinError(11,1.964174);
   Zee_jet_Njet_all_stack_4->SetBinError(13,0.9511377);
   Zee_jet_Njet_all_stack_4->SetEntries(3.372279e+07);

   ci = TColor::GetColor("#00cc00");
   Zee_jet_Njet_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_all_stack_4->SetLineColor(ci);
   Zee_jet_Njet_all_stack_4->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_jet_Njet_all_stack_4,"");
   st->Draw("hist");
   
   TH1D *Zee_jet_Njet_all__71 = new TH1D("Zee_jet_Njet_all__71","",15,0,15);
   Zee_jet_Njet_all__71->SetBinContent(1,2.624597e+07);
   Zee_jet_Njet_all__71->SetBinContent(2,4702689);
   Zee_jet_Njet_all__71->SetBinContent(3,1121444);
   Zee_jet_Njet_all__71->SetBinContent(4,262338);
   Zee_jet_Njet_all__71->SetBinContent(5,62636);
   Zee_jet_Njet_all__71->SetBinContent(6,14939);
   Zee_jet_Njet_all__71->SetBinContent(7,3486);
   Zee_jet_Njet_all__71->SetBinContent(8,874);
   Zee_jet_Njet_all__71->SetBinContent(9,204);
   Zee_jet_Njet_all__71->SetBinContent(10,48);
   Zee_jet_Njet_all__71->SetBinContent(11,5);
   Zee_jet_Njet_all__71->SetBinContent(12,3);
   Zee_jet_Njet_all__71->SetBinContent(13,1);
   Zee_jet_Njet_all__71->SetBinError(1,5123.082);
   Zee_jet_Njet_all__71->SetBinError(2,2168.568);
   Zee_jet_Njet_all__71->SetBinError(3,1058.983);
   Zee_jet_Njet_all__71->SetBinError(4,512.1894);
   Zee_jet_Njet_all__71->SetBinError(5,250.2719);
   Zee_jet_Njet_all__71->SetBinError(6,122.2252);
   Zee_jet_Njet_all__71->SetBinError(7,59.04236);
   Zee_jet_Njet_all__71->SetBinError(8,29.56349);
   Zee_jet_Njet_all__71->SetBinError(9,14.28286);
   Zee_jet_Njet_all__71->SetBinError(10,6.928203);
   Zee_jet_Njet_all__71->SetBinError(11,2.236068);
   Zee_jet_Njet_all__71->SetBinError(12,1.732051);
   Zee_jet_Njet_all__71->SetBinError(13,1);
   Zee_jet_Njet_all__71->SetEntries(3.241463e+07);

   ci = TColor::GetColor("#000099");
   Zee_jet_Njet_all__71->SetLineColor(ci);
   Zee_jet_Njet_all__71->SetLineWidth(2);
   Zee_jet_Njet_all__71->SetMarkerStyle(20);
   Zee_jet_Njet_all__71->SetMarkerSize(1.2);
   Zee_jet_Njet_all__71->GetXaxis()->SetRange(1,15);
   Zee_jet_Njet_all__71->GetXaxis()->SetLabelFont(42);
   Zee_jet_Njet_all__71->GetXaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all__71->GetXaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all__71->GetXaxis()->SetTitleFont(42);
   Zee_jet_Njet_all__71->GetYaxis()->SetLabelFont(42);
   Zee_jet_Njet_all__71->GetYaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all__71->GetYaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all__71->GetYaxis()->SetTitleOffset(0);
   Zee_jet_Njet_all__71->GetYaxis()->SetTitleFont(42);
   Zee_jet_Njet_all__71->GetZaxis()->SetLabelFont(42);
   Zee_jet_Njet_all__71->GetZaxis()->SetLabelSize(0.035);
   Zee_jet_Njet_all__71->GetZaxis()->SetTitleSize(0.035);
   Zee_jet_Njet_all__71->GetZaxis()->SetTitleFont(42);
   Zee_jet_Njet_all__71->Draw("same E");
   
   Double_t Graph_from_Zee_jet_Njet_all_fx1071[15] = {
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
   Double_t Graph_from_Zee_jet_Njet_all_fy1071[15] = {
   2.586425e+07,
   4929947,
   1171081,
   241193.3,
   46871.84,
   9429.017,
   1871.218,
   352.089,
   67.82449,
   16.52409,
   3.178882,
   0.6781466,
   0.9511377,
   0.08241254,
   0};
   Double_t Graph_from_Zee_jet_Njet_all_fex1071[15] = {
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
   Double_t Graph_from_Zee_jet_Njet_all_fey1071[15] = {
   9958.188,
   3490.068,
   1720.015,
   741.7246,
   312.9544,
   136.668,
   57.54822,
   24.57411,
   11.01489,
   4.72152,
   2.11368,
   0.3426711,
   0.9511377,
   0.08241254,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zee_jet_Njet_all_fx1071,Graph_from_Zee_jet_Njet_all_fy1071,Graph_from_Zee_jet_Njet_all_fex1071,Graph_from_Zee_jet_Njet_all_fey1071);
   gre->SetName("Graph_from_Zee_jet_Njet_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_jet_Njet_all1071 = new TH1F("Graph_Graph_from_Zee_jet_Njet_all1071","",100,0,16.5);
   Graph_Graph_from_Zee_jet_Njet_all1071->SetMinimum(0);
   Graph_Graph_from_Zee_jet_Njet_all1071->SetMaximum(2.846163e+07);
   Graph_Graph_from_Zee_jet_Njet_all1071->SetDirectory(0);
   Graph_Graph_from_Zee_jet_Njet_all1071->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_jet_Njet_all1071->SetLineColor(ci);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_jet_Njet_all1071->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_jet_Njet_all1071);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_jet_Njet_all","Data (Z(ee) + jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_jet_Njet_all_stack_4","Z+jets","F");

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
   entry=leg->AddEntry("Zee_jet_Njet_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_jet_Njet_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_jet_Njet_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_jet_Njet_all","MC unc. (stat.)","fl");

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
   Njet_Z_jet_Zee_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__72 = new TH1D("data_mc_ratio__72","",15,0,15);
   data_mc_ratio__72->SetBinContent(1,1.014759);
   data_mc_ratio__72->SetBinContent(2,0.9539026);
   data_mc_ratio__72->SetBinContent(3,0.9576143);
   data_mc_ratio__72->SetBinContent(4,1.087667);
   data_mc_ratio__72->SetBinContent(5,1.336325);
   data_mc_ratio__72->SetBinContent(6,1.584364);
   data_mc_ratio__72->SetBinContent(7,1.862957);
   data_mc_ratio__72->SetBinContent(8,2.482327);
   data_mc_ratio__72->SetBinContent(9,3.007763);
   data_mc_ratio__72->SetBinContent(10,2.904849);
   data_mc_ratio__72->SetBinContent(11,1.57288);
   data_mc_ratio__72->SetBinContent(12,4.423822);
   data_mc_ratio__72->SetBinContent(13,1.051372);
   data_mc_ratio__72->SetBinError(1,0.0001980758);
   data_mc_ratio__72->SetBinError(2,0.0004398766);
   data_mc_ratio__72->SetBinError(3,0.0009042777);
   data_mc_ratio__72->SetBinError(4,0.002123564);
   data_mc_ratio__72->SetBinError(5,0.005339493);
   data_mc_ratio__72->SetBinError(6,0.01296267);
   data_mc_ratio__72->SetBinError(7,0.0315529);
   data_mc_ratio__72->SetBinError(8,0.08396595);
   data_mc_ratio__72->SetBinError(9,0.2105855);
   data_mc_ratio__72->SetBinError(10,0.4192789);
   data_mc_ratio__72->SetBinError(11,0.7034133);
   data_mc_ratio__72->SetBinError(12,2.554095);
   data_mc_ratio__72->SetBinError(13,1.051372);
   data_mc_ratio__72->SetMinimum(0.4);
   data_mc_ratio__72->SetMaximum(1.6);
   data_mc_ratio__72->SetEntries(35.59207);
   data_mc_ratio__72->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__72->SetLineColor(ci);
   data_mc_ratio__72->SetLineWidth(2);
   data_mc_ratio__72->SetMarkerStyle(20);
   data_mc_ratio__72->SetMarkerSize(1.2);
   data_mc_ratio__72->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__72->GetXaxis()->SetRange(1,10);
   data_mc_ratio__72->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__72->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__72->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__72->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__72->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__72->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__72->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__72->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__72->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__72->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__72->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__72->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__72->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__72->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__72->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__72->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__72->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1072[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1072[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1072[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1072[15] = {
   0.0003850175,
   0.0007079321,
   0.001468741,
   0.003075228,
   0.00667681,
   0.01449441,
   0.03075442,
   0.06979517,
   0.1624029,
   0.2857355,
   0.6649129,
   0.5053054,
   1,
   1,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1072,Graph_from_mc_statistical_error_fy1072,Graph_from_mc_statistical_error_fex1072,Graph_from_mc_statistical_error_fey1072);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1072 = new TH1F("Graph_Graph_from_mc_statistical_error1072","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1072->SetMinimum(0);
   Graph_Graph_from_mc_statistical_error1072->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1072->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1072->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1072->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1072->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1072->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1072->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1072->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1072->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1072->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1072->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1072->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1072->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1072);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_jet_Zee_All_amcnlo->cd();
   Njet_Z_jet_Zee_All_amcnlo->Modified();
   Njet_Z_jet_Zee_All_amcnlo->cd();
   Njet_Z_jet_Zee_All_amcnlo->SetSelected(Njet_Z_jet_Zee_All_amcnlo);
}

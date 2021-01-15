void Njet_Z_jet_Zmm_All_amcnlo()
{
//=========Macro generated from canvas: Njet_Z_jet_Zmm_All_amcnlo/Njet_Z_jet_Zmm_All_amcnlo
//=========  (Thu Jan 14 10:42:28 2021) by ROOT version 6.14/09
   TCanvas *Njet_Z_jet_Zmm_All_amcnlo = new TCanvas("Njet_Z_jet_Zmm_All_amcnlo", "Njet_Z_jet_Zmm_All_amcnlo",0,0,600,600);
   Njet_Z_jet_Zmm_All_amcnlo->SetHighLightColor(2);
   Njet_Z_jet_Zmm_All_amcnlo->Range(0,0,1,1);
   Njet_Z_jet_Zmm_All_amcnlo->SetFillColor(0);
   Njet_Z_jet_Zmm_All_amcnlo->SetFillStyle(4000);
   Njet_Z_jet_Zmm_All_amcnlo->SetBorderMode(0);
   Njet_Z_jet_Zmm_All_amcnlo->SetBorderSize(2);
   Njet_Z_jet_Zmm_All_amcnlo->SetFrameFillStyle(1000);
   Njet_Z_jet_Zmm_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-1.532254,-130673.8,10.52419,1.305431e+08);
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
   st->SetMaximum(1.118817e+08);
   
   TH1F *st_stack_76 = new TH1F("st_stack_76","",15,0,15);
   st_stack_76->SetMinimum(0.01);
   st_stack_76->SetMaximum(1.174757e+08);
   st_stack_76->SetDirectory(0);
   st_stack_76->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_76->SetLineColor(ci);
   st_stack_76->GetXaxis()->SetRange(1,10);
   st_stack_76->GetXaxis()->SetLabelFont(42);
   st_stack_76->GetXaxis()->SetLabelSize(0.035);
   st_stack_76->GetXaxis()->SetTitleSize(0.035);
   st_stack_76->GetXaxis()->SetTitleFont(42);
   st_stack_76->GetYaxis()->SetTitle("Events/1.0");
   st_stack_76->GetYaxis()->SetLabelFont(42);
   st_stack_76->GetYaxis()->SetLabelSize(0.05);
   st_stack_76->GetYaxis()->SetTitleSize(0.057);
   st_stack_76->GetYaxis()->SetTitleOffset(1.2);
   st_stack_76->GetYaxis()->SetTitleFont(42);
   st_stack_76->GetZaxis()->SetLabelFont(42);
   st_stack_76->GetZaxis()->SetLabelSize(0.035);
   st_stack_76->GetZaxis()->SetTitleSize(0.035);
   st_stack_76->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_76);
   
   
   TH1D *Zmm_jet_Njet_all_stack_1 = new TH1D("Zmm_jet_Njet_all_stack_1","",15,0,15);
   Zmm_jet_Njet_all_stack_1->SetBinContent(1,2755.172);
   Zmm_jet_Njet_all_stack_1->SetBinContent(2,8323.334);
   Zmm_jet_Njet_all_stack_1->SetBinContent(3,4251.906);
   Zmm_jet_Njet_all_stack_1->SetBinContent(4,1453.313);
   Zmm_jet_Njet_all_stack_1->SetBinContent(5,401.1165);
   Zmm_jet_Njet_all_stack_1->SetBinContent(6,96.19142);
   Zmm_jet_Njet_all_stack_1->SetBinContent(7,24.78363);
   Zmm_jet_Njet_all_stack_1->SetBinContent(8,4.009134);
   Zmm_jet_Njet_all_stack_1->SetBinContent(9,1.907601);
   Zmm_jet_Njet_all_stack_1->SetBinError(1,27.33455);
   Zmm_jet_Njet_all_stack_1->SetBinError(2,46.01218);
   Zmm_jet_Njet_all_stack_1->SetBinError(3,32.95721);
   Zmm_jet_Njet_all_stack_1->SetBinError(4,19.15897);
   Zmm_jet_Njet_all_stack_1->SetBinError(5,10.03447);
   Zmm_jet_Njet_all_stack_1->SetBinError(6,4.893984);
   Zmm_jet_Njet_all_stack_1->SetBinError(7,2.497839);
   Zmm_jet_Njet_all_stack_1->SetBinError(8,0.9568877);
   Zmm_jet_Njet_all_stack_1->SetBinError(9,0.6390306);
   Zmm_jet_Njet_all_stack_1->SetEntries(92796);

   ci = TColor::GetColor("#cccc00");
   Zmm_jet_Njet_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_all_stack_1->SetLineColor(ci);
   Zmm_jet_Njet_all_stack_1->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_all_stack_1,"");
   
   TH1D *Zmm_jet_Njet_all_stack_2 = new TH1D("Zmm_jet_Njet_all_stack_2","",15,0,15);
   Zmm_jet_Njet_all_stack_2->SetBinContent(1,59765.3);
   Zmm_jet_Njet_all_stack_2->SetBinContent(2,48078.31);
   Zmm_jet_Njet_all_stack_2->SetBinContent(3,27291.11);
   Zmm_jet_Njet_all_stack_2->SetBinContent(4,7359.919);
   Zmm_jet_Njet_all_stack_2->SetBinContent(5,1627.858);
   Zmm_jet_Njet_all_stack_2->SetBinContent(6,319.7034);
   Zmm_jet_Njet_all_stack_2->SetBinContent(7,64.11266);
   Zmm_jet_Njet_all_stack_2->SetBinContent(8,8.696034);
   Zmm_jet_Njet_all_stack_2->SetBinContent(9,0.7790521);
   Zmm_jet_Njet_all_stack_2->SetBinContent(10,0.6820911);
   Zmm_jet_Njet_all_stack_2->SetBinError(1,186.2278);
   Zmm_jet_Njet_all_stack_2->SetBinError(2,159.2813);
   Zmm_jet_Njet_all_stack_2->SetBinError(3,117.9536);
   Zmm_jet_Njet_all_stack_2->SetBinError(4,61.17252);
   Zmm_jet_Njet_all_stack_2->SetBinError(5,28.66769);
   Zmm_jet_Njet_all_stack_2->SetBinError(6,12.30432);
   Zmm_jet_Njet_all_stack_2->SetBinError(7,5.791232);
   Zmm_jet_Njet_all_stack_2->SetBinError(8,1.963666);
   Zmm_jet_Njet_all_stack_2->SetBinError(9,0.4976743);
   Zmm_jet_Njet_all_stack_2->SetBinError(10,0.502092);
   Zmm_jet_Njet_all_stack_2->SetEntries(351208);

   ci = TColor::GetColor("#0000cc");
   Zmm_jet_Njet_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_all_stack_2->SetLineColor(ci);
   Zmm_jet_Njet_all_stack_2->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_all_stack_2,"");
   
   TH1D *Zmm_jet_Njet_all_stack_3 = new TH1D("Zmm_jet_Njet_all_stack_3","",15,0,15);
   Zmm_jet_Njet_all_stack_3->SetBinContent(1,6423.426);
   Zmm_jet_Njet_all_stack_3->SetBinContent(2,38586.77);
   Zmm_jet_Njet_all_stack_3->SetBinContent(3,67490.57);
   Zmm_jet_Njet_all_stack_3->SetBinContent(4,34316.65);
   Zmm_jet_Njet_all_stack_3->SetBinContent(5,12564.37);
   Zmm_jet_Njet_all_stack_3->SetBinContent(6,3764.773);
   Zmm_jet_Njet_all_stack_3->SetBinContent(7,1004.165);
   Zmm_jet_Njet_all_stack_3->SetBinContent(8,265.1386);
   Zmm_jet_Njet_all_stack_3->SetBinContent(9,48.63769);
   Zmm_jet_Njet_all_stack_3->SetBinContent(10,13.45212);
   Zmm_jet_Njet_all_stack_3->SetBinContent(11,3.108322);
   Zmm_jet_Njet_all_stack_3->SetBinContent(12,0.8920297);
   Zmm_jet_Njet_all_stack_3->SetBinContent(13,0.03037312);
   Zmm_jet_Njet_all_stack_3->SetBinError(1,37.54571);
   Zmm_jet_Njet_all_stack_3->SetBinError(2,92.69747);
   Zmm_jet_Njet_all_stack_3->SetBinError(3,122.4921);
   Zmm_jet_Njet_all_stack_3->SetBinError(4,86.89387);
   Zmm_jet_Njet_all_stack_3->SetBinError(5,52.14813);
   Zmm_jet_Njet_all_stack_3->SetBinError(6,28.28248);
   Zmm_jet_Njet_all_stack_3->SetBinError(7,14.49293);
   Zmm_jet_Njet_all_stack_3->SetBinError(8,7.690235);
   Zmm_jet_Njet_all_stack_3->SetBinError(9,3.015497);
   Zmm_jet_Njet_all_stack_3->SetBinError(10,1.710293);
   Zmm_jet_Njet_all_stack_3->SetBinError(11,0.7217154);
   Zmm_jet_Njet_all_stack_3->SetBinError(12,0.4833847);
   Zmm_jet_Njet_all_stack_3->SetBinError(13,0.03037312);
   Zmm_jet_Njet_all_stack_3->SetEntries(1263092);

   ci = TColor::GetColor("#cc0000");
   Zmm_jet_Njet_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_all_stack_3->SetLineColor(ci);
   Zmm_jet_Njet_all_stack_3->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_all_stack_3,"");
   
   TH1D *Zmm_jet_Njet_all_stack_4 = new TH1D("Zmm_jet_Njet_all_stack_4","",15,0,15);
   Zmm_jet_Njet_all_stack_4->SetBinContent(1,6.080452e+07);
   Zmm_jet_Njet_all_stack_4->SetBinContent(2,1.091365e+07);
   Zmm_jet_Njet_all_stack_4->SetBinContent(3,2490890);
   Zmm_jet_Njet_all_stack_4->SetBinContent(4,484865.7);
   Zmm_jet_Njet_all_stack_4->SetBinContent(5,88156.58);
   Zmm_jet_Njet_all_stack_4->SetBinContent(6,16243.24);
   Zmm_jet_Njet_all_stack_4->SetBinContent(7,3265.839);
   Zmm_jet_Njet_all_stack_4->SetBinContent(8,525.2658);
   Zmm_jet_Njet_all_stack_4->SetBinContent(9,115.33);
   Zmm_jet_Njet_all_stack_4->SetBinContent(10,11.26528);
   Zmm_jet_Njet_all_stack_4->SetBinContent(11,3.747294);
   Zmm_jet_Njet_all_stack_4->SetBinContent(12,-0.1589776);
   Zmm_jet_Njet_all_stack_4->SetBinContent(13,0.5239947);
   Zmm_jet_Njet_all_stack_4->SetBinError(1,16009.24);
   Zmm_jet_Njet_all_stack_4->SetBinError(2,5465.75);
   Zmm_jet_Njet_all_stack_4->SetBinError(3,2676.275);
   Zmm_jet_Njet_all_stack_4->SetBinError(4,1151.542);
   Zmm_jet_Njet_all_stack_4->SetBinError(5,482.2088);
   Zmm_jet_Njet_all_stack_4->SetBinError(6,206.4971);
   Zmm_jet_Njet_all_stack_4->SetBinError(7,89.31259);
   Zmm_jet_Njet_all_stack_4->SetBinError(8,37.30213);
   Zmm_jet_Njet_all_stack_4->SetBinError(9,16.56773);
   Zmm_jet_Njet_all_stack_4->SetBinError(10,6.928817);
   Zmm_jet_Njet_all_stack_4->SetBinError(11,1.741901);
   Zmm_jet_Njet_all_stack_4->SetBinError(12,0.7381152);
   Zmm_jet_Njet_all_stack_4->SetBinError(13,0.5239947);
   Zmm_jet_Njet_all_stack_4->SetEntries(6.991158e+07);

   ci = TColor::GetColor("#00cc00");
   Zmm_jet_Njet_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_all_stack_4->SetLineColor(ci);
   Zmm_jet_Njet_all_stack_4->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_jet_Njet_all_stack_4,"");
   st->Draw("hist");
   
   TH1D *Zmm_jet_Njet_all__151 = new TH1D("Zmm_jet_Njet_all__151","",15,0,15);
   Zmm_jet_Njet_all__151->SetBinContent(1,6.153491e+07);
   Zmm_jet_Njet_all__151->SetBinContent(2,1.062511e+07);
   Zmm_jet_Njet_all__151->SetBinContent(3,2489540);
   Zmm_jet_Njet_all__151->SetBinContent(4,577220);
   Zmm_jet_Njet_all__151->SetBinContent(5,136040);
   Zmm_jet_Njet_all__151->SetBinContent(6,31964);
   Zmm_jet_Njet_all__151->SetBinContent(7,7586);
   Zmm_jet_Njet_all__151->SetBinContent(8,1687);
   Zmm_jet_Njet_all__151->SetBinContent(9,408);
   Zmm_jet_Njet_all__151->SetBinContent(10,99);
   Zmm_jet_Njet_all__151->SetBinContent(11,21);
   Zmm_jet_Njet_all__151->SetBinContent(12,4);
   Zmm_jet_Njet_all__151->SetBinContent(13,1);
   Zmm_jet_Njet_all__151->SetBinContent(16,1);
   Zmm_jet_Njet_all__151->SetBinError(1,7844.419);
   Zmm_jet_Njet_all__151->SetBinError(2,3259.618);
   Zmm_jet_Njet_all__151->SetBinError(3,1577.828);
   Zmm_jet_Njet_all__151->SetBinError(4,759.75);
   Zmm_jet_Njet_all__151->SetBinError(5,368.836);
   Zmm_jet_Njet_all__151->SetBinError(6,178.7848);
   Zmm_jet_Njet_all__151->SetBinError(7,87.09765);
   Zmm_jet_Njet_all__151->SetBinError(8,41.07311);
   Zmm_jet_Njet_all__151->SetBinError(9,20.19901);
   Zmm_jet_Njet_all__151->SetBinError(10,9.949874);
   Zmm_jet_Njet_all__151->SetBinError(11,4.582576);
   Zmm_jet_Njet_all__151->SetBinError(12,2);
   Zmm_jet_Njet_all__151->SetBinError(13,1);
   Zmm_jet_Njet_all__151->SetBinError(16,1);
   Zmm_jet_Njet_all__151->SetEntries(7.540459e+07);

   ci = TColor::GetColor("#000099");
   Zmm_jet_Njet_all__151->SetLineColor(ci);
   Zmm_jet_Njet_all__151->SetLineWidth(2);
   Zmm_jet_Njet_all__151->SetMarkerStyle(20);
   Zmm_jet_Njet_all__151->SetMarkerSize(1.2);
   Zmm_jet_Njet_all__151->GetXaxis()->SetRange(1,15);
   Zmm_jet_Njet_all__151->GetXaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all__151->GetXaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all__151->GetXaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all__151->GetXaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all__151->GetYaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all__151->GetYaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all__151->GetYaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all__151->GetYaxis()->SetTitleOffset(0);
   Zmm_jet_Njet_all__151->GetYaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all__151->GetZaxis()->SetLabelFont(42);
   Zmm_jet_Njet_all__151->GetZaxis()->SetLabelSize(0.035);
   Zmm_jet_Njet_all__151->GetZaxis()->SetTitleSize(0.035);
   Zmm_jet_Njet_all__151->GetZaxis()->SetTitleFont(42);
   Zmm_jet_Njet_all__151->Draw("same E");
   
   Double_t Graph_from_Zmm_jet_Njet_all_fx1151[15] = {
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
   Double_t Graph_from_Zmm_jet_Njet_all_fy1151[15] = {
   6.087347e+07,
   1.100863e+07,
   2589924,
   527995.6,
   102749.9,
   20423.91,
   4358.9,
   803.1095,
   166.6543,
   25.39949,
   6.855616,
   0.7330521,
   0.5543678,
   0,
   0};
   Double_t Graph_from_Zmm_jet_Njet_all_fex1151[15] = {
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
   Double_t Graph_from_Zmm_jet_Njet_all_fey1151[15] = {
   16010.39,
   5469.049,
   2681.874,
   1156.593,
   485.9704,
   208.8452,
   90.7004,
   38.14918,
   16.85938,
   7.154418,
   1.885495,
   0.8823122,
   0.5248742,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(15,Graph_from_Zmm_jet_Njet_all_fx1151,Graph_from_Zmm_jet_Njet_all_fy1151,Graph_from_Zmm_jet_Njet_all_fex1151,Graph_from_Zmm_jet_Njet_all_fey1151);
   gre->SetName("Graph_from_Zmm_jet_Njet_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_jet_Njet_all1151 = new TH1F("Graph_Graph_from_Zmm_jet_Njet_all1151","",100,0,16.5);
   Graph_Graph_from_Zmm_jet_Njet_all1151->SetMinimum(-6088948);
   Graph_Graph_from_Zmm_jet_Njet_all1151->SetMaximum(6.697843e+07);
   Graph_Graph_from_Zmm_jet_Njet_all1151->SetDirectory(0);
   Graph_Graph_from_Zmm_jet_Njet_all1151->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_jet_Njet_all1151->SetLineColor(ci);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_jet_Njet_all1151->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_jet_Njet_all1151);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_jet_Njet_all","Data (Z(#mu#mu) + jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_jet_Njet_all_stack_4","Z+jets","F");

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
   entry=leg->AddEntry("Zmm_jet_Njet_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_jet_Njet_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_jet_Njet_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_jet_Njet_all","MC unc. (stat.)","fl");

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
   Njet_Z_jet_Zmm_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__152 = new TH1D("data_mc_ratio__152","",15,0,15);
   data_mc_ratio__152->SetBinContent(1,1.010866);
   data_mc_ratio__152->SetBinContent(2,0.9651615);
   data_mc_ratio__152->SetBinContent(3,0.9612406);
   data_mc_ratio__152->SetBinContent(4,1.093229);
   data_mc_ratio__152->SetBinContent(5,1.323991);
   data_mc_ratio__152->SetBinContent(6,1.565029);
   data_mc_ratio__152->SetBinContent(7,1.740347);
   data_mc_ratio__152->SetBinContent(8,2.100585);
   data_mc_ratio__152->SetBinContent(9,2.448181);
   data_mc_ratio__152->SetBinContent(10,3.897717);
   data_mc_ratio__152->SetBinContent(11,3.063182);
   data_mc_ratio__152->SetBinContent(12,5.456638);
   data_mc_ratio__152->SetBinContent(13,1.803857);
   data_mc_ratio__152->SetBinError(1,0.0001288643);
   data_mc_ratio__152->SetBinError(2,0.0002960965);
   data_mc_ratio__152->SetBinError(3,0.0006092177);
   data_mc_ratio__152->SetBinError(4,0.001438932);
   data_mc_ratio__152->SetBinError(5,0.003589647);
   data_mc_ratio__152->SetBinError(6,0.008753702);
   data_mc_ratio__152->SetBinError(7,0.01998156);
   data_mc_ratio__152->SetBinError(8,0.05114259);
   data_mc_ratio__152->SetBinError(9,0.121203);
   data_mc_ratio__152->SetBinError(10,0.3917353);
   data_mc_ratio__152->SetBinError(11,0.6684411);
   data_mc_ratio__152->SetBinError(12,2.728319);
   data_mc_ratio__152->SetBinError(13,1.803857);
   data_mc_ratio__152->SetMinimum(0.4);
   data_mc_ratio__152->SetMaximum(1.6);
   data_mc_ratio__152->SetEntries(12.67635);
   data_mc_ratio__152->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__152->SetLineColor(ci);
   data_mc_ratio__152->SetLineWidth(2);
   data_mc_ratio__152->SetMarkerStyle(20);
   data_mc_ratio__152->SetMarkerSize(1.2);
   data_mc_ratio__152->GetXaxis()->SetTitle("N_{jet}");
   data_mc_ratio__152->GetXaxis()->SetRange(1,10);
   data_mc_ratio__152->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__152->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__152->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__152->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__152->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__152->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__152->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__152->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__152->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__152->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__152->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__152->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__152->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__152->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__152->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__152->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__152->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1152[15] = {
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
   Double_t Graph_from_mc_statistical_error_fy1152[15] = {
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
   Double_t Graph_from_mc_statistical_error_fex1152[15] = {
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
   Double_t Graph_from_mc_statistical_error_fey1152[15] = {
   0.0002630109,
   0.0004967964,
   0.001035503,
   0.002190536,
   0.004729642,
   0.01022553,
   0.02080809,
   0.04750184,
   0.1011638,
   0.2816757,
   0.2750293,
   1.203615,
   0.9467978,
   0,
   0};
   gre = new TGraphErrors(15,Graph_from_mc_statistical_error_fx1152,Graph_from_mc_statistical_error_fy1152,Graph_from_mc_statistical_error_fex1152,Graph_from_mc_statistical_error_fey1152);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1152 = new TH1F("Graph_Graph_from_mc_statistical_error1152","",100,0,16.5);
   Graph_Graph_from_mc_statistical_error1152->SetMinimum(-0.4443375);
   Graph_Graph_from_mc_statistical_error1152->SetMaximum(2.444337);
   Graph_Graph_from_mc_statistical_error1152->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1152->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1152->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1152->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1152->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1152->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1152->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1152->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1152->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1152->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1152->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1152->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1152->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1152->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1152->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1152->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1152);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,10,1);
   line->Draw();
   bottomPad->Modified();
   Njet_Z_jet_Zmm_All_amcnlo->cd();
   Njet_Z_jet_Zmm_All_amcnlo->Modified();
   Njet_Z_jet_Zmm_All_amcnlo->cd();
   Njet_Z_jet_Zmm_All_amcnlo->SetSelected(Njet_Z_jet_Zmm_All_amcnlo);
}

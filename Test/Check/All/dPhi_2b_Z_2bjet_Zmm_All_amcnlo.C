void dPhi_2b_Z_2bjet_Zmm_All_amcnlo()
{
//=========Macro generated from canvas: dPhi_2b_Z_2bjet_Zmm_All_amcnlo/dPhi_2b_Z_2bjet_Zmm_All_amcnlo
//=========  (Thu Jan 14 10:43:05 2021) by ROOT version 6.14/09
   TCanvas *dPhi_2b_Z_2bjet_Zmm_All_amcnlo = new TCanvas("dPhi_2b_Z_2bjet_Zmm_All_amcnlo", "dPhi_2b_Z_2bjet_Zmm_All_amcnlo",0,0,600,600);
   dPhi_2b_Z_2bjet_Zmm_All_amcnlo->SetHighLightColor(2);
   dPhi_2b_Z_2bjet_Zmm_All_amcnlo->Range(0,0,1,1);
   dPhi_2b_Z_2bjet_Zmm_All_amcnlo->SetFillColor(0);
   dPhi_2b_Z_2bjet_Zmm_All_amcnlo->SetFillStyle(4000);
   dPhi_2b_Z_2bjet_Zmm_All_amcnlo->SetBorderMode(0);
   dPhi_2b_Z_2bjet_Zmm_All_amcnlo->SetBorderSize(2);
   dPhi_2b_Z_2bjet_Zmm_All_amcnlo->SetFrameFillStyle(1000);
   dPhi_2b_Z_2bjet_Zmm_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4813718,-4.73955,3.306273,4744.81);
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
   st->SetMaximum(4066.529);
   Double_t xAxis64[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1F *st_stack_316 = new TH1F("st_stack_316","",31, xAxis64);
   st_stack_316->SetMinimum(0.01);
   st_stack_316->SetMaximum(4269.855);
   st_stack_316->SetDirectory(0);
   st_stack_316->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_316->SetLineColor(ci);
   st_stack_316->GetXaxis()->SetRange(1,31);
   st_stack_316->GetXaxis()->SetLabelFont(42);
   st_stack_316->GetXaxis()->SetLabelSize(0.035);
   st_stack_316->GetXaxis()->SetTitleSize(0.035);
   st_stack_316->GetXaxis()->SetTitleFont(42);
   st_stack_316->GetYaxis()->SetTitle("Events/0.10000000149");
   st_stack_316->GetYaxis()->SetLabelFont(42);
   st_stack_316->GetYaxis()->SetLabelSize(0.05);
   st_stack_316->GetYaxis()->SetTitleSize(0.057);
   st_stack_316->GetYaxis()->SetTitleOffset(1.2);
   st_stack_316->GetYaxis()->SetTitleFont(42);
   st_stack_316->GetZaxis()->SetLabelFont(42);
   st_stack_316->GetZaxis()->SetLabelSize(0.035);
   st_stack_316->GetZaxis()->SetTitleSize(0.035);
   st_stack_316->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_316);
   
   Double_t xAxis65[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_dPhi_2b_all_stack_1 = new TH1D("Zmm_2bjet_dPhi_2b_all_stack_1","",31, xAxis65);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(1,4.096468);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(2,4.760846);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(3,3.372144);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(4,3.569037);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(5,3.49714);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(6,6.577745);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(7,5.545349);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(8,4.094784);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(9,3.713886);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(10,6.254014);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(11,5.22228);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(12,3.629749);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(13,5.542382);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(14,4.978274);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(15,4.855428);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(16,4.729311);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(17,4.209602);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(18,7.457534);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(19,8.199774);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(20,6.016693);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(21,5.145847);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(22,8.393503);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(23,8.226099);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(24,7.138841);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(25,6.371075);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(26,7.885488);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(27,9.126692);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(28,11.77918);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(29,9.409783);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(30,9.733958);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinContent(31,15.96534);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(1,0.9682016);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(2,1.077542);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(3,0.9038598);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(4,0.8675124);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(5,0.9316533);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(6,1.304509);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(7,1.142118);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(8,0.9712884);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(9,0.9619928);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(10,1.272103);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(11,1.091023);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(12,0.9180276);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(13,1.15342);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(14,1.14165);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(15,1.113384);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(16,1.046453);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(17,0.9911001);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(18,1.329733);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(19,1.393416);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(20,1.282733);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(21,1.108283);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(22,1.648113);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(23,1.465532);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(24,1.285321);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(25,1.18241);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(26,1.377938);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(27,1.507295);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(28,1.715961);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(29,1.514038);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(30,1.750585);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetBinError(31,2.038118);
   Zmm_2bjet_dPhi_2b_all_stack_1->SetEntries(971);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_dPhi_2b_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_2b_all_stack_1->SetLineColor(ci);
   Zmm_2bjet_dPhi_2b_all_stack_1->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_dPhi_2b_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_2b_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_2b_all_stack_1,"");
   Double_t xAxis66[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_dPhi_2b_all_stack_2 = new TH1D("Zmm_2bjet_dPhi_2b_all_stack_2","",31, xAxis66);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(1,5.535116);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(2,4.469488);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(3,4.072293);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(4,6.533507);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(5,12.63513);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(6,6.142195);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(7,8.676815);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(8,12.65232);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(9,11.98024);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(10,11.46983);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(11,12.36087);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(12,17.36256);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(13,14.99272);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(14,15.21135);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(15,18.45105);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(16,12.53927);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(17,12.94375);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(18,14.29246);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(19,15.42417);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(20,16.5762);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(21,19.07086);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(22,20.22071);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(23,21.63494);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(24,20.86271);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(25,18.317);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(26,17.32478);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(27,24.15498);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(28,17.7067);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(29,18.75292);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(30,17.64535);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinContent(31,25.14028);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(1,1.539248);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(2,1.344683);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(3,1.263094);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(4,1.647478);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(5,2.347028);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(6,1.644215);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(7,1.93734);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(8,2.23664);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(9,2.204575);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(10,2.255923);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(11,2.234176);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(12,2.694142);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(13,2.540638);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(14,2.469036);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(15,2.841077);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(16,2.246735);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(17,2.315278);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(18,2.480553);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(19,2.662214);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(20,2.660862);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(21,2.881497);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(22,3.004293);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(23,3.05286);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(24,3.023446);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(25,2.676431);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(26,2.712132);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(27,4.286319);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(28,2.661625);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(29,2.812172);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(30,2.608252);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetBinError(31,3.239388);
   Zmm_2bjet_dPhi_2b_all_stack_2->SetEntries(1245);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dPhi_2b_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_2b_all_stack_2->SetLineColor(ci);
   Zmm_2bjet_dPhi_2b_all_stack_2->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_dPhi_2b_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_2b_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_2b_all_stack_2,"");
   Double_t xAxis67[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_dPhi_2b_all_stack_3 = new TH1D("Zmm_2bjet_dPhi_2b_all_stack_3","",31, xAxis67);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(1,100.2794);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(2,100.4969);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(3,101.1893);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(4,113.4927);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(5,127.2472);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(6,136.7139);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(7,157.686);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(8,154.1128);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(9,149.3953);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(10,168.1966);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(11,165.8481);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(12,181.8302);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(13,184.8675);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(14,193.3861);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(15,207.4021);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(16,215.9796);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(17,234.8353);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(18,248.5943);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(19,261.2979);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(20,285.7281);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(21,303.0521);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(22,306.4941);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(23,343.1235);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(24,369.9153);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(25,374.5275);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(26,394.4416);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(27,405.509);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(28,440.2789);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(29,453.9057);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(30,461.4239);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinContent(31,689.3437);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(1,4.515729);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(2,4.55379);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(3,4.423169);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(4,4.836921);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(5,5.039305);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(6,5.184151);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(7,5.728519);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(8,5.550344);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(9,5.468622);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(10,5.935131);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(11,5.806445);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(12,6.218316);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(13,6.093335);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(14,6.219112);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(15,6.371196);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(16,6.491837);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(17,6.972503);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(18,7.05573);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(19,7.298357);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(20,7.572614);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(21,7.861607);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(22,7.818775);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(23,8.361568);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(24,8.570812);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(25,8.499489);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(26,8.944656);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(27,8.747604);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(28,9.299107);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(29,9.62472);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(30,9.637686);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetBinError(31,11.8722);
   Zmm_2bjet_dPhi_2b_all_stack_3->SetEntries(64896);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dPhi_2b_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_2b_all_stack_3->SetLineColor(ci);
   Zmm_2bjet_dPhi_2b_all_stack_3->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_dPhi_2b_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_2b_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_2b_all_stack_3,"");
   Double_t xAxis68[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_XX_dPhi_2b_all_stack_4 = new TH1D("Zmm_2bjet_XX_dPhi_2b_all_stack_4","",31, xAxis68);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(1,4.583323);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(2,9.107087);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(3,0.006289173);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(4,9.984953);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(5,1.553267);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(6,30.40976);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(7,8.698801);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(8,2.561758);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(9,3.004768);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(10,16.01771);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(11,0.02652862);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(12,0.8935297);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(13,1.597991);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(14,5.501292);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(15,11.36925);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(16,2.986899);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(17,0.5626431);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(18,-4.332818);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(19,10.82574);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(20,10.73672);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(21,2.403173);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(22,28.81869);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(23,10.91986);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(24,1.821091);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(25,22.1412);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(26,3.085662);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(27,41.69922);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(28,39.74204);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(29,19.89363);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(30,34.04867);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinContent(31,48.52449);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(1,4.212705);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(2,4.329433);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(3,4.556238);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(4,5.275693);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(5,3.411418);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(6,18.0641);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(7,4.091142);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(8,4.311127);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(9,3.361459);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(10,12.66528);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(11,1.503432);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(12,2.436528);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(13,1.757126);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(14,2.778283);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(15,10.58938);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(16,3.068952);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(17,1.530829);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(18,3.507948);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(19,10.11229);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(20,6.648898);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(21,6.042055);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(22,13.62582);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(23,9.922063);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(24,3.43069);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(25,13.82584);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(26,4.588527);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(27,19.21168);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(28,16.28895);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(29,7.442083);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(30,21.05742);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetBinError(31,18.09133);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetEntries(413);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_2b_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_dPhi_2b_all_stack_4,"");
   Double_t xAxis69[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_bX_dPhi_2b_all_stack_5 = new TH1D("Zmm_2bjet_bX_dPhi_2b_all_stack_5","",31, xAxis69);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(1,-1.521645);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(2,4.942683);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(3,16.02718);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(4,5.076894);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(5,8.923931);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(6,15.48835);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(7,6.644866);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(8,21.26487);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(9,-1.821439);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(10,7.550588);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(11,7.946415);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(12,8.565736);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(13,9.482422);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(14,3.988347);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(15,7.361702);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(16,12.57014);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(17,16.17121);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(18,6.189335);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(19,8.201028);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(20,14.31626);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(21,6.662195);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(22,5.432142);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(23,13.67703);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(24,10.07707);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(25,17.3927);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(26,8.302294);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(27,19.85905);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(28,12.3815);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(29,15.61125);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(30,26.24002);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinContent(31,26.64108);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(1,3.257459);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(2,4.049974);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(3,6.615243);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(4,4.859957);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(5,4.831204);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(6,4.859046);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(7,5.012219);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(8,5.555324);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(9,3.200969);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(10,4.454029);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(11,3.755824);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(12,5.401605);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(13,5.053686);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(14,3.6164);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(15,5.089877);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(16,4.694454);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(17,5.616144);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(18,5.728254);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(19,4.83495);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(20,4.629657);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(21,4.378984);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(22,5.530951);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(23,7.14477);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(24,6.752093);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(25,7.570706);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(26,7.158879);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(27,6.854722);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(28,7.163518);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(29,9.44032);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(30,8.648407);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetBinError(31,9.196457);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetEntries(1366);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_2b_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_dPhi_2b_all_stack_5,"");
   Double_t xAxis70[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_bb_dPhi_2b_all_stack_6 = new TH1D("Zmm_2bjet_bb_dPhi_2b_all_stack_6","",31, xAxis70);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(1,307.0988);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(2,283.0408);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(3,333.0603);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(4,340.406);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(5,375.3123);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(6,450.1319);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(7,403.2656);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(8,385.7559);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(9,363.4263);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(10,443.1183);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(11,388.565);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(12,418.0364);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(13,431.3695);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(14,423.498);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(15,388.2759);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(16,463.791);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(17,433.3529);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(18,452.9366);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(19,454.5366);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(20,523.3996);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(21,588.1419);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(22,628.2121);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(23,680.2871);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(24,707.3309);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(25,785.1828);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(26,785.2912);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(27,808.4497);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(28,906.4248);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(29,995.4695);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(30,918.6182);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinContent(31,1430.976);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(1,28.18034);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(2,27.78551);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(3,30.23629);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(4,28.75544);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(5,31.38665);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(6,32.37748);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(7,31.9832);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(8,30.97084);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(9,31.76884);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(10,32.47715);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(11,33.71753);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(12,33.26201);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(13,33.47054);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(14,33.77015);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(15,34.30155);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(16,34.38561);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(17,35.54148);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(18,35.9796);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(19,37.16895);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(20,37.83911);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(21,39.43983);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(22,42.80366);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(23,43.32546);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(24,43.30527);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(25,44.45702);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(26,45.90619);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(27,47.6979);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(28,49.50798);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(29,51.71599);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(30,69.07149);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetBinError(31,61.45599);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetEntries(67424);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_2b_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_dPhi_2b_all_stack_6,"");
   st->Draw("hist");
   Double_t xAxis71[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_dPhi_2b_all__631 = new TH1D("Zmm_2bjet_dPhi_2b_all__631","",31, xAxis71);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(1,383);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(2,406);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(3,432);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(4,464);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(5,563);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(6,574);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(7,556);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(8,526);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(9,561);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(10,503);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(11,512);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(12,534);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(13,545);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(14,591);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(15,584);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(16,568);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(17,610);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(18,663);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(19,663);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(20,701);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(21,721);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(22,803);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(23,883);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(24,927);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(25,970);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(26,1058);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(27,1066);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(28,1174);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(29,1170);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(30,1279);
   Zmm_2bjet_dPhi_2b_all__631->SetBinContent(31,1817);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(1,19.57039);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(2,20.14944);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(3,20.78461);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(4,21.54066);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(5,23.72762);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(6,23.9583);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(7,23.57965);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(8,22.93469);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(9,23.68544);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(10,22.42766);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(11,22.62742);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(12,23.10844);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(13,23.34524);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(14,24.31049);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(15,24.16609);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(16,23.83275);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(17,24.69818);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(18,25.74879);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(19,25.74879);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(20,26.4764);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(21,26.85144);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(22,28.33725);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(23,29.71532);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(24,30.44667);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(25,31.14482);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(26,32.52691);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(27,32.64966);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(28,34.26368);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(29,34.20526);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(30,35.76311);
   Zmm_2bjet_dPhi_2b_all__631->SetBinError(31,42.62628);
   Zmm_2bjet_dPhi_2b_all__631->SetEntries(22807);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_2b_all__631->SetLineColor(ci);
   Zmm_2bjet_dPhi_2b_all__631->SetLineWidth(2);
   Zmm_2bjet_dPhi_2b_all__631->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_2b_all__631->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_2b_all__631->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_dPhi_2b_all__631->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_all__631->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_all__631->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_all__631->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_all__631->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_all__631->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_all__631->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_all__631->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_2b_all__631->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_all__631->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_all__631->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_all__631->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_all__631->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_all__631->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_2b_all_fx1631[31] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95,
   1.05,
   1.15,
   1.25,
   1.35,
   1.45,
   1.55,
   1.65,
   1.75,
   1.85,
   1.95,
   2.05,
   2.15,
   2.25,
   2.35,
   2.45,
   2.55,
   2.65,
   2.75,
   2.85,
   2.95,
   3.070796};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_2b_all_fy1631[31] = {
   420.0715,
   406.8177,
   457.7276,
   479.0631,
   529.169,
   645.4638,
   590.5175,
   580.4424,
   529.699,
   652.6071,
   579.9691,
   630.3181,
   647.8525,
   646.5634,
   637.7154,
   712.5963,
   702.0754,
   725.1374,
   758.4852,
   856.7736,
   924.4761,
   997.5713,
   1077.869,
   1117.146,
   1223.932,
   1216.331,
   1308.799,
   1428.313,
   1513.043,
   1467.71,
   2236.591};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_2b_all_fex1631[31] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05000001,
   0.04999998,
   0.05000001,
   0.04999998,
   0.05000001,
   0.05000001,
   0.05000001,
   0.04999995,
   0.05000001,
   0.05000001,
   0.05000001,
   0.05000001,
   0.04999995,
   0.05000001,
   0.05000001,
   0.04999995,
   0.05000007,
   0.04999995,
   0.05000007,
   0.04999995,
   0.04999995,
   0.05000007,
   0.04999995,
   0.05000007,
   0.04999995,
   0.07079637};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_2b_all_fey1631[31] = {
   29.08931,
   28.82511,
   31.63433,
   30.08638,
   32.43256,
   37.80878,
   33.2063,
   32.33253,
   32.65725,
   35.73438,
   34.54179,
   34.47091,
   34.55168,
   34.74618,
   36.9397,
   35.52623,
   36.7701,
   37.38121,
   39.61642,
   39.54124,
   41.01851,
   46.05739,
   45.91268,
   44.91057,
   48.01769,
   47.63343,
   52.80465,
   53.51811,
   54.05445,
   73.4291,
   65.91135};
   TGraphErrors *gre = new TGraphErrors(31,Graph_from_Zmm_2bjet_bb_dPhi_2b_all_fx1631,Graph_from_Zmm_2bjet_bb_dPhi_2b_all_fy1631,Graph_from_Zmm_2bjet_bb_dPhi_2b_all_fex1631,Graph_from_Zmm_2bjet_bb_dPhi_2b_all_fey1631);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dPhi_2b_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631->SetMinimum(185.5417);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631->SetMaximum(2494.953);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b_all1631);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dPhi_2b_all","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_dPhi_2b_all_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_dPhi_2b_all_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_dPhi_2b_all_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_2b_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_2b_all_stack_2","Diboson","F");

   ci = TColor::GetColor("#ff6600");
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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_2b_all_stack_1","Single top","F");

   ci = TColor::GetColor("#00cccc");
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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_dPhi_2b_all","MC unc. (stat.)","fl");

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
   dPhi_2b_Z_2bjet_Zmm_All_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.4813718,-0.2774193,3.306273,1.658065);
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
   Double_t xAxis72[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *data_mc_ratio__632 = new TH1D("data_mc_ratio__632","",31, xAxis72);
   data_mc_ratio__632->SetBinContent(1,0.9117496);
   data_mc_ratio__632->SetBinContent(2,0.9979899);
   data_mc_ratio__632->SetBinContent(3,0.9437928);
   data_mc_ratio__632->SetBinContent(4,0.9685572);
   data_mc_ratio__632->SetBinContent(5,1.063932);
   data_mc_ratio__632->SetBinContent(6,0.889283);
   data_mc_ratio__632->SetBinContent(7,0.9415471);
   data_mc_ratio__632->SetBinContent(8,0.9062053);
   data_mc_ratio__632->SetBinContent(9,1.059092);
   data_mc_ratio__632->SetBinContent(10,0.7707548);
   data_mc_ratio__632->SetBinContent(11,0.8828056);
   data_mc_ratio__632->SetBinContent(12,0.8471913);
   data_mc_ratio__632->SetBinContent(13,0.8412408);
   data_mc_ratio__632->SetBinContent(14,0.9140635);
   data_mc_ratio__632->SetBinContent(15,0.915769);
   data_mc_ratio__632->SetBinContent(16,0.7970853);
   data_mc_ratio__632->SetBinContent(17,0.8688525);
   data_mc_ratio__632->SetBinContent(18,0.9143095);
   data_mc_ratio__632->SetBinContent(19,0.8741106);
   data_mc_ratio__632->SetBinContent(20,0.8181858);
   data_mc_ratio__632->SetBinContent(21,0.7799012);
   data_mc_ratio__632->SetBinContent(22,0.804955);
   data_mc_ratio__632->SetBinContent(23,0.8192094);
   data_mc_ratio__632->SetBinContent(24,0.8297932);
   data_mc_ratio__632->SetBinContent(25,0.7925276);
   data_mc_ratio__632->SetBinContent(26,0.869829);
   data_mc_ratio__632->SetBinContent(27,0.8144874);
   data_mc_ratio__632->SetBinContent(28,0.8219486);
   data_mc_ratio__632->SetBinContent(29,0.7732762);
   data_mc_ratio__632->SetBinContent(30,0.8714255);
   data_mc_ratio__632->SetBinContent(31,0.8123972);
   data_mc_ratio__632->SetBinError(1,0.04658823);
   data_mc_ratio__632->SetBinError(2,0.04952941);
   data_mc_ratio__632->SetBinError(3,0.04540825);
   data_mc_ratio__632->SetBinError(4,0.04496414);
   data_mc_ratio__632->SetBinError(5,0.0448394);
   data_mc_ratio__632->SetBinError(6,0.03711796);
   data_mc_ratio__632->SetBinError(7,0.03993049);
   data_mc_ratio__632->SetBinError(8,0.03951243);
   data_mc_ratio__632->SetBinError(9,0.0447149);
   data_mc_ratio__632->SetBinError(10,0.03436626);
   data_mc_ratio__632->SetBinError(11,0.03901487);
   data_mc_ratio__632->SetBinError(12,0.03666155);
   data_mc_ratio__632->SetBinError(13,0.0360348);
   data_mc_ratio__632->SetBinError(14,0.03759955);
   data_mc_ratio__632->SetBinError(15,0.03789479);
   data_mc_ratio__632->SetBinError(16,0.03344496);
   data_mc_ratio__632->SetBinError(17,0.03517881);
   data_mc_ratio__632->SetBinError(18,0.03550884);
   data_mc_ratio__632->SetBinError(19,0.03394764);
   data_mc_ratio__632->SetBinError(20,0.03090245);
   data_mc_ratio__632->SetBinError(21,0.02904504);
   data_mc_ratio__632->SetBinError(22,0.02840624);
   data_mc_ratio__632->SetBinError(23,0.02756859);
   data_mc_ratio__632->SetBinError(24,0.02725398);
   data_mc_ratio__632->SetBinError(25,0.02544653);
   data_mc_ratio__632->SetBinError(26,0.02674182);
   data_mc_ratio__632->SetBinError(27,0.02494628);
   data_mc_ratio__632->SetBinError(28,0.02398892);
   data_mc_ratio__632->SetBinError(29,0.02260694);
   data_mc_ratio__632->SetBinError(30,0.0243666);
   data_mc_ratio__632->SetBinError(31,0.0190586);
   data_mc_ratio__632->SetMinimum(0.4);
   data_mc_ratio__632->SetMaximum(1.6);
   data_mc_ratio__632->SetEntries(6840.613);
   data_mc_ratio__632->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__632->SetLineColor(ci);
   data_mc_ratio__632->SetLineWidth(2);
   data_mc_ratio__632->SetMarkerStyle(20);
   data_mc_ratio__632->SetMarkerSize(1.2);
   data_mc_ratio__632->GetXaxis()->SetTitle("dPhi_{bb}");
   data_mc_ratio__632->GetXaxis()->SetRange(1,31);
   data_mc_ratio__632->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__632->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__632->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__632->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__632->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__632->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__632->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__632->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__632->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__632->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__632->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__632->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__632->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__632->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__632->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__632->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__632->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1632[31] = {
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95,
   1.05,
   1.15,
   1.25,
   1.35,
   1.45,
   1.55,
   1.65,
   1.75,
   1.85,
   1.95,
   2.05,
   2.15,
   2.25,
   2.35,
   2.45,
   2.55,
   2.65,
   2.75,
   2.85,
   2.95,
   3.070796};
   Double_t Graph_from_mc_statistical_error_fy1632[31] = {
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
   1,
   1,
   1};
   Double_t Graph_from_mc_statistical_error_fex1632[31] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05000001,
   0.04999998,
   0.05000001,
   0.04999998,
   0.05000001,
   0.05000001,
   0.05000001,
   0.04999995,
   0.05000001,
   0.05000001,
   0.05000001,
   0.05000001,
   0.04999995,
   0.05000001,
   0.05000001,
   0.04999995,
   0.05000007,
   0.04999995,
   0.05000007,
   0.04999995,
   0.04999995,
   0.05000007,
   0.04999995,
   0.05000007,
   0.04999995,
   0.07079637};
   Double_t Graph_from_mc_statistical_error_fey1632[31] = {
   0.06924849,
   0.07085511,
   0.06911169,
   0.06280253,
   0.06128961,
   0.05857614,
   0.05623255,
   0.05570326,
   0.06165246,
   0.05475635,
   0.05955798,
   0.05468812,
   0.05333263,
   0.05373979,
   0.05792505,
   0.04985464,
   0.05237343,
   0.05155053,
   0.05223097,
   0.04615133,
   0.04436947,
   0.04616952,
   0.0425958,
   0.04020117,
   0.03923232,
   0.03916157,
   0.04034589,
   0.03746945,
   0.03572566,
   0.0500297,
   0.02946956};
   gre = new TGraphErrors(31,Graph_from_mc_statistical_error_fx1632,Graph_from_mc_statistical_error_fy1632,Graph_from_mc_statistical_error_fex1632,Graph_from_mc_statistical_error_fey1632);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1632 = new TH1F("Graph_Graph_from_mc_statistical_error1632","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1632->SetMinimum(0.9149739);
   Graph_Graph_from_mc_statistical_error1632->SetMaximum(1.085026);
   Graph_Graph_from_mc_statistical_error1632->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1632->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1632->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1632->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1632->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1632->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1632->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1632->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1632->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1632->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1632->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1632->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1632->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1632->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1632->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1632->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1632);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.141593,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_2b_Z_2bjet_Zmm_All_amcnlo->cd();
   dPhi_2b_Z_2bjet_Zmm_All_amcnlo->Modified();
   dPhi_2b_Z_2bjet_Zmm_All_amcnlo->cd();
   dPhi_2b_Z_2bjet_Zmm_All_amcnlo->SetSelected(dPhi_2b_Z_2bjet_Zmm_All_amcnlo);
}

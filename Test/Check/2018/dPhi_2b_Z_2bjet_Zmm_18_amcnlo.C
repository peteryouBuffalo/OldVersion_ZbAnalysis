void dPhi_2b_Z_2bjet_Zmm_18_amcnlo()
{
//=========Macro generated from canvas: dPhi_2b_Z_2bjet_Zmm_18_amcnlo/dPhi_2b_Z_2bjet_Zmm_18_amcnlo
//=========  (Thu Jan 14 10:43:05 2021) by ROOT version 6.14/09
   TCanvas *dPhi_2b_Z_2bjet_Zmm_18_amcnlo = new TCanvas("dPhi_2b_Z_2bjet_Zmm_18_amcnlo", "dPhi_2b_Z_2bjet_Zmm_18_amcnlo",0,0,600,600);
   dPhi_2b_Z_2bjet_Zmm_18_amcnlo->SetHighLightColor(2);
   dPhi_2b_Z_2bjet_Zmm_18_amcnlo->Range(0,0,1,1);
   dPhi_2b_Z_2bjet_Zmm_18_amcnlo->SetFillColor(0);
   dPhi_2b_Z_2bjet_Zmm_18_amcnlo->SetFillStyle(4000);
   dPhi_2b_Z_2bjet_Zmm_18_amcnlo->SetBorderMode(0);
   dPhi_2b_Z_2bjet_Zmm_18_amcnlo->SetBorderSize(2);
   dPhi_2b_Z_2bjet_Zmm_18_amcnlo->SetFrameFillStyle(1000);
   dPhi_2b_Z_2bjet_Zmm_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4813718,-2.394287,3.306273,2401.893);
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
   st->SetMaximum(2058.537);
   Double_t xAxis55[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1F *st_stack_315 = new TH1F("st_stack_315","",31, xAxis55);
   st_stack_315->SetMinimum(0.01);
   st_stack_315->SetMaximum(2161.464);
   st_stack_315->SetDirectory(0);
   st_stack_315->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_315->SetLineColor(ci);
   st_stack_315->GetXaxis()->SetRange(1,31);
   st_stack_315->GetXaxis()->SetLabelFont(42);
   st_stack_315->GetXaxis()->SetLabelSize(0.035);
   st_stack_315->GetXaxis()->SetTitleSize(0.035);
   st_stack_315->GetXaxis()->SetTitleFont(42);
   st_stack_315->GetYaxis()->SetTitle("Events/0.10000000149");
   st_stack_315->GetYaxis()->SetLabelFont(42);
   st_stack_315->GetYaxis()->SetLabelSize(0.05);
   st_stack_315->GetYaxis()->SetTitleSize(0.057);
   st_stack_315->GetYaxis()->SetTitleOffset(1.2);
   st_stack_315->GetYaxis()->SetTitleFont(42);
   st_stack_315->GetZaxis()->SetLabelFont(42);
   st_stack_315->GetZaxis()->SetLabelSize(0.035);
   st_stack_315->GetZaxis()->SetTitleSize(0.035);
   st_stack_315->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_315);
   
   Double_t xAxis56[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_dPhi_2b_stack_1 = new TH1D("Zmm_2bjet_dPhi_2b_stack_1","",31, xAxis56);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(1,1.468384);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(2,2.966251);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(3,2.184179);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(4,0.7973552);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(5,1.801991);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(6,4.273821);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(7,2.020239);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(8,1.48468);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(9,2.524907);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(10,3.346846);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(11,1.998371);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(12,2.429472);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(13,2.598866);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(14,3.298154);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(15,2.596783);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(16,2.741705);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(17,1.560713);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(18,4.066993);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(19,3.529912);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(20,4.152103);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(21,1.904156);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(22,4.456498);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(23,4.076045);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(24,3.010147);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(25,1.841048);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(26,3.482215);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(27,5.715451);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(28,6.778905);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(29,5.060368);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(30,3.93504);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(31,7.959027);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(1,0.6759109);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(2,0.9120737);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(3,0.7741252);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(4,0.4588833);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(5,0.7570565);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(6,1.116496);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(7,0.780991);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(8,0.6683265);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(9,0.8539714);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(10,1.016166);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(11,0.7557228);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(12,0.7968814);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(13,0.8689975);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(14,0.9908523);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(15,0.900412);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(16,0.8552212);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(17,0.6842805);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(18,1.058928);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(19,1.019455);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(20,1.144958);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(21,0.7876615);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(22,1.409046);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(23,1.150313);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(24,0.9212568);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(25,0.7460362);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(26,1.008555);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(27,1.293794);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(28,1.411145);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(29,1.217568);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(30,1.030882);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(31,1.488261);
   Zmm_2bjet_dPhi_2b_stack_1->SetEntries(396);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_dPhi_2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_2b_stack_1->SetLineColor(ci);
   Zmm_2bjet_dPhi_2b_stack_1->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_dPhi_2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_2b_stack_1,"");
   Double_t xAxis57[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_dPhi_2b_stack_2 = new TH1D("Zmm_2bjet_dPhi_2b_stack_2","",31, xAxis57);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(1,3.170546);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(2,1.985632);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(3,2.001396);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(4,2.763682);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(5,7.27094);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(6,3.13662);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(7,2.566191);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(8,5.703696);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(9,3.931801);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(10,5.813181);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(11,3.938443);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(12,8.912338);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(13,7.035153);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(14,5.90081);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(15,9.46094);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(16,5.385567);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(17,7.132458);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(18,6.794557);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(19,7.969998);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(20,9.535334);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(21,11.13724);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(22,10.85074);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(23,10.99165);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(24,9.879458);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(25,8.266485);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(26,8.438045);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(27,14.35739);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(28,6.816101);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(29,10.24643);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(30,5.537081);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(31,12.90797);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(1,1.263559);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(2,1.000341);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(3,0.9289737);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(4,1.242933);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(5,1.957402);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(6,1.305733);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(7,1.101608);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(8,1.673359);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(9,1.464393);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(10,1.778778);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(11,1.500572);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(12,2.147884);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(13,1.998215);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(14,1.76638);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(15,2.289956);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(16,1.670922);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(17,1.891818);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(18,1.878089);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(19,2.056607);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(20,2.209162);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(21,2.39661);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(22,2.464054);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(23,2.444814);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(24,2.225823);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(25,1.995213);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(26,2.132728);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(27,3.918404);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(28,1.848911);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(29,2.304539);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(30,1.672949);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(31,2.549868);
   Zmm_2bjet_dPhi_2b_stack_2->SetEntries(454);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dPhi_2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_2b_stack_2->SetLineColor(ci);
   Zmm_2bjet_dPhi_2b_stack_2->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_dPhi_2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_2b_stack_2,"");
   Double_t xAxis58[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_dPhi_2b_stack_3 = new TH1D("Zmm_2bjet_dPhi_2b_stack_3","",31, xAxis58);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(1,46.95699);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(2,46.18957);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(3,51.57171);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(4,50.29254);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(5,63.46326);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(6,70.05928);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(7,72.65725);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(8,75.12903);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(9,78.14819);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(10,80.46463);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(11,80.22394);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(12,86.47057);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(13,93.42221);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(14,96.14648);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(15,105.4374);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(16,106.8629);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(17,110.2235);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(18,120.661);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(19,127.7075);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(20,136.4616);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(21,147.5312);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(22,146.8789);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(23,162.9831);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(24,183.7837);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(25,183.3143);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(26,186.7212);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(27,205.067);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(28,216.7899);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(29,217.7997);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(30,224.5611);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(31,318.1933);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(1,2.030615);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(2,2.040978);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(3,2.171462);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(4,2.114431);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(5,2.383696);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(6,2.546338);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(7,2.592475);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(8,2.617494);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(9,2.788746);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(10,2.779227);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(11,2.669324);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(12,2.776777);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(13,2.885008);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(14,2.929074);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(15,3.07343);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(16,3.084802);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(17,3.171123);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(18,3.328086);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(19,3.511953);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(20,3.489231);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(21,3.640171);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(22,3.668639);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(23,3.841754);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(24,4.074959);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(25,4.054461);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(26,4.139157);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(27,4.277078);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(28,4.499935);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(29,4.428046);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(30,4.492995);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(31,5.338085);
   Zmm_2bjet_dPhi_2b_stack_3->SetEntries(48154);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dPhi_2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_2b_stack_3->SetLineColor(ci);
   Zmm_2bjet_dPhi_2b_stack_3->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_dPhi_2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_2b_stack_3,"");
   Double_t xAxis59[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_XX_dPhi_2b_stack_4 = new TH1D("Zmm_2bjet_XX_dPhi_2b_stack_4","",31, xAxis59);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(1,5.469677);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(3,-1.170128);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(4,-0.2298033);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(5,2.806773);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(6,28.06627);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(7,2.382303);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(8,3.229331);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(9,4.004821);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(10,15.0587);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(11,-0.9785705);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(12,0.9716113);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(13,1.115945);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(14,1.060688);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(15,12.45592);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(16,-0.4372792);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(17,-1.162046);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(18,-4.428456);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(19,10.61936);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(20,1.938518);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(21,0.5700728);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(22,23.69502);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(23,9.832565);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(25,15.37268);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(26,-3.233725);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(27,29.98739);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(28,31.94033);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(29,3.391646);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(30,14.13572);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(31,26.57992);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(1,3.867916);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(3,4.374909);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(4,1.40037);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(5,3.040403);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(6,18.01427);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(7,1.752923);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(8,1.891794);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(9,2.561122);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(10,12.59844);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(11,1.139321);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(12,2.185374);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(13,1.115945);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(14,1.060688);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(15,10.49532);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(16,1.446532);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(17,1.162046);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(18,3.438676);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(19,10.0581);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(20,3.973135);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(21,3.515705);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(22,13.47657);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(23,9.146827);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(25,13.38648);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(26,2.646355);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(27,18.3346);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(28,15.26522);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(29,4.490485);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(30,19.66861);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(31,16.26891);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetEntries(117);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_dPhi_2b_stack_4,"");
   Double_t xAxis60[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_bX_dPhi_2b_stack_5 = new TH1D("Zmm_2bjet_bX_dPhi_2b_stack_5","",31, xAxis60);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(1,-0.7455203);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(2,1.404491);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(3,6.038898);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(4,-0.1669638);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(5,6.655559);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(6,7.419017);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(7,3.751349);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(8,11.21427);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(9,-1.949984);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(10,1.759275);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(11,0.9650476);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(12,7.993483);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(13,6.705489);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(14,0.02516549);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(15,1.651522);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(16,4.437761);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(17,9.047287);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(18,6.224226);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(19,5.238709);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(20,3.544142);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(21,4.149245);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(22,-0.5350128);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(23,7.03408);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(24,0.05232774);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(25,12.99533);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(26,8.610005);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(27,13.5572);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(28,-0.1291787);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(29,3.83654);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(30,16.30142);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(31,16.38022);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(1,1.943565);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(2,3.360707);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(3,5.713551);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(4,3.874066);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(5,4.037968);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(6,3.672154);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(7,4.365575);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(8,4.94568);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(9,1.959577);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(10,3.358824);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(11,2.512267);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(12,4.868818);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(13,4.260057);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(14,2.139201);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(15,3.941543);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(16,3.187405);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(17,4.850409);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(18,4.546773);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(19,3.508943);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(20,3.397194);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(21,3.216087);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(22,3.732826);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(23,6.237487);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(24,5.752716);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(25,6.120171);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(26,6.459591);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(27,5.985962);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(28,5.556277);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(29,7.098392);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(30,7.159833);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(31,7.376487);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetEntries(396);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_dPhi_2b_stack_5,"");
   Double_t xAxis61[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_bb_dPhi_2b_stack_6 = new TH1D("Zmm_2bjet_bb_dPhi_2b_stack_6","",31, xAxis61);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(1,153.2688);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(2,133.3891);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(3,154.4978);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(4,154.5058);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(5,178.6786);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(6,209.1755);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(7,192.4892);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(8,157.0687);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(9,175.9694);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(10,178.7934);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(11,158.8511);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(12,190.5104);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(13,223.2814);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(14,172.3907);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(15,185.5189);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(16,226.7447);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(17,183.1713);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(18,193.1522);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(19,190.7275);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(20,249.7954);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(21,291.8377);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(22,277.055);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(23,287.149);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(24,360.0377);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(25,372.9755);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(26,365.1034);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(27,405.6056);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(28,462.3396);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(29,516.6073);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(30,419.1786);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(31,750.175);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(1,22.26581);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(2,21.791);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(3,23.52552);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(4,21.83316);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(5,23.84679);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(6,24.50197);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(7,24.7168);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(8,23.73122);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(9,25.03615);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(10,24.91275);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(11,26.24457);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(12,25.53795);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(13,25.22288);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(14,25.89029);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(15,26.55401);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(16,26.17496);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(17,27.94694);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(18,27.51647);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(19,28.22532);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(20,29.21607);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(21,30.48479);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(22,33.91785);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(23,33.69304);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(24,33.25946);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(25,34.45647);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(26,35.67939);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(27,37.06852);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(28,38.40134);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(29,40.31797);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(30,61.08569);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(31,47.70152);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetEntries(21441);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_2b_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_dPhi_2b_stack_6,"");
   st->Draw("hist");
   Double_t xAxis62[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_dPhi_2b__629 = new TH1D("Zmm_2bjet_dPhi_2b__629","",31, xAxis62);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(1,179);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(2,188);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(3,219);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(4,211);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(5,270);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(6,253);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(7,267);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(8,253);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(9,275);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(10,234);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(11,239);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(12,253);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(13,262);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(14,280);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(15,292);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(16,270);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(17,283);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(18,299);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(19,329);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(20,337);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(21,318);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(22,378);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(23,428);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(24,426);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(25,456);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(26,511);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(27,507);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(28,562);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(29,540);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(30,597);
   Zmm_2bjet_dPhi_2b__629->SetBinContent(31,841);
   Zmm_2bjet_dPhi_2b__629->SetBinError(1,13.37909);
   Zmm_2bjet_dPhi_2b__629->SetBinError(2,13.71131);
   Zmm_2bjet_dPhi_2b__629->SetBinError(3,14.79865);
   Zmm_2bjet_dPhi_2b__629->SetBinError(4,14.52584);
   Zmm_2bjet_dPhi_2b__629->SetBinError(5,16.43168);
   Zmm_2bjet_dPhi_2b__629->SetBinError(6,15.90597);
   Zmm_2bjet_dPhi_2b__629->SetBinError(7,16.34013);
   Zmm_2bjet_dPhi_2b__629->SetBinError(8,15.90597);
   Zmm_2bjet_dPhi_2b__629->SetBinError(9,16.58312);
   Zmm_2bjet_dPhi_2b__629->SetBinError(10,15.29706);
   Zmm_2bjet_dPhi_2b__629->SetBinError(11,15.45962);
   Zmm_2bjet_dPhi_2b__629->SetBinError(12,15.90597);
   Zmm_2bjet_dPhi_2b__629->SetBinError(13,16.18641);
   Zmm_2bjet_dPhi_2b__629->SetBinError(14,16.7332);
   Zmm_2bjet_dPhi_2b__629->SetBinError(15,17.08801);
   Zmm_2bjet_dPhi_2b__629->SetBinError(16,16.43168);
   Zmm_2bjet_dPhi_2b__629->SetBinError(17,16.8226);
   Zmm_2bjet_dPhi_2b__629->SetBinError(18,17.29162);
   Zmm_2bjet_dPhi_2b__629->SetBinError(19,18.13836);
   Zmm_2bjet_dPhi_2b__629->SetBinError(20,18.35756);
   Zmm_2bjet_dPhi_2b__629->SetBinError(21,17.83255);
   Zmm_2bjet_dPhi_2b__629->SetBinError(22,19.44222);
   Zmm_2bjet_dPhi_2b__629->SetBinError(23,20.68816);
   Zmm_2bjet_dPhi_2b__629->SetBinError(24,20.63977);
   Zmm_2bjet_dPhi_2b__629->SetBinError(25,21.35416);
   Zmm_2bjet_dPhi_2b__629->SetBinError(26,22.60531);
   Zmm_2bjet_dPhi_2b__629->SetBinError(27,22.51666);
   Zmm_2bjet_dPhi_2b__629->SetBinError(28,23.70654);
   Zmm_2bjet_dPhi_2b__629->SetBinError(29,23.2379);
   Zmm_2bjet_dPhi_2b__629->SetBinError(30,24.43358);
   Zmm_2bjet_dPhi_2b__629->SetBinError(31,29);
   Zmm_2bjet_dPhi_2b__629->SetEntries(10757);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_2b__629->SetLineColor(ci);
   Zmm_2bjet_dPhi_2b__629->SetLineWidth(2);
   Zmm_2bjet_dPhi_2b__629->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_2b__629->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_2b__629->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_dPhi_2b__629->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b__629->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b__629->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b__629->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b__629->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b__629->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b__629->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b__629->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_2b__629->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b__629->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b__629->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b__629->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b__629->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b__629->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_2b_fx1629[31] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_2b_fy1629[31] = {
   209.5889,
   185.935,
   215.1238,
   207.9626,
   260.6771,
   322.1305,
   275.8666,
   253.8297,
   262.6292,
   285.236,
   244.9983,
   297.2879,
   334.1591,
   278.822,
   317.1215,
   345.7354,
   309.9732,
   326.4705,
   345.7929,
   405.4271,
   457.1296,
   462.4011,
   482.0664,
   556.7633,
   594.7653,
   569.1212,
   674.2901,
   724.5356,
   756.942,
   683.649,
   1132.195};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_2b_fex1629[31] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_2b_fey1629[31] = {
   22.81845,
   22.18423,
   24.72675,
   22.35805,
   24.58262,
   30.78604,
   25.32974,
   24.52158,
   25.45307,
   28.32964,
   26.57697,
   26.3368,
   25.85843,
   26.2429,
   29.09129,
   26.65371,
   28.63584,
   28.37919,
   30.45899,
   29.98785,
   31.17115,
   36.97956,
   35.775,
   34.08363,
   37.74757,
   36.6667,
   42.20646,
   42.00263,
   41.50291,
   64.75822,
   51.30046};
   TGraphErrors *gre = new TGraphErrors(31,Graph_from_Zmm_2bjet_bb_dPhi_2b_fx1629,Graph_from_Zmm_2bjet_bb_dPhi_2b_fy1629,Graph_from_Zmm_2bjet_bb_dPhi_2b_fex1629,Graph_from_Zmm_2bjet_bb_dPhi_2b_fey1629);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dPhi_2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629->SetMinimum(61.77627);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629->SetMaximum(1285.47);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1629);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dPhi_2b","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_dPhi_2b_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_dPhi_2b_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_dPhi_2b_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_dPhi_2b","MC unc. (stat.)","fl");

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
   dPhi_2b_Z_2bjet_Zmm_18_amcnlo->cd();
  
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
   Double_t xAxis63[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *data_mc_ratio__630 = new TH1D("data_mc_ratio__630","",31, xAxis63);
   data_mc_ratio__630->SetBinContent(1,0.8540529);
   data_mc_ratio__630->SetBinContent(2,1.011106);
   data_mc_ratio__630->SetBinContent(3,1.018018);
   data_mc_ratio__630->SetBinContent(4,1.014605);
   data_mc_ratio__630->SetBinContent(5,1.035764);
   data_mc_ratio__630->SetBinContent(6,0.7853959);
   data_mc_ratio__630->SetBinContent(7,0.9678592);
   data_mc_ratio__630->SetBinContent(8,0.9967314);
   data_mc_ratio__630->SetBinContent(9,1.047104);
   data_mc_ratio__630->SetBinContent(10,0.8203733);
   data_mc_ratio__630->SetBinContent(11,0.975517);
   data_mc_ratio__630->SetBinContent(12,0.851027);
   data_mc_ratio__630->SetBinContent(13,0.7840577);
   data_mc_ratio__630->SetBinContent(14,1.004225);
   data_mc_ratio__630->SetBinContent(15,0.9207829);
   data_mc_ratio__630->SetBinContent(16,0.780944);
   data_mc_ratio__630->SetBinContent(17,0.9129821);
   data_mc_ratio__630->SetBinContent(18,0.9158561);
   data_mc_ratio__630->SetBinContent(19,0.9514365);
   data_mc_ratio__630->SetBinContent(20,0.8312222);
   data_mc_ratio__630->SetBinContent(21,0.6956452);
   data_mc_ratio__630->SetBinContent(22,0.8174721);
   data_mc_ratio__630->SetBinContent(23,0.8878445);
   data_mc_ratio__630->SetBinContent(24,0.7651366);
   data_mc_ratio__630->SetBinContent(25,0.766689);
   data_mc_ratio__630->SetBinContent(26,0.8978756);
   data_mc_ratio__630->SetBinContent(27,0.7519019);
   data_mc_ratio__630->SetBinContent(28,0.7756692);
   data_mc_ratio__630->SetBinContent(29,0.7133968);
   data_mc_ratio__630->SetBinContent(30,0.8732552);
   data_mc_ratio__630->SetBinContent(31,0.7428046);
   data_mc_ratio__630->SetBinError(1,0.06383491);
   data_mc_ratio__630->SetBinError(2,0.07374248);
   data_mc_ratio__630->SetBinError(3,0.06879131);
   data_mc_ratio__630->SetBinError(4,0.06984831);
   data_mc_ratio__630->SetBinError(5,0.0630346);
   data_mc_ratio__630->SetBinError(6,0.04937742);
   data_mc_ratio__630->SetBinError(7,0.05923202);
   data_mc_ratio__630->SetBinError(8,0.06266397);
   data_mc_ratio__630->SetBinError(9,0.06314273);
   data_mc_ratio__630->SetBinError(10,0.05362948);
   data_mc_ratio__630->SetBinError(11,0.06310095);
   data_mc_ratio__630->SetBinError(12,0.05350361);
   data_mc_ratio__630->SetBinError(13,0.04843925);
   data_mc_ratio__630->SetBinError(14,0.06001393);
   data_mc_ratio__630->SetBinError(15,0.05388474);
   data_mc_ratio__630->SetBinError(16,0.04752674);
   data_mc_ratio__630->SetBinError(17,0.05427115);
   data_mc_ratio__630->SetBinError(18,0.05296533);
   data_mc_ratio__630->SetBinError(19,0.05245439);
   data_mc_ratio__630->SetBinError(20,0.04527956);
   data_mc_ratio__630->SetBinError(21,0.03900985);
   data_mc_ratio__630->SetBinError(22,0.04204623);
   data_mc_ratio__630->SetBinError(23,0.04291558);
   data_mc_ratio__630->SetBinError(24,0.03707099);
   data_mc_ratio__630->SetBinError(25,0.0359035);
   data_mc_ratio__630->SetBinError(26,0.03971968);
   data_mc_ratio__630->SetBinError(27,0.03339314);
   data_mc_ratio__630->SetBinError(28,0.03271963);
   data_mc_ratio__630->SetBinError(29,0.03069971);
   data_mc_ratio__630->SetBinError(30,0.03573995);
   data_mc_ratio__630->SetBinError(31,0.02561395);
   data_mc_ratio__630->SetMinimum(0.4);
   data_mc_ratio__630->SetMaximum(1.6);
   data_mc_ratio__630->SetEntries(2655.999);
   data_mc_ratio__630->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__630->SetLineColor(ci);
   data_mc_ratio__630->SetLineWidth(2);
   data_mc_ratio__630->SetMarkerStyle(20);
   data_mc_ratio__630->SetMarkerSize(1.2);
   data_mc_ratio__630->GetXaxis()->SetTitle("dPhi_{bb}");
   data_mc_ratio__630->GetXaxis()->SetRange(1,31);
   data_mc_ratio__630->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__630->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__630->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__630->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__630->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__630->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__630->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__630->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__630->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__630->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__630->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__630->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__630->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__630->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__630->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__630->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__630->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1630[31] = {
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
   Double_t Graph_from_mc_statistical_error_fy1630[31] = {
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
   Double_t Graph_from_mc_statistical_error_fex1630[31] = {
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
   Double_t Graph_from_mc_statistical_error_fey1630[31] = {
   0.1088724,
   0.1193118,
   0.1149419,
   0.1075099,
   0.09430296,
   0.09557008,
   0.0918188,
   0.09660643,
   0.09691638,
   0.09932001,
   0.1084782,
   0.08859022,
   0.0773836,
   0.09412063,
   0.09173549,
   0.07709279,
   0.09238166,
   0.08692727,
   0.08808447,
   0.07396608,
   0.06818888,
   0.07997291,
   0.07421178,
   0.06121745,
   0.06346633,
   0.06442688,
   0.06259393,
   0.0579718,
   0.0548297,
   0.09472438,
   0.04531061};
   gre = new TGraphErrors(31,Graph_from_mc_statistical_error_fx1630,Graph_from_mc_statistical_error_fy1630,Graph_from_mc_statistical_error_fex1630,Graph_from_mc_statistical_error_fey1630);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1630 = new TH1F("Graph_Graph_from_mc_statistical_error1630","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1630->SetMinimum(0.8568259);
   Graph_Graph_from_mc_statistical_error1630->SetMaximum(1.143174);
   Graph_Graph_from_mc_statistical_error1630->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1630->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1630->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1630->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1630->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1630->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1630->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1630->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1630->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1630->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1630->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1630->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1630->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1630->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1630->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1630->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1630);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.141593,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_2b_Z_2bjet_Zmm_18_amcnlo->cd();
   dPhi_2b_Z_2bjet_Zmm_18_amcnlo->Modified();
   dPhi_2b_Z_2bjet_Zmm_18_amcnlo->cd();
   dPhi_2b_Z_2bjet_Zmm_18_amcnlo->SetSelected(dPhi_2b_Z_2bjet_Zmm_18_amcnlo);
}

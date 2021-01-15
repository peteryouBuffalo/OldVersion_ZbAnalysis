void pt_lep1_Z_2bjet_Zee_All_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_2bjet_Zee_All_amcnlo/pt_lep1_Z_2bjet_Zee_All_amcnlo
//=========  (Thu Jan 14 10:42:42 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_2bjet_Zee_All_amcnlo = new TCanvas("pt_lep1_Z_2bjet_Zee_All_amcnlo", "pt_lep1_Z_2bjet_Zee_All_amcnlo",0,0,600,600);
   pt_lep1_Z_2bjet_Zee_All_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_2bjet_Zee_All_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_2bjet_Zee_All_amcnlo->SetFillColor(0);
   pt_lep1_Z_2bjet_Zee_All_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_2bjet_Zee_All_amcnlo->SetBorderMode(0);
   pt_lep1_Z_2bjet_Zee_All_amcnlo->SetBorderSize(2);
   pt_lep1_Z_2bjet_Zee_All_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_2bjet_Zee_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-5.372627,210.4839,5377.254);
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
   st->SetMaximum(4608.563);
   
   TH1F *st_stack_176 = new TH1F("st_stack_176","",40,0,200);
   st_stack_176->SetMinimum(0.01);
   st_stack_176->SetMaximum(4838.991);
   st_stack_176->SetDirectory(0);
   st_stack_176->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_176->SetLineColor(ci);
   st_stack_176->GetXaxis()->SetRange(1,40);
   st_stack_176->GetXaxis()->SetLabelFont(42);
   st_stack_176->GetXaxis()->SetLabelSize(0.035);
   st_stack_176->GetXaxis()->SetTitleSize(0.035);
   st_stack_176->GetXaxis()->SetTitleFont(42);
   st_stack_176->GetYaxis()->SetTitle("Events/5.0");
   st_stack_176->GetYaxis()->SetLabelFont(42);
   st_stack_176->GetYaxis()->SetLabelSize(0.05);
   st_stack_176->GetYaxis()->SetTitleSize(0.057);
   st_stack_176->GetYaxis()->SetTitleOffset(1.2);
   st_stack_176->GetYaxis()->SetTitleFont(42);
   st_stack_176->GetZaxis()->SetLabelFont(42);
   st_stack_176->GetZaxis()->SetLabelSize(0.035);
   st_stack_176->GetZaxis()->SetTitleSize(0.035);
   st_stack_176->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_176);
   
   
   TH1D *Zee_2bjet_pt_lep1_all_stack_1 = new TH1D("Zee_2bjet_pt_lep1_all_stack_1","",40,0,200);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(6,15.93791);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(7,18.77293);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(8,15.16499);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(9,12.81941);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(10,9.649734);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(11,5.95888);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(12,4.363526);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(13,2.497044);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(14,1.535598);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(15,0.2499521);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(16,0.8958894);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinContent(18,0.2797039);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(6,1.872581);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(7,2.030865);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(8,1.796459);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(9,1.729283);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(10,1.504502);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(11,1.179109);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(12,0.9996858);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(13,0.7415366);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(14,0.5916654);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(15,0.2499521);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(16,0.4346202);
   Zee_2bjet_pt_lep1_all_stack_1->SetBinError(18,0.2797039);
   Zee_2bjet_pt_lep1_all_stack_1->SetEntries(475);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_pt_lep1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_all_stack_1->SetLineColor(ci);
   Zee_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_all_stack_1,"");
   
   TH1D *Zee_2bjet_pt_lep1_all_stack_2 = new TH1D("Zee_2bjet_pt_lep1_all_stack_2","",40,0,200);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(6,30.67534);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(7,39.08826);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(8,42.57725);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(9,28.9908);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(10,18.41252);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(11,11.06031);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(12,5.941627);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(13,6.028721);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(14,4.163188);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(15,4.423937);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(16,3.331653);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(17,3.635135);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(18,1.016573);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(19,1.157508);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(20,1.450129);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(22,1.349609);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(23,0.8942618);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(24,0.2592858);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(25,0.6524772);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(26,0.2822457);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(30,0.4370907);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinContent(31,0.4509368);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(6,3.468476);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(7,3.982701);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(8,4.019462);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(9,3.243362);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(10,2.753652);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(11,2.02587);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(12,1.474008);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(13,1.482089);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(14,1.267389);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(15,1.317448);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(16,1.186965);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(17,1.452219);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(18,0.7107803);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(19,0.6415245);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(20,0.7697446);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(22,0.6913423);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(23,0.6578324);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(24,0.2592858);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(25,0.6524772);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(26,0.2822457);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(30,0.4370907);
   Zee_2bjet_pt_lep1_all_stack_2->SetBinError(31,0.4509368);
   Zee_2bjet_pt_lep1_all_stack_2->SetEntries(618);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_pt_lep1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_all_stack_2->SetLineColor(ci);
   Zee_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_all_stack_2,"");
   
   TH1D *Zee_2bjet_pt_lep1_all_stack_3 = new TH1D("Zee_2bjet_pt_lep1_all_stack_3","",40,0,200);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(6,648.8071);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(7,769.0494);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(8,738.5819);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(9,591.1031);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(10,401.361);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(11,247.224);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(12,148.2023);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(13,79.60688);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(14,38.26181);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(15,23.67573);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(16,12.80818);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(17,3.801585);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(18,2.067023);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(19,1.31327);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(20,1.292199);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(21,0.4327003);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(22,0.1762737);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(23,0.4762442);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(24,0.07341549);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(26,0.07224948);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(30,0.03245216);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinContent(33,0.08042259);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(6,10.7902);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(7,11.86742);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(8,11.35937);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(9,10.24121);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(10,8.444045);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(11,6.597456);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(12,5.303407);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(13,3.716929);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(14,2.672461);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(15,2.122441);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(16,1.598723);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(17,0.806825);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(18,0.6356491);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(19,0.4009321);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(20,0.4134908);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(21,0.2283508);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(22,0.1762737);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(23,0.4106998);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(24,0.07341549);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(26,0.07224948);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(30,0.03245216);
   Zee_2bjet_pt_lep1_all_stack_3->SetBinError(33,0.08042259);
   Zee_2bjet_pt_lep1_all_stack_3->SetEntries(32755);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_pt_lep1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_all_stack_3->SetLineColor(ci);
   Zee_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_all_stack_3,"");
   
   TH1D *Zee_2bjet_XX_pt_lep1_all_stack_4 = new TH1D("Zee_2bjet_XX_pt_lep1_all_stack_4","",40,0,200);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(6,7.250903);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(7,13.2713);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(8,8.625952);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(9,10.13303);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(10,6.256823);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(11,4.199335);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(12,1.174497);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(13,0.938113);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(14,1.072254);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(15,2.241171);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(16,-1.088744);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(22,0.4023746);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(23,0.4594612);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(41,0.4619803);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinError(6,4.583752);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinError(7,10.86553);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinError(8,5.190731);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinError(9,7.175606);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinError(10,3.073747);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinError(11,2.560577);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinError(12,1.589038);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinError(13,0.6646121);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinError(14,0.7626951);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinError(15,1.365794);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinError(16,1.088744);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinError(22,0.4023746);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinError(23,0.4594612);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetBinError(41,0.4619803);
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetEntries(129);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_pt_lep1_all_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_pt_lep1_all_stack_4->GetXaxis()->SetRange(1,200);
   Zee_2bjet_XX_pt_lep1_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_pt_lep1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_pt_lep1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_pt_lep1_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_pt_lep1_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_pt_lep1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_pt_lep1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_pt_lep1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_pt_lep1_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_pt_lep1_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_pt_lep1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_pt_lep1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_pt_lep1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_pt_lep1_all_stack_4,"");
   
   TH1D *Zee_2bjet_bX_pt_lep1_all_stack_5 = new TH1D("Zee_2bjet_bX_pt_lep1_all_stack_5","",40,0,200);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(6,26.00266);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(7,10.48367);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(8,21.98922);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(9,29.39501);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(10,13.30991);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(11,8.143687);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(12,6.05888);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(13,2.261784);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(14,2.576805);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(15,4.00388);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(16,1.089281);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(17,1.185437);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(18,0.0537697);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(19,0.6595929);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(20,0.04371671);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(21,1.098061);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(23,0.5555578);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(24,3.040427);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(26,0.5606703);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(29,3.106651);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(30,0.5319278);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(6,8.350772);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(7,8.933867);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(8,9.860505);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(9,7.911176);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(10,6.030523);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(11,5.128318);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(12,4.292249);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(13,3.372498);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(14,2.426957);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(15,2.67673);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(16,1.008266);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(17,1.322057);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(18,0.0537697);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(19,0.5698134);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(20,0.7046437);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(21,1.098061);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(23,0.5555578);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(24,2.164657);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(26,1.547763);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(29,2.331065);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetBinError(30,0.5319278);
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetEntries(615);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_pt_lep1_all_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_pt_lep1_all_stack_5->GetXaxis()->SetRange(1,200);
   Zee_2bjet_bX_pt_lep1_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_pt_lep1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_pt_lep1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_pt_lep1_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_pt_lep1_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_pt_lep1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_pt_lep1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_pt_lep1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_pt_lep1_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_pt_lep1_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_pt_lep1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_pt_lep1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_pt_lep1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_pt_lep1_all_stack_5,"");
   
   TH1D *Zee_2bjet_bb_pt_lep1_all_stack_6 = new TH1D("Zee_2bjet_bb_pt_lep1_all_stack_6","",40,0,200);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(6,1345.063);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(7,1684.044);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(8,1550.81);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(9,1262.059);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(10,762.6586);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(11,482.5004);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(12,371.4678);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(13,204.7741);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(14,125.5454);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(15,104.5932);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(16,102.7656);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(17,57.06818);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(18,45.94798);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(19,37.66463);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(20,35.69508);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(21,12.36093);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(22,26.20374);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(23,18.19671);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(24,21.86401);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(25,3.472598);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(26,4.893112);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(27,2.569038);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(28,5.134771);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(29,3.362419);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(30,-0.6823723);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(31,6.821293);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(32,2.397914);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(33,1.125307);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(34,0.6250291);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(35,1.397692);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(36,1.423453);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(37,1.086333);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(38,0.1196975);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(39,2.984033);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(40,1.029364);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(41,5.010316);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(6,59.95354);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(7,63.86367);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(8,62.34748);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(9,55.06588);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(10,42.24592);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(11,33.21148);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(12,28.33279);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(13,22.47966);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(14,18.69656);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(15,15.33124);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(16,14.06892);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(17,12.03171);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(18,10.3183);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(19,9.312366);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(20,7.986374);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(21,6.965341);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(22,6.976973);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(23,5.202491);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(24,13.01635);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(25,3.619501);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(26,2.628102);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(27,3.825914);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(28,2.563806);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(29,2.65);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(30,1.042162);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(31,3.096917);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(32,2.243582);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(33,2.170769);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(34,0.7739281);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(35,0.8078298);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(36,1.08749);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(37,1.103484);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(38,0.600946);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(39,1.650403);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(40,0.7287353);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetBinError(41,2.157367);
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetEntries(34449);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_pt_lep1_all_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_pt_lep1_all_stack_6->GetXaxis()->SetRange(1,200);
   Zee_2bjet_bb_pt_lep1_all_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_pt_lep1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_pt_lep1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_pt_lep1_all_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_pt_lep1_all_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_pt_lep1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_pt_lep1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_pt_lep1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_pt_lep1_all_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_pt_lep1_all_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_pt_lep1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_pt_lep1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_pt_lep1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_pt_lep1_all_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_pt_lep1_all__351 = new TH1D("Zee_2bjet_pt_lep1_all__351","",40,0,200);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(6,1772);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(7,2073);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(8,2065);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(9,1645);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(10,1052);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(11,663);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(12,429);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(13,279);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(14,187);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(15,138);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(16,93);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(17,59);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(18,45);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(19,27);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(20,27);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(21,26);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(22,18);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(23,16);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(24,10);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(25,14);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(26,10);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(27,3);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(28,4);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(29,7);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(30,4);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(31,4);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(32,4);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(33,2);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(34,1);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(35,2);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(36,3);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(37,1);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(39,2);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(40,1);
   Zee_2bjet_pt_lep1_all__351->SetBinContent(41,3);
   Zee_2bjet_pt_lep1_all__351->SetBinError(6,42.09513);
   Zee_2bjet_pt_lep1_all__351->SetBinError(7,45.53021);
   Zee_2bjet_pt_lep1_all__351->SetBinError(8,45.44227);
   Zee_2bjet_pt_lep1_all__351->SetBinError(9,40.5586);
   Zee_2bjet_pt_lep1_all__351->SetBinError(10,32.43455);
   Zee_2bjet_pt_lep1_all__351->SetBinError(11,25.74879);
   Zee_2bjet_pt_lep1_all__351->SetBinError(12,20.71232);
   Zee_2bjet_pt_lep1_all__351->SetBinError(13,16.70329);
   Zee_2bjet_pt_lep1_all__351->SetBinError(14,13.67479);
   Zee_2bjet_pt_lep1_all__351->SetBinError(15,11.74734);
   Zee_2bjet_pt_lep1_all__351->SetBinError(16,9.643651);
   Zee_2bjet_pt_lep1_all__351->SetBinError(17,7.681146);
   Zee_2bjet_pt_lep1_all__351->SetBinError(18,6.708204);
   Zee_2bjet_pt_lep1_all__351->SetBinError(19,5.196152);
   Zee_2bjet_pt_lep1_all__351->SetBinError(20,5.196152);
   Zee_2bjet_pt_lep1_all__351->SetBinError(21,5.09902);
   Zee_2bjet_pt_lep1_all__351->SetBinError(22,4.242641);
   Zee_2bjet_pt_lep1_all__351->SetBinError(23,4);
   Zee_2bjet_pt_lep1_all__351->SetBinError(24,3.162278);
   Zee_2bjet_pt_lep1_all__351->SetBinError(25,3.741657);
   Zee_2bjet_pt_lep1_all__351->SetBinError(26,3.162278);
   Zee_2bjet_pt_lep1_all__351->SetBinError(27,1.732051);
   Zee_2bjet_pt_lep1_all__351->SetBinError(28,2);
   Zee_2bjet_pt_lep1_all__351->SetBinError(29,2.645751);
   Zee_2bjet_pt_lep1_all__351->SetBinError(30,2);
   Zee_2bjet_pt_lep1_all__351->SetBinError(31,2);
   Zee_2bjet_pt_lep1_all__351->SetBinError(32,2);
   Zee_2bjet_pt_lep1_all__351->SetBinError(33,1.414214);
   Zee_2bjet_pt_lep1_all__351->SetBinError(34,1);
   Zee_2bjet_pt_lep1_all__351->SetBinError(35,1.414214);
   Zee_2bjet_pt_lep1_all__351->SetBinError(36,1.732051);
   Zee_2bjet_pt_lep1_all__351->SetBinError(37,1);
   Zee_2bjet_pt_lep1_all__351->SetBinError(39,1.414214);
   Zee_2bjet_pt_lep1_all__351->SetBinError(40,1);
   Zee_2bjet_pt_lep1_all__351->SetBinError(41,1.732051);
   Zee_2bjet_pt_lep1_all__351->SetEntries(10689);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_all__351->SetLineColor(ci);
   Zee_2bjet_pt_lep1_all__351->SetLineWidth(2);
   Zee_2bjet_pt_lep1_all__351->SetMarkerStyle(20);
   Zee_2bjet_pt_lep1_all__351->SetMarkerSize(1.2);
   Zee_2bjet_pt_lep1_all__351->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_all__351->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all__351->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all__351->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all__351->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all__351->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all__351->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all__351->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all__351->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_all__351->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all__351->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_all__351->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_all__351->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_all__351->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_all__351->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_pt_lep1_all_fx1351[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t Graph_from_Zee_2bjet_bb_pt_lep1_all_fy1351[40] = {
   0,
   0,
   0,
   0,
   0,
   2073.737,
   2534.71,
   2377.75,
   1934.5,
   1211.649,
   759.0866,
   537.2086,
   296.1067,
   173.1551,
   139.1879,
   119.8019,
   65.69033,
   49.36505,
   40.795,
   38.48112,
   13.89169,
   28.132,
   20.58223,
   25.23714,
   4.125075,
   5.808278,
   2.569038,
   5.134771,
   6.46907,
   0.3190984,
   7.27223,
   2.397914,
   1.20573,
   0.6250291,
   1.397692,
   1.423453,
   1.086333,
   0.1196975,
   2.984033,
   1.029364};
   Double_t Graph_from_Zee_2bjet_bb_pt_lep1_all_fex1351[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph_from_Zee_2bjet_bb_pt_lep1_all_fey1351[40] = {
   0,
   0,
   0,
   0,
   0,
   61.783,
   66.61279,
   64.49651,
   57.13772,
   43.72278,
   34.42208,
   29.24028,
   23.10222,
   19.10842,
   15.8234,
   14.29301,
   12.2176,
   10.36618,
   9.360403,
   8.064873,
   7.055059,
   7.02489,
   5.30915,
   13.19787,
   3.677841,
   3.063882,
   3.825914,
   2.563806,
   3.529357,
   1.24946,
   3.129575,
   2.243582,
   2.172258,
   0.7739281,
   0.8078298,
   1.08749,
   1.103484,
   0.600946,
   1.650403,
   0.7287353};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zee_2bjet_bb_pt_lep1_all_fx1351,Graph_from_Zee_2bjet_bb_pt_lep1_all_fy1351,Graph_from_Zee_2bjet_bb_pt_lep1_all_fex1351,Graph_from_Zee_2bjet_bb_pt_lep1_all_fey1351);
   gre->SetName("Graph_from_Zee_2bjet_bb_pt_lep1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351","",100,0,220);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351->SetMinimum(-261.5148);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351->SetMaximum(2861.58);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_pt_lep1_all1351);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_pt_lep1_all","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_pt_lep1_all_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_pt_lep1_all_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_pt_lep1_all_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_pt_lep1_all","MC unc. (stat.)","fl");

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
   pt_lep1_Z_2bjet_Zee_All_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-30.64508,-0.2774193,210.4839,1.658065);
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
   
   TH1D *data_mc_ratio__352 = new TH1D("data_mc_ratio__352","",40,0,200);
   data_mc_ratio__352->SetBinContent(6,0.8544959);
   data_mc_ratio__352->SetBinContent(7,0.8178451);
   data_mc_ratio__352->SetBinContent(8,0.8684682);
   data_mc_ratio__352->SetBinContent(9,0.8503489);
   data_mc_ratio__352->SetBinContent(10,0.8682386);
   data_mc_ratio__352->SetBinContent(11,0.8734181);
   data_mc_ratio__352->SetBinContent(12,0.7985724);
   data_mc_ratio__352->SetBinContent(13,0.942228);
   data_mc_ratio__352->SetBinContent(14,1.079957);
   data_mc_ratio__352->SetBinContent(15,0.9914654);
   data_mc_ratio__352->SetBinContent(16,0.7762818);
   data_mc_ratio__352->SetBinContent(17,0.8981535);
   data_mc_ratio__352->SetBinContent(18,0.9115762);
   data_mc_ratio__352->SetBinContent(19,0.6618458);
   data_mc_ratio__352->SetBinContent(20,0.7016427);
   data_mc_ratio__352->SetBinContent(21,1.871622);
   data_mc_ratio__352->SetBinContent(22,0.6398407);
   data_mc_ratio__352->SetBinContent(23,0.7773694);
   data_mc_ratio__352->SetBinContent(24,0.3962414);
   data_mc_ratio__352->SetBinContent(25,3.393878);
   data_mc_ratio__352->SetBinContent(26,1.721681);
   data_mc_ratio__352->SetBinContent(27,1.167752);
   data_mc_ratio__352->SetBinContent(28,0.7790026);
   data_mc_ratio__352->SetBinContent(29,1.082072);
   data_mc_ratio__352->SetBinContent(30,12.53532);
   data_mc_ratio__352->SetBinContent(31,0.5500376);
   data_mc_ratio__352->SetBinContent(32,1.668116);
   data_mc_ratio__352->SetBinContent(33,1.658746);
   data_mc_ratio__352->SetBinContent(34,1.599926);
   data_mc_ratio__352->SetBinContent(35,1.430931);
   data_mc_ratio__352->SetBinContent(36,2.107551);
   data_mc_ratio__352->SetBinContent(37,0.9205283);
   data_mc_ratio__352->SetBinContent(39,0.670234);
   data_mc_ratio__352->SetBinContent(40,0.9714741);
   data_mc_ratio__352->SetBinContent(41,0.548216);
   data_mc_ratio__352->SetBinError(6,0.02029916);
   data_mc_ratio__352->SetBinError(7,0.01796269);
   data_mc_ratio__352->SetBinError(8,0.01911146);
   data_mc_ratio__352->SetBinError(9,0.02096593);
   data_mc_ratio__352->SetBinError(10,0.02676894);
   data_mc_ratio__352->SetBinError(11,0.03392075);
   data_mc_ratio__352->SetBinError(12,0.03855544);
   data_mc_ratio__352->SetBinError(13,0.05640971);
   data_mc_ratio__352->SetBinError(14,0.07897427);
   data_mc_ratio__352->SetBinError(15,0.08439914);
   data_mc_ratio__352->SetBinError(16,0.08049667);
   data_mc_ratio__352->SetBinError(17,0.1169296);
   data_mc_ratio__352->SetBinError(18,0.1358898);
   data_mc_ratio__352->SetBinError(19,0.1273723);
   data_mc_ratio__352->SetBinError(20,0.1350312);
   data_mc_ratio__352->SetBinError(21,0.3670553);
   data_mc_ratio__352->SetBinError(22,0.1508119);
   data_mc_ratio__352->SetBinError(23,0.1943424);
   data_mc_ratio__352->SetBinError(24,0.1253025);
   data_mc_ratio__352->SetBinError(25,0.907052);
   data_mc_ratio__352->SetBinError(26,0.5444432);
   data_mc_ratio__352->SetBinError(27,0.6742021);
   data_mc_ratio__352->SetBinError(28,0.3895013);
   data_mc_ratio__352->SetBinError(29,0.4089848);
   data_mc_ratio__352->SetBinError(30,6.267658);
   data_mc_ratio__352->SetBinError(31,0.2750188);
   data_mc_ratio__352->SetBinError(32,0.8340582);
   data_mc_ratio__352->SetBinError(33,1.172911);
   data_mc_ratio__352->SetBinError(34,1.599926);
   data_mc_ratio__352->SetBinError(35,1.011821);
   data_mc_ratio__352->SetBinError(36,1.216795);
   data_mc_ratio__352->SetBinError(37,0.9205283);
   data_mc_ratio__352->SetBinError(39,0.473927);
   data_mc_ratio__352->SetBinError(40,0.9714741);
   data_mc_ratio__352->SetBinError(41,0.3860472);
   data_mc_ratio__352->SetMinimum(0.4);
   data_mc_ratio__352->SetMaximum(1.6);
   data_mc_ratio__352->SetEntries(0.9560598);
   data_mc_ratio__352->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__352->SetLineColor(ci);
   data_mc_ratio__352->SetLineWidth(2);
   data_mc_ratio__352->SetMarkerStyle(20);
   data_mc_ratio__352->SetMarkerSize(1.2);
   data_mc_ratio__352->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__352->GetXaxis()->SetRange(1,40);
   data_mc_ratio__352->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__352->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__352->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__352->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__352->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__352->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__352->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__352->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__352->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__352->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__352->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__352->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__352->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__352->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__352->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__352->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__352->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1352[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t Graph_from_mc_statistical_error_fy1352[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1352[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph_from_mc_statistical_error_fey1352[40] = {
   0,
   0,
   0,
   0,
   0,
   0.02979307,
   0.02628024,
   0.02712502,
   0.02953617,
   0.03608536,
   0.0453467,
   0.05443002,
   0.07801991,
   0.1103544,
   0.1136837,
   0.1193054,
   0.1859878,
   0.2099904,
   0.2294498,
   0.20958,
   0.5078616,
   0.2497117,
   0.2579482,
   0.5229542,
   0.8915817,
   0.5275027,
   1.48924,
   0.4993028,
   0.5455741,
   3.915595,
   0.430346,
   0.9356391,
   1.801613,
   1.238227,
   0.5779742,
   0.7639804,
   1.015788,
   5.020539,
   0.5530781,
   0.7079475};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1352,Graph_from_mc_statistical_error_fy1352,Graph_from_mc_statistical_error_fex1352,Graph_from_mc_statistical_error_fey1352);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1352 = new TH1F("Graph_Graph_from_mc_statistical_error1352","",100,0,220);
   Graph_Graph_from_mc_statistical_error1352->SetMinimum(-5.024647);
   Graph_Graph_from_mc_statistical_error1352->SetMaximum(7.024647);
   Graph_Graph_from_mc_statistical_error1352->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1352->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1352->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1352->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1352->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1352->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1352->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1352->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1352->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1352->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1352->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1352->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1352->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1352->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1352->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1352->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1352);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_2bjet_Zee_All_amcnlo->cd();
   pt_lep1_Z_2bjet_Zee_All_amcnlo->Modified();
   pt_lep1_Z_2bjet_Zee_All_amcnlo->cd();
   pt_lep1_Z_2bjet_Zee_All_amcnlo->SetSelected(pt_lep1_Z_2bjet_Zee_All_amcnlo);
}

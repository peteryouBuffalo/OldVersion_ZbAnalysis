void dPhi_Zb_Z_2bjet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb_Z_2bjet_Zee_17_amcnlo/dPhi_Zb_Z_2bjet_Zee_17_amcnlo
//=========  (Thu Jan 14 10:42:52 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb_Z_2bjet_Zee_17_amcnlo = new TCanvas("dPhi_Zb_Z_2bjet_Zee_17_amcnlo", "dPhi_Zb_Z_2bjet_Zee_17_amcnlo",0,0,600,600);
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->SetHighLightColor(2);
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->Range(0,0,1,1);
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->SetFillColor(0);
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->SetFillStyle(4000);
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->SetBorderMode(0);
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->SetBorderSize(2);
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-0.703905,3.416482,713.201);
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
   st->SetMaximum(611.2481);
   
   TH1F *st_stack_234 = new TH1F("st_stack_234","",30,0,3.141593);
   st_stack_234->SetMinimum(0.01);
   st_stack_234->SetMaximum(641.8105);
   st_stack_234->SetDirectory(0);
   st_stack_234->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_234->SetLineColor(ci);
   st_stack_234->GetXaxis()->SetRange(1,31);
   st_stack_234->GetXaxis()->SetLabelFont(42);
   st_stack_234->GetXaxis()->SetLabelSize(0.035);
   st_stack_234->GetXaxis()->SetTitleSize(0.035);
   st_stack_234->GetXaxis()->SetTitleFont(42);
   st_stack_234->GetYaxis()->SetTitle("Events/0.105");
   st_stack_234->GetYaxis()->SetLabelFont(42);
   st_stack_234->GetYaxis()->SetLabelSize(0.05);
   st_stack_234->GetYaxis()->SetTitleSize(0.057);
   st_stack_234->GetYaxis()->SetTitleOffset(1.2);
   st_stack_234->GetYaxis()->SetTitleFont(42);
   st_stack_234->GetZaxis()->SetLabelFont(42);
   st_stack_234->GetZaxis()->SetLabelSize(0.035);
   st_stack_234->GetZaxis()->SetTitleSize(0.035);
   st_stack_234->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_234);
   
   
   TH1D *Zee_2bjet_dPhi_Zb_stack_1 = new TH1D("Zee_2bjet_dPhi_Zb_stack_1","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(2,0.185953);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(3,0.3325341);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(4,0.1119504);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(5,0.2915177);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(7,0.4298294);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(8,0.1327077);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(9,0.7153884);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(10,0.1378286);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(11,0.1875493);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(12,0.1096944);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(13,0.4796974);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(14,0.5118726);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(15,0.3196683);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(16,0.003848749);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(17,0.6507217);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(18,0.5341075);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(19,0.09672688);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(20,1.057044);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(21,1.112905);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(22,1.567265);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(23,0.5169479);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(24,1.501847);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(25,1.612674);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(26,1.296124);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(27,1.905082);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(28,1.464639);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(29,2.630096);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(30,1.843991);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(2,0.185953);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(3,0.2365437);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(4,0.1119504);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(5,0.2122647);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(7,0.2628643);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(8,0.09418081);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(9,0.3289511);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(10,0.1378286);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(11,0.1828332);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(12,0.1096944);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(13,0.2791823);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(14,0.2984038);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(15,0.2188546);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(16,0.003848749);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(17,0.3305876);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(18,0.308715);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(19,0.1404218);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(20,0.4375556);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(21,0.4217967);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(22,0.5060302);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(23,0.277687);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(24,0.4982016);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(25,0.5152602);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(26,0.4670869);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(27,0.5583215);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(28,0.5189167);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(29,0.6688901);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(30,0.5529265);
   Zee_2bjet_dPhi_Zb_stack_1->SetEntries(151);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_dPhi_Zb_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb_stack_1->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb_stack_1,"");
   
   TH1D *Zee_2bjet_dPhi_Zb_stack_2 = new TH1D("Zee_2bjet_dPhi_Zb_stack_2","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(1,0.5855367);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(2,0.5706254);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(3,0.3617703);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(4,1.174339);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(5,0.5329195);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(7,0.5803733);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(8,1.077372);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(9,0.4460394);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(10,0.8368586);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(11,0.5856075);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(12,1.402761);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(13,1.523077);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(14,1.117536);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(15,1.337013);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(16,1.48114);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(17,1.72396);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(18,1.570809);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(19,0.6803253);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(20,1.14191);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(21,1.551428);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(22,5.166299);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(23,6.916127);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(24,4.051064);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(25,4.787821);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(26,8.528112);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(27,5.95889);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(28,3.152689);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(29,3.836816);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(30,2.195608);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(1,0.4172504);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(2,0.415136);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(3,0.3278613);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(4,0.5935588);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(5,0.3875457);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(7,0.4125128);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(8,0.547768);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(9,0.317622);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(10,0.507276);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(11,0.418183);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(12,0.6469511);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(13,0.6780353);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(14,0.71205);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(15,0.6720571);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(16,0.6628963);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(17,0.707821);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(18,0.6705672);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(19,0.4568495);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(20,0.5787583);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(21,0.6506226);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(22,1.321139);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(23,1.487609);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(24,1.088477);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(25,1.255892);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(26,1.632726);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(27,1.349669);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(28,0.9791358);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(29,1.050589);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(30,0.8339279);
   Zee_2bjet_dPhi_Zb_stack_2->SetEntries(230);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dPhi_Zb_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb_stack_2->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb_stack_2,"");
   
   TH1D *Zee_2bjet_dPhi_Zb_stack_3 = new TH1D("Zee_2bjet_dPhi_Zb_stack_3","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(1,17.85054);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(2,12.11248);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(3,14.65048);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(4,13.49541);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(5,14.81524);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(6,13.9439);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(7,14.94431);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(8,21.26771);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(9,12.95195);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(10,15.65111);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(11,17.58972);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(12,22.4305);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(13,27.52228);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(14,24.83718);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(15,28.43989);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(16,28.78737);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(17,34.46481);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(18,33.3756);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(19,45.80969);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(20,43.89305);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(21,43.26214);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(22,55.65158);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(23,62.29922);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(24,64.7092);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(25,69.8932);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(26,62.74227);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(27,67.77406);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(28,70.18279);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(29,67.94061);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(30,78.54873);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(1,2.496738);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(2,2.056377);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(3,2.170693);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(4,2.102588);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(5,2.231461);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(6,2.183686);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(7,2.224712);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(8,2.71237);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(9,2.086454);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(10,2.300311);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(11,2.482545);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(12,2.756244);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(13,3.007592);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(14,2.904334);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(15,3.114241);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(16,3.120398);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(17,3.430876);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(18,3.334775);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(19,3.883683);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(20,3.800878);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(21,3.844874);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(22,4.318554);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(23,4.617193);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(24,4.688399);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(25,4.887824);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(26,4.67104);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(27,4.783347);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(28,4.931774);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(29,4.783574);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(30,5.237851);
   Zee_2bjet_dPhi_Zb_stack_3->SetEntries(3646);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dPhi_Zb_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb_stack_3->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb_stack_3,"");
   
   TH1D *Zee_2bjet_XX_dPhi_Zb_stack_4 = new TH1D("Zee_2bjet_XX_dPhi_Zb_stack_4","",30,0,3.141593);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(1,-1.503468);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(2,0.1896502);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(3,-0.9182394);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(7,-0.6069801);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(8,0.7751586);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(17,-0.8625497);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(18,-0.6899827);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(19,-1.088744);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(20,0.4368512);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(21,0.02429532);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(22,0.8960998);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(23,0.8620638);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(24,1.226654);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(25,1.40997);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(26,0.510438);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(28,0.8483086);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(29,0.9605455);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(1,1.068638);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(2,0.1896502);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(3,0.9182394);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(7,0.6069801);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(8,0.7751586);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(17,0.8625497);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(18,0.6899827);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(19,1.088744);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(20,1.249987);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(21,1.15747);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(22,0.8960998);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(23,0.8620638);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(24,0.9395924);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(25,1.006875);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(26,0.510438);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(28,1.437207);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(29,1.298931);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetEntries(29);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_dPhi_Zb_stack_4->GetXaxis()->SetRange(1,60);
   Zee_2bjet_XX_dPhi_Zb_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_Zb_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_Zb_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_Zb_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dPhi_Zb_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_Zb_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_Zb_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_Zb_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_dPhi_Zb_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dPhi_Zb_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_Zb_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_Zb_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_Zb_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_dPhi_Zb_stack_4,"");
   
   TH1D *Zee_2bjet_bX_dPhi_Zb_stack_5 = new TH1D("Zee_2bjet_bX_dPhi_Zb_stack_5","",30,0,3.141593);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(1,-1.509472);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(2,-1.079954);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(3,0.8330017);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(4,1.12254);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(5,0.1233741);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(6,0.7306689);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(8,-0.5200752);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(9,1.588947);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(10,-0.6226919);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(12,0.5753669);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(13,-0.8703483);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(14,-0.2821722);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(15,2.105817);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(16,0.8060083);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(17,2.112035);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(18,0.6515429);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(19,2.539804);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(20,0.3083605);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(21,-0.2513492);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(22,4.604549);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(23,0.5687081);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(24,1.878236);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(25,1.977021);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(26,3.008739);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(27,3.769204);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(28,-0.9199513);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(29,-1.604692);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(30,8.910008);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(1,1.074723);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(2,1.228371);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(3,0.8330017);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(4,0.7634975);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(5,1.167123);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(6,0.7306689);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(8,0.5200752);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(9,1.129267);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(10,0.6226919);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(12,0.5753669);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(13,1.011481);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(14,1.659449);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(15,1.235235);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(16,1.535899);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(17,1.528622);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(18,0.6515429);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(19,1.660863);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(20,2.116775);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(21,2.135214);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(22,2.008025);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(23,2.171437);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(24,2.314205);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(25,1.675697);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(26,2.271345);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(27,1.993032);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(28,2.70948);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(29,2.452701);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(30,3.281135);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetEntries(165);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_dPhi_Zb_stack_5->GetXaxis()->SetRange(1,60);
   Zee_2bjet_bX_dPhi_Zb_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_Zb_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_Zb_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_Zb_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dPhi_Zb_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_Zb_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_Zb_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_Zb_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_dPhi_Zb_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dPhi_Zb_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_Zb_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_Zb_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_Zb_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_dPhi_Zb_stack_5,"");
   
   TH1D *Zee_2bjet_bb_dPhi_Zb_stack_6 = new TH1D("Zee_2bjet_bb_dPhi_Zb_stack_6","",30,0,3.141593);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(1,11.40534);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(2,16.38449);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(3,3.781968);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(4,15.45949);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(5,27.78594);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(6,19.33153);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(7,16.9218);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(8,26.02807);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(9,22.50465);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(10,24.08817);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(11,29.81098);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(12,33.04926);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(13,23.49447);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(14,30.66287);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(15,26.72513);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(16,58.42597);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(17,50.02311);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(18,70.31885);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(19,68.87438);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(20,83.76857);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(21,92.36174);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(22,90.23636);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(23,142.443);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(24,175.7867);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(25,161.0692);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(26,210.5248);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(27,179.1321);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(28,205.2286);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(29,228.8765);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(30,244.6881);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(1,5.31466);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(2,5.147857);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(3,5.567989);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(4,5.542538);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(5,6.640025);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(6,6.494373);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(7,5.870843);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(8,6.712685);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(9,6.992511);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(10,6.872226);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(11,6.801752);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(12,8.088695);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(13,7.506092);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(14,8.745407);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(15,8.473255);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(16,9.405807);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(17,10.30668);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(18,10.85435);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(19,12.05447);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(20,12.83931);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(21,14.20793);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(22,15.83282);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(23,16.54212);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(24,18.1509);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(25,19.51078);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(26,20.38795);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(27,20.7321);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(28,21.27489);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(29,22.69541);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(30,22.10252);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetEntries(9701);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_dPhi_Zb_stack_6->GetXaxis()->SetRange(1,60);
   Zee_2bjet_bb_dPhi_Zb_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_Zb_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_Zb_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_Zb_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dPhi_Zb_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_Zb_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_Zb_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_Zb_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_dPhi_Zb_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dPhi_Zb_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_Zb_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_Zb_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_Zb_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_dPhi_Zb_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dPhi_Zb__467 = new TH1D("Zee_2bjet_dPhi_Zb__467","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(1,32);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(2,35);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(3,25);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(4,31);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(5,27);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(6,32);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(7,28);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(8,29);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(9,36);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(10,42);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(11,34);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(12,40);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(13,49);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(14,64);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(15,64);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(16,56);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(17,79);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(18,90);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(19,100);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(20,118);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(21,131);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(22,141);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(23,165);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(24,158);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(25,192);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(26,218);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(27,263);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(28,278);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(29,257);
   Zee_2bjet_dPhi_Zb__467->SetBinContent(30,256);
   Zee_2bjet_dPhi_Zb__467->SetBinError(1,5.656854);
   Zee_2bjet_dPhi_Zb__467->SetBinError(2,5.91608);
   Zee_2bjet_dPhi_Zb__467->SetBinError(3,5);
   Zee_2bjet_dPhi_Zb__467->SetBinError(4,5.567764);
   Zee_2bjet_dPhi_Zb__467->SetBinError(5,5.196152);
   Zee_2bjet_dPhi_Zb__467->SetBinError(6,5.656854);
   Zee_2bjet_dPhi_Zb__467->SetBinError(7,5.291503);
   Zee_2bjet_dPhi_Zb__467->SetBinError(8,5.385165);
   Zee_2bjet_dPhi_Zb__467->SetBinError(9,6);
   Zee_2bjet_dPhi_Zb__467->SetBinError(10,6.480741);
   Zee_2bjet_dPhi_Zb__467->SetBinError(11,5.830952);
   Zee_2bjet_dPhi_Zb__467->SetBinError(12,6.324555);
   Zee_2bjet_dPhi_Zb__467->SetBinError(13,7);
   Zee_2bjet_dPhi_Zb__467->SetBinError(14,8);
   Zee_2bjet_dPhi_Zb__467->SetBinError(15,8);
   Zee_2bjet_dPhi_Zb__467->SetBinError(16,7.483315);
   Zee_2bjet_dPhi_Zb__467->SetBinError(17,8.888194);
   Zee_2bjet_dPhi_Zb__467->SetBinError(18,9.486833);
   Zee_2bjet_dPhi_Zb__467->SetBinError(19,10);
   Zee_2bjet_dPhi_Zb__467->SetBinError(20,10.86278);
   Zee_2bjet_dPhi_Zb__467->SetBinError(21,11.44552);
   Zee_2bjet_dPhi_Zb__467->SetBinError(22,11.87434);
   Zee_2bjet_dPhi_Zb__467->SetBinError(23,12.84523);
   Zee_2bjet_dPhi_Zb__467->SetBinError(24,12.56981);
   Zee_2bjet_dPhi_Zb__467->SetBinError(25,13.85641);
   Zee_2bjet_dPhi_Zb__467->SetBinError(26,14.76482);
   Zee_2bjet_dPhi_Zb__467->SetBinError(27,16.21727);
   Zee_2bjet_dPhi_Zb__467->SetBinError(28,16.67333);
   Zee_2bjet_dPhi_Zb__467->SetBinError(29,16.03122);
   Zee_2bjet_dPhi_Zb__467->SetBinError(30,16);
   Zee_2bjet_dPhi_Zb__467->SetEntries(3070);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb__467->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb__467->SetLineWidth(2);
   Zee_2bjet_dPhi_Zb__467->SetMarkerStyle(20);
   Zee_2bjet_dPhi_Zb__467->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_Zb__467->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb__467->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb__467->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb__467->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb__467->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb__467->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb__467->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb__467->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb__467->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb__467->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb__467->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb__467->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb__467->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb__467->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb__467->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb_fx1467[30] = {
   0.05235988,
   0.1570796,
   0.2617994,
   0.3665191,
   0.4712389,
   0.5759587,
   0.6806784,
   0.7853982,
   0.8901179,
   0.9948377,
   1.099557,
   1.204277,
   1.308997,
   1.413717,
   1.518436,
   1.623156,
   1.727876,
   1.832596,
   1.937315,
   2.042035,
   2.146755,
   2.251475,
   2.356194,
   2.460914,
   2.565634,
   2.670354,
   2.775074,
   2.879793,
   2.984513,
   3.089233};
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb_fy1467[30] = {
   26.82847,
   28.36324,
   19.04152,
   31.36373,
   43.54899,
   34.00609,
   32.26933,
   48.76094,
   38.20697,
   40.09128,
   48.17385,
   57.56758,
   52.14918,
   56.84728,
   58.92752,
   89.50434,
   88.11208,
   105.7609,
   116.9122,
   130.6058,
   138.0612,
   158.1221,
   213.6061,
   249.1537,
   240.7499,
   286.6105,
   258.5393,
   279.9571,
   302.6399,
   336.1865};
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb_fex1467[30] = {
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988};
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb_fey1467[30] = {
   6.078686,
   5.699201,
   6.116773,
   6.007361,
   7.11525,
   6.890518,
   6.326439,
   7.321021,
   7.398164,
   7.292667,
   7.25501,
   8.589848,
   8.182163,
   9.395059,
   9.138923,
   10.0501,
   11.0313,
   11.41855,
   12.82831,
   13.6332,
   14.93815,
   16.6182,
   17.39853,
   18.95014,
   20.25403,
   21.11376,
   21.41975,
   22.08117,
   23.3927,
   22.97223};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zee_2bjet_bb_dPhi_Zb_fx1467,Graph_from_Zee_2bjet_bb_dPhi_Zb_fy1467,Graph_from_Zee_2bjet_bb_dPhi_Zb_fex1467,Graph_from_Zee_2bjet_bb_dPhi_Zb_fey1467);
   gre->SetName("Graph_from_Zee_2bjet_bb_dPhi_Zb");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467->SetMinimum(11.63227);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467->SetMaximum(393.7821);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1467);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dPhi_Zb","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_dPhi_Zb_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_dPhi_Zb_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_dPhi_Zb_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_dPhi_Zb","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.4974175,-0.2774193,3.416482,1.658065);
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
   
   TH1D *data_mc_ratio__468 = new TH1D("data_mc_ratio__468","",30,0,3.141593);
   data_mc_ratio__468->SetBinContent(1,1.192763);
   data_mc_ratio__468->SetBinContent(2,1.233992);
   data_mc_ratio__468->SetBinContent(3,1.31292);
   data_mc_ratio__468->SetBinContent(4,0.9884028);
   data_mc_ratio__468->SetBinContent(5,0.6199914);
   data_mc_ratio__468->SetBinContent(6,0.9410079);
   data_mc_ratio__468->SetBinContent(7,0.867697);
   data_mc_ratio__468->SetBinContent(8,0.5947383);
   data_mc_ratio__468->SetBinContent(9,0.9422365);
   data_mc_ratio__468->SetBinContent(10,1.047609);
   data_mc_ratio__468->SetBinContent(11,0.705777);
   data_mc_ratio__468->SetBinContent(12,0.6948355);
   data_mc_ratio__468->SetBinContent(13,0.9396122);
   data_mc_ratio__468->SetBinContent(14,1.125823);
   data_mc_ratio__468->SetBinContent(15,1.08608);
   data_mc_ratio__468->SetBinContent(16,0.625668);
   data_mc_ratio__468->SetBinContent(17,0.8965853);
   data_mc_ratio__468->SetBinContent(18,0.8509759);
   data_mc_ratio__468->SetBinContent(19,0.8553429);
   data_mc_ratio__468->SetBinContent(20,0.9034822);
   data_mc_ratio__468->SetBinContent(21,0.9488549);
   data_mc_ratio__468->SetBinContent(22,0.8917157);
   data_mc_ratio__468->SetBinContent(23,0.77245);
   data_mc_ratio__468->SetBinContent(24,0.6341468);
   data_mc_ratio__468->SetBinContent(25,0.7975081);
   data_mc_ratio__468->SetBinContent(26,0.7606141);
   data_mc_ratio__468->SetBinContent(27,1.017253);
   data_mc_ratio__468->SetBinContent(28,0.9930094);
   data_mc_ratio__468->SetBinContent(29,0.8491941);
   data_mc_ratio__468->SetBinContent(30,0.7614822);
   data_mc_ratio__468->SetBinError(1,0.2108527);
   data_mc_ratio__468->SetBinError(2,0.2085826);
   data_mc_ratio__468->SetBinError(3,0.2625841);
   data_mc_ratio__468->SetBinError(4,0.1775224);
   data_mc_ratio__468->SetBinError(5,0.1193174);
   data_mc_ratio__468->SetBinError(6,0.1663483);
   data_mc_ratio__468->SetBinError(7,0.1639793);
   data_mc_ratio__468->SetBinError(8,0.1104401);
   data_mc_ratio__468->SetBinError(9,0.1570394);
   data_mc_ratio__468->SetBinError(10,0.1616496);
   data_mc_ratio__468->SetBinError(11,0.1210398);
   data_mc_ratio__468->SetBinError(12,0.1098631);
   data_mc_ratio__468->SetBinError(13,0.1342303);
   data_mc_ratio__468->SetBinError(14,0.1407279);
   data_mc_ratio__468->SetBinError(15,0.13576);
   data_mc_ratio__468->SetBinError(16,0.0836084);
   data_mc_ratio__468->SetBinError(17,0.1008737);
   data_mc_ratio__468->SetBinError(18,0.08970074);
   data_mc_ratio__468->SetBinError(19,0.08553429);
   data_mc_ratio__468->SetBinError(20,0.08317227);
   data_mc_ratio__468->SetBinError(21,0.08290183);
   data_mc_ratio__468->SetBinError(22,0.07509601);
   data_mc_ratio__468->SetBinError(23,0.06013515);
   data_mc_ratio__468->SetBinError(24,0.05045001);
   data_mc_ratio__468->SetBinError(25,0.05755519);
   data_mc_ratio__468->SetBinError(26,0.05151529);
   data_mc_ratio__468->SetBinError(27,0.06272653);
   data_mc_ratio__468->SetBinError(28,0.05955674);
   data_mc_ratio__468->SetBinError(29,0.05297127);
   data_mc_ratio__468->SetBinError(30,0.04759264);
   data_mc_ratio__468->SetMinimum(0.4);
   data_mc_ratio__468->SetMaximum(1.6);
   data_mc_ratio__468->SetEntries(608.3783);
   data_mc_ratio__468->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__468->SetLineColor(ci);
   data_mc_ratio__468->SetLineWidth(2);
   data_mc_ratio__468->SetMarkerStyle(20);
   data_mc_ratio__468->SetMarkerSize(1.2);
   data_mc_ratio__468->GetXaxis()->SetTitle("dPhi_{Zb}");
   data_mc_ratio__468->GetXaxis()->SetRange(1,31);
   data_mc_ratio__468->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__468->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__468->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__468->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__468->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__468->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__468->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__468->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__468->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__468->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__468->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__468->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__468->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__468->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__468->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__468->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__468->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1468[30] = {
   0.05235988,
   0.1570796,
   0.2617994,
   0.3665191,
   0.4712389,
   0.5759587,
   0.6806784,
   0.7853982,
   0.8901179,
   0.9948377,
   1.099557,
   1.204277,
   1.308997,
   1.413717,
   1.518436,
   1.623156,
   1.727876,
   1.832596,
   1.937315,
   2.042035,
   2.146755,
   2.251475,
   2.356194,
   2.460914,
   2.565634,
   2.670354,
   2.775074,
   2.879793,
   2.984513,
   3.089233};
   Double_t Graph_from_mc_statistical_error_fy1468[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1468[30] = {
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988};
   Double_t Graph_from_mc_statistical_error_fey1468[30] = {
   0.2265759,
   0.2009362,
   0.3212334,
   0.1915384,
   0.163385,
   0.202626,
   0.1960511,
   0.1501411,
   0.1936339,
   0.1819016,
   0.1506006,
   0.1492133,
   0.1568992,
   0.1652684,
   0.1550875,
   0.1122862,
   0.1251962,
   0.1079657,
   0.1097261,
   0.1043843,
   0.1081995,
   0.1050973,
   0.08145146,
   0.07605803,
   0.08412893,
   0.07366706,
   0.08284911,
   0.07887343,
   0.07729549,
   0.06833182};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1468,Graph_from_mc_statistical_error_fy1468,Graph_from_mc_statistical_error_fex1468,Graph_from_mc_statistical_error_fey1468);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1468 = new TH1F("Graph_Graph_from_mc_statistical_error1468","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1468->SetMinimum(0.6145199);
   Graph_Graph_from_mc_statistical_error1468->SetMaximum(1.38548);
   Graph_Graph_from_mc_statistical_error1468->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1468->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1468->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1468->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1468->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1468);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->Modified();
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zee_17_amcnlo->SetSelected(dPhi_Zb_Z_2bjet_Zee_17_amcnlo);
}

void pt_lep1_Z_2bjet_Zmm_All_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_2bjet_Zmm_All_amcnlo/pt_lep1_Z_2bjet_Zmm_All_amcnlo
//=========  (Thu Jan 14 10:42:55 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_2bjet_Zmm_All_amcnlo = new TCanvas("pt_lep1_Z_2bjet_Zmm_All_amcnlo", "pt_lep1_Z_2bjet_Zmm_All_amcnlo",0,0,600,600);
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->SetFillColor(0);
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->SetBorderMode(0);
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->SetBorderSize(2);
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-11.5978,210.4839,11596.2);
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
   st->SetMaximum(9938.499);
   
   TH1F *st_stack_264 = new TH1F("st_stack_264","",40,0,200);
   st_stack_264->SetMinimum(0.01);
   st_stack_264->SetMaximum(10435.42);
   st_stack_264->SetDirectory(0);
   st_stack_264->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_264->SetLineColor(ci);
   st_stack_264->GetXaxis()->SetRange(1,40);
   st_stack_264->GetXaxis()->SetLabelFont(42);
   st_stack_264->GetXaxis()->SetLabelSize(0.035);
   st_stack_264->GetXaxis()->SetTitleSize(0.035);
   st_stack_264->GetXaxis()->SetTitleFont(42);
   st_stack_264->GetYaxis()->SetTitle("Events/5.0");
   st_stack_264->GetYaxis()->SetLabelFont(42);
   st_stack_264->GetYaxis()->SetLabelSize(0.05);
   st_stack_264->GetYaxis()->SetTitleSize(0.057);
   st_stack_264->GetYaxis()->SetTitleOffset(1.2);
   st_stack_264->GetYaxis()->SetTitleFont(42);
   st_stack_264->GetZaxis()->SetLabelFont(42);
   st_stack_264->GetZaxis()->SetLabelSize(0.035);
   st_stack_264->GetZaxis()->SetTitleSize(0.035);
   st_stack_264->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_264);
   
   
   TH1D *Zmm_2bjet_pt_lep1_all_stack_1 = new TH1D("Zmm_2bjet_pt_lep1_all_stack_1","",40,0,200);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(6,35.36014);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(7,45.76437);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(8,38.19845);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(9,32.27957);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(10,19.54103);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(11,15.38598);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(12,4.391595);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(13,4.374984);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(14,1.200806);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(15,1.328875);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(16,0.3708386);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(18,1.040981);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinContent(19,0.2606314);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(6,2.931112);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(7,3.443922);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(8,3.075406);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(9,2.895726);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(10,2.256166);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(11,1.959521);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(12,1.032372);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(13,1.000579);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(14,0.5270117);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(15,0.5029507);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(16,0.2721734);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(18,0.4442599);
   Zmm_2bjet_pt_lep1_all_stack_1->SetBinError(19,0.2056113);
   Zmm_2bjet_pt_lep1_all_stack_1->SetEntries(971);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_pt_lep1_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_all_stack_1->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_all_stack_1,"");
   
   TH1D *Zmm_2bjet_pt_lep1_all_stack_2 = new TH1D("Zmm_2bjet_pt_lep1_all_stack_2","",40,0,200);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(6,81.7079);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(7,95.13301);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(8,84.27308);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(9,70.5063);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(10,34.1522);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(11,27.73121);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(12,12.2899);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(13,10.53304);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(14,9.228514);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(15,7.973635);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(16,4.417783);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(17,3.653654);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(18,2.363614);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(19,3.236701);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(20,1.432891);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(21,1.558739);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(22,1.919105);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(23,0.3379745);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(24,0.2392898);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(26,0.8457074);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(28,0.2810704);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(34,0.3772658);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(35,0.284825);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(39,0.2956069);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinContent(41,0.3795649);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(6,6.583017);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(7,6.226557);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(8,5.865579);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(9,5.492874);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(10,3.670425);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(11,3.684556);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(12,2.280965);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(13,2.043411);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(14,1.98888);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(15,1.858671);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(16,1.37309);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(17,1.393209);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(18,0.9581321);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(19,1.188219);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(20,0.699913);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(21,0.9032206);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(22,0.9481725);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(23,0.3379745);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(24,0.2392898);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(26,0.6250633);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(28,0.2810704);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(34,0.3772658);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(35,0.284825);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(39,0.2956069);
   Zmm_2bjet_pt_lep1_all_stack_2->SetBinError(41,0.3795649);
   Zmm_2bjet_pt_lep1_all_stack_2->SetEntries(1245);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_pt_lep1_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_all_stack_2->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_all_stack_2,"");
   
   TH1D *Zmm_2bjet_pt_lep1_all_stack_3 = new TH1D("Zmm_2bjet_pt_lep1_all_stack_3","",40,0,200);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(6,1529.037);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(7,1716.137);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(8,1583.76);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(9,1262.861);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(10,869.3411);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(11,506.2687);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(12,276.7162);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(13,136.9226);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(14,73.45546);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(15,35.88161);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(16,17.05816);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(17,10.84546);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(18,3.961844);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(19,3.026301);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(20,1.950019);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(21,1.424323);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(22,0.8080911);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(23,0.399548);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(24,0.2075842);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(25,0.1211102);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(26,0.3931245);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinContent(29,0.01802203);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(6,17.44806);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(7,18.56214);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(8,17.8849);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(9,15.98568);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(10,13.22489);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(11,10.01961);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(12,7.541053);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(13,5.10238);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(14,3.767602);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(15,2.771961);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(16,1.795768);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(17,1.626163);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(18,0.8575997);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(19,0.7834279);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(20,0.6913319);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(21,0.6290962);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(22,0.4783367);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(23,0.2600485);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(24,0.2075842);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(25,0.1211102);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(26,0.3931245);
   Zmm_2bjet_pt_lep1_all_stack_3->SetBinError(29,0.01573119);
   Zmm_2bjet_pt_lep1_all_stack_3->SetEntries(64896);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_pt_lep1_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_all_stack_3->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_all_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_pt_lep1_all_stack_4 = new TH1D("Zmm_2bjet_XX_pt_lep1_all_stack_4","",40,0,200);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(6,36.11276);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(7,76.74559);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(8,114.38);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(9,114.5957);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(10,22.13206);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(11,1.610032);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(12,0.8451552);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(13,2.934917);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(14,0.8855116);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(15,5.93207);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(16,0.8182912);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(17,1.533974);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(18,0.5390131);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(20,0.5596839);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(22,-0.1571164);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(23,1.647871);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(24,-0.3449834);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(25,-0.555923);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(30,0.07709415);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinContent(41,-1.098424);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(6,17.21008);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(7,22.42613);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(8,28.86003);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(9,33.50522);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(10,11.94384);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(11,2.274355);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(12,2.150304);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(13,2.461153);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(14,2.098691);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(15,3.407907);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(16,1.009735);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(17,1.533974);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(18,0.5390131);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(20,0.5596839);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(22,0.7694699);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(23,1.220717);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(24,0.3449834);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(25,0.555923);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(30,0.07709415);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetBinError(41,1.098424);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetEntries(413);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_pt_lep1_all_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_pt_lep1_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_pt_lep1_all_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_pt_lep1_all_stack_5 = new TH1D("Zmm_2bjet_bX_pt_lep1_all_stack_5","",40,0,200);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(6,53.64075);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(7,60.63326);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(8,65.6133);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(9,49.01676);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(10,51.82757);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(11,17.53136);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(12,4.834317);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(13,9.481585);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(14,2.204408);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(15,9.264197);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(16,1.007168);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(17,3.044935);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(18,2.414037);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(19,2.607816);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(20,3.187581);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(21,1.35063);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(22,1.422742);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(23,0.7019881);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(24,1.243538);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(25,1.409999);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(26,0.6037653);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(27,-0.471484);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(28,0.4680267);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(37,-0.5004859);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(38,-1.615469);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(39,-0.5409137);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinContent(41,-0.7361746);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(6,13.89029);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(7,14.08661);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(8,15.00224);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(9,12.52219);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(10,10.06969);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(11,7.775417);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(12,5.240821);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(13,5.637336);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(14,2.774959);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(15,4.801725);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(16,2.86212);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(17,2.788204);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(18,2.01269);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(19,1.53174);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(20,1.907206);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(21,1.941831);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(22,2.105646);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(23,1.173443);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(24,0.7367944);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(25,1.756008);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(26,0.6037653);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(27,0.8760797);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(28,0.4680267);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(37,0.5004859);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(38,1.199817);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(39,0.5409137);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetBinError(41,0.7361746);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetEntries(1366);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_pt_lep1_all_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_pt_lep1_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_pt_lep1_all_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_pt_lep1_all_stack_6 = new TH1D("Zmm_2bjet_bb_pt_lep1_all_stack_6","",40,0,200);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(6,3312.585);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(7,3471.761);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(8,3330.158);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(9,2587.617);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(10,1581.56);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(11,1004.156);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(12,568.5207);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(13,377.01);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(14,294.9015);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(15,191.8302);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(16,146.943);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(17,90.29864);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(18,68.99179);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(19,37.63226);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(20,41.56794);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(21,45.62748);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(22,38.83342);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(23,18.9646);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(24,17.78856);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(25,12.94368);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(26,8.927943);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(27,11.03491);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(28,4.493595);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(29,3.971344);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(30,2.382);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(31,8.389719);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(32,2.167684);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(33,2.736493);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(34,0.9297408);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(35,1.342239);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(36,1.528506);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(37,0.4635978);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(38,-0.1131248);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(39,2.357696);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(40,1.470196);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinContent(41,4.987842);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(6,94.74947);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(7,97.71376);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(8,94.86294);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(9,83.81881);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(10,81.11589);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(11,50.11236);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(12,38.94209);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(13,31.76454);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(14,27.16705);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(15,22.36848);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(16,19.18995);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(17,15.42972);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(18,14.04628);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(19,11.66037);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(20,9.654255);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(21,9.20203);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(22,8.134621);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(23,7.063938);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(24,5.985608);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(25,4.678942);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(26,4.529677);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(27,4.366035);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(28,2.821389);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(29,3.500713);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(30,2.349035);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(31,2.963557);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(32,2.086722);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(33,1.419129);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(34,1.033295);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(35,1.676227);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(36,1.259766);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(37,1.228841);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(38,0.1548314);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(39,1.667411);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(40,1.470196);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetBinError(41,2.11922);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetEntries(67424);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_pt_lep1_all_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_pt_lep1_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_pt_lep1_all_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_pt_lep1_all__527 = new TH1D("Zmm_2bjet_pt_lep1_all__527","",40,0,200);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(6,4224);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(7,4622);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(8,4456);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(9,3568);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(10,2141);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(11,1310);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(12,777);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(13,534);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(14,338);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(15,194);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(16,156);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(17,107);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(18,84);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(19,53);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(20,40);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(21,30);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(22,32);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(23,30);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(24,18);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(25,14);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(26,16);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(27,25);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(28,6);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(29,5);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(30,2);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(31,5);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(32,3);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(33,3);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(34,1);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(36,2);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(37,2);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(38,2);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(39,2);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(40,1);
   Zmm_2bjet_pt_lep1_all__527->SetBinContent(41,4);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(6,64.99231);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(7,67.98529);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(8,66.75328);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(9,59.73274);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(10,46.27094);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(11,36.19392);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(12,27.87472);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(13,23.10844);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(14,18.38478);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(15,13.92839);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(16,12.49);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(17,10.34408);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(18,9.165151);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(19,7.28011);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(20,6.324555);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(21,5.477226);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(22,5.656854);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(23,5.477226);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(24,4.242641);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(25,3.741657);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(26,4);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(27,5);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(28,2.44949);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(29,2.236068);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(30,1.414214);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(31,2.236068);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(32,1.732051);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(33,1.732051);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(34,1);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(36,1.414214);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(37,1.414214);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(38,1.414214);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(39,1.414214);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(40,1);
   Zmm_2bjet_pt_lep1_all__527->SetBinError(41,2);
   Zmm_2bjet_pt_lep1_all__527->SetEntries(22807);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_all__527->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_all__527->SetLineWidth(2);
   Zmm_2bjet_pt_lep1_all__527->SetMarkerStyle(20);
   Zmm_2bjet_pt_lep1_all__527->SetMarkerSize(1.2);
   Zmm_2bjet_pt_lep1_all__527->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_all__527->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all__527->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all__527->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all__527->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all__527->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all__527->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all__527->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all__527->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_all__527->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all__527->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_all__527->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_all__527->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_all__527->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_all__527->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep1_all_fx1527[40] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep1_all_fy1527[40] = {
   0,
   0,
   0,
   0,
   0,
   5048.444,
   5466.175,
   5216.383,
   4116.876,
   2578.554,
   1572.684,
   867.5979,
   541.2572,
   381.8762,
   252.2106,
   170.6152,
   109.3767,
   79.31128,
   46.76371,
   48.69812,
   49.96117,
   42.82624,
   22.05198,
   19.13399,
   13.91887,
   10.77054,
   10.56343,
   5.242692,
   3.989366,
   2.459094,
   8.389719,
   2.167684,
   2.736493,
   1.307007,
   1.627064,
   1.528506,
   -0.0368881,
   -1.728594,
   2.112389,
   1.470196};
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep1_all_fex1527[40] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep1_all_fey1527[40] = {
   0,
   0,
   0,
   0,
   0,
   99.1108,
   103.1723,
   102.0817,
   92.73132,
   83.76933,
   51.91037,
   40.14614,
   32.83342,
   27.72331,
   23.37543,
   19.56144,
   15.89933,
   14.265,
   11.84814,
   9.905712,
   9.468877,
   8.504453,
   7.276551,
   6.048945,
   5.029889,
   4.629012,
   4.453064,
   2.873723,
   3.500748,
   2.350299,
   2.963557,
   2.086722,
   1.419129,
   1.100012,
   1.700254,
   1.259766,
   1.326852,
   1.209766,
   1.777704,
   1.470196};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zmm_2bjet_bb_pt_lep1_all_fx1527,Graph_from_Zmm_2bjet_bb_pt_lep1_all_fy1527,Graph_from_Zmm_2bjet_bb_pt_lep1_all_fex1527,Graph_from_Zmm_2bjet_bb_pt_lep1_all_fey1527);
   gre->SetName("Graph_from_Zmm_2bjet_bb_pt_lep1_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527","",100,0,220);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527->SetMinimum(-560.1669);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527->SetMaximum(6126.575);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_pt_lep1_all1527);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_pt_lep1_all","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_pt_lep1_all_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_pt_lep1_all_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_pt_lep1_all_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_pt_lep1_all","MC unc. (stat.)","fl");

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
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__528 = new TH1D("data_mc_ratio__528","",40,0,200);
   data_mc_ratio__528->SetBinContent(6,0.8366935);
   data_mc_ratio__528->SetBinContent(7,0.8455639);
   data_mc_ratio__528->SetBinContent(8,0.8542318);
   data_mc_ratio__528->SetBinContent(9,0.8666765);
   data_mc_ratio__528->SetBinContent(10,0.8303103);
   data_mc_ratio__528->SetBinContent(11,0.8329711);
   data_mc_ratio__528->SetBinContent(12,0.8955762);
   data_mc_ratio__528->SetBinContent(13,0.986592);
   data_mc_ratio__528->SetBinContent(14,0.8851036);
   data_mc_ratio__528->SetBinContent(15,0.7691985);
   data_mc_ratio__528->SetBinContent(16,0.9143382);
   data_mc_ratio__528->SetBinContent(17,0.9782709);
   data_mc_ratio__528->SetBinContent(18,1.059118);
   data_mc_ratio__528->SetBinContent(19,1.133357);
   data_mc_ratio__528->SetBinContent(20,0.821387);
   data_mc_ratio__528->SetBinContent(21,0.6004663);
   data_mc_ratio__528->SetBinContent(22,0.7472055);
   data_mc_ratio__528->SetBinContent(23,1.360422);
   data_mc_ratio__528->SetBinContent(24,0.9407344);
   data_mc_ratio__528->SetBinContent(25,1.005829);
   data_mc_ratio__528->SetBinContent(26,1.485534);
   data_mc_ratio__528->SetBinContent(27,2.366655);
   data_mc_ratio__528->SetBinContent(28,1.14445);
   data_mc_ratio__528->SetBinContent(29,1.253332);
   data_mc_ratio__528->SetBinContent(30,0.8133078);
   data_mc_ratio__528->SetBinContent(31,0.5959675);
   data_mc_ratio__528->SetBinContent(32,1.383966);
   data_mc_ratio__528->SetBinContent(33,1.096294);
   data_mc_ratio__528->SetBinContent(34,0.7651071);
   data_mc_ratio__528->SetBinContent(36,1.308467);
   data_mc_ratio__528->SetBinContent(37,-54.21803);
   data_mc_ratio__528->SetBinContent(38,-1.15701);
   data_mc_ratio__528->SetBinContent(39,0.9467951);
   data_mc_ratio__528->SetBinContent(40,0.6801816);
   data_mc_ratio__528->SetBinContent(41,1.132244);
   data_mc_ratio__528->SetBinError(6,0.01287373);
   data_mc_ratio__528->SetBinError(7,0.01243745);
   data_mc_ratio__528->SetBinError(8,0.01279685);
   data_mc_ratio__528->SetBinError(9,0.01450924);
   data_mc_ratio__528->SetBinError(10,0.01794453);
   data_mc_ratio__528->SetBinError(11,0.02301412);
   data_mc_ratio__528->SetBinError(12,0.03212862);
   data_mc_ratio__528->SetBinError(13,0.04269401);
   data_mc_ratio__528->SetBinError(14,0.04814329);
   data_mc_ratio__528->SetBinError(15,0.05522523);
   data_mc_ratio__528->SetBinError(16,0.07320564);
   data_mc_ratio__528->SetBinError(17,0.09457302);
   data_mc_ratio__528->SetBinError(18,0.1155592);
   data_mc_ratio__528->SetBinError(19,0.1556786);
   data_mc_ratio__528->SetBinError(20,0.1298727);
   data_mc_ratio__528->SetBinError(21,0.1096296);
   data_mc_ratio__528->SetBinError(22,0.1320885);
   data_mc_ratio__528->SetBinError(23,0.2483779);
   data_mc_ratio__528->SetBinError(24,0.2217332);
   data_mc_ratio__528->SetBinError(25,0.2688191);
   data_mc_ratio__528->SetBinError(26,0.3713834);
   data_mc_ratio__528->SetBinError(27,0.4733311);
   data_mc_ratio__528->SetBinError(28,0.4672198);
   data_mc_ratio__528->SetBinError(29,0.5605072);
   data_mc_ratio__528->SetBinError(30,0.5750954);
   data_mc_ratio__528->SetBinError(31,0.2665248);
   data_mc_ratio__528->SetBinError(32,0.7990329);
   data_mc_ratio__528->SetBinError(33,0.6329455);
   data_mc_ratio__528->SetBinError(34,0.7651071);
   data_mc_ratio__528->SetBinError(36,0.9252261);
   data_mc_ratio__528->SetBinError(37,38.33794);
   data_mc_ratio__528->SetBinError(38,0.8181295);
   data_mc_ratio__528->SetBinError(39,0.6694852);
   data_mc_ratio__528->SetBinError(40,0.6801816);
   data_mc_ratio__528->SetBinError(41,0.9880284);
   data_mc_ratio__528->SetMinimum(0.4);
   data_mc_ratio__528->SetMaximum(1.6);
   data_mc_ratio__528->SetEntries(23.37094);
   data_mc_ratio__528->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__528->SetLineColor(ci);
   data_mc_ratio__528->SetLineWidth(2);
   data_mc_ratio__528->SetMarkerStyle(20);
   data_mc_ratio__528->SetMarkerSize(1.2);
   data_mc_ratio__528->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__528->GetXaxis()->SetRange(1,40);
   data_mc_ratio__528->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__528->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__528->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__528->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__528->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__528->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__528->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__528->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__528->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__528->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__528->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__528->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__528->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__528->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__528->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__528->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__528->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1528[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1528[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1528[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1528[40] = {
   0,
   0,
   0,
   0,
   0,
   0.01963195,
   0.01887468,
   0.01956945,
   0.02252468,
   0.03248694,
   0.03300751,
   0.04627275,
   0.06066141,
   0.07259762,
   0.09268218,
   0.1146524,
   0.1453631,
   0.1798609,
   0.2533619,
   0.2034106,
   0.1895247,
   0.1985804,
   0.3299726,
   0.3161361,
   0.361372,
   0.4297846,
   0.4215547,
   0.5481389,
   0.87752,
   0.9557584,
   0.3532367,
   0.9626506,
   0.5185941,
   0.8416273,
   1.044983,
   0.8241816,
   0,
   0,
   0.8415608,
   1};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1528,Graph_from_mc_statistical_error_fy1528,Graph_from_mc_statistical_error_fex1528,Graph_from_mc_statistical_error_fey1528);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1528 = new TH1F("Graph_Graph_from_mc_statistical_error1528","",100,0,220);
   Graph_Graph_from_mc_statistical_error1528->SetMinimum(-0.2539792);
   Graph_Graph_from_mc_statistical_error1528->SetMaximum(2.253979);
   Graph_Graph_from_mc_statistical_error1528->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1528->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1528->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1528->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1528->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1528->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1528->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1528->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1528->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1528->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1528->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1528->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1528->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1528->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1528->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1528->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1528);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->cd();
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->Modified();
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->cd();
   pt_lep1_Z_2bjet_Zmm_All_amcnlo->SetSelected(pt_lep1_Z_2bjet_Zmm_All_amcnlo);
}

void dPhi_2b_Z_2bjet_Zmm_17_amcnlo()
{
//=========Macro generated from canvas: dPhi_2b_Z_2bjet_Zmm_17_amcnlo/dPhi_2b_Z_2bjet_Zmm_17_amcnlo
//=========  (Thu Jan 14 10:43:05 2021) by ROOT version 6.14/09
   TCanvas *dPhi_2b_Z_2bjet_Zmm_17_amcnlo = new TCanvas("dPhi_2b_Z_2bjet_Zmm_17_amcnlo", "dPhi_2b_Z_2bjet_Zmm_17_amcnlo",0,0,600,600);
   dPhi_2b_Z_2bjet_Zmm_17_amcnlo->SetHighLightColor(2);
   dPhi_2b_Z_2bjet_Zmm_17_amcnlo->Range(0,0,1,1);
   dPhi_2b_Z_2bjet_Zmm_17_amcnlo->SetFillColor(0);
   dPhi_2b_Z_2bjet_Zmm_17_amcnlo->SetFillStyle(4000);
   dPhi_2b_Z_2bjet_Zmm_17_amcnlo->SetBorderMode(0);
   dPhi_2b_Z_2bjet_Zmm_17_amcnlo->SetBorderSize(2);
   dPhi_2b_Z_2bjet_Zmm_17_amcnlo->SetFrameFillStyle(1000);
   dPhi_2b_Z_2bjet_Zmm_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4813718,-1.295524,3.306273,1304.229);
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
   st->SetMaximum(1117.787);
   Double_t xAxis46[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1F *st_stack_314 = new TH1F("st_stack_314","",31, xAxis46);
   st_stack_314->SetMinimum(0.01);
   st_stack_314->SetMaximum(1173.676);
   st_stack_314->SetDirectory(0);
   st_stack_314->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_314->SetLineColor(ci);
   st_stack_314->GetXaxis()->SetRange(1,31);
   st_stack_314->GetXaxis()->SetLabelFont(42);
   st_stack_314->GetXaxis()->SetLabelSize(0.035);
   st_stack_314->GetXaxis()->SetTitleSize(0.035);
   st_stack_314->GetXaxis()->SetTitleFont(42);
   st_stack_314->GetYaxis()->SetTitle("Events/0.10000000149");
   st_stack_314->GetYaxis()->SetLabelFont(42);
   st_stack_314->GetYaxis()->SetLabelSize(0.05);
   st_stack_314->GetYaxis()->SetTitleSize(0.057);
   st_stack_314->GetYaxis()->SetTitleOffset(1.2);
   st_stack_314->GetYaxis()->SetTitleFont(42);
   st_stack_314->GetZaxis()->SetLabelFont(42);
   st_stack_314->GetZaxis()->SetLabelSize(0.035);
   st_stack_314->GetZaxis()->SetTitleSize(0.035);
   st_stack_314->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_314);
   
   Double_t xAxis47[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_dPhi_2b_stack_1 = new TH1D("Zmm_2bjet_dPhi_2b_stack_1","",31, xAxis47);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(1,1.85926);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(2,0.6567625);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(3,0.6025159);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(4,2.168491);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(5,0.5379323);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(6,1.70546);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(7,1.942006);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(8,1.235981);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(9,1.188979);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(10,2.340668);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(11,1.856868);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(12,0.5346392);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(13,1.631766);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(14,1.007577);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(15,1.243966);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(16,0.8030121);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(17,1.613187);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(18,2.413216);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(19,2.107232);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(20,1.009433);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(21,2.678685);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(22,2.535538);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(23,3.0118);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(24,1.773294);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(25,2.430723);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(26,1.666225);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(27,2.004101);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(28,2.916974);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(29,2.503982);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(30,3.494376);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinContent(31,5.927425);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(1,0.5768001);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(2,0.3342531);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(3,0.3206374);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(4,0.6484612);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(5,0.2674124);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(6,0.5790373);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(7,0.6192683);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(8,0.4758124);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(9,0.4429028);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(10,0.69118);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(11,0.5929129);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(12,0.3135948);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(13,0.5694133);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(14,0.4517765);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(15,0.4716566);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(16,0.3931015);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(17,0.573675);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(18,0.6747192);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(19,0.6424243);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(20,0.4393494);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(21,0.7083501);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(22,0.6928814);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(23,0.7836634);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(24,0.5954097);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(25,0.6575296);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(26,0.5861983);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(27,0.5919992);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(28,0.743587);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(29,0.6824289);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(30,1.24661);
   Zmm_2bjet_dPhi_2b_stack_1->SetBinError(31,1.24349);
   Zmm_2bjet_dPhi_2b_stack_1->SetEntries(345);

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
   Double_t xAxis48[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_dPhi_2b_stack_2 = new TH1D("Zmm_2bjet_dPhi_2b_stack_2","",31, xAxis48);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(1,1.65321);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(2,1.053413);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(3,1.429528);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(4,1.160461);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(5,2.710381);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(6,1.990463);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(7,3.380798);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(8,3.394561);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(9,4.939318);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(10,3.608151);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(11,4.454655);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(12,5.462608);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(13,3.382291);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(14,6.105538);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(15,5.770247);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(16,4.301218);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(17,2.299012);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(18,4.667963);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(19,5.700111);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(20,4.458611);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(21,4.180187);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(22,4.808658);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(23,6.292646);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(24,7.27192);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(25,6.452375);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(26,5.239069);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(27,5.338135);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(28,6.820657);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(29,3.82959);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(30,8.341086);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinContent(31,6.201536);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(1,0.7515816);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(2,0.6292819);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(3,0.7278689);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(4,0.6372698);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(5,0.9337147);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(6,0.8207697);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(7,1.302315);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(8,1.08034);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(9,1.320655);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(10,1.109505);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(11,1.253102);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(12,1.334944);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(13,1.079829);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(14,1.426301);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(15,1.371964);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(16,1.198903);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(17,0.8755);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(18,1.308155);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(19,1.534632);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(20,1.207419);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(21,1.213694);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(22,1.280585);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(23,1.440462);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(24,1.771002);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(25,1.460757);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(26,1.340187);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(27,1.315564);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(28,1.577285);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(29,1.118668);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(30,1.693134);
   Zmm_2bjet_dPhi_2b_stack_2->SetBinError(31,1.489927);
   Zmm_2bjet_dPhi_2b_stack_2->SetEntries(434);

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
   Double_t xAxis49[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_dPhi_2b_stack_3 = new TH1D("Zmm_2bjet_dPhi_2b_stack_3","",31, xAxis49);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(1,30.91971);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(2,32.47018);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(3,29.94848);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(4,34.53355);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(5,39.18151);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(6,38.95791);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(7,49.79921);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(8,45.85113);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(9,41.04701);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(10,54.84828);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(11,52.02075);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(12,58.60787);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(13,55.15108);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(14,59.68442);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(15,57.45069);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(16,61.81801);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(17,74.79212);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(18,72.48195);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(19,77.37927);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(20,84.59065);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(21,90.1167);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(22,89.02829);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(23,105.9433);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(24,106.3612);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(25,100.684);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(26,116.6247);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(27,99.69584);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(28,119.4008);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(29,135.9516);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(30,136.592);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinContent(31,213.6218);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(1,3.47257);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(2,3.528962);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(3,3.338524);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(4,3.670453);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(5,3.879032);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(6,3.889207);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(7,4.403981);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(8,4.207114);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(9,4.047547);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(10,4.606624);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(11,4.494912);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(12,4.891648);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(13,4.689688);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(14,4.785886);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(15,4.757568);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(16,4.866038);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(17,5.397239);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(18,5.306318);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(19,5.49416);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(20,5.731508);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(21,5.999422);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(22,5.852999);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(23,6.39997);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(24,6.440541);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(25,6.204415);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(26,6.733613);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(27,6.224877);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(28,6.79026);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(29,7.320799);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(30,7.305761);
   Zmm_2bjet_dPhi_2b_stack_3->SetBinError(31,9.054501);
   Zmm_2bjet_dPhi_2b_stack_3->SetEntries(6946);

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
   Double_t xAxis50[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_XX_dPhi_2b_stack_4 = new TH1D("Zmm_2bjet_XX_dPhi_2b_stack_4","",31, xAxis50);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(1,0.07597545);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(2,1.373269);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(3,0.9431172);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(4,6.699482);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(5,0.7289746);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(6,1.788922);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(7,0.7218086);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(8,-3.663774);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(9,-3.657951);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(10,1.403895);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(11,0.4747015);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(12,-0.5981839);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(13,0.4672706);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(14,3.644699);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(15,-1.538124);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(16,0.8566616);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(18,0.07866175);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(19,-0.9540327);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(20,2.774842);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(21,-1.107725);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(22,1.610229);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(24,-0.6484317);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(25,4.130367);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(26,3.160089);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(27,8.789933);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(28,5.202069);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(29,1.525184);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(30,11.13394);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinContent(31,10.53127);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(1,1.359654);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(2,0.9883973);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(3,0.9431172);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(4,4.306897);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(5,0.9764654);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(6,1.264959);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(7,0.7218086);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(8,2.575188);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(9,1.841682);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(10,0.99271);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(11,0.4747015);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(12,0.5981839);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(13,1.179322);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(14,2.304459);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(15,1.123628);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(16,0.8566616);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(18,0.07866175);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(19,0.6999675);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(20,3.141367);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(21,3.991516);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(22,1.151885);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(24,1.70839);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(25,2.075006);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(26,3.388709);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(27,4.464902);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(28,5.421201);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(29,1.407699);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(30,5.92205);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetBinError(31,5.875717);
   Zmm_2bjet_XX_dPhi_2b_stack_4->SetEntries(108);

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
   Double_t xAxis51[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_bX_dPhi_2b_stack_5 = new TH1D("Zmm_2bjet_bX_dPhi_2b_stack_5","",31, xAxis51);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(1,-0.4754469);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(2,0.002027901);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(3,5.342873);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(4,2.040955);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(5,1.683321);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(6,6.041561);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(7,1.513946);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(8,3.667024);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(9,-0.615077);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(10,3.236665);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(11,6.58013);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(12,1.194693);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(13,2.451914);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(14,1.426588);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(15,5.410745);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(16,1.73822);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(17,5.693364);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(18,-1.260088);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(19,-0.2830248);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(20,4.605718);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(21,0.9031671);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(22,2.89993);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(23,2.341743);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(24,4.434518);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(25,3.442325);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(26,-1.472309);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(27,0.8869814);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(28,9.956819);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(29,5.508129);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(30,6.096357);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinContent(31,1.297474);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(1,2.04607);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(2,0.851271);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(3,2.814474);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(4,2.11311);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(5,2.048907);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(6,2.645147);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(7,1.666815);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(8,1.667528);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(9,2.013002);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(10,2.519438);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(11,2.374557);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(12,1.799338);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(13,2.060953);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(14,1.946005);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(15,2.431153);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(16,2.225353);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(17,2.420318);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(18,2.735885);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(19,2.782652);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(20,2.355467);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(21,1.903107);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(22,2.760413);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(23,2.594352);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(24,2.455889);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(25,3.29973);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(26,2.392114);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(27,2.203121);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(28,3.186889);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(29,5.264747);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(30,3.624549);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetBinError(31,4.305203);
   Zmm_2bjet_bX_dPhi_2b_stack_5->SetEntries(333);

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
   Double_t xAxis52[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_bb_dPhi_2b_stack_6 = new TH1D("Zmm_2bjet_bb_dPhi_2b_stack_6","",31, xAxis52);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(1,80.34904);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(2,67.96294);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(3,92.11523);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(4,92.29673);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(5,91.5764);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(6,138.5791);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(7,104.2729);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(8,133.9257);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(9,73.39594);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(10,158.0195);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(11,135.2366);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(12,133.0045);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(13,115.567);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(14,140.8886);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(15,104.8008);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(16,129.938);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(17,157.3287);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(18,125.7546);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(19,137.2094);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(20,142.7752);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(21,144.4629);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(22,186.1126);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(23,211.0367);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(24,186.3786);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(25,212.2016);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(26,218.0709);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(27,217.1506);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(28,240.5059);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(29,253.8416);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(30,262.0701);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinContent(31,377.2033);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(1,13.68754);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(2,13.30862);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(3,15.21159);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(4,14.37024);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(5,15.97906);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(6,16.91075);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(7,16.00277);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(8,15.96404);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(9,15.73189);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(10,16.82662);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(11,16.73562);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(12,17.28708);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(13,18.05187);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(14,17.51632);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(15,17.30857);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(16,18.19667);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(17,17.76656);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(18,18.714);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(19,19.72943);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(20,19.37547);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(21,19.89841);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(22,20.91273);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(23,22.05872);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(24,22.78395);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(25,22.75022);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(26,23.1826);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(27,24.17039);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(28,25.43177);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(29,26.39234);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(30,25.93139);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetBinError(31,31.55055);
   Zmm_2bjet_bb_dPhi_2b_stack_6->SetEntries(17994);

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
   Double_t xAxis53[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zmm_2bjet_dPhi_2b__627 = new TH1D("Zmm_2bjet_dPhi_2b__627","",31, xAxis53);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(1,118);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(2,118);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(3,113);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(4,138);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(5,153);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(6,183);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(7,149);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(8,154);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(9,153);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(10,145);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(11,158);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(12,161);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(13,157);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(14,167);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(15,145);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(16,163);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(17,189);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(18,197);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(19,179);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(20,196);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(21,236);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(22,220);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(23,249);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(24,266);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(25,269);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(26,279);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(27,307);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(28,369);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(29,333);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(30,374);
   Zmm_2bjet_dPhi_2b__627->SetBinContent(31,509);
   Zmm_2bjet_dPhi_2b__627->SetBinError(1,10.86278);
   Zmm_2bjet_dPhi_2b__627->SetBinError(2,10.86278);
   Zmm_2bjet_dPhi_2b__627->SetBinError(3,10.63015);
   Zmm_2bjet_dPhi_2b__627->SetBinError(4,11.74734);
   Zmm_2bjet_dPhi_2b__627->SetBinError(5,12.36932);
   Zmm_2bjet_dPhi_2b__627->SetBinError(6,13.52775);
   Zmm_2bjet_dPhi_2b__627->SetBinError(7,12.20656);
   Zmm_2bjet_dPhi_2b__627->SetBinError(8,12.40967);
   Zmm_2bjet_dPhi_2b__627->SetBinError(9,12.36932);
   Zmm_2bjet_dPhi_2b__627->SetBinError(10,12.04159);
   Zmm_2bjet_dPhi_2b__627->SetBinError(11,12.56981);
   Zmm_2bjet_dPhi_2b__627->SetBinError(12,12.68858);
   Zmm_2bjet_dPhi_2b__627->SetBinError(13,12.52996);
   Zmm_2bjet_dPhi_2b__627->SetBinError(14,12.92285);
   Zmm_2bjet_dPhi_2b__627->SetBinError(15,12.04159);
   Zmm_2bjet_dPhi_2b__627->SetBinError(16,12.76715);
   Zmm_2bjet_dPhi_2b__627->SetBinError(17,13.74773);
   Zmm_2bjet_dPhi_2b__627->SetBinError(18,14.03567);
   Zmm_2bjet_dPhi_2b__627->SetBinError(19,13.37909);
   Zmm_2bjet_dPhi_2b__627->SetBinError(20,14);
   Zmm_2bjet_dPhi_2b__627->SetBinError(21,15.36229);
   Zmm_2bjet_dPhi_2b__627->SetBinError(22,14.8324);
   Zmm_2bjet_dPhi_2b__627->SetBinError(23,15.77973);
   Zmm_2bjet_dPhi_2b__627->SetBinError(24,16.30951);
   Zmm_2bjet_dPhi_2b__627->SetBinError(25,16.40122);
   Zmm_2bjet_dPhi_2b__627->SetBinError(26,16.70329);
   Zmm_2bjet_dPhi_2b__627->SetBinError(27,17.52142);
   Zmm_2bjet_dPhi_2b__627->SetBinError(28,19.20937);
   Zmm_2bjet_dPhi_2b__627->SetBinError(29,18.24829);
   Zmm_2bjet_dPhi_2b__627->SetBinError(30,19.33908);
   Zmm_2bjet_dPhi_2b__627->SetBinError(31,22.56103);
   Zmm_2bjet_dPhi_2b__627->SetEntries(6547);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_2b__627->SetLineColor(ci);
   Zmm_2bjet_dPhi_2b__627->SetLineWidth(2);
   Zmm_2bjet_dPhi_2b__627->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_2b__627->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_2b__627->GetXaxis()->SetRange(1,31);
   Zmm_2bjet_dPhi_2b__627->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b__627->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b__627->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b__627->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b__627->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b__627->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b__627->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b__627->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_2b__627->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b__627->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_2b__627->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_2b__627->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_2b__627->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_2b__627->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_2b_fx1627[31] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_2b_fy1627[31] = {
   114.3817,
   103.5186,
   130.3817,
   138.8997,
   136.4185,
   189.0634,
   161.6307,
   184.4107,
   116.2982,
   223.4572,
   200.6237,
   198.2061,
   178.6513,
   212.7575,
   173.1383,
   199.4552,
   241.7264,
   204.1363,
   221.159,
   240.2144,
   241.2339,
   286.9953,
   328.6262,
   305.5712,
   329.3414,
   343.2887,
   333.8656,
   384.8032,
   403.1601,
   427.7279,
   614.7828};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_2b_fex1627[31] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_2b_fey1627[31] = {
   14.36454,
   13.84855,
   15.87393,
   15.61465,
   16.62745,
   17.62684,
   16.75895,
   16.83318,
   16.53056,
   17.70305,
   17.55195,
   18.11759,
   18.84123,
   18.46787,
   18.20711,
   19.02828,
   18.75458,
   19.69845,
   20.74698,
   20.62344,
   21.2948,
   21.96968,
   23.17254,
   23.93804,
   23.9547,
   24.53813,
   25.4917,
   27.11953,
   27.95651,
   27.90054,
   33.67857};
   TGraphErrors *gre = new TGraphErrors(31,Graph_from_Zmm_2bjet_bb_dPhi_2b_fx1627,Graph_from_Zmm_2bjet_bb_dPhi_2b_fy1627,Graph_from_Zmm_2bjet_bb_dPhi_2b_fex1627,Graph_from_Zmm_2bjet_bb_dPhi_2b_fey1627);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dPhi_2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627->SetMinimum(33.79092);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627->SetMaximum(704.3405);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dPhi_2b1627);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dPhi_2b_Z_2bjet_Zmm_17_amcnlo->cd();
  
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
   Double_t xAxis54[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *data_mc_ratio__628 = new TH1D("data_mc_ratio__628","",31, xAxis54);
   data_mc_ratio__628->SetBinContent(1,1.031633);
   data_mc_ratio__628->SetBinContent(2,1.139892);
   data_mc_ratio__628->SetBinContent(3,0.8666857);
   data_mc_ratio__628->SetBinContent(4,0.9935229);
   data_mc_ratio__628->SetBinContent(5,1.121549);
   data_mc_ratio__628->SetBinContent(6,0.9679293);
   data_mc_ratio__628->SetBinContent(7,0.9218545);
   data_mc_ratio__628->SetBinContent(8,0.8350927);
   data_mc_ratio__628->SetBinContent(9,1.315583);
   data_mc_ratio__628->SetBinContent(10,0.648894);
   data_mc_ratio__628->SetBinContent(11,0.7875442);
   data_mc_ratio__628->SetBinContent(12,0.8122857);
   data_mc_ratio__628->SetBinContent(13,0.878807);
   data_mc_ratio__628->SetBinContent(14,0.7849314);
   data_mc_ratio__628->SetBinContent(15,0.8374807);
   data_mc_ratio__628->SetBinContent(16,0.8172263);
   data_mc_ratio__628->SetBinContent(17,0.7818758);
   data_mc_ratio__628->SetBinContent(18,0.9650416);
   data_mc_ratio__628->SetBinContent(19,0.8093724);
   data_mc_ratio__628->SetBinContent(20,0.8159377);
   data_mc_ratio__628->SetBinContent(21,0.9783036);
   data_mc_ratio__628->SetBinContent(22,0.7665632);
   data_mc_ratio__628->SetBinContent(23,0.7576997);
   data_mc_ratio__628->SetBinContent(24,0.870501);
   data_mc_ratio__628->SetBinContent(25,0.8167817);
   data_mc_ratio__628->SetBinContent(26,0.812727);
   data_mc_ratio__628->SetBinContent(27,0.9195318);
   data_mc_ratio__628->SetBinContent(28,0.9589316);
   data_mc_ratio__628->SetBinContent(29,0.8259746);
   data_mc_ratio__628->SetBinContent(30,0.8743877);
   data_mc_ratio__628->SetBinContent(31,0.8279346);
   data_mc_ratio__628->SetBinError(1,0.09496953);
   data_mc_ratio__628->SetBinError(2,0.1049355);
   data_mc_ratio__628->SetBinError(3,0.08153094);
   data_mc_ratio__628->SetBinError(4,0.08457428);
   data_mc_ratio__628->SetBinError(5,0.09067183);
   data_mc_ratio__628->SetBinError(6,0.07155139);
   data_mc_ratio__628->SetBinError(7,0.07552126);
   data_mc_ratio__628->SetBinError(8,0.06729369);
   data_mc_ratio__628->SetBinError(9,0.1063586);
   data_mc_ratio__628->SetBinError(10,0.05388771);
   data_mc_ratio__628->SetBinError(11,0.06265365);
   data_mc_ratio__628->SetBinError(12,0.06401708);
   data_mc_ratio__628->SetBinError(13,0.07013643);
   data_mc_ratio__628->SetBinError(14,0.06073981);
   data_mc_ratio__628->SetBinError(15,0.06954899);
   data_mc_ratio__628->SetBinError(16,0.0640101);
   data_mc_ratio__628->SetBinError(17,0.05687309);
   data_mc_ratio__628->SetBinError(18,0.06875637);
   data_mc_ratio__628->SetBinError(19,0.06049534);
   data_mc_ratio__628->SetBinError(20,0.05828126);
   data_mc_ratio__628->SetBinError(21,0.06368214);
   data_mc_ratio__628->SetBinError(22,0.05168168);
   data_mc_ratio__628->SetBinError(23,0.04801727);
   data_mc_ratio__628->SetBinError(24,0.05337384);
   data_mc_ratio__628->SetBinError(25,0.04980006);
   data_mc_ratio__628->SetBinError(26,0.04865669);
   data_mc_ratio__628->SetBinError(27,0.05248045);
   data_mc_ratio__628->SetBinError(28,0.04991999);
   data_mc_ratio__628->SetBinError(29,0.04526313);
   data_mc_ratio__628->SetBinError(30,0.04521351);
   data_mc_ratio__628->SetBinError(31,0.03669756);
   data_mc_ratio__628->SetMinimum(0.4);
   data_mc_ratio__628->SetMaximum(1.6);
   data_mc_ratio__628->SetEntries(1963.202);
   data_mc_ratio__628->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__628->SetLineColor(ci);
   data_mc_ratio__628->SetLineWidth(2);
   data_mc_ratio__628->SetMarkerStyle(20);
   data_mc_ratio__628->SetMarkerSize(1.2);
   data_mc_ratio__628->GetXaxis()->SetTitle("dPhi_{bb}");
   data_mc_ratio__628->GetXaxis()->SetRange(1,31);
   data_mc_ratio__628->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__628->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__628->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__628->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__628->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__628->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__628->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__628->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__628->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__628->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__628->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__628->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__628->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__628->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__628->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__628->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__628->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1628[31] = {
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
   Double_t Graph_from_mc_statistical_error_fy1628[31] = {
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
   Double_t Graph_from_mc_statistical_error_fex1628[31] = {
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
   Double_t Graph_from_mc_statistical_error_fey1628[31] = {
   0.1255842,
   0.1337783,
   0.1217496,
   0.1124167,
   0.1218856,
   0.09323241,
   0.1036867,
   0.09128096,
   0.1421394,
   0.07922345,
   0.08748695,
   0.09140784,
   0.1054637,
   0.08680243,
   0.1051593,
   0.09540126,
   0.077586,
   0.09649654,
   0.09381024,
   0.08585428,
   0.0882745,
   0.07655066,
   0.07051337,
   0.07833867,
   0.07273516,
   0.07147957,
   0.0763532,
   0.07047636,
   0.06934344,
   0.06522965,
   0.05478124};
   gre = new TGraphErrors(31,Graph_from_mc_statistical_error_fx1628,Graph_from_mc_statistical_error_fy1628,Graph_from_mc_statistical_error_fex1628,Graph_from_mc_statistical_error_fey1628);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1628 = new TH1F("Graph_Graph_from_mc_statistical_error1628","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1628->SetMinimum(0.8294328);
   Graph_Graph_from_mc_statistical_error1628->SetMaximum(1.170567);
   Graph_Graph_from_mc_statistical_error1628->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1628->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1628->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1628->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1628->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1628->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1628->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1628->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1628->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1628->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1628->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1628->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1628->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1628->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1628->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1628->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1628);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.141593,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_2b_Z_2bjet_Zmm_17_amcnlo->cd();
   dPhi_2b_Z_2bjet_Zmm_17_amcnlo->Modified();
   dPhi_2b_Z_2bjet_Zmm_17_amcnlo->cd();
   dPhi_2b_Z_2bjet_Zmm_17_amcnlo->SetSelected(dPhi_2b_Z_2bjet_Zmm_17_amcnlo);
}

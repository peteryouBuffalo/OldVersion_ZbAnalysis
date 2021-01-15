void dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo/dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo
//=========  (Thu Jan 14 10:43:07 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo = new TCanvas("dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo", "dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo",0,0,600,600);
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->SetHighLightColor(2);
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->Range(0,0,1,1);
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->SetFillColor(0);
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->SetFillStyle(4000);
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->SetBorderMode(0);
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->SetBorderSize(2);
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-1.276086,3.416482,1284.81);
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
   st->SetMaximum(1101.144);
   
   TH1F *st_stack_327 = new TH1F("st_stack_327","",30,0,3.141593);
   st_stack_327->SetMinimum(0.01);
   st_stack_327->SetMaximum(1156.201);
   st_stack_327->SetDirectory(0);
   st_stack_327->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_327->SetLineColor(ci);
   st_stack_327->GetXaxis()->SetRange(1,31);
   st_stack_327->GetXaxis()->SetLabelFont(42);
   st_stack_327->GetXaxis()->SetLabelSize(0.035);
   st_stack_327->GetXaxis()->SetTitleSize(0.035);
   st_stack_327->GetXaxis()->SetTitleFont(42);
   st_stack_327->GetYaxis()->SetTitle("Events/0.105");
   st_stack_327->GetYaxis()->SetLabelFont(42);
   st_stack_327->GetYaxis()->SetLabelSize(0.05);
   st_stack_327->GetYaxis()->SetTitleSize(0.057);
   st_stack_327->GetYaxis()->SetTitleOffset(1.2);
   st_stack_327->GetYaxis()->SetTitleFont(42);
   st_stack_327->GetZaxis()->SetLabelFont(42);
   st_stack_327->GetZaxis()->SetLabelSize(0.035);
   st_stack_327->GetZaxis()->SetTitleSize(0.035);
   st_stack_327->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_327);
   
   
   TH1D *Zmm_2bjet_dPhi_Zb1_stack_1 = new TH1D("Zmm_2bjet_dPhi_Zb1_stack_1","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(1,1.596987);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(2,2.15119);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(3,3.030204);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(4,1.980248);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(5,2.104903);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(6,1.938533);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(7,0.2239812);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(8,2.614166);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(9,1.789885);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(10,3.393555);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(11,1.551453);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(12,2.402388);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(13,3.370239);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(14,2.437827);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(15,3.905187);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(16,3.047515);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(17,2.791251);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(18,3.370199);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(19,4.175306);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(20,4.076361);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(21,3.57657);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(22,4.249199);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(23,6.378808);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(24,5.319235);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(25,5.192214);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(26,7.161926);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(27,3.733321);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(28,4.444064);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(29,5.506612);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(30,2.5473);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(1,0.6750447);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(2,0.8229271);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(3,0.9529144);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(4,0.7514186);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(5,0.8005889);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(6,0.7285109);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(7,0.1285281);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(8,0.8592584);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(9,0.7653043);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(10,1.027887);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(11,0.6287507);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(12,0.7658729);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(13,1.062287);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(14,0.8018845);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(15,1.046369);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(16,0.9319333);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(17,0.8867954);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(18,1.039775);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(19,1.139011);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(20,1.099086);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(21,1.017511);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(22,1.111537);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(23,1.604475);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(24,1.292971);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(25,1.203606);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(26,1.428364);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(27,1.011155);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(28,1.135698);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(29,1.279036);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(30,0.8489025);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetEntries(396);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_dPhi_Zb1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_stack_1->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_stack_1,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_stack_2 = new TH1D("Zmm_2bjet_dPhi_Zb1_stack_2","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(1,4.797274);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(2,1.910899);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(3,5.065613);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(4,2.738193);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(5,4.901139);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(6,4.326703);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(7,2.427695);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(8,4.353166);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(9,2.953702);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(10,3.204296);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(11,6.126589);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(12,4.535334);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(13,8.171488);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(14,3.915254);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(15,4.061331);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(16,8.952672);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(17,10.84301);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(18,13.82923);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(19,13.95726);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(20,11.94006);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(21,8.685264);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(22,16.47514);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(23,12.06423);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(24,10.99105);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(25,10.78809);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(26,10.41021);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(27,6.95991);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(28,11.27321);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(29,5.462381);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(30,3.717505);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(1,1.609919);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(2,0.9032511);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(3,1.533163);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(4,1.086368);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(5,1.646532);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(6,1.531754);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(7,1.086406);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(8,1.549512);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(9,1.172857);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(10,1.24799);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(11,1.7792);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(12,1.528176);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(13,2.093187);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(14,1.441933);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(15,1.467431);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(16,2.16442);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(17,2.428832);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(18,2.674043);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(19,2.611007);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(20,2.554801);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(21,2.152712);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(22,4.087484);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(23,2.535917);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(24,2.46032);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(25,2.374995);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(26,2.227245);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(27,1.957726);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(28,2.480491);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(29,1.694674);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(30,1.328758);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetEntries(454);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dPhi_Zb1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_stack_2->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_stack_2,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_stack_3 = new TH1D("Zmm_2bjet_dPhi_Zb1_stack_3","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(1,75.59479);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(2,74.46197);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(3,74.39577);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(4,72.07106);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(5,79.25861);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(6,79.96579);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(7,88.93505);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(8,86.40499);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(9,95.03504);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(10,97.34942);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(11,107.3876);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(12,115.7307);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(13,121.0643);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(14,131.9844);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(15,138.2642);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(16,146.881);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(17,157.0186);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(18,161.6568);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(19,167.0882);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(20,169.6715);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(21,167.8077);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(22,176.1632);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(23,172.2814);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(24,176.4873);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(25,166.0068);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(26,164.9036);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(27,166.6975);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(28,154.0751);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(29,152.8245);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(30,154.7057);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(1,2.590614);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(2,2.583117);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(3,2.575484);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(4,2.527134);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(5,2.698286);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(6,2.669934);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(7,2.826121);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(8,2.903388);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(9,2.933939);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(10,2.934393);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(11,3.166756);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(12,3.297869);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(13,3.311913);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(14,3.484267);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(15,3.539061);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(16,3.648775);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(17,3.751709);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(18,3.796763);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(19,3.869514);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(20,3.92597);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(21,3.875281);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(22,4.007321);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(23,3.944453);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(24,3.977583);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(25,3.879706);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(26,3.878177);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(27,3.898697);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(28,3.701174);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(29,3.78754);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(30,3.816301);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetEntries(48154);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dPhi_Zb1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_stack_3->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_dPhi_Zb1_stack_4 = new TH1D("Zmm_2bjet_XX_dPhi_Zb1_stack_4","",30,0,3.141593);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(1,5.548226);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(2,2.084658);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(3,10.66871);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(4,16.80328);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(5,2.878793);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(6,20.25003);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(7,1.117189);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(8,-1.088519);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(9,10.56345);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(10,1.977615);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(11,16.64127);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(12,16.27824);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(13,5.571273);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(14,-1.154921);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(15,6.09766);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(16,-1.093873);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(17,-0.3174812);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(18,-8.34894);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(19,1.257831);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(20,2.702549);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(21,11.95023);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(22,13.53466);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(23,24.99854);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(24,18.2404);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(25,5.555214);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(26,3.642664);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(27,26.50428);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(28,7.97927);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(29,3.315253);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(30,8.887702);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(1,4.479006);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(2,2.128187);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(3,9.062046);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(4,13.16319);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(5,2.878793);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(6,15.36651);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(7,1.117189);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(8,1.088519);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(9,11.26665);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(10,2.210204);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(11,11.12662);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(12,14.03571);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(13,6.833735);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(14,4.678756);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(15,9.789258);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(16,2.774339);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(17,1.441796);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(18,11.87104);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(19,2.056541);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(20,2.702549);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(21,13.16367);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(22,12.79804);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(23,16.9703);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(24,14.64681);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(25,2.820898);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(26,2.62716);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(27,15.61782);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(28,7.960781);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(29,2.588904);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(30,4.768458);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetEntries(117);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_dPhi_Zb1_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_dPhi_Zb1_stack_5 = new TH1D("Zmm_2bjet_bX_dPhi_Zb1_stack_5","",30,0,3.141593);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(1,10.22781);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(2,4.552839);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(3,-2.241527);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(4,0.5532564);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(5,13.65406);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(6,2.955827);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(7,5.871735);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(8,0.207495);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(9,-3.57468);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(10,0.7884721);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(11,7.057959);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(12,11.72668);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(13,-1.011214);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(14,5.344352);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(15,3.398318);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(16,-0.781);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(17,-2.046811);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(18,18.4899);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(19,14.70383);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(20,1.419027);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(21,8.172005);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(22,0.9854423);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(23,3.387368);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(24,9.110794);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(25,10.50295);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(26,6.459742);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(27,10.87062);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(28,3.61374);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(29,8.968787);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(30,10.09763);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(1,3.949434);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(2,3.693208);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(3,4.90334);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(4,2.94278);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(5,4.504444);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(6,2.801338);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(7,4.358049);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(8,4.602565);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(9,4.920135);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(10,5.010027);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(11,4.726863);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(12,4.765252);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(13,4.232715);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(14,5.070983);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(15,4.974106);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(16,5.186323);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(17,4.292805);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(18,5.316361);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(19,5.806821);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(20,5.898318);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(21,5.568391);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(22,5.635386);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(23,4.112154);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(24,5.107306);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(25,4.429267);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(26,4.90936);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(27,5.534133);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(28,5.075821);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(29,5.905038);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(30,4.47738);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetEntries(396);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_dPhi_Zb1_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_dPhi_Zb1_stack_6 = new TH1D("Zmm_2bjet_bb_dPhi_Zb1_stack_6","",30,0,3.141593);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(1,159.0524);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(2,189.1364);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(3,210.8869);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(4,220.423);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(5,153.8843);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(6,200.7686);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(7,216.3545);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(8,162.9759);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(9,185.1789);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(10,237.264);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(11,198.4611);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(12,229.767);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(13,211.3405);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(14,229.1862);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(15,271.4481);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(16,230.6957);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(17,297.9138);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(18,314.0843);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(19,305.2863);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(20,289.2898);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(21,309.4778);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(22,391.5278);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(23,328.8957);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(24,385.4803);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(25,407.4001);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(26,381.4138);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(27,364.703);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(28,351.3953);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(29,407.137);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(30,329.2157);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(1,24.84645);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(2,24.70155);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(3,24.03609);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(4,25.47358);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(5,24.15376);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(6,24.5052);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(7,25.50189);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(8,53.2648);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(9,24.69711);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(10,27.9292);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(11,26.76932);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(12,28.16662);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(13,30.9249);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(14,28.67474);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(15,31.01701);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(16,30.69715);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(17,32.6715);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(18,33.54827);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(19,32.59935);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(20,33.38983);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(21,33.91419);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(22,33.33163);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(23,35.55188);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(24,36.27314);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(25,36.14078);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(26,35.2372);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(27,36.09659);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(28,33.45742);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(29,32.7115);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(30,33.46677);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetEntries(21441);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_dPhi_Zb1_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dPhi_Zb1__653 = new TH1D("Zmm_2bjet_dPhi_Zb1__653","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(1,220);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(2,245);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(3,231);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(4,225);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(5,236);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(6,258);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(7,250);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(8,231);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(9,230);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(10,254);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(11,277);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(12,272);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(13,298);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(14,355);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(15,380);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(16,354);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(17,380);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(18,403);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(19,435);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(20,482);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(21,495);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(22,471);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(23,468);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(24,481);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(25,500);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(26,470);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(27,478);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(28,479);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(29,439);
   Zmm_2bjet_dPhi_Zb1__653->SetBinContent(30,460);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(1,14.8324);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(2,15.65248);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(3,15.19868);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(4,15);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(5,15.36229);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(6,16.06238);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(7,15.81139);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(8,15.19868);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(9,15.16575);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(10,15.93738);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(11,16.64332);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(12,16.49242);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(13,17.26268);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(14,18.84144);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(15,19.49359);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(16,18.81489);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(17,19.49359);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(18,20.07486);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(19,20.85665);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(20,21.9545);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(21,22.2486);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(22,21.70253);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(23,21.63331);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(24,21.93171);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(25,22.36068);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(26,21.67948);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(27,21.86321);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(28,21.88607);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(29,20.95233);
   Zmm_2bjet_dPhi_Zb1__653->SetBinError(30,21.44761);
   Zmm_2bjet_dPhi_Zb1__653->SetEntries(10757);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1__653->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1__653->SetLineWidth(2);
   Zmm_2bjet_dPhi_Zb1__653->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_Zb1__653->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_Zb1__653->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1__653->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1__653->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1__653->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1__653->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1__653->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1__653->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1__653->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1__653->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1__653->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1__653->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1__653->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1__653->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1__653->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1__653->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fx1653[30] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fy1653[30] = {
   256.8175,
   274.2979,
   301.8057,
   314.5691,
   256.6818,
   310.2055,
   314.9301,
   255.4671,
   291.9463,
   343.9773,
   337.226,
   380.4403,
   348.5066,
   371.7131,
   427.1748,
   387.702,
   466.2025,
   503.0815,
   506.4687,
   479.0993,
   509.6696,
   602.9354,
   548.0061,
   605.6291,
   605.4454,
   573.992,
   579.4687,
   532.7807,
   583.2146,
   509.1715};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fex1653[30] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fey1653[30] = {
   25.74421,
   25.22897,
   26.33987,
   28.96488,
   24.95224,
   29.23161,
   26.07242,
   53.58243,
   27.7788,
   28.65746,
   29.60289,
   32.04474,
   32.20938,
   29.74406,
   33.14211,
   31.55593,
   33.29707,
   36.29489,
   33.52244,
   34.35292,
   37.083,
   36.61348,
   39.91743,
   39.74796,
   36.82218,
   35.98201,
   39.96951,
   35.06677,
   33.62242,
   34.3491};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fx1653,Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fy1653,Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fex1653,Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fey1653);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dPhi_Zb1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653->SetMinimum(157.5355);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653->SetMaximum(689.7263);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11653);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_dPhi_Zb1_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_dPhi_Zb1_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_dPhi_Zb1_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_dPhi_Zb1","MC unc. (stat.)","fl");

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
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__654 = new TH1D("data_mc_ratio__654","",30,0,3.141593);
   data_mc_ratio__654->SetBinContent(1,0.8566394);
   data_mc_ratio__654->SetBinContent(2,0.8931895);
   data_mc_ratio__654->SetBinContent(3,0.7653931);
   data_mc_ratio__654->SetBinContent(4,0.7152642);
   data_mc_ratio__654->SetBinContent(5,0.9194264);
   data_mc_ratio__654->SetBinContent(6,0.8317066);
   data_mc_ratio__654->SetBinContent(7,0.7938269);
   data_mc_ratio__654->SetBinContent(8,0.9042258);
   data_mc_ratio__654->SetBinContent(9,0.7878162);
   data_mc_ratio__654->SetBinContent(10,0.7384208);
   data_mc_ratio__654->SetBinContent(11,0.8214076);
   data_mc_ratio__654->SetBinContent(12,0.714961);
   data_mc_ratio__654->SetBinContent(13,0.8550771);
   data_mc_ratio__654->SetBinContent(14,0.9550377);
   data_mc_ratio__654->SetBinContent(15,0.8895655);
   data_mc_ratio__654->SetBinContent(16,0.9130725);
   data_mc_ratio__654->SetBinContent(17,0.8150965);
   data_mc_ratio__654->SetBinContent(18,0.801063);
   data_mc_ratio__654->SetBinContent(19,0.8588882);
   data_mc_ratio__654->SetBinContent(20,1.006054);
   data_mc_ratio__654->SetBinContent(21,0.9712175);
   data_mc_ratio__654->SetBinContent(22,0.7811782);
   data_mc_ratio__654->SetBinContent(23,0.8540051);
   data_mc_ratio__654->SetBinContent(24,0.7942155);
   data_mc_ratio__654->SetBinContent(25,0.8258383);
   data_mc_ratio__654->SetBinContent(26,0.8188267);
   data_mc_ratio__654->SetBinContent(27,0.8248936);
   data_mc_ratio__654->SetBinContent(28,0.8990565);
   data_mc_ratio__654->SetBinContent(29,0.7527247);
   data_mc_ratio__654->SetBinContent(30,0.9034283);
   data_mc_ratio__654->SetBinError(1,0.05775462);
   data_mc_ratio__654->SetBinError(2,0.05706378);
   data_mc_ratio__654->SetBinError(3,0.05035917);
   data_mc_ratio__654->SetBinError(4,0.04768428);
   data_mc_ratio__654->SetBinError(5,0.05984956);
   data_mc_ratio__654->SetBinError(6,0.05177979);
   data_mc_ratio__654->SetBinError(7,0.05020602);
   data_mc_ratio__654->SetBinError(8,0.05949369);
   data_mc_ratio__654->SetBinError(9,0.05194706);
   data_mc_ratio__654->SetBinError(10,0.04633264);
   data_mc_ratio__654->SetBinError(11,0.0493536);
   data_mc_ratio__654->SetBinError(12,0.04335088);
   data_mc_ratio__654->SetBinError(13,0.04953329);
   data_mc_ratio__654->SetBinError(14,0.05068814);
   data_mc_ratio__654->SetBinError(15,0.04563375);
   data_mc_ratio__654->SetBinError(16,0.04852926);
   data_mc_ratio__654->SetBinError(17,0.04181357);
   data_mc_ratio__654->SetBinError(18,0.03990379);
   data_mc_ratio__654->SetBinError(19,0.04118054);
   data_mc_ratio__654->SetBinError(20,0.04582453);
   data_mc_ratio__654->SetBinError(21,0.04365298);
   data_mc_ratio__654->SetBinError(22,0.03599479);
   data_mc_ratio__654->SetBinError(23,0.0394764);
   data_mc_ratio__654->SetBinError(24,0.03621311);
   data_mc_ratio__654->SetBinError(25,0.03693261);
   data_mc_ratio__654->SetBinError(26,0.03776966);
   data_mc_ratio__654->SetBinError(27,0.03772975);
   data_mc_ratio__654->SetBinError(28,0.04107894);
   data_mc_ratio__654->SetBinError(29,0.03592559);
   data_mc_ratio__654->SetBinError(30,0.04212256);
   data_mc_ratio__654->SetMinimum(0.4);
   data_mc_ratio__654->SetMaximum(1.6);
   data_mc_ratio__654->SetEntries(2787.242);
   data_mc_ratio__654->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__654->SetLineColor(ci);
   data_mc_ratio__654->SetLineWidth(2);
   data_mc_ratio__654->SetMarkerStyle(20);
   data_mc_ratio__654->SetMarkerSize(1.2);
   data_mc_ratio__654->GetXaxis()->SetTitle("dPhi_{Zb1}");
   data_mc_ratio__654->GetXaxis()->SetRange(1,31);
   data_mc_ratio__654->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__654->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__654->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__654->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__654->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__654->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__654->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__654->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__654->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__654->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__654->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__654->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__654->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__654->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__654->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__654->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__654->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1654[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1654[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1654[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1654[30] = {
   0.1002432,
   0.09197655,
   0.08727426,
   0.09207795,
   0.09721079,
   0.09423305,
   0.08278796,
   0.2097429,
   0.09515039,
   0.08331208,
   0.08778352,
   0.08423066,
   0.09242116,
   0.08001886,
   0.07758442,
   0.08139225,
   0.0714219,
   0.07214515,
   0.06618856,
   0.07170312,
   0.07275891,
   0.06072537,
   0.07284121,
   0.06563086,
   0.06081834,
   0.0626873,
   0.06897614,
   0.06581839,
   0.05765018,
   0.06746075};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1654,Graph_from_mc_statistical_error_fy1654,Graph_from_mc_statistical_error_fex1654,Graph_from_mc_statistical_error_fey1654);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1654 = new TH1F("Graph_Graph_from_mc_statistical_error1654","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1654->SetMinimum(0.7483085);
   Graph_Graph_from_mc_statistical_error1654->SetMaximum(1.251692);
   Graph_Graph_from_mc_statistical_error1654->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1654->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1654->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1654->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1654->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1654->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1654->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1654->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1654->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1654->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1654->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1654->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1654->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1654->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1654->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1654->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1654);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->Modified();
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo->SetSelected(dPhi_Zb1_Z_2bjet_Zmm_18_amcnlo);
}

void dPhi_Zb1_Z_2bjet_Zee_18_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb1_Z_2bjet_Zee_18_amcnlo/dPhi_Zb1_Z_2bjet_Zee_18_amcnlo
//=========  (Thu Jan 14 10:42:53 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb1_Z_2bjet_Zee_18_amcnlo = new TCanvas("dPhi_Zb1_Z_2bjet_Zee_18_amcnlo", "dPhi_Zb1_Z_2bjet_Zee_18_amcnlo",0,0,600,600);
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->SetHighLightColor(2);
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->Range(0,0,1,1);
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->SetFillColor(0);
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->SetFillStyle(4000);
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->SetBorderMode(0);
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->SetBorderSize(2);
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-0.5968808,3.416482,606.2839);
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
   st->SetMaximum(519.6151);
   
   TH1F *st_stack_239 = new TH1F("st_stack_239","",30,0,3.141593);
   st_stack_239->SetMinimum(0.01);
   st_stack_239->SetMaximum(545.5958);
   st_stack_239->SetDirectory(0);
   st_stack_239->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_239->SetLineColor(ci);
   st_stack_239->GetXaxis()->SetRange(1,31);
   st_stack_239->GetXaxis()->SetLabelFont(42);
   st_stack_239->GetXaxis()->SetLabelSize(0.035);
   st_stack_239->GetXaxis()->SetTitleSize(0.035);
   st_stack_239->GetXaxis()->SetTitleFont(42);
   st_stack_239->GetYaxis()->SetTitle("Events/0.105");
   st_stack_239->GetYaxis()->SetLabelFont(42);
   st_stack_239->GetYaxis()->SetLabelSize(0.05);
   st_stack_239->GetYaxis()->SetTitleSize(0.057);
   st_stack_239->GetYaxis()->SetTitleOffset(1.2);
   st_stack_239->GetYaxis()->SetTitleFont(42);
   st_stack_239->GetZaxis()->SetLabelFont(42);
   st_stack_239->GetZaxis()->SetLabelSize(0.035);
   st_stack_239->GetZaxis()->SetTitleSize(0.035);
   st_stack_239->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_239);
   
   
   TH1D *Zee_2bjet_dPhi_Zb1_stack_1 = new TH1D("Zee_2bjet_dPhi_Zb1_stack_1","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(1,0.5052665);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(2,0.8320653);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(3,0.2191004);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(4,1.192128);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(5,1.155202);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(6,1.944272);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(7,1.125625);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(8,1.146227);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(9,0.5686548);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(10,1.875158);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(11,2.297991);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(12,2.331101);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(13,0.6048493);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(14,1.236291);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(15,1.470676);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(16,1.064596);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(17,2.341416);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(18,2.537063);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(19,2.797788);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(20,3.049692);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(21,1.973874);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(22,2.968637);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(23,2.565152);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(24,2.519721);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(25,1.619576);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(26,1.358853);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(27,1.19624);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(28,1.090827);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(29,1.401975);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(30,1.158651);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(1,0.3572937);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(2,0.4586609);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(3,0.2005749);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(4,0.634146);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(5,0.5480702);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(6,0.763037);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(7,0.5246958);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(8,0.5450917);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(9,0.3342282);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(10,0.7574524);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(11,0.7752345);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(12,0.7997021);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(13,0.3348888);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(14,0.6396647);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(15,0.5899058);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(16,0.4979523);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(17,0.7805407);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(18,0.8475622);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(19,0.9020443);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(20,0.9212838);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(21,0.7356875);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(22,0.8949419);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(23,0.8480122);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(24,0.8273243);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(25,0.6640845);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(26,0.5309618);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(27,0.5180692);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(28,0.501575);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(29,0.6270976);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(30,0.5107041);
   Zee_2bjet_dPhi_Zb1_stack_1->SetEntries(215);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_dPhi_Zb1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_stack_1->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_stack_1,"");
   
   TH1D *Zee_2bjet_dPhi_Zb1_stack_2 = new TH1D("Zee_2bjet_dPhi_Zb1_stack_2","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(1,1.790904);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(2,1.76287);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(3,3.33637);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(4,0.6576439);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(5,2.722826);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(6,1.057459);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(7,1.581727);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(8,2.531801);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(9,2.946757);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(10,1.391657);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(11,2.290192);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(12,0.5874911);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(13,1.653303);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(14,3.362771);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(15,3.440942);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(16,3.618481);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(17,3.546937);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(18,1.709511);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(19,5.962713);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(20,6.048978);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(21,5.815433);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(22,6.074813);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(23,7.303104);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(24,6.915725);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(25,3.76536);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(26,4.089117);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(27,3.76595);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(28,4.006058);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(29,3.52031);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(30,0.574436);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(1,1.030827);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(2,0.9694782);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(3,1.339151);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(4,0.493903);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(5,1.147932);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(6,0.7512979);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(7,0.9239559);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(8,1.049215);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(9,1.210396);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(10,0.8067225);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(11,1.170755);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(12,0.5028555);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(13,0.8380277);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(14,1.356645);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(15,1.295413);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(16,1.274873);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(17,1.29752);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(18,0.9304195);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(19,1.726743);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(20,1.762275);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(21,1.666161);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(22,1.698316);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(23,1.902092);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(24,1.9085);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(25,1.336693);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(26,1.389085);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(27,1.536634);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(28,1.481495);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(29,1.261192);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(30,0.4116069);
   Zee_2bjet_dPhi_Zb1_stack_2->SetEntries(218);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dPhi_Zb1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_stack_2->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_stack_2,"");
   
   TH1D *Zee_2bjet_dPhi_Zb1_stack_3 = new TH1D("Zee_2bjet_dPhi_Zb1_stack_3","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(1,34.73605);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(2,37.60812);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(3,34.26072);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(4,33.80623);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(5,34.04192);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(6,37.79422);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(7,38.48354);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(8,40.51946);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(9,40.40875);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(10,44.94881);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(11,49.76787);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(12,55.54329);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(13,52.98947);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(14,63.92148);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(15,69.54178);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(16,71.53171);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(17,70.22513);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(18,73.56343);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(19,78.64644);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(20,76.70733);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(21,81.91672);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(22,82.82949);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(23,80.46862);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(24,77.56357);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(25,80.45687);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(26,77.91442);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(27,77.90353);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(28,77.90679);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(29,72.71153);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(30,74.12125);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(1,1.69006);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(2,1.756306);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(3,1.68466);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(4,1.65672);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(5,1.675282);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(6,1.790307);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(7,1.800017);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(8,1.835576);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(9,1.822649);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(10,1.919474);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(11,2.024676);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(12,2.166021);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(13,2.073912);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(14,2.305195);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(15,2.434181);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(16,2.465292);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(17,2.423639);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(18,2.477841);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(19,2.587349);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(20,2.50682);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(21,2.596119);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(22,2.633289);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(23,2.570228);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(24,2.555582);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(25,2.59061);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(26,2.527662);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(27,2.535001);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(28,2.546974);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(29,2.467869);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(30,2.498448);
   Zee_2bjet_dPhi_Zb1_stack_3->SetEntries(24408);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dPhi_Zb1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1_stack_3->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_Zb1_stack_3,"");
   
   TH1D *Zee_2bjet_XX_dPhi_Zb1_stack_4 = new TH1D("Zee_2bjet_XX_dPhi_Zb1_stack_4","",30,0,3.141593);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(1,2.982005);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(2,4.661145);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(3,4.907174);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(5,2.457501);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(8,-0.2149088);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(9,3.247297);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(10,-0.6415181);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(13,1.624871);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(15,10.1076);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(17,5.031692);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(18,0.8649364);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(19,-0.7316031);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(20,-0.612889);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(21,-0.2311361);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(22,2.128665);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(23,0.1501624);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(24,1.596018);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(25,1.118236);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(26,1.412003);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(27,1.136093);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(28,-0.283573);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(29,1.076355);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(30,1.072822);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(1,2.111215);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(2,3.717206);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(3,3.187997);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(5,1.745948);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(8,0.2149088);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(9,3.040446);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(10,0.6415181);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(13,1.624871);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(15,10.1076);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(17,6.535968);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(18,0.8649364);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(19,0.7316031);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(20,1.826988);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(21,2.211952);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(22,1.645263);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(23,0.1501624);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(24,1.417204);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(25,1.118236);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(26,1.093346);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(27,1.136093);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(28,1.356361);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(29,1.076355);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(30,1.072822);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetEntries(40);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetRange(1,60);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_dPhi_Zb1_stack_4,"");
   
   TH1D *Zee_2bjet_bX_dPhi_Zb1_stack_5 = new TH1D("Zee_2bjet_bX_dPhi_Zb1_stack_5","",30,0,3.141593);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(1,1.889374);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(2,0.7265975);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(3,3.689402);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(4,1.145653);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(5,1.243311);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(6,2.111808);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(7,2.383405);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(8,0.2894413);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(9,-2.538036);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(10,-1.972885);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(11,6.334487);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(12,3.129874);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(13,5.596434);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(14,0.8645829);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(15,3.353493);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(16,4.980777);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(17,1.614731);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(18,1.003947);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(19,-1.626908);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(20,4.679699);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(21,3.039114);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(22,5.242978);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(23,2.357518);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(24,1.733852);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(25,5.622256);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(26,5.189158);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(27,7.003478);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(28,-2.139698);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(29,-0.1673159);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(30,1.254077);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(1,3.001298);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(2,3.317832);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(3,2.160858);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(4,2.279698);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(5,1.735246);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(6,2.111808);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(7,2.153469);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(8,1.715533);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(9,2.758057);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(10,2.306375);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(11,3.324961);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(12,2.266388);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(13,2.985749);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(14,3.272978);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(15,3.113281);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(16,2.634936);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(17,2.648135);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(18,2.613305);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(19,4.235436);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(20,4.709723);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(21,4.994566);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(22,3.982108);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(23,2.540607);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(24,3.697193);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(25,2.580599);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(26,3.984543);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(27,4.465192);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(28,2.847506);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(29,4.347523);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(30,2.174184);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetEntries(197);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetRange(1,60);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_dPhi_Zb1_stack_5,"");
   
   TH1D *Zee_2bjet_bb_dPhi_Zb1_stack_6 = new TH1D("Zee_2bjet_bb_dPhi_Zb1_stack_6","",30,0,3.141593);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(1,69.82328);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(2,115.6078);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(3,92.80763);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(4,66.46636);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(5,98.27616);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(6,84.88243);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(7,88.88231);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(8,86.68833);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(9,62.1614);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(10,117.5011);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(11,119.7031);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(12,110.9198);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(13,128.7285);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(14,86.00001);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(15,132.8256);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(16,127.1936);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(17,153.6389);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(18,151.4394);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(19,153.028);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(20,162.2828);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(21,134.6195);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(22,163.8661);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(23,192.9437);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(24,189.9141);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(25,168.8402);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(26,193.2854);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(27,194.099);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(28,167.9785);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(29,175.7841);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(30,138.5283);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(1,16.03374);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(2,16.15081);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(3,16.96423);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(4,15.33404);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(5,16.66333);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(6,17.16718);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(7,17.42056);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(8,16.33321);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(9,16.37766);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(10,18.04349);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(11,16.88598);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(12,18.62727);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(13,19.2801);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(14,19.58788);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(15,19.48885);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(16,20.40361);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(17,21.36634);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(18,20.73308);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(19,22.23444);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(20,22.4733);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(21,22.28562);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(22,25.29812);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(23,24.67032);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(24,23.95892);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(25,23.6879);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(26,24.65398);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(27,23.03514);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(28,26.33903);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(29,23.10223);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(30,22.18821);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetEntries(11144);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetRange(1,60);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_dPhi_Zb1_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dPhi_Zb1__477 = new TH1D("Zee_2bjet_dPhi_Zb1__477","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(1,95);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(2,101);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(3,94);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(4,103);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(5,113);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(6,126);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(7,105);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(8,117);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(9,127);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(10,137);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(11,138);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(12,152);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(13,165);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(14,175);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(15,152);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(16,183);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(17,168);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(18,196);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(19,200);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(20,188);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(21,206);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(22,222);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(23,221);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(24,210);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(25,241);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(26,218);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(27,228);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(28,246);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(29,226);
   Zee_2bjet_dPhi_Zb1__477->SetBinContent(30,217);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(1,9.746794);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(2,10.04988);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(3,9.69536);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(4,10.14889);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(5,10.63015);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(6,11.22497);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(7,10.24695);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(8,10.81665);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(9,11.26943);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(10,11.7047);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(11,11.74734);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(12,12.32883);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(13,12.84523);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(14,13.22876);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(15,12.32883);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(16,13.52775);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(17,12.96148);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(18,14);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(19,14.14214);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(20,13.71131);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(21,14.3527);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(22,14.89966);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(23,14.86607);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(24,14.49138);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(25,15.52417);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(26,14.76482);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(27,15.09967);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(28,15.68439);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(29,15.0333);
   Zee_2bjet_dPhi_Zb1__477->SetBinError(30,14.73092);
   Zee_2bjet_dPhi_Zb1__477->SetEntries(5070);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1__477->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1__477->SetLineWidth(2);
   Zee_2bjet_dPhi_Zb1__477->SetMarkerStyle(20);
   Zee_2bjet_dPhi_Zb1__477->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_Zb1__477->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1__477->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1__477->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1__477->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1__477->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1__477->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1__477->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1__477->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1__477->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1__477->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1__477->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1__477->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1__477->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1__477->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1__477->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb1_fx1477[30] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb1_fy1477[30] = {
   111.7269,
   161.1986,
   139.2204,
   103.268,
   139.8969,
   127.7902,
   132.4566,
   130.9604,
   106.7948,
   163.1023,
   180.3936,
   172.5116,
   191.1974,
   155.3851,
   220.7401,
   208.3892,
   236.3988,
   231.1183,
   238.0764,
   252.1556,
   227.1335,
   263.1106,
   285.7883,
   280.243,
   261.4225,
   283.2489,
   285.1043,
   248.5589,
   254.327,
   216.7096};
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb1_fex1477[30] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb1_fey1477[30] = {
   16.57083,
   17.02672,
   17.52967,
   15.61156,
   16.975,
   17.42193,
   17.67718,
   16.56895,
   17.02873,
   18.33596,
   17.3857,
   18.91285,
   19.70768,
   20.04897,
   22.35224,
   20.76539,
   22.6808,
   21.09885,
   22.8765,
   23.25526,
   23.16343,
   25.86848,
   25.02089,
   24.50644,
   24.04091,
   25.16925,
   23.68338,
   26.69506,
   23.7033,
   22.46925};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zee_2bjet_bb_dPhi_Zb1_fx1477,Graph_from_Zee_2bjet_bb_dPhi_Zb1_fy1477,Graph_from_Zee_2bjet_bb_dPhi_Zb1_fex1477,Graph_from_Zee_2bjet_bb_dPhi_Zb1_fey1477);
   gre->SetName("Graph_from_Zee_2bjet_bb_dPhi_Zb1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477->SetMinimum(65.34119);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477->SetMaximum(333.1244);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11477);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_dPhi_Zb1_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_dPhi_Zb1_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_dPhi_Zb1_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_Zb1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_dPhi_Zb1","MC unc. (stat.)","fl");

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
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__478 = new TH1D("data_mc_ratio__478","",30,0,3.141593);
   data_mc_ratio__478->SetBinContent(1,0.8502878);
   data_mc_ratio__478->SetBinContent(2,0.6265563);
   data_mc_ratio__478->SetBinContent(3,0.6751884);
   data_mc_ratio__478->SetBinContent(4,0.9974047);
   data_mc_ratio__478->SetBinContent(5,0.8077376);
   data_mc_ratio__478->SetBinContent(6,0.9859911);
   data_mc_ratio__478->SetBinContent(7,0.7927125);
   data_mc_ratio__478->SetBinContent(8,0.8934002);
   data_mc_ratio__478->SetBinContent(9,1.189196);
   data_mc_ratio__478->SetBinContent(10,0.8399637);
   data_mc_ratio__478->SetBinContent(11,0.7649938);
   data_mc_ratio__478->SetBinContent(12,0.8811002);
   data_mc_ratio__478->SetBinContent(13,0.8629824);
   data_mc_ratio__478->SetBinContent(14,1.126234);
   data_mc_ratio__478->SetBinContent(15,0.6885927);
   data_mc_ratio__478->SetBinContent(16,0.8781646);
   data_mc_ratio__478->SetBinContent(17,0.7106634);
   data_mc_ratio__478->SetBinContent(18,0.8480507);
   data_mc_ratio__478->SetBinContent(19,0.8400663);
   data_mc_ratio__478->SetBinContent(20,0.7455714);
   data_mc_ratio__478->SetBinContent(21,0.9069556);
   data_mc_ratio__478->SetBinContent(22,0.8437515);
   data_mc_ratio__478->SetBinContent(23,0.7732997);
   data_mc_ratio__478->SetBinContent(24,0.7493496);
   data_mc_ratio__478->SetBinContent(25,0.9218793);
   data_mc_ratio__478->SetBinContent(26,0.769641);
   data_mc_ratio__478->SetBinContent(27,0.7997075);
   data_mc_ratio__478->SetBinContent(28,0.989705);
   data_mc_ratio__478->SetBinContent(29,0.8886198);
   data_mc_ratio__478->SetBinContent(30,1.00134);
   data_mc_ratio__478->SetBinError(1,0.08723769);
   data_mc_ratio__478->SetBinError(2,0.06234469);
   data_mc_ratio__478->SetBinError(3,0.06964037);
   data_mc_ratio__478->SetBinError(4,0.0982772);
   data_mc_ratio__478->SetBinError(5,0.07598556);
   data_mc_ratio__478->SetBinError(6,0.08783907);
   data_mc_ratio__478->SetBinError(7,0.07736081);
   data_mc_ratio__478->SetBinError(8,0.08259487);
   data_mc_ratio__478->SetBinError(9,0.1055241);
   data_mc_ratio__478->SetBinError(10,0.07176294);
   data_mc_ratio__478->SetBinError(11,0.0651206);
   data_mc_ratio__478->SetBinError(12,0.07146666);
   data_mc_ratio__478->SetBinError(13,0.06718309);
   data_mc_ratio__478->SetBinError(14,0.08513528);
   data_mc_ratio__478->SetBinError(15,0.05585225);
   data_mc_ratio__478->SetBinError(16,0.06491579);
   data_mc_ratio__478->SetBinError(17,0.05482887);
   data_mc_ratio__478->SetBinError(18,0.06057505);
   data_mc_ratio__478->SetBinError(19,0.05940166);
   data_mc_ratio__478->SetBinError(20,0.05437638);
   data_mc_ratio__478->SetBinError(21,0.06319059);
   data_mc_ratio__478->SetBinError(22,0.05662889);
   data_mc_ratio__478->SetBinError(23,0.05201777);
   data_mc_ratio__478->SetBinError(24,0.05171004);
   data_mc_ratio__478->SetBinError(25,0.05938346);
   data_mc_ratio__478->SetBinError(26,0.05212667);
   data_mc_ratio__478->SetBinError(27,0.05296192);
   data_mc_ratio__478->SetBinError(28,0.06310129);
   data_mc_ratio__478->SetBinError(29,0.05911011);
   data_mc_ratio__478->SetBinError(30,0.06797541);
   data_mc_ratio__478->SetMinimum(0.4);
   data_mc_ratio__478->SetMaximum(1.6);
   data_mc_ratio__478->SetEntries(1500.601);
   data_mc_ratio__478->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__478->SetLineColor(ci);
   data_mc_ratio__478->SetLineWidth(2);
   data_mc_ratio__478->SetMarkerStyle(20);
   data_mc_ratio__478->SetMarkerSize(1.2);
   data_mc_ratio__478->GetXaxis()->SetTitle("dPhi_{Zb1}");
   data_mc_ratio__478->GetXaxis()->SetRange(1,31);
   data_mc_ratio__478->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__478->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__478->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__478->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__478->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__478->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__478->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__478->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__478->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__478->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__478->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__478->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__478->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__478->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__478->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__478->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__478->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1478[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1478[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1478[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1478[30] = {
   0.1483155,
   0.1056257,
   0.1259131,
   0.1511751,
   0.1213394,
   0.1363323,
   0.1334564,
   0.1265188,
   0.1594528,
   0.11242,
   0.09637646,
   0.1096323,
   0.103075,
   0.1290276,
   0.1012605,
   0.09964715,
   0.09594296,
   0.09129029,
   0.09608888,
   0.09222583,
   0.1019816,
   0.09831788,
   0.08755044,
   0.0874471,
   0.0919619,
   0.08885913,
   0.08306919,
   0.1073993,
   0.09320011,
   0.1036837};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1478,Graph_from_mc_statistical_error_fy1478,Graph_from_mc_statistical_error_fex1478,Graph_from_mc_statistical_error_fey1478);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1478 = new TH1F("Graph_Graph_from_mc_statistical_error1478","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1478->SetMinimum(0.8086567);
   Graph_Graph_from_mc_statistical_error1478->SetMaximum(1.191343);
   Graph_Graph_from_mc_statistical_error1478->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1478->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1478->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1478->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1478->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1478);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->Modified();
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zee_18_amcnlo->SetSelected(dPhi_Zb1_Z_2bjet_Zee_18_amcnlo);
}

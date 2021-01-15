void dPhi_Zb1_Z_2bjet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb1_Z_2bjet_Zee_16_amcnlo/dPhi_Zb1_Z_2bjet_Zee_16_amcnlo
//=========  (Thu Jan 14 10:42:52 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb1_Z_2bjet_Zee_16_amcnlo = new TCanvas("dPhi_Zb1_Z_2bjet_Zee_16_amcnlo", "dPhi_Zb1_Z_2bjet_Zee_16_amcnlo",0,0,600,600);
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->SetHighLightColor(2);
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->Range(0,0,1,1);
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->SetFillColor(0);
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->SetFillStyle(4000);
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->SetBorderMode(0);
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->SetBorderSize(2);
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-0.3140874,3.416482,323.7733);
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
   st->SetMaximum(277.49);
   
   TH1F *st_stack_237 = new TH1F("st_stack_237","",30,0,3.141593);
   st_stack_237->SetMinimum(0.01);
   st_stack_237->SetMaximum(291.3645);
   st_stack_237->SetDirectory(0);
   st_stack_237->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_237->SetLineColor(ci);
   st_stack_237->GetXaxis()->SetRange(1,31);
   st_stack_237->GetXaxis()->SetLabelFont(42);
   st_stack_237->GetXaxis()->SetLabelSize(0.035);
   st_stack_237->GetXaxis()->SetTitleSize(0.035);
   st_stack_237->GetXaxis()->SetTitleFont(42);
   st_stack_237->GetYaxis()->SetTitle("Events/0.105");
   st_stack_237->GetYaxis()->SetLabelFont(42);
   st_stack_237->GetYaxis()->SetLabelSize(0.05);
   st_stack_237->GetYaxis()->SetTitleSize(0.057);
   st_stack_237->GetYaxis()->SetTitleOffset(1.2);
   st_stack_237->GetYaxis()->SetTitleFont(42);
   st_stack_237->GetZaxis()->SetLabelFont(42);
   st_stack_237->GetZaxis()->SetLabelSize(0.035);
   st_stack_237->GetZaxis()->SetTitleSize(0.035);
   st_stack_237->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_237);
   
   
   TH1D *Zee_2bjet_dPhi_Zb1_stack_1 = new TH1D("Zee_2bjet_dPhi_Zb1_stack_1","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(1,0.3399588);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(3,0.571419);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(4,0.8751594);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(5,0.175779);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(6,0.5237301);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(7,0.3432928);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(8,0.1597809);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(9,0.8929881);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(10,0.6737442);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(11,0.6792286);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(12,0.7719437);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(13,0.1868817);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(14,0.6600185);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(15,0.8998045);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(16,1.163037);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(17,1.004134);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(18,0.1384214);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(19,0.5333429);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(20,0.519629);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(21,1.238817);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(22,1.217255);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(23,0.3212973);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(24,0.4485616);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(25,0.7439458);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(26,0.5673706);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(27,0.8117896);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(28,0.6969702);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(29,0.6224393);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinContent(30,0.4559492);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(1,0.2407406);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(3,0.296827);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(4,0.3915167);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(5,0.175779);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(6,0.2851358);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(7,0.2429476);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(8,0.1597809);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(9,0.4001578);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(10,0.3574806);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(11,0.3396919);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(12,0.3876908);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(13,0.1868817);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(14,0.3394323);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(15,0.4030837);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(16,0.4754434);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(17,0.4155165);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(18,0.1384214);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(19,0.3080831);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(20,0.300078);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(21,0.4697587);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(22,0.4604638);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(23,0.2272903);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(24,0.272523);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(25,0.3733181);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(26,0.3278568);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(27,0.3707502);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(28,0.3457144);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(29,0.3276121);
   Zee_2bjet_dPhi_Zb1_stack_1->SetBinError(30,0.2801978);
   Zee_2bjet_dPhi_Zb1_stack_1->SetEntries(109);

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
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(1,0.2389513);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(2,0.5039079);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(3,0.6115457);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(4,1.560951);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(5,0.5167256);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(6,0.2737974);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(7,0.5285503);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(8,0.2686988);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(9,0.2921904);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(10,0.5403176);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(11,0.489298);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(12,1.255555);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(13,0.8010076);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(14,1.735999);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(15,1.356993);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(16,1.602);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(17,1.058824);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(18,1.366756);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(19,2.361592);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(20,1.42515);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(21,1.702804);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(22,2.156325);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(23,2.183778);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(24,2.496674);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(25,4.289463);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(26,3.250749);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(27,1.575673);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(28,2.655024);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(29,3.015466);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinContent(30,1.457606);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(1,0.2389513);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(2,0.3576268);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(3,0.4050691);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(4,0.6418002);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(5,0.3654979);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(6,0.2737974);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(7,0.3739805);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(8,0.2686988);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(9,0.2921904);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(10,0.3821719);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(11,0.3465719);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(12,0.5631099);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(13,0.4627459);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(14,0.6637363);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(15,0.6068783);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(16,0.6567447);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(17,0.5308822);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(18,0.6001394);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(19,0.7749017);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(20,0.6385221);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(21,0.6970109);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(22,0.7627457);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(23,0.7507308);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(24,0.8339853);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(25,1.074622);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(26,0.9391139);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(27,0.6629214);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(28,0.8453115);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(29,0.9158753);
   Zee_2bjet_dPhi_Zb1_stack_2->SetBinError(30,0.623139);
   Zee_2bjet_dPhi_Zb1_stack_2->SetEntries(170);

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
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(1,14.4163);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(2,14.13361);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(3,14.70748);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(4,17.52851);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(5,13.4856);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(6,16.73526);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(7,16.36196);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(8,18.66104);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(9,19.31058);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(10,15.83405);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(11,21.55773);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(12,23.05583);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(13,26.59613);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(14,28.40527);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(15,25.60867);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(16,34.58426);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(17,30.84493);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(18,34.12306);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(19,36.08006);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(20,36.5154);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(21,36.13514);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(22,37.84264);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(23,37.99742);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(24,30.8983);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(25,33.60164);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(26,31.33371);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(27,29.77215);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(28,27.6996);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(29,29.295);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinContent(30,30.70233);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(1,1.589031);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(2,1.57986);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(3,1.628822);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(4,1.767981);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(5,1.533743);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(6,1.701346);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(7,1.69234);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(8,1.807862);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(9,1.867534);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(10,1.674344);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(11,1.952254);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(12,2.014993);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(13,2.159484);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(14,2.245595);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(15,2.113902);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(16,2.469767);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(17,2.328286);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(18,2.449322);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(19,2.526819);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(20,2.540643);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(21,2.522871);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(22,2.582709);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(23,2.570029);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(24,2.314803);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(25,2.429843);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(26,2.345239);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(27,2.264433);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(28,2.209131);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(29,2.26945);
   Zee_2bjet_dPhi_Zb1_stack_3->SetBinError(30,2.304472);
   Zee_2bjet_dPhi_Zb1_stack_3->SetEntries(4701);

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
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(2,1.307033);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(3,0.08339407);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(5,0.4321969);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(6,-0.2141531);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(7,-0.4299687);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(8,0.9206462);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(9,0.4619803);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(10,0.515722);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(12,-0.4198303);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(13,1.265463);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(15,-0.9771076);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(16,0.9663743);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(17,0.7202192);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(18,0.06236616);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(19,1.159398);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(20,-0.2596224);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(21,1.47801);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(22,-0.03165734);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(23,-0.6543096);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(24,-0.03203964);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(25,0.1683413);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(26,0.8537722);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(27,1.000867);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(28,0.4965971);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(29,0.8580993);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(30,0.3376359);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(2,0.755479);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(3,0.6570086);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(5,0.4321969);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(6,0.4882213);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(7,0.9685762);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(8,0.6527589);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(9,0.4619803);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(10,0.515722);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(12,0.4198303);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(13,1.114371);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(15,1.072708);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(16,0.6833439);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(17,0.9797615);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(18,0.6617211);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(19,0.6770152);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(20,0.8784701);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(21,1.056418);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(22,0.7270341);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(23,0.6543096);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(24,0.6453958);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(25,0.1683413);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(26,0.9077504);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(27,0.8309007);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(28,0.4965971);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(29,0.6079394);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(30,0.7124986);
   Zee_2bjet_XX_dPhi_Zb1_stack_4->SetEntries(60);

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
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(1,0.8688936);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(2,-0.6807758);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(3,-0.9469755);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(4,-0.6047937);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(5,-1.455427);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(6,-0.6390032);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(7,0.1908277);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(8,-0.09993788);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(9,1.82421);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(10,2.688025);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(11,2.189114);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(12,1.135631);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(13,2.13269);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(14,-0.4747391);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(15,3.481936);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(16,2.262882);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(17,0.5332053);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(18,4.03424);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(19,0.3371142);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(20,1.524765);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(21,3.293442);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(22,-0.01602751);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(23,0.921017);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(24,1.309921);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(25,0.856643);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(26,1.800211);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(27,3.260386);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(28,3.477592);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(29,2.568935);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(30,1.788772);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(1,0.9355439);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(2,1.059439);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(3,0.6697029);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(4,1.173874);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(5,0.8446082);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(6,1.482938);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(7,1.47259);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(8,0.9739604);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(9,1.155113);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(10,1.583458);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(11,0.9983561);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(12,1.03125);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(13,1.257677);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(14,1.250651);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(15,1.471428);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(16,1.012482);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(17,1.377614);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(18,1.48935);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(19,1.108585);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(20,1.4691);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(21,1.53163);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(22,1.563719);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(23,1.264206);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(24,1.470853);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(25,1.521742);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(26,1.539859);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(27,1.506593);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(28,1.617363);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(29,1.52741);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(30,1.682756);
   Zee_2bjet_bX_dPhi_Zb1_stack_5->SetEntries(253);

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
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(1,46.15973);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(2,46.00717);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(3,44.78744);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(4,46.91701);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(5,41.85263);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(6,43.78367);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(7,40.96757);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(8,54.36489);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(9,37.01056);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(10,44.56571);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(11,48.20379);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(12,59.04974);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(13,54.2548);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(14,63.15635);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(15,57.64215);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(16,57.36735);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(17,70.25406);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(18,60.53148);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(19,65.83573);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(20,72.8012);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(21,76.30887);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(22,78.68573);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(23,93.68525);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(24,89.90384);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(25,89.97818);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(26,95.52039);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(27,96.09759);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(28,117.5937);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(29,90.95562);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(30,91.90336);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(1,7.462815);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(2,7.671723);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(3,7.814075);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(4,7.450755);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(5,7.76466);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(6,7.450886);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(7,7.710078);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(8,7.804801);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(9,8.337701);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(10,8.137959);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(11,8.526713);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(12,9.034211);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(13,9.194172);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(14,8.837126);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(15,9.350634);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(16,9.575291);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(17,9.765977);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(18,9.700798);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(19,9.70091);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(20,10.36806);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(21,10.43752);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(22,10.60644);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(23,10.82922);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(24,11.48572);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(25,11.28049);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(26,11.43623);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(27,11.19801);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(28,10.73539);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(29,11.15367);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(30,11.05306);
   Zee_2bjet_bb_dPhi_Zb1_stack_6->SetEntries(13604);

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
   
   TH1D *Zee_2bjet_dPhi_Zb1__473 = new TH1D("Zee_2bjet_dPhi_Zb1__473","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(1,51);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(2,58);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(3,51);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(4,50);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(5,48);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(6,60);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(7,50);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(8,55);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(9,60);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(10,58);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(11,69);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(12,66);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(13,83);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(14,70);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(15,107);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(16,97);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(17,89);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(18,103);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(19,109);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(20,103);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(21,115);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(22,97);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(23,100);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(24,111);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(25,112);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(26,119);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(27,123);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(28,112);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(29,120);
   Zee_2bjet_dPhi_Zb1__473->SetBinContent(30,103);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(1,7.141428);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(2,7.615773);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(3,7.141428);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(4,7.071068);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(5,6.928203);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(6,7.745967);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(7,7.071068);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(8,7.416198);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(9,7.745967);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(10,7.615773);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(11,8.306624);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(12,8.124038);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(13,9.110434);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(14,8.3666);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(15,10.34408);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(16,9.848858);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(17,9.433981);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(18,10.14889);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(19,10.44031);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(20,10.14889);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(21,10.72381);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(22,9.848858);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(23,10);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(24,10.53565);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(25,10.58301);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(26,10.90871);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(27,11.09054);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(28,10.58301);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(29,10.95445);
   Zee_2bjet_dPhi_Zb1__473->SetBinError(30,10.14889);
   Zee_2bjet_dPhi_Zb1__473->SetEntries(2549);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb1__473->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb1__473->SetLineWidth(2);
   Zee_2bjet_dPhi_Zb1__473->SetMarkerStyle(20);
   Zee_2bjet_dPhi_Zb1__473->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_Zb1__473->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb1__473->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1__473->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1__473->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1__473->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1__473->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1__473->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1__473->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1__473->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb1__473->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1__473->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb1__473->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb1__473->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb1__473->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb1__473->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb1_fx1473[30] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb1_fy1473[30] = {
   62.02383,
   61.27095,
   59.81431,
   66.27683,
   55.00751,
   60.4633,
   57.96223,
   74.27512,
   59.79251,
   64.81757,
   73.11916,
   84.84887,
   85.23697,
   93.48289,
   88.01245,
   97.9459,
   104.4154,
   100.2563,
   106.3072,
   112.5265,
   120.1571,
   119.8543,
   134.4545,
   125.0253,
   129.6382,
   133.3262,
   132.5184,
   152.6195,
   127.3156,
   126.6457};
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb1_fex1473[30] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb1_fey1473[30] = {
   7.694733,
   7.948103,
   8.052651,
   7.783488,
   7.981664,
   7.810506,
   8.1003,
   8.102821,
   8.648593,
   8.489815,
   8.817503,
   9.347957,
   9.605665,
   9.233492,
   9.785169,
   9.996769,
   10.20331,
   10.15579,
   10.14274,
   10.83417,
   10.93046,
   11.08759,
   11.24806,
   11.85874,
   11.69581,
   11.8521,
   11.57844,
   11.12768,
   11.54138,
   11.45804};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zee_2bjet_bb_dPhi_Zb1_fx1473,Graph_from_Zee_2bjet_bb_dPhi_Zb1_fy1473,Graph_from_Zee_2bjet_bb_dPhi_Zb1_fex1473,Graph_from_Zee_2bjet_bb_dPhi_Zb1_fey1473);
   gre->SetName("Graph_from_Zee_2bjet_bb_dPhi_Zb1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473->SetMinimum(35.35371);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473->SetMaximum(175.4193);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb11473);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__474 = new TH1D("data_mc_ratio__474","",30,0,3.141593);
   data_mc_ratio__474->SetBinContent(1,0.8222646);
   data_mc_ratio__474->SetBinContent(2,0.946615);
   data_mc_ratio__474->SetBinContent(3,0.8526388);
   data_mc_ratio__474->SetBinContent(4,0.7544115);
   data_mc_ratio__474->SetBinContent(5,0.8726081);
   data_mc_ratio__474->SetBinContent(6,0.9923375);
   data_mc_ratio__474->SetBinContent(7,0.8626307);
   data_mc_ratio__474->SetBinContent(8,0.7404902);
   data_mc_ratio__474->SetBinContent(9,1.00347);
   data_mc_ratio__474->SetBinContent(10,0.8948191);
   data_mc_ratio__474->SetBinContent(11,0.9436651);
   data_mc_ratio__474->SetBinContent(12,0.7778536);
   data_mc_ratio__474->SetBinContent(13,0.9737558);
   data_mc_ratio__474->SetBinContent(14,0.7488001);
   data_mc_ratio__474->SetBinContent(15,1.215737);
   data_mc_ratio__474->SetBinContent(16,0.9903426);
   data_mc_ratio__474->SetBinContent(17,0.8523649);
   data_mc_ratio__474->SetBinContent(18,1.027367);
   data_mc_ratio__474->SetBinContent(19,1.02533);
   data_mc_ratio__474->SetBinContent(20,0.9153397);
   data_mc_ratio__474->SetBinContent(21,0.9570805);
   data_mc_ratio__474->SetBinContent(22,0.8093162);
   data_mc_ratio__474->SetBinContent(23,0.7437463);
   data_mc_ratio__474->SetBinContent(24,0.8878206);
   data_mc_ratio__474->SetBinContent(25,0.8639428);
   data_mc_ratio__474->SetBinContent(26,0.8925477);
   data_mc_ratio__474->SetBinContent(27,0.9281727);
   data_mc_ratio__474->SetBinContent(28,0.7338511);
   data_mc_ratio__474->SetBinContent(29,0.94254);
   data_mc_ratio__474->SetBinContent(30,0.8132928);
   data_mc_ratio__474->SetBinError(1,0.1151401);
   data_mc_ratio__474->SetBinError(2,0.1242966);
   data_mc_ratio__474->SetBinError(3,0.1193933);
   data_mc_ratio__474->SetBinError(4,0.1066899);
   data_mc_ratio__474->SetBinError(5,0.1259501);
   data_mc_ratio__474->SetBinError(6,0.1281102);
   data_mc_ratio__474->SetBinError(7,0.1219944);
   data_mc_ratio__474->SetBinError(8,0.09984768);
   data_mc_ratio__474->SetBinError(9,0.1295474);
   data_mc_ratio__474->SetBinError(10,0.1174955);
   data_mc_ratio__474->SetBinError(11,0.1136039);
   data_mc_ratio__474->SetBinError(12,0.09574716);
   data_mc_ratio__474->SetBinError(13,0.1068836);
   data_mc_ratio__474->SetBinError(14,0.08949873);
   data_mc_ratio__474->SetBinError(15,0.1175297);
   data_mc_ratio__474->SetBinError(16,0.1005541);
   data_mc_ratio__474->SetBinError(17,0.0903505);
   data_mc_ratio__474->SetBinError(18,0.1012294);
   data_mc_ratio__474->SetBinError(19,0.09820881);
   data_mc_ratio__474->SetBinError(20,0.0901911);
   data_mc_ratio__474->SetBinError(21,0.08924822);
   data_mc_ratio__474->SetBinError(22,0.08217361);
   data_mc_ratio__474->SetBinError(23,0.07437463);
   data_mc_ratio__474->SetBinError(24,0.0842682);
   data_mc_ratio__474->SetBinError(25,0.08163492);
   data_mc_ratio__474->SetBinError(26,0.08181972);
   data_mc_ratio__474->SetBinError(27,0.08369051);
   data_mc_ratio__474->SetBinError(28,0.06934241);
   data_mc_ratio__474->SetBinError(29,0.08604173);
   data_mc_ratio__474->SetBinError(30,0.08013612);
   data_mc_ratio__474->SetMinimum(0.4);
   data_mc_ratio__474->SetMaximum(1.6);
   data_mc_ratio__474->SetEntries(1185.983);
   data_mc_ratio__474->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__474->SetLineColor(ci);
   data_mc_ratio__474->SetLineWidth(2);
   data_mc_ratio__474->SetMarkerStyle(20);
   data_mc_ratio__474->SetMarkerSize(1.2);
   data_mc_ratio__474->GetXaxis()->SetTitle("dPhi_{Zb1}");
   data_mc_ratio__474->GetXaxis()->SetRange(1,31);
   data_mc_ratio__474->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__474->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__474->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__474->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__474->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__474->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__474->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__474->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__474->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__474->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__474->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__474->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__474->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__474->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__474->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__474->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__474->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1474[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1474[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1474[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1474[30] = {
   0.1240609,
   0.1297206,
   0.1346275,
   0.1174391,
   0.1451014,
   0.1291776,
   0.1397514,
   0.109092,
   0.1446434,
   0.1309802,
   0.1205909,
   0.1101718,
   0.1126936,
   0.098772,
   0.1111794,
   0.1020642,
   0.09771843,
   0.1012982,
   0.09540968,
   0.09628107,
   0.09096812,
   0.09250889,
   0.08365699,
   0.09485078,
   0.09021882,
   0.08889548,
   0.08737228,
   0.07291127,
   0.09065178,
   0.09047326};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1474,Graph_from_mc_statistical_error_fy1474,Graph_from_mc_statistical_error_fex1474,Graph_from_mc_statistical_error_fey1474);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1474 = new TH1F("Graph_Graph_from_mc_statistical_error1474","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1474->SetMinimum(0.8258784);
   Graph_Graph_from_mc_statistical_error1474->SetMaximum(1.174122);
   Graph_Graph_from_mc_statistical_error1474->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1474->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1474->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1474->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1474->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1474);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->Modified();
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zee_16_amcnlo->SetSelected(dPhi_Zb1_Z_2bjet_Zee_16_amcnlo);
}

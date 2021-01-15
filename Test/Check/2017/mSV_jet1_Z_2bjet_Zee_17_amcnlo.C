void mSV_jet1_Z_2bjet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: mSV_jet1_Z_2bjet_Zee_17_amcnlo/mSV_jet1_Z_2bjet_Zee_17_amcnlo
//=========  (Thu Jan 14 10:42:53 2021) by ROOT version 6.14/09
   TCanvas *mSV_jet1_Z_2bjet_Zee_17_amcnlo = new TCanvas("mSV_jet1_Z_2bjet_Zee_17_amcnlo", "mSV_jet1_Z_2bjet_Zee_17_amcnlo",0,0,600,600);
   mSV_jet1_Z_2bjet_Zee_17_amcnlo->SetHighLightColor(2);
   mSV_jet1_Z_2bjet_Zee_17_amcnlo->Range(0,0,1,1);
   mSV_jet1_Z_2bjet_Zee_17_amcnlo->SetFillColor(0);
   mSV_jet1_Z_2bjet_Zee_17_amcnlo->SetFillStyle(4000);
   mSV_jet1_Z_2bjet_Zee_17_amcnlo->SetBorderMode(0);
   mSV_jet1_Z_2bjet_Zee_17_amcnlo->SetBorderSize(2);
   mSV_jet1_Z_2bjet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   mSV_jet1_Z_2bjet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-0.7828279,6.314516,792.0451);
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
   st->SetMaximum(678.8212);
   
   TH1F *st_stack_246 = new TH1F("st_stack_246","",50,0,10);
   st_stack_246->SetMinimum(0.01);
   st_stack_246->SetMaximum(712.7623);
   st_stack_246->SetDirectory(0);
   st_stack_246->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_246->SetLineColor(ci);
   st_stack_246->GetXaxis()->SetRange(1,30);
   st_stack_246->GetXaxis()->SetLabelFont(42);
   st_stack_246->GetXaxis()->SetLabelSize(0.035);
   st_stack_246->GetXaxis()->SetTitleSize(0.035);
   st_stack_246->GetXaxis()->SetTitleFont(42);
   st_stack_246->GetYaxis()->SetTitle("Events/0.2");
   st_stack_246->GetYaxis()->SetLabelFont(42);
   st_stack_246->GetYaxis()->SetLabelSize(0.05);
   st_stack_246->GetYaxis()->SetTitleSize(0.057);
   st_stack_246->GetYaxis()->SetTitleOffset(1.2);
   st_stack_246->GetYaxis()->SetTitleFont(42);
   st_stack_246->GetZaxis()->SetLabelFont(42);
   st_stack_246->GetZaxis()->SetLabelSize(0.035);
   st_stack_246->GetZaxis()->SetTitleSize(0.035);
   st_stack_246->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_246);
   
   
   TH1D *Zee_2bjet_mSV_jet1_stack_1 = new TH1D("Zee_2bjet_mSV_jet1_stack_1","",50,0,10);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(0,0.852205);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(2,0.1213393);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(3,0.3697112);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(4,0.978396);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(5,1.947969);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(6,1.074719);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(7,1.836488);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(8,2.584094);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(9,2.346454);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(10,1.369602);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(11,2.206698);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(12,1.101613);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(13,0.6431708);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(14,1.522283);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(15,0.4869145);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(16,0.4244108);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(17,0.5507484);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(18,0.5512273);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(20,0.1922766);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(21,0.4505685);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(22,0.1293224);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(0,0.3497733);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(2,0.1964447);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(3,0.2616547);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(4,0.3943021);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(5,0.5857936);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(6,0.405436);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(7,0.5542862);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(8,0.6616264);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(9,0.6225569);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(10,0.4548643);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(11,0.6089956);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(12,0.4026962);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(13,0.3219598);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(14,0.5139068);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(15,0.288411);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(16,0.247969);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(17,0.3169619);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(18,0.3184315);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(20,0.1922766);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(21,0.2713452);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(22,0.1293224);
   Zee_2bjet_mSV_jet1_stack_1->SetEntries(151);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_mSV_jet1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_mSV_jet1_stack_1->SetLineColor(ci);
   Zee_2bjet_mSV_jet1_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_mSV_jet1_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet1_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_mSV_jet1_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet1_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_mSV_jet1_stack_1,"");
   
   TH1D *Zee_2bjet_mSV_jet1_stack_2 = new TH1D("Zee_2bjet_mSV_jet1_stack_2","",50,0,10);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(0,2.451112);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(2,0.5936501);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(3,1.020376);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(4,3.302922);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(5,4.555114);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(6,4.474318);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(7,6.668578);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(8,3.237347);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(9,6.373047);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(10,5.166517);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(11,4.231499);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(12,4.704522);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(13,4.6406);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(14,3.990328);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(15,3.189863);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(16,2.470416);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(17,1.257023);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(18,0.66035);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(19,0.9571097);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(20,0.5877945);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(22,0.3423392);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(0,0.8597332);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(2,0.4279697);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(3,0.4999819);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(4,0.9612593);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(5,1.189545);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(6,1.163486);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(7,1.420422);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(8,1.02591);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(9,1.380108);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(10,1.257736);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(11,1.130933);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(12,1.248176);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(13,1.250803);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(14,1.193999);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(15,0.9547218);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(16,0.8600549);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(17,0.631153);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(18,0.4669549);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(19,0.5538519);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(20,0.4232701);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(22,0.3423392);
   Zee_2bjet_mSV_jet1_stack_2->SetEntries(230);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_mSV_jet1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_mSV_jet1_stack_2->SetLineColor(ci);
   Zee_2bjet_mSV_jet1_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_mSV_jet1_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet1_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_mSV_jet1_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet1_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_mSV_jet1_stack_2,"");
   
   TH1D *Zee_2bjet_mSV_jet1_stack_3 = new TH1D("Zee_2bjet_mSV_jet1_stack_3","",50,0,10);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(0,40.38969);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(2,14.00135);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(3,33.21729);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(4,59.0655);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(5,71.67413);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(6,88.10159);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(7,93.08102);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(8,96.67919);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(9,101.8571);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(10,91.14086);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(11,84.67587);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(12,68.06225);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(13,58.63353);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(14,47.7843);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(15,38.62712);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(16,32.72252);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(17,23.35012);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(18,20.20034);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(19,10.71037);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(20,11.48592);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(21,6.464783);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(22,3.003458);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(23,2.13628);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(24,1.479381);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(25,2.327357);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(26,0.5892977);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(27,0.3764445);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(0,3.719804);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(2,2.161593);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(3,3.341083);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(4,4.488107);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(5,4.927419);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(6,5.485265);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(7,5.631261);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(8,5.725833);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(9,5.851064);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(10,5.590626);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(11,5.3548);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(12,4.783538);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(13,4.442004);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(14,4.016112);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(15,3.637948);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(16,3.347065);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(17,2.843542);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(18,2.616762);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(19,1.959994);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(20,2.000094);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(21,1.497001);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(22,1.027614);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(23,0.8290302);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(24,0.6712292);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(25,0.8900457);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(26,0.4319144);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(27,0.3764445);
   Zee_2bjet_mSV_jet1_stack_3->SetEntries(3646);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_mSV_jet1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_mSV_jet1_stack_3->SetLineColor(ci);
   Zee_2bjet_mSV_jet1_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_mSV_jet1_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet1_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_mSV_jet1_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet1_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_mSV_jet1_stack_3,"");
   
   TH1D *Zee_2bjet_XX_mSV_jet1_stack_4 = new TH1D("Zee_2bjet_XX_mSV_jet1_stack_4","",50,0,10);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(0,2.188511);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(2,-0.8451038);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(3,0.8044585);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(4,0.8960998);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(5,-1.608222);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(6,0.4865629);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(7,-0.1880359);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(8,-0.4607002);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(9,0.9211301);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(11,-0.8335865);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(12,0.8014519);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(13,0.6055117);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(14,-0.9239104);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(17,0.5257335);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(22,-0.6749883);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(25,0.7751586);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(0,1.291765);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(2,0.8451038);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(3,0.8044585);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(4,0.8960998);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(5,1.148582);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(6,0.4865629);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(7,1.389248);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(8,1.180093);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(9,1.405276);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(11,1.406465);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(12,0.8014519);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(13,0.6055117);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(14,0.8647295);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(17,0.5257335);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(22,0.6749883);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(25,0.7751586);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetEntries(29);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_mSV_jet1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_mSV_jet1_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_mSV_jet1_stack_4,"");
   
   TH1D *Zee_2bjet_bX_mSV_jet1_stack_5 = new TH1D("Zee_2bjet_bX_mSV_jet1_stack_5","",50,0,10);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(0,-1.272271);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(2,-1.110708);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(3,0.017569);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(4,-0.8986508);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(5,2.976391);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(6,5.237125);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(7,4.980435);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(8,7.39604);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(9,3.75611);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(10,5.66637);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(11,1.839286);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(12,0.7753369);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(13,-0.2322511);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(14,1.320325);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(15,-0.194881);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(16,-0.1309417);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(17,1.964027);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(18,0.01791878);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(19,-1.521358);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(20,0.7508993);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(22,-0.1141988);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(26,-0.6909998);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(34,0.02165239);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(0,1.34813);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(2,0.7994749);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(3,1.729369);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(4,1.937321);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(5,2.011317);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(6,2.595662);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(7,2.889991);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(8,3.076436);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(9,2.490913);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(10,2.960082);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(11,2.690746);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(12,2.000376);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(13,2.522409);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(14,0.9725847);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(15,1.489728);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(16,1.303754);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(17,1.198893);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(18,0.01791878);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(19,1.187652);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(20,0.7508993);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(22,1.166874);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(26,0.6909998);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(34,0.02165239);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetEntries(165);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_mSV_jet1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_mSV_jet1_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_mSV_jet1_stack_5,"");
   
   TH1D *Zee_2bjet_bb_mSV_jet1_stack_6 = new TH1D("Zee_2bjet_bb_mSV_jet1_stack_6","",50,0,10);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(0,66.41827);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(1,-0.8363475);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(2,26.89782);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(3,85.48146);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(4,135.374);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(5,133.696);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(6,181.35);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(7,193.7725);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(8,217.7188);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(9,258.0979);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(10,222.6612);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(11,118.4911);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(12,167.2741);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(13,132.1102);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(14,120.5986);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(15,73.41817);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(16,83.53571);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(17,55.46321);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(18,33.19447);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(19,32.56973);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(20,22.2905);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(21,13.34845);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(22,1.698648);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(23,2.683975);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(24,8.149112);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(25,2.189347);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(26,1.480964);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(27,-0.8626112);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(30,0.4596013);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(34,0.5217706);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(37,0.6543271);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(39,-0.7423323);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(51,0.0336164);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(0,13.61806);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(1,0.8363475);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(2,8.330447);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(3,12.52625);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(4,15.49374);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(5,17.1728);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(6,19.4389);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(7,21.15412);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(8,21.02901);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(9,22.63868);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(10,20.83051);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(11,19.57418);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(12,17.98584);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(13,15.8553);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(14,15.41738);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(15,13.69287);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(16,12.60032);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(17,10.16191);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(18,9.028313);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(19,7.184606);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(20,6.096465);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(21,5.788171);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(22,4.47252);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(23,3.431957);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(24,2.556977);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(25,1.562625);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(26,1.336663);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(27,0.9513498);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(30,0.4596013);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(34,0.5217706);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(37,0.6543271);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(39,0.7423323);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(51,0.0336164);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetEntries(9701);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_mSV_jet1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_mSV_jet1_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_mSV_jet1_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_mSV_jet1__491 = new TH1D("Zee_2bjet_mSV_jet1__491","",50,0,10);
   Zee_2bjet_mSV_jet1__491->SetBinContent(0,66);
   Zee_2bjet_mSV_jet1__491->SetBinContent(2,38);
   Zee_2bjet_mSV_jet1__491->SetBinContent(3,89);
   Zee_2bjet_mSV_jet1__491->SetBinContent(4,132);
   Zee_2bjet_mSV_jet1__491->SetBinContent(5,177);
   Zee_2bjet_mSV_jet1__491->SetBinContent(6,237);
   Zee_2bjet_mSV_jet1__491->SetBinContent(7,264);
   Zee_2bjet_mSV_jet1__491->SetBinContent(8,277);
   Zee_2bjet_mSV_jet1__491->SetBinContent(9,289);
   Zee_2bjet_mSV_jet1__491->SetBinContent(10,265);
   Zee_2bjet_mSV_jet1__491->SetBinContent(11,226);
   Zee_2bjet_mSV_jet1__491->SetBinContent(12,197);
   Zee_2bjet_mSV_jet1__491->SetBinContent(13,182);
   Zee_2bjet_mSV_jet1__491->SetBinContent(14,166);
   Zee_2bjet_mSV_jet1__491->SetBinContent(15,121);
   Zee_2bjet_mSV_jet1__491->SetBinContent(16,110);
   Zee_2bjet_mSV_jet1__491->SetBinContent(17,65);
   Zee_2bjet_mSV_jet1__491->SetBinContent(18,42);
   Zee_2bjet_mSV_jet1__491->SetBinContent(19,43);
   Zee_2bjet_mSV_jet1__491->SetBinContent(20,28);
   Zee_2bjet_mSV_jet1__491->SetBinContent(21,19);
   Zee_2bjet_mSV_jet1__491->SetBinContent(22,20);
   Zee_2bjet_mSV_jet1__491->SetBinContent(23,8);
   Zee_2bjet_mSV_jet1__491->SetBinContent(24,4);
   Zee_2bjet_mSV_jet1__491->SetBinContent(25,3);
   Zee_2bjet_mSV_jet1__491->SetBinContent(27,1);
   Zee_2bjet_mSV_jet1__491->SetBinContent(28,1);
   Zee_2bjet_mSV_jet1__491->SetBinError(0,8.124038);
   Zee_2bjet_mSV_jet1__491->SetBinError(2,6.164414);
   Zee_2bjet_mSV_jet1__491->SetBinError(3,9.433981);
   Zee_2bjet_mSV_jet1__491->SetBinError(4,11.48913);
   Zee_2bjet_mSV_jet1__491->SetBinError(5,13.30413);
   Zee_2bjet_mSV_jet1__491->SetBinError(6,15.3948);
   Zee_2bjet_mSV_jet1__491->SetBinError(7,16.24808);
   Zee_2bjet_mSV_jet1__491->SetBinError(8,16.64332);
   Zee_2bjet_mSV_jet1__491->SetBinError(9,17);
   Zee_2bjet_mSV_jet1__491->SetBinError(10,16.27882);
   Zee_2bjet_mSV_jet1__491->SetBinError(11,15.0333);
   Zee_2bjet_mSV_jet1__491->SetBinError(12,14.03567);
   Zee_2bjet_mSV_jet1__491->SetBinError(13,13.49074);
   Zee_2bjet_mSV_jet1__491->SetBinError(14,12.8841);
   Zee_2bjet_mSV_jet1__491->SetBinError(15,11);
   Zee_2bjet_mSV_jet1__491->SetBinError(16,10.48809);
   Zee_2bjet_mSV_jet1__491->SetBinError(17,8.062258);
   Zee_2bjet_mSV_jet1__491->SetBinError(18,6.480741);
   Zee_2bjet_mSV_jet1__491->SetBinError(19,6.557439);
   Zee_2bjet_mSV_jet1__491->SetBinError(20,5.291503);
   Zee_2bjet_mSV_jet1__491->SetBinError(21,4.358899);
   Zee_2bjet_mSV_jet1__491->SetBinError(22,4.472136);
   Zee_2bjet_mSV_jet1__491->SetBinError(23,2.828427);
   Zee_2bjet_mSV_jet1__491->SetBinError(24,2);
   Zee_2bjet_mSV_jet1__491->SetBinError(25,1.732051);
   Zee_2bjet_mSV_jet1__491->SetBinError(27,1);
   Zee_2bjet_mSV_jet1__491->SetBinError(28,1);
   Zee_2bjet_mSV_jet1__491->SetEntries(3070);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_mSV_jet1__491->SetLineColor(ci);
   Zee_2bjet_mSV_jet1__491->SetLineWidth(2);
   Zee_2bjet_mSV_jet1__491->SetMarkerStyle(20);
   Zee_2bjet_mSV_jet1__491->SetMarkerSize(1.2);
   Zee_2bjet_mSV_jet1__491->GetXaxis()->SetRange(1,100);
   Zee_2bjet_mSV_jet1__491->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1__491->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1__491->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1__491->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet1__491->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1__491->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1__491->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1__491->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_mSV_jet1__491->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet1__491->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1__491->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1__491->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1__491->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet1__491->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_mSV_jet1_fx1491[50] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_Zee_2bjet_bb_mSV_jet1_fy1491[50] = {
   -0.8363475,
   39.65834,
   120.9109,
   198.7183,
   213.2413,
   280.7243,
   300.1509,
   327.1547,
   373.3517,
   326.0046,
   210.6109,
   242.7192,
   196.4008,
   174.2919,
   115.5272,
   119.0221,
   83.11086,
   54.6243,
   42.71586,
   35.30739,
   20.2638,
   4.384581,
   4.820255,
   9.628493,
   5.291862,
   1.379262,
   -0.4861666,
   0,
   0,
   0.4596013,
   0,
   0,
   0,
   0.543423,
   0,
   0,
   0.6543271,
   0,
   -0.7423323,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zee_2bjet_bb_mSV_jet1_fex1491[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_Zee_2bjet_bb_mSV_jet1_fey1491[50] = {
   0.8363475,
   8.697352,
   13.11588,
   16.30444,
   18.06398,
   20.40714,
   22.1769,
   22.07604,
   23.60543,
   21.81092,
   20.55944,
   18.78128,
   16.71883,
   16.03772,
   14.28087,
   13.13285,
   10.65658,
   9.416881,
   7.561574,
   6.476668,
   5.984778,
   4.796931,
   3.530668,
   2.643611,
   1.958277,
   1.565471,
   1.023121,
   0,
   0,
   0.4596013,
   0,
   0,
   0,
   0.5222197,
   0,
   0,
   0.6543271,
   0,
   0.7423323,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_Zee_2bjet_bb_mSV_jet1_fx1491,Graph_from_Zee_2bjet_bb_mSV_jet1_fy1491,Graph_from_Zee_2bjet_bb_mSV_jet1_fex1491,Graph_from_Zee_2bjet_bb_mSV_jet1_fey1491);
   gre->SetName("Graph_from_Zee_2bjet_bb_mSV_jet1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491","",100,0,11);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491->SetMinimum(-41.53567);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491->SetMaximum(436.8201);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_mSV_jet11491);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_mSV_jet1","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_mSV_jet1_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_mSV_jet1_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_mSV_jet1_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_mSV_jet1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_mSV_jet1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_mSV_jet1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_mSV_jet1","MC unc. (stat.)","fl");

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
   mSV_jet1_Z_2bjet_Zee_17_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.9193524,-0.2774193,6.314516,1.658065);
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
   
   TH1D *data_mc_ratio__492 = new TH1D("data_mc_ratio__492","",50,0,10);
   data_mc_ratio__492->SetBinContent(0,0.5944472);
   data_mc_ratio__492->SetBinContent(2,0.9581842);
   data_mc_ratio__492->SetBinContent(3,0.7360794);
   data_mc_ratio__492->SetBinContent(4,0.6642569);
   data_mc_ratio__492->SetBinContent(5,0.8300454);
   data_mc_ratio__492->SetBinContent(6,0.8442447);
   data_mc_ratio__492->SetBinContent(7,0.8795574);
   data_mc_ratio__492->SetBinContent(8,0.8466942);
   data_mc_ratio__492->SetBinContent(9,0.7740691);
   data_mc_ratio__492->SetBinContent(10,0.812872);
   data_mc_ratio__492->SetBinContent(11,1.073069);
   data_mc_ratio__492->SetBinContent(12,0.8116373);
   data_mc_ratio__492->SetBinContent(13,0.9266766);
   data_mc_ratio__492->SetBinContent(14,0.9524252);
   data_mc_ratio__492->SetBinContent(15,1.047373);
   data_mc_ratio__492->SetBinContent(16,0.924198);
   data_mc_ratio__492->SetBinContent(17,0.7820879);
   data_mc_ratio__492->SetBinContent(18,0.7688885);
   data_mc_ratio__492->SetBinContent(19,1.006652);
   data_mc_ratio__492->SetBinContent(20,0.7930352);
   data_mc_ratio__492->SetBinContent(21,0.9376327);
   data_mc_ratio__492->SetBinContent(22,4.561439);
   data_mc_ratio__492->SetBinContent(23,1.659663);
   data_mc_ratio__492->SetBinContent(24,0.4154336);
   data_mc_ratio__492->SetBinContent(25,0.5669082);
   data_mc_ratio__492->SetBinContent(27,-2.056908);
   data_mc_ratio__492->SetBinError(0,0.1057897);
   data_mc_ratio__492->SetBinError(2,0.155438);
   data_mc_ratio__492->SetBinError(3,0.07802426);
   data_mc_ratio__492->SetBinError(4,0.05781614);
   data_mc_ratio__492->SetBinError(5,0.06239003);
   data_mc_ratio__492->SetBinError(6,0.05483958);
   data_mc_ratio__492->SetBinError(7,0.05413302);
   data_mc_ratio__492->SetBinError(8,0.05087292);
   data_mc_ratio__492->SetBinError(9,0.04553348);
   data_mc_ratio__492->SetBinError(10,0.04993433);
   data_mc_ratio__492->SetBinError(11,0.07137948);
   data_mc_ratio__492->SetBinError(12,0.05782677);
   data_mc_ratio__492->SetBinError(13,0.06868984);
   data_mc_ratio__492->SetBinError(14,0.07392253);
   data_mc_ratio__492->SetBinError(15,0.09521569);
   data_mc_ratio__492->SetBinError(16,0.08811882);
   data_mc_ratio__492->SetBinError(17,0.09700606);
   data_mc_ratio__492->SetBinError(18,0.1186421);
   data_mc_ratio__492->SetBinError(19,0.153513);
   data_mc_ratio__492->SetBinError(20,0.1498696);
   data_mc_ratio__492->SetBinError(21,0.2151077);
   data_mc_ratio__492->SetBinError(22,1.019969);
   data_mc_ratio__492->SetBinError(23,0.5867796);
   data_mc_ratio__492->SetBinError(24,0.2077168);
   data_mc_ratio__492->SetBinError(25,0.3273046);
   data_mc_ratio__492->SetBinError(27,2.056908);
   data_mc_ratio__492->SetMinimum(0.4);
   data_mc_ratio__492->SetMaximum(1.6);
   data_mc_ratio__492->SetEntries(9.857174);
   data_mc_ratio__492->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__492->SetLineColor(ci);
   data_mc_ratio__492->SetLineWidth(2);
   data_mc_ratio__492->SetMarkerStyle(20);
   data_mc_ratio__492->SetMarkerSize(1.2);
   data_mc_ratio__492->GetXaxis()->SetTitle("Sub-leading jet m_{SV} [GeV]");
   data_mc_ratio__492->GetXaxis()->SetRange(1,30);
   data_mc_ratio__492->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__492->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__492->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__492->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__492->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__492->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__492->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__492->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__492->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__492->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__492->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__492->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__492->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__492->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__492->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__492->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__492->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1492[50] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_mc_statistical_error_fy1492[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1492[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1492[50] = {
   0,
   0.219307,
   0.1084756,
   0.082048,
   0.08471142,
   0.0726946,
   0.07388583,
   0.0674789,
   0.06322573,
   0.06690372,
   0.09761813,
   0.07737862,
   0.0851261,
   0.09201641,
   0.1236148,
   0.1103396,
   0.1282213,
   0.1723936,
   0.1770203,
   0.1834366,
   0.2953433,
   1.094046,
   0.732465,
   0.2745612,
   0.3700544,
   1.135006,
   0,
   0,
   0,
   1,
   0,
   0,
   0,
   0.9609819,
   0,
   0,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1492,Graph_from_mc_statistical_error_fy1492,Graph_from_mc_statistical_error_fex1492,Graph_from_mc_statistical_error_fey1492);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1492 = new TH1F("Graph_Graph_from_mc_statistical_error1492","",100,0,11);
   Graph_Graph_from_mc_statistical_error1492->SetMinimum(-0.3620075);
   Graph_Graph_from_mc_statistical_error1492->SetMaximum(2.362008);
   Graph_Graph_from_mc_statistical_error1492->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1492->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1492->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1492->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1492->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1492);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   mSV_jet1_Z_2bjet_Zee_17_amcnlo->cd();
   mSV_jet1_Z_2bjet_Zee_17_amcnlo->Modified();
   mSV_jet1_Z_2bjet_Zee_17_amcnlo->cd();
   mSV_jet1_Z_2bjet_Zee_17_amcnlo->SetSelected(mSV_jet1_Z_2bjet_Zee_17_amcnlo);
}

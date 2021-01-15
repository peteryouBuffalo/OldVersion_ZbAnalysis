void mSV_jet_Z_2bjet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: mSV_jet_Z_2bjet_Zee_17_amcnlo/mSV_jet_Z_2bjet_Zee_17_amcnlo
//=========  (Thu Jan 14 10:42:54 2021) by ROOT version 6.14/09
   TCanvas *mSV_jet_Z_2bjet_Zee_17_amcnlo = new TCanvas("mSV_jet_Z_2bjet_Zee_17_amcnlo", "mSV_jet_Z_2bjet_Zee_17_amcnlo",0,0,600,600);
   mSV_jet_Z_2bjet_Zee_17_amcnlo->SetHighLightColor(2);
   mSV_jet_Z_2bjet_Zee_17_amcnlo->Range(0,0,1,1);
   mSV_jet_Z_2bjet_Zee_17_amcnlo->SetFillColor(0);
   mSV_jet_Z_2bjet_Zee_17_amcnlo->SetFillStyle(4000);
   mSV_jet_Z_2bjet_Zee_17_amcnlo->SetBorderMode(0);
   mSV_jet_Z_2bjet_Zee_17_amcnlo->SetBorderSize(2);
   mSV_jet_Z_2bjet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   mSV_jet_Z_2bjet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-0.751763,6.314516,761.0112);
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
   st->SetMaximum(652.2237);
   
   TH1F *st_stack_250 = new TH1F("st_stack_250","",50,0,10);
   st_stack_250->SetMinimum(0.01);
   st_stack_250->SetMaximum(684.8349);
   st_stack_250->SetDirectory(0);
   st_stack_250->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_250->SetLineColor(ci);
   st_stack_250->GetXaxis()->SetRange(1,30);
   st_stack_250->GetXaxis()->SetLabelFont(42);
   st_stack_250->GetXaxis()->SetLabelSize(0.035);
   st_stack_250->GetXaxis()->SetTitleSize(0.035);
   st_stack_250->GetXaxis()->SetTitleFont(42);
   st_stack_250->GetYaxis()->SetTitle("Events/0.2");
   st_stack_250->GetYaxis()->SetLabelFont(42);
   st_stack_250->GetYaxis()->SetLabelSize(0.05);
   st_stack_250->GetYaxis()->SetTitleSize(0.057);
   st_stack_250->GetYaxis()->SetTitleOffset(1.2);
   st_stack_250->GetYaxis()->SetTitleFont(42);
   st_stack_250->GetZaxis()->SetLabelFont(42);
   st_stack_250->GetZaxis()->SetLabelSize(0.035);
   st_stack_250->GetZaxis()->SetTitleSize(0.035);
   st_stack_250->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_250);
   
   
   TH1D *Zee_2bjet_mSV_jet_stack_1 = new TH1D("Zee_2bjet_mSV_jet_stack_1","",50,0,10);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(0,0.3128032);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(3,1.140512);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(4,1.291146);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(5,1.384462);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(6,1.10141);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(7,2.466076);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(8,1.120995);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(9,1.494533);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(10,0.7603022);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(11,1.463718);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(12,1.237381);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(13,2.078796);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(14,1.181471);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(15,1.290071);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(16,0.6775997);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(17,0.9552621);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(18,0.4630233);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(19,0.1211217);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(20,0.5685438);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(21,0.3237026);
   Zee_2bjet_mSV_jet_stack_1->SetBinContent(22,0.3072796);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(0,0.2275778);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(3,0.4409975);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(4,0.4425094);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(5,0.436899);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(6,0.4140361);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(7,0.6640674);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(8,0.3878546);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(9,0.5103118);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(10,0.3341407);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(11,0.5010013);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(12,0.4548104);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(13,0.6268354);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(14,0.4544034);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(15,0.4779551);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(16,0.3397405);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(17,0.3984973);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(18,0.2721286);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(19,0.1211217);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(20,0.298272);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(21,0.2318456);
   Zee_2bjet_mSV_jet_stack_1->SetBinError(22,0.217423);
   Zee_2bjet_mSV_jet_stack_1->SetEntries(151);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_mSV_jet_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_mSV_jet_stack_1->SetLineColor(ci);
   Zee_2bjet_mSV_jet_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_mSV_jet_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_mSV_jet_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_mSV_jet_stack_1,"");
   
   TH1D *Zee_2bjet_mSV_jet_stack_2 = new TH1D("Zee_2bjet_mSV_jet_stack_2","",50,0,10);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(0,1.253284);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(2,0.3507763);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(3,2.24682);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(4,5.110565);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(5,3.187342);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(6,5.275605);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(7,5.708416);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(8,5.734137);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(9,5.424551);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(10,5.846005);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(11,3.057031);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(12,3.432188);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(13,3.570143);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(14,4.073807);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(15,3.347012);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(16,2.260966);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(17,1.866927);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(18,0.8726543);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(19,0.8942382);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(20,0.6984758);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(22,0.3752287);
   Zee_2bjet_mSV_jet_stack_2->SetBinContent(24,0.2886544);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(0,0.606576);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(2,0.3375903);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(3,0.7640179);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(4,1.229662);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(5,0.9754272);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(6,1.255715);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(7,1.400984);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(8,1.296395);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(9,1.335699);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(10,1.373817);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(11,0.9552592);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(12,1.01035);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(13,1.026396);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(14,1.196144);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(15,1.017527);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(16,0.8449194);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(17,0.7708065);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(18,0.5069181);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(19,0.5203123);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(20,0.4311418);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(22,0.3752287);
   Zee_2bjet_mSV_jet_stack_2->SetBinError(24,0.2886544);
   Zee_2bjet_mSV_jet_stack_2->SetEntries(230);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_mSV_jet_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_mSV_jet_stack_2->SetLineColor(ci);
   Zee_2bjet_mSV_jet_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_mSV_jet_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_mSV_jet_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_mSV_jet_stack_2,"");
   
   TH1D *Zee_2bjet_mSV_jet_stack_3 = new TH1D("Zee_2bjet_mSV_jet_stack_3","",50,0,10);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(0,30.62495);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(1,0.3731721);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(2,20.55289);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(3,33.99066);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(4,61.14069);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(5,77.13264);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(6,95.60529);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(7,91.99393);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(8,93.6222);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(9,93.51638);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(10,92.83562);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(11,72.12948);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(12,67.23574);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(13,60.04723);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(14,48.33513);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(15,41.03269);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(16,29.43177);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(17,27.84442);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(18,17.11967);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(19,17.1304);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(20,8.837475);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(21,7.621382);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(22,4.829317);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(23,3.13753);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(24,1.371421);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(25,1.466853);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(26,1.761475);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(27,0.6475793);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(30,0.2462672);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(33,0.2073883);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(35,0.01469437);
   Zee_2bjet_mSV_jet_stack_3->SetBinContent(41,0.00068938);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(0,3.236536);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(1,0.3731721);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(2,2.617527);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(3,3.310028);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(4,4.544869);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(5,5.097974);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(6,5.7156);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(7,5.607224);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(8,5.609479);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(9,5.687631);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(10,5.671814);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(11,4.963028);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(12,4.82074);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(13,4.509613);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(14,4.018496);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(15,3.698602);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(16,3.127117);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(17,3.079209);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(18,2.435494);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(19,2.417628);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(20,1.728175);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(21,1.575443);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(22,1.280236);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(23,1.018533);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(24,0.7003028);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(25,0.7371395);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(26,0.7858397);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(27,0.4686881);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(30,0.2462672);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(33,0.2073883);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(35,0.01469437);
   Zee_2bjet_mSV_jet_stack_3->SetBinError(41,0.00068938);
   Zee_2bjet_mSV_jet_stack_3->SetEntries(3646);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_mSV_jet_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_mSV_jet_stack_3->SetLineColor(ci);
   Zee_2bjet_mSV_jet_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_mSV_jet_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_mSV_jet_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_mSV_jet_stack_3,"");
   
   TH1D *Zee_2bjet_XX_mSV_jet_stack_4 = new TH1D("Zee_2bjet_XX_mSV_jet_stack_4","",50,0,10);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinContent(0,-1.088744);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinContent(2,0.1657364);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinContent(3,1.697552);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinContent(4,1.339999);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinContent(5,-1.701557);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinContent(6,-0.9182394);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinContent(7,1.218197);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinContent(8,-0.07225848);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinContent(9,0.510438);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinContent(10,0.843306);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinContent(12,0.1896502);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinContent(13,0.2235323);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinContent(17,-0.06136071);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinContent(18,0.03864428);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinContent(21,-0.6899827);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinContent(25,0.7751586);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinError(0,1.088744);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinError(2,1.02719);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinError(3,1.202215);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinError(4,0.9692389);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinError(5,1.203298);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinError(6,0.9182394);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinError(7,1.304138);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinError(8,1.121717);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinError(9,0.510438);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinError(10,1.855243);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinError(12,0.1896502);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinError(13,1.028677);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinError(17,0.06136071);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinError(18,0.03864428);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinError(21,0.6899827);
   Zee_2bjet_XX_mSV_jet_stack_4->SetBinError(25,0.7751586);
   Zee_2bjet_XX_mSV_jet_stack_4->SetEntries(29);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_mSV_jet_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_mSV_jet_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_mSV_jet_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_XX_mSV_jet_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_mSV_jet_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_mSV_jet_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_mSV_jet_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_mSV_jet_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_mSV_jet_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_mSV_jet_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_mSV_jet_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_mSV_jet_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_mSV_jet_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_mSV_jet_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_mSV_jet_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_mSV_jet_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_mSV_jet_stack_4,"");
   
   TH1D *Zee_2bjet_bX_mSV_jet_stack_5 = new TH1D("Zee_2bjet_bX_mSV_jet_stack_5","",50,0,10);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(0,3.205724);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(2,0.9404857);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(3,-0.6464149);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(4,2.983537);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(5,-0.06480099);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(6,6.646317);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(7,-0.8056935);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(8,1.291368);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(9,2.688389);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(10,5.049621);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(11,5.001204);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(12,0.6234157);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(13,0.4720781);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(14,0.1133996);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(15,1.331947);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(16,2.165221);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(17,-0.8292512);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(18,0.3089429);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(19,-0.5987032);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(20,0.2973326);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(22,0.8048424);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinContent(23,-0.4257368);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(0,2.011309);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(2,1.152364);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(3,2.171041);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(4,1.354899);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(5,2.58536);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(6,2.936496);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(7,3.053738);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(8,2.79724);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(9,2.439312);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(10,1.933516);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(11,2.663068);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(12,1.9171);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(13,2.528685);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(14,1.159581);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(15,1.504092);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(16,1.250366);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(17,1.206273);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(18,0.8819163);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(19,0.5987032);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(20,0.8167511);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(22,0.8048424);
   Zee_2bjet_bX_mSV_jet_stack_5->SetBinError(23,0.4257368);
   Zee_2bjet_bX_mSV_jet_stack_5->SetEntries(165);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_mSV_jet_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_mSV_jet_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_mSV_jet_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bX_mSV_jet_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_mSV_jet_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_mSV_jet_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_mSV_jet_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_mSV_jet_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_mSV_jet_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_mSV_jet_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_mSV_jet_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_mSV_jet_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_mSV_jet_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_mSV_jet_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_mSV_jet_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_mSV_jet_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_mSV_jet_stack_5,"");
   
   TH1D *Zee_2bjet_bb_mSV_jet_stack_6 = new TH1D("Zee_2bjet_bb_mSV_jet_stack_6","",50,0,10);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(0,63.70216);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(2,18.13519);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(3,82.26223);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(4,123.7838);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(5,191.2835);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(6,200.2315);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(7,215.1594);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(8,195.4332);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(9,255.0888);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(10,186.1744);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(11,130.8379);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(12,149.1838);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(13,132.8407);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(14,87.85767);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(15,83.10171);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(16,72.86286);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(17,47.92984);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(18,38.86575);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(19,33.31627);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(20,28.7381);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(21,22.34714);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(22,5.767272);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(23,9.064201);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(24,9.498772);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(25,3.872442);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(26,2.441219);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(27,0.8072747);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(28,0.3172904);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(29,0.595488);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(36,-0.7689754);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(37,-0.7085018);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinContent(39,-0.8302185);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(0,12.36315);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(2,8.729811);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(3,13.50819);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(4,16.38569);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(5,18.13407);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(6,19.92287);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(7,20.89286);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(8,20.21794);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(9,21.34684);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(10,20.12972);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(11,18.8043);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(12,17.98867);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(13,16.42732);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(14,14.57608);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(15,13.48686);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(16,12.21344);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(17,11.17624);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(18,9.312516);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(19,8.592078);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(20,7.841903);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(21,6.743164);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(22,4.346345);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(23,3.840529);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(24,3.046637);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(25,2.353046);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(26,2.873111);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(27,0.8072747);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(28,0.9674635);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(29,0.595488);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(36,0.7689754);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(37,0.7085018);
   Zee_2bjet_bb_mSV_jet_stack_6->SetBinError(39,0.8302185);
   Zee_2bjet_bb_mSV_jet_stack_6->SetEntries(9701);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_mSV_jet_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_mSV_jet_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_mSV_jet_stack_6->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bb_mSV_jet_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_mSV_jet_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_mSV_jet_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_mSV_jet_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_mSV_jet_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_mSV_jet_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_mSV_jet_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_mSV_jet_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_mSV_jet_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_mSV_jet_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_mSV_jet_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_mSV_jet_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_mSV_jet_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_mSV_jet_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_mSV_jet__499 = new TH1D("Zee_2bjet_mSV_jet__499","",50,0,10);
   Zee_2bjet_mSV_jet__499->SetBinContent(0,61);
   Zee_2bjet_mSV_jet__499->SetBinContent(2,47);
   Zee_2bjet_mSV_jet__499->SetBinContent(3,102);
   Zee_2bjet_mSV_jet__499->SetBinContent(4,149);
   Zee_2bjet_mSV_jet__499->SetBinContent(5,152);
   Zee_2bjet_mSV_jet__499->SetBinContent(6,231);
   Zee_2bjet_mSV_jet__499->SetBinContent(7,245);
   Zee_2bjet_mSV_jet__499->SetBinContent(8,246);
   Zee_2bjet_mSV_jet__499->SetBinContent(9,260);
   Zee_2bjet_mSV_jet__499->SetBinContent(10,243);
   Zee_2bjet_mSV_jet__499->SetBinContent(11,212);
   Zee_2bjet_mSV_jet__499->SetBinContent(12,199);
   Zee_2bjet_mSV_jet__499->SetBinContent(13,185);
   Zee_2bjet_mSV_jet__499->SetBinContent(14,145);
   Zee_2bjet_mSV_jet__499->SetBinContent(15,115);
   Zee_2bjet_mSV_jet__499->SetBinContent(16,132);
   Zee_2bjet_mSV_jet__499->SetBinContent(17,97);
   Zee_2bjet_mSV_jet__499->SetBinContent(18,68);
   Zee_2bjet_mSV_jet__499->SetBinContent(19,56);
   Zee_2bjet_mSV_jet__499->SetBinContent(20,35);
   Zee_2bjet_mSV_jet__499->SetBinContent(21,36);
   Zee_2bjet_mSV_jet__499->SetBinContent(22,16);
   Zee_2bjet_mSV_jet__499->SetBinContent(23,10);
   Zee_2bjet_mSV_jet__499->SetBinContent(24,11);
   Zee_2bjet_mSV_jet__499->SetBinContent(25,8);
   Zee_2bjet_mSV_jet__499->SetBinContent(26,6);
   Zee_2bjet_mSV_jet__499->SetBinContent(27,1);
   Zee_2bjet_mSV_jet__499->SetBinContent(29,1);
   Zee_2bjet_mSV_jet__499->SetBinContent(30,1);
   Zee_2bjet_mSV_jet__499->SetBinError(0,7.81025);
   Zee_2bjet_mSV_jet__499->SetBinError(2,6.855655);
   Zee_2bjet_mSV_jet__499->SetBinError(3,10.0995);
   Zee_2bjet_mSV_jet__499->SetBinError(4,12.20656);
   Zee_2bjet_mSV_jet__499->SetBinError(5,12.32883);
   Zee_2bjet_mSV_jet__499->SetBinError(6,15.19868);
   Zee_2bjet_mSV_jet__499->SetBinError(7,15.65248);
   Zee_2bjet_mSV_jet__499->SetBinError(8,15.68439);
   Zee_2bjet_mSV_jet__499->SetBinError(9,16.12452);
   Zee_2bjet_mSV_jet__499->SetBinError(10,15.58846);
   Zee_2bjet_mSV_jet__499->SetBinError(11,14.56022);
   Zee_2bjet_mSV_jet__499->SetBinError(12,14.10674);
   Zee_2bjet_mSV_jet__499->SetBinError(13,13.60147);
   Zee_2bjet_mSV_jet__499->SetBinError(14,12.04159);
   Zee_2bjet_mSV_jet__499->SetBinError(15,10.72381);
   Zee_2bjet_mSV_jet__499->SetBinError(16,11.48913);
   Zee_2bjet_mSV_jet__499->SetBinError(17,9.848858);
   Zee_2bjet_mSV_jet__499->SetBinError(18,8.246211);
   Zee_2bjet_mSV_jet__499->SetBinError(19,7.483315);
   Zee_2bjet_mSV_jet__499->SetBinError(20,5.91608);
   Zee_2bjet_mSV_jet__499->SetBinError(21,6);
   Zee_2bjet_mSV_jet__499->SetBinError(22,4);
   Zee_2bjet_mSV_jet__499->SetBinError(23,3.162278);
   Zee_2bjet_mSV_jet__499->SetBinError(24,3.316625);
   Zee_2bjet_mSV_jet__499->SetBinError(25,2.828427);
   Zee_2bjet_mSV_jet__499->SetBinError(26,2.44949);
   Zee_2bjet_mSV_jet__499->SetBinError(27,1);
   Zee_2bjet_mSV_jet__499->SetBinError(29,1);
   Zee_2bjet_mSV_jet__499->SetBinError(30,1);
   Zee_2bjet_mSV_jet__499->SetEntries(3070);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_mSV_jet__499->SetLineColor(ci);
   Zee_2bjet_mSV_jet__499->SetLineWidth(2);
   Zee_2bjet_mSV_jet__499->SetMarkerStyle(20);
   Zee_2bjet_mSV_jet__499->SetMarkerSize(1.2);
   Zee_2bjet_mSV_jet__499->GetXaxis()->SetRange(1,100);
   Zee_2bjet_mSV_jet__499->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet__499->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet__499->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet__499->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet__499->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet__499->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet__499->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet__499->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_mSV_jet__499->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet__499->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet__499->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet__499->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet__499->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet__499->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_mSV_jet_fx1499[50] = {
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
   Double_t Graph_from_Zee_2bjet_bb_mSV_jet_fy1499[50] = {
   0.3731721,
   40.14508,
   120.6914,
   195.6498,
   271.2216,
   307.9419,
   315.7404,
   297.1296,
   358.7231,
   291.5092,
   212.4893,
   221.9021,
   199.2325,
   141.5615,
   130.1034,
   107.3984,
   77.70584,
   57.66869,
   50.86332,
   39.13993,
   29.60225,
   12.08394,
   11.77599,
   11.15885,
   6.114454,
   4.202694,
   1.454854,
   0.3172904,
   0.595488,
   0.2462672,
   0,
   0,
   0.2073883,
   0,
   0.01469437,
   -0.7689754,
   -0.7085018,
   0,
   -0.8302185,
   0,
   0.00068938,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zee_2bjet_bb_mSV_jet_fex1499[50] = {
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
   Double_t Graph_from_Zee_2bjet_bb_mSV_jet_fey1499[50] = {
   0.3731721,
   9.249761,
   14.15501,
   17.13563,
   19.08162,
   20.99531,
   21.94043,
   21.24018,
   22.27762,
   21.13184,
   19.65931,
   18.75555,
   17.29429,
   15.21816,
   14.11032,
   12.70195,
   11.68767,
   9.683227,
   8.961728,
   8.088508,
   6.96291,
   4.622289,
   3.996039,
   3.139385,
   2.584777,
   2.978642,
   0.9334672,
   0.9674635,
   0.595488,
   0.2462672,
   0,
   0,
   0.2073883,
   0,
   0.01469437,
   0.7689754,
   0.7085018,
   0,
   0.8302185,
   0,
   0.00068938,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_Zee_2bjet_bb_mSV_jet_fx1499,Graph_from_Zee_2bjet_bb_mSV_jet_fy1499,Graph_from_Zee_2bjet_bb_mSV_jet_fex1499,Graph_from_Zee_2bjet_bb_mSV_jet_fey1499);
   gre->SetName("Graph_from_Zee_2bjet_bb_mSV_jet");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499","",100,0,11);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499->SetMinimum(-39.92655);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499->SetMaximum(419.2668);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_mSV_jet1499);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_mSV_jet","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_mSV_jet_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_mSV_jet_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_mSV_jet_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_mSV_jet_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_mSV_jet_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_mSV_jet_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_mSV_jet","MC unc. (stat.)","fl");

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
   mSV_jet_Z_2bjet_Zee_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__500 = new TH1D("data_mc_ratio__500","",50,0,10);
   data_mc_ratio__500->SetBinContent(0,0.6223843);
   data_mc_ratio__500->SetBinContent(2,1.170754);
   data_mc_ratio__500->SetBinContent(3,0.845131);
   data_mc_ratio__500->SetBinContent(4,0.761565);
   data_mc_ratio__500->SetBinContent(5,0.5604274);
   data_mc_ratio__500->SetBinContent(6,0.7501415);
   data_mc_ratio__500->SetBinContent(7,0.775954);
   data_mc_ratio__500->SetBinContent(8,0.8279215);
   data_mc_ratio__500->SetBinContent(9,0.7247931);
   data_mc_ratio__500->SetBinContent(10,0.8335929);
   data_mc_ratio__500->SetBinContent(11,0.9976971);
   data_mc_ratio__500->SetBinContent(12,0.8967917);
   data_mc_ratio__500->SetBinContent(13,0.9285634);
   data_mc_ratio__500->SetBinContent(14,1.02429);
   data_mc_ratio__500->SetBinContent(15,0.8839121);
   data_mc_ratio__500->SetBinContent(16,1.229068);
   data_mc_ratio__500->SetBinContent(17,1.248297);
   data_mc_ratio__500->SetBinContent(18,1.179149);
   data_mc_ratio__500->SetBinContent(19,1.10099);
   data_mc_ratio__500->SetBinContent(20,0.8942274);
   data_mc_ratio__500->SetBinContent(21,1.216124);
   data_mc_ratio__500->SetBinContent(22,1.324072);
   data_mc_ratio__500->SetBinContent(23,0.8491852);
   data_mc_ratio__500->SetBinContent(24,0.9857649);
   data_mc_ratio__500->SetBinContent(25,1.308375);
   data_mc_ratio__500->SetBinContent(26,1.427656);
   data_mc_ratio__500->SetBinContent(27,0.6873542);
   data_mc_ratio__500->SetBinContent(29,1.679295);
   data_mc_ratio__500->SetBinContent(30,4.06063);
   data_mc_ratio__500->SetBinError(0,0.1147347);
   data_mc_ratio__500->SetBinError(2,0.170772);
   data_mc_ratio__500->SetBinError(3,0.08368043);
   data_mc_ratio__500->SetBinError(4,0.06238983);
   data_mc_ratio__500->SetBinError(5,0.04545666);
   data_mc_ratio__500->SetBinError(6,0.04935569);
   data_mc_ratio__500->SetBinError(7,0.04957388);
   data_mc_ratio__500->SetBinError(8,0.05278635);
   data_mc_ratio__500->SetBinError(9,0.04494976);
   data_mc_ratio__500->SetBinError(10,0.05347501);
   data_mc_ratio__500->SetBinError(11,0.06852212);
   data_mc_ratio__500->SetBinError(12,0.06357188);
   data_mc_ratio__500->SetBinError(13,0.06826934);
   data_mc_ratio__500->SetBinError(14,0.08506265);
   data_mc_ratio__500->SetBinError(15,0.08242523);
   data_mc_ratio__500->SetBinError(16,0.1069767);
   data_mc_ratio__500->SetBinError(17,0.1267454);
   data_mc_ratio__500->SetBinError(18,0.1429929);
   data_mc_ratio__500->SetBinError(19,0.147126);
   data_mc_ratio__500->SetBinError(20,0.151152);
   data_mc_ratio__500->SetBinError(21,0.2026873);
   data_mc_ratio__500->SetBinError(22,0.3310179);
   data_mc_ratio__500->SetBinError(23,0.2685359);
   data_mc_ratio__500->SetBinError(24,0.2972193);
   data_mc_ratio__500->SetBinError(25,0.4625805);
   data_mc_ratio__500->SetBinError(26,0.582838);
   data_mc_ratio__500->SetBinError(27,0.6873542);
   data_mc_ratio__500->SetBinError(29,1.679295);
   data_mc_ratio__500->SetBinError(30,4.06063);
   data_mc_ratio__500->SetMinimum(0.4);
   data_mc_ratio__500->SetMaximum(1.6);
   data_mc_ratio__500->SetEntries(22.88204);
   data_mc_ratio__500->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__500->SetLineColor(ci);
   data_mc_ratio__500->SetLineWidth(2);
   data_mc_ratio__500->SetMarkerStyle(20);
   data_mc_ratio__500->SetMarkerSize(1.2);
   data_mc_ratio__500->GetXaxis()->SetTitle("Leading jet m_{SV} [GeV]");
   data_mc_ratio__500->GetXaxis()->SetRange(1,30);
   data_mc_ratio__500->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__500->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__500->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__500->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__500->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__500->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__500->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__500->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__500->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__500->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__500->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__500->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__500->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__500->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__500->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__500->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__500->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1500[50] = {
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
   Double_t Graph_from_mc_statistical_error_fy1500[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1500[50] = {
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
   Double_t Graph_from_mc_statistical_error_fey1500[50] = {
   1,
   0.2304083,
   0.1172827,
   0.08758319,
   0.07035434,
   0.06817946,
   0.06948883,
   0.07148457,
   0.06210255,
   0.07249115,
   0.09251906,
   0.08452173,
   0.08680457,
   0.1075021,
   0.1084547,
   0.1182695,
   0.1504092,
   0.1679113,
   0.1761924,
   0.2066562,
   0.2352156,
   0.3825151,
   0.3393377,
   0.281336,
   0.4227323,
   0.708746,
   0.6416226,
   3.049142,
   1,
   1,
   0,
   0,
   1,
   0,
   1,
   0,
   0,
   0,
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
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1500,Graph_from_mc_statistical_error_fy1500,Graph_from_mc_statistical_error_fex1500,Graph_from_mc_statistical_error_fey1500);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1500 = new TH1F("Graph_Graph_from_mc_statistical_error1500","",100,0,11);
   Graph_Graph_from_mc_statistical_error1500->SetMinimum(-2.65897);
   Graph_Graph_from_mc_statistical_error1500->SetMaximum(4.65897);
   Graph_Graph_from_mc_statistical_error1500->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1500->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1500->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1500->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1500->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1500);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   mSV_jet_Z_2bjet_Zee_17_amcnlo->cd();
   mSV_jet_Z_2bjet_Zee_17_amcnlo->Modified();
   mSV_jet_Z_2bjet_Zee_17_amcnlo->cd();
   mSV_jet_Z_2bjet_Zee_17_amcnlo->SetSelected(mSV_jet_Z_2bjet_Zee_17_amcnlo);
}

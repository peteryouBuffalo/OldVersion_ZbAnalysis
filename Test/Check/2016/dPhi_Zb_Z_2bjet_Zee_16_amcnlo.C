void dPhi_Zb_Z_2bjet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb_Z_2bjet_Zee_16_amcnlo/dPhi_Zb_Z_2bjet_Zee_16_amcnlo
//=========  (Thu Jan 14 10:42:52 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb_Z_2bjet_Zee_16_amcnlo = new TCanvas("dPhi_Zb_Z_2bjet_Zee_16_amcnlo", "dPhi_Zb_Z_2bjet_Zee_16_amcnlo",0,0,600,600);
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->SetHighLightColor(2);
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->Range(0,0,1,1);
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->SetFillColor(0);
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->SetFillStyle(4000);
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->SetBorderMode(0);
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->SetBorderSize(2);
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-0.5544118,3.416482,563.8573);
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
   st->SetMaximum(483.2535);
   
   TH1F *st_stack_233 = new TH1F("st_stack_233","",30,0,3.141593);
   st_stack_233->SetMinimum(0.01);
   st_stack_233->SetMaximum(507.4162);
   st_stack_233->SetDirectory(0);
   st_stack_233->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_233->SetLineColor(ci);
   st_stack_233->GetXaxis()->SetRange(1,31);
   st_stack_233->GetXaxis()->SetLabelFont(42);
   st_stack_233->GetXaxis()->SetLabelSize(0.035);
   st_stack_233->GetXaxis()->SetTitleSize(0.035);
   st_stack_233->GetXaxis()->SetTitleFont(42);
   st_stack_233->GetYaxis()->SetTitle("Events/0.105");
   st_stack_233->GetYaxis()->SetLabelFont(42);
   st_stack_233->GetYaxis()->SetLabelSize(0.05);
   st_stack_233->GetYaxis()->SetTitleSize(0.057);
   st_stack_233->GetYaxis()->SetTitleOffset(1.2);
   st_stack_233->GetYaxis()->SetTitleFont(42);
   st_stack_233->GetZaxis()->SetLabelFont(42);
   st_stack_233->GetZaxis()->SetLabelSize(0.035);
   st_stack_233->GetZaxis()->SetTitleSize(0.035);
   st_stack_233->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_233);
   
   
   TH1D *Zee_2bjet_dPhi_Zb_stack_1 = new TH1D("Zee_2bjet_dPhi_Zb_stack_1","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(4,0.3446701);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(6,0.2058413);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(7,0.6535241);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(8,0.2306531);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(9,0.183671);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(12,0.2621923);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(13,0.1768742);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(14,0.3503565);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(15,0.1747491);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(16,0.7070167);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(17,0.1728903);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(19,0.1789772);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(20,0.3460223);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(21,1.468066);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(22,1.035876);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(23,0.9115216);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(24,0.9071235);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(25,1.276423);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(26,1.856957);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(27,0.9356595);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(28,2.347036);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(29,2.594859);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(30,0.9157303);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(4,0.2437525);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(6,0.2058413);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(7,0.3279082);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(8,0.1766294);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(9,0.183671);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(12,0.205673);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(13,0.1768742);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(14,0.2481261);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(15,0.1747491);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(16,0.3339619);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(17,0.1728903);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(19,0.1789772);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(20,0.2447712);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(21,0.5201143);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(22,0.4267137);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(23,0.3855929);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(24,0.4064235);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(25,0.4800973);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(26,0.5664563);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(27,0.4203794);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(28,0.6345135);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(29,0.6966072);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(30,0.397159);
   Zee_2bjet_dPhi_Zb_stack_1->SetEntries(109);

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
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(1,0.2675032);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(2,0.2656309);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(5,0.4914708);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(6,0.2649);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(7,0.2921335);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(8,0.2956027);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(9,0.2879258);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(10,0.5739854);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(11,0.7888094);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(12,0.2716574);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(13,1.330319);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(14,0.8124758);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(15,0.4908007);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(16,0.2928866);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(17,0.5309869);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(18,1.256988);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(19,0.528657);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(20,0.920854);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(21,2.95296);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(22,1.028911);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(23,1.842877);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(24,3.230822);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(25,3.335489);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(26,2.945064);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(27,4.354242);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(28,5.779463);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(29,4.853156);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(30,3.285803);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(1,0.2675032);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(2,0.2656309);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(5,0.3475311);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(6,0.2649);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(7,0.2744107);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(8,0.2956027);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(9,0.2879258);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(10,0.4058922);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(11,0.4555563);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(12,0.2716574);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(13,0.5954349);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(14,0.4691507);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(15,0.3487683);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(16,0.2928866);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(17,0.3762111);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(18,0.56384);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(19,0.373868);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(20,0.4789891);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(21,0.8800881);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(22,0.5148732);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(23,0.6968);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(24,0.9498612);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(25,0.9248092);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(26,0.8790884);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(27,1.086238);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(28,1.259019);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(29,1.164345);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(30,0.9421574);
   Zee_2bjet_dPhi_Zb_stack_2->SetEntries(170);

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
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(1,10.84596);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(2,7.731971);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(3,10.69523);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(4,9.726623);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(5,9.25684);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(6,9.376232);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(7,11.85334);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(8,11.93616);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(9,11.27183);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(10,14.56094);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(11,15.51317);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(12,16.9965);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(13,17.2502);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(14,17.44931);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(15,20.51219);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(16,23.73538);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(17,23.40182);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(18,28.27166);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(19,32.55854);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(20,34.30439);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(21,36.39938);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(22,36.65748);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(23,41.27161);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(24,40.26937);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(25,44.91057);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(26,52.70026);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(27,48.9982);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(28,51.30161);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(29,48.56049);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(30,45.50642);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(1,1.386321);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(2,1.163451);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(3,1.359066);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(4,1.296899);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(5,1.266701);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(6,1.304794);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(7,1.448057);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(8,1.44348);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(9,1.413624);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(10,1.611956);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(11,1.638745);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(12,1.726048);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(13,1.747135);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(14,1.737088);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(15,1.911803);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(16,2.032298);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(17,2.027767);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(18,2.243761);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(19,2.384023);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(20,2.455835);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(21,2.520024);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(22,2.544692);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(23,2.7111);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(24,2.657256);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(25,2.805397);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(26,3.043752);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(27,2.944316);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(28,3.000679);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(29,2.90988);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(30,2.822385);
   Zee_2bjet_dPhi_Zb_stack_3->SetEntries(4701);

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
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(4,-0.4412974);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(6,0.4713868);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(11,-0.5452018);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(14,1.179378);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(15,0.4619803);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(16,0.4020475);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(18,0.9082056);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(19,-0.522046);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(20,1.160844);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(21,0.6481264);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(22,0.5054207);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(23,-0.3212489);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(24,0.2206316);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(25,1.534629);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(26,2.069243);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(27,1.174877);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(28,0.7149856);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(29,0.1950269);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(30,0.2524367);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(4,0.4412974);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(6,0.4713868);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(11,0.5452018);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(14,0.8573214);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(15,0.4619803);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(16,0.4020475);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(18,0.6432487);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(19,0.4441611);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(20,0.6754552);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(21,0.508461);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(22,1.024685);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(23,0.3216506);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(24,0.751326);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(25,0.8892855);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(26,1.490927);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(27,1.068913);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(28,1.193779);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(29,1.2347);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(30,1.454917);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetEntries(60);

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
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(1,0.2946957);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(4,0.8462092);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(5,0.4303379);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(6,-0.4712805);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(7,2.416047);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(8,0.81232);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(9,2.025248);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(10,0.4473207);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(11,1.043969);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(12,0.8822059);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(13,0.1116041);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(14,1.916461);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(15,0.4896186);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(16,0.05179638);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(17,1.47263);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(18,0.9077752);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(19,-0.2346722);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(20,0.3991988);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(21,1.33257);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(22,0.5830026);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(23,3.098934);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(24,5.445635);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(25,1.263935);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(26,3.146494);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(27,1.715338);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(28,3.654862);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(29,2.212959);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(30,1.26756);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(1,1.271686);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(4,0.953913);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(5,0.4303379);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(6,0.8271436);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(7,1.085914);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(8,0.5750755);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(9,1.013618);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(10,0.4326154);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(11,0.7302248);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(12,1.010917);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(13,0.7387546);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(14,0.960899);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(15,1.362904);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(16,0.6482366);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(17,1.227802);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(18,1.187134);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(19,0.8618157);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(20,1.055954);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(21,1.518786);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(22,1.512609);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(23,1.409708);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(24,2.027836);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(25,2.173916);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(26,1.727736);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(27,2.010485);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(28,2.279273);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(29,2.42798);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(30,1.774806);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetEntries(253);

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
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(1,12.92311);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(2,16.98327);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(3,17.37268);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(4,24.78498);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(5,18.56239);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(6,13.6253);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(7,11.31974);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(8,25.68456);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(9,20.30642);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(10,25.71444);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(11,18.66416);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(12,20.15963);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(13,30.20196);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(14,28.27813);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(15,37.32848);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(16,36.27283);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(17,49.91985);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(18,40.69753);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(19,62.85357);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(20,75.32767);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(21,62.51416);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(22,79.09809);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(23,117.6618);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(24,131.748);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(25,132.4607);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(26,117.8217);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(27,167.3729);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(28,201.9915);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(29,196.84);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(30,181.656);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(1,4.434181);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(2,4.593033);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(3,4.66128);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(4,4.786665);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(5,5.123313);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(6,4.560742);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(7,5.079743);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(8,5.239014);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(9,5.053874);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(10,5.324308);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(11,5.575299);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(12,5.550018);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(13,5.666429);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(14,6.299974);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(15,7.15423);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(16,7.131481);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(17,7.73279);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(18,8.107543);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(19,9.067693);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(20,9.233028);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(21,9.726595);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(22,11.11443);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(23,11.83139);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(24,13.12635);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(25,13.67179);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(26,14.55941);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(27,15.33506);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(28,15.57909);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(29,16.20456);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(30,16.37028);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetEntries(13604);

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
   
   TH1D *Zee_2bjet_dPhi_Zb__465 = new TH1D("Zee_2bjet_dPhi_Zb__465","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(1,33);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(2,21);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(3,18);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(4,30);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(5,26);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(6,28);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(7,34);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(8,24);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(9,36);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(10,38);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(11,31);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(12,38);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(13,42);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(14,52);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(15,57);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(16,66);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(17,58);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(18,79);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(19,75);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(20,85);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(21,88);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(22,118);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(23,132);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(24,141);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(25,162);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(26,198);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(27,208);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(28,219);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(29,209);
   Zee_2bjet_dPhi_Zb__465->SetBinContent(30,203);
   Zee_2bjet_dPhi_Zb__465->SetBinError(1,5.744563);
   Zee_2bjet_dPhi_Zb__465->SetBinError(2,4.582576);
   Zee_2bjet_dPhi_Zb__465->SetBinError(3,4.242641);
   Zee_2bjet_dPhi_Zb__465->SetBinError(4,5.477226);
   Zee_2bjet_dPhi_Zb__465->SetBinError(5,5.09902);
   Zee_2bjet_dPhi_Zb__465->SetBinError(6,5.291503);
   Zee_2bjet_dPhi_Zb__465->SetBinError(7,5.830952);
   Zee_2bjet_dPhi_Zb__465->SetBinError(8,4.898979);
   Zee_2bjet_dPhi_Zb__465->SetBinError(9,6);
   Zee_2bjet_dPhi_Zb__465->SetBinError(10,6.164414);
   Zee_2bjet_dPhi_Zb__465->SetBinError(11,5.567764);
   Zee_2bjet_dPhi_Zb__465->SetBinError(12,6.164414);
   Zee_2bjet_dPhi_Zb__465->SetBinError(13,6.480741);
   Zee_2bjet_dPhi_Zb__465->SetBinError(14,7.211103);
   Zee_2bjet_dPhi_Zb__465->SetBinError(15,7.549834);
   Zee_2bjet_dPhi_Zb__465->SetBinError(16,8.124038);
   Zee_2bjet_dPhi_Zb__465->SetBinError(17,7.615773);
   Zee_2bjet_dPhi_Zb__465->SetBinError(18,8.888194);
   Zee_2bjet_dPhi_Zb__465->SetBinError(19,8.660254);
   Zee_2bjet_dPhi_Zb__465->SetBinError(20,9.219544);
   Zee_2bjet_dPhi_Zb__465->SetBinError(21,9.380832);
   Zee_2bjet_dPhi_Zb__465->SetBinError(22,10.86278);
   Zee_2bjet_dPhi_Zb__465->SetBinError(23,11.48913);
   Zee_2bjet_dPhi_Zb__465->SetBinError(24,11.87434);
   Zee_2bjet_dPhi_Zb__465->SetBinError(25,12.72792);
   Zee_2bjet_dPhi_Zb__465->SetBinError(26,14.07125);
   Zee_2bjet_dPhi_Zb__465->SetBinError(27,14.42221);
   Zee_2bjet_dPhi_Zb__465->SetBinError(28,14.79865);
   Zee_2bjet_dPhi_Zb__465->SetBinError(29,14.45683);
   Zee_2bjet_dPhi_Zb__465->SetBinError(30,14.24781);
   Zee_2bjet_dPhi_Zb__465->SetEntries(2549);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb__465->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb__465->SetLineWidth(2);
   Zee_2bjet_dPhi_Zb__465->SetMarkerStyle(20);
   Zee_2bjet_dPhi_Zb__465->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_Zb__465->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb__465->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb__465->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb__465->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb__465->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb__465->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb__465->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb__465->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb__465->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb__465->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb__465->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb__465->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb__465->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb__465->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb__465->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb_fx1465[30] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb_fy1465[30] = {
   24.33127,
   24.98087,
   28.0679,
   35.26119,
   28.74104,
   23.47238,
   26.53478,
   38.95929,
   34.07509,
   41.29668,
   35.4649,
   38.57218,
   49.07095,
   49.98611,
   59.45782,
   61.46196,
   75.49818,
   72.04216,
   95.36303,
   112.459,
   105.3153,
   118.9088,
   164.4655,
   181.8216,
   184.7817,
   180.5397,
   224.5513,
   265.7894,
   255.2565,
   232.884};
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb_fex1465[30] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb_fey1465[30] = {
   4.824167,
   4.745538,
   4.855368,
   5.075255,
   5.306489,
   4.849924,
   5.4095,
   5.475417,
   5.355748,
   5.594512,
   5.899784,
   5.909314,
   6.007702,
   6.681852,
   7.553881,
   7.467759,
   8.098569,
   8.5386,
   9.434959,
   9.650936,
   10.22582,
   11.56682,
   12.24976,
   13.60537,
   14.19122,
   15.08451,
   15.82322,
   16.13443,
   16.74263,
   16.80072};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zee_2bjet_bb_dPhi_Zb_fx1465,Graph_from_Zee_2bjet_bb_dPhi_Zb_fy1465,Graph_from_Zee_2bjet_bb_dPhi_Zb_fex1465,Graph_from_Zee_2bjet_bb_dPhi_Zb_fey1465);
   gre->SetName("Graph_from_Zee_2bjet_bb_dPhi_Zb");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465->SetMinimum(16.76021);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465->SetMaximum(308.254);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1465);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__466 = new TH1D("data_mc_ratio__466","",30,0,3.141593);
   data_mc_ratio__466->SetBinContent(1,1.356279);
   data_mc_ratio__466->SetBinContent(2,0.8406432);
   data_mc_ratio__466->SetBinContent(3,0.6413019);
   data_mc_ratio__466->SetBinContent(4,0.8507938);
   data_mc_ratio__466->SetBinContent(5,0.9046297);
   data_mc_ratio__466->SetBinContent(6,1.192892);
   data_mc_ratio__466->SetBinContent(7,1.281337);
   data_mc_ratio__466->SetBinContent(8,0.6160276);
   data_mc_ratio__466->SetBinContent(9,1.05649);
   data_mc_ratio__466->SetBinContent(10,0.9201707);
   data_mc_ratio__466->SetBinContent(11,0.8741036);
   data_mc_ratio__466->SetBinContent(12,0.985166);
   data_mc_ratio__466->SetBinContent(13,0.8559036);
   data_mc_ratio__466->SetBinContent(14,1.040289);
   data_mc_ratio__466->SetBinContent(15,0.9586628);
   data_mc_ratio__466->SetBinContent(16,1.073835);
   data_mc_ratio__466->SetBinContent(17,0.7682304);
   data_mc_ratio__466->SetBinContent(18,1.09658);
   data_mc_ratio__466->SetBinContent(19,0.7864683);
   data_mc_ratio__466->SetBinContent(20,0.7558311);
   data_mc_ratio__466->SetBinContent(21,0.8355864);
   data_mc_ratio__466->SetBinContent(22,0.9923573);
   data_mc_ratio__466->SetBinContent(23,0.8026);
   data_mc_ratio__466->SetBinContent(24,0.7754854);
   data_mc_ratio__466->SetBinContent(25,0.8767101);
   data_mc_ratio__466->SetBinContent(26,1.096712);
   data_mc_ratio__466->SetBinContent(27,0.9262919);
   data_mc_ratio__466->SetBinContent(28,0.8239606);
   data_mc_ratio__466->SetBinContent(29,0.8187841);
   data_mc_ratio__466->SetBinContent(30,0.8716786);
   data_mc_ratio__466->SetBinError(1,0.2360979);
   data_mc_ratio__466->SetBinError(2,0.1834434);
   data_mc_ratio__466->SetBinError(3,0.1511563);
   data_mc_ratio__466->SetBinError(4,0.155333);
   data_mc_ratio__466->SetBinError(5,0.1774125);
   data_mc_ratio__466->SetBinError(6,0.2254353);
   data_mc_ratio__466->SetBinError(7,0.2197475);
   data_mc_ratio__466->SetBinError(8,0.1257461);
   data_mc_ratio__466->SetBinError(9,0.1760817);
   data_mc_ratio__466->SetBinError(10,0.1492714);
   data_mc_ratio__466->SetBinError(11,0.1569936);
   data_mc_ratio__466->SetBinError(12,0.159815);
   data_mc_ratio__466->SetBinError(13,0.1320688);
   data_mc_ratio__466->SetBinError(14,0.1442621);
   data_mc_ratio__466->SetBinError(15,0.126978);
   data_mc_ratio__466->SetBinError(16,0.1321799);
   data_mc_ratio__466->SetBinError(17,0.1008736);
   data_mc_ratio__466->SetBinError(18,0.1233749);
   data_mc_ratio__466->SetBinError(19,0.09081354);
   data_mc_ratio__466->SetBinError(20,0.0819814);
   data_mc_ratio__466->SetBinError(21,0.0890738);
   data_mc_ratio__466->SetBinError(22,0.09135389);
   data_mc_ratio__466->SetBinError(23,0.06985736);
   data_mc_ratio__466->SetBinError(24,0.06530765);
   data_mc_ratio__466->SetBinError(25,0.06888085);
   data_mc_ratio__466->SetBinError(26,0.07793992);
   data_mc_ratio__466->SetBinError(27,0.06422678);
   data_mc_ratio__466->SetBinError(28,0.0556781);
   data_mc_ratio__466->SetBinError(29,0.05663648);
   data_mc_ratio__466->SetBinError(30,0.06117985);
   data_mc_ratio__466->SetMinimum(0.4);
   data_mc_ratio__466->SetMaximum(1.6);
   data_mc_ratio__466->SetEntries(715.238);
   data_mc_ratio__466->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__466->SetLineColor(ci);
   data_mc_ratio__466->SetLineWidth(2);
   data_mc_ratio__466->SetMarkerStyle(20);
   data_mc_ratio__466->SetMarkerSize(1.2);
   data_mc_ratio__466->GetXaxis()->SetTitle("dPhi_{Zb}");
   data_mc_ratio__466->GetXaxis()->SetRange(1,31);
   data_mc_ratio__466->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__466->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__466->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__466->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__466->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__466->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__466->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__466->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__466->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__466->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__466->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__466->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__466->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__466->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__466->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__466->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__466->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1466[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1466[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1466[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1466[30] = {
   0.1982702,
   0.1899669,
   0.1729865,
   0.1439332,
   0.1846311,
   0.2066226,
   0.2038645,
   0.140542,
   0.1571749,
   0.1354712,
   0.1663556,
   0.1532015,
   0.1224289,
   0.1336742,
   0.127046,
   0.1215021,
   0.1072684,
   0.1185223,
   0.09893728,
   0.08581738,
   0.09709726,
   0.0972747,
   0.07448227,
   0.07482812,
   0.07679991,
   0.08355234,
   0.07046596,
   0.06070382,
   0.0655914,
   0.072142};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1466,Graph_from_mc_statistical_error_fy1466,Graph_from_mc_statistical_error_fex1466,Graph_from_mc_statistical_error_fey1466);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1466 = new TH1F("Graph_Graph_from_mc_statistical_error1466","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1466->SetMinimum(0.7520528);
   Graph_Graph_from_mc_statistical_error1466->SetMaximum(1.247947);
   Graph_Graph_from_mc_statistical_error1466->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1466->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1466->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1466->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1466->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1466);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->Modified();
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zee_16_amcnlo->SetSelected(dPhi_Zb_Z_2bjet_Zee_16_amcnlo);
}

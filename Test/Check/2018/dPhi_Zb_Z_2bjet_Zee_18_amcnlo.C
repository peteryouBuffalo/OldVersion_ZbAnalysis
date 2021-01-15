void dPhi_Zb_Z_2bjet_Zee_18_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb_Z_2bjet_Zee_18_amcnlo/dPhi_Zb_Z_2bjet_Zee_18_amcnlo
//=========  (Thu Jan 14 10:42:52 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb_Z_2bjet_Zee_18_amcnlo = new TCanvas("dPhi_Zb_Z_2bjet_Zee_18_amcnlo", "dPhi_Zb_Z_2bjet_Zee_18_amcnlo",0,0,600,600);
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->SetHighLightColor(2);
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->Range(0,0,1,1);
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->SetFillColor(0);
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->SetFillStyle(4000);
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->SetBorderMode(0);
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->SetBorderSize(2);
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-1.132637,3.416482,1141.504);
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
   st->SetMaximum(978.3241);
   
   TH1F *st_stack_235 = new TH1F("st_stack_235","",30,0,3.141593);
   st_stack_235->SetMinimum(0.01);
   st_stack_235->SetMaximum(1027.24);
   st_stack_235->SetDirectory(0);
   st_stack_235->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_235->SetLineColor(ci);
   st_stack_235->GetXaxis()->SetRange(1,31);
   st_stack_235->GetXaxis()->SetLabelFont(42);
   st_stack_235->GetXaxis()->SetLabelSize(0.035);
   st_stack_235->GetXaxis()->SetTitleSize(0.035);
   st_stack_235->GetXaxis()->SetTitleFont(42);
   st_stack_235->GetYaxis()->SetTitle("Events/0.105");
   st_stack_235->GetYaxis()->SetLabelFont(42);
   st_stack_235->GetYaxis()->SetLabelSize(0.05);
   st_stack_235->GetYaxis()->SetTitleSize(0.057);
   st_stack_235->GetYaxis()->SetTitleOffset(1.2);
   st_stack_235->GetYaxis()->SetTitleFont(42);
   st_stack_235->GetZaxis()->SetLabelFont(42);
   st_stack_235->GetZaxis()->SetLabelSize(0.035);
   st_stack_235->GetZaxis()->SetTitleSize(0.035);
   st_stack_235->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_235);
   
   
   TH1D *Zee_2bjet_dPhi_Zb_stack_1 = new TH1D("Zee_2bjet_dPhi_Zb_stack_1","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(1,0.3003672);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(2,0.2721833);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(7,0.7921237);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(8,0.3576503);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(9,1.025196);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(10,0.04794477);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(11,0.420724);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(12,0.48876);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(13,0.5276853);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(14,1.959853);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(15,0.4523319);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(16,1.521014);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(17,1.772834);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(18,2.653978);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(19,0.9534306);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(20,1.95756);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(21,1.740922);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(22,1.742665);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(23,3.047192);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(24,3.58677);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(25,3.260405);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(26,4.956008);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(27,3.819193);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(28,2.760183);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(29,3.841844);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinContent(30,3.889851);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(1,0.2325587);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(2,0.2721833);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(7,0.4616626);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(8,0.3576503);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(9,0.4790367);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(10,0.04794477);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(11,0.36534);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(12,0.3487039);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(13,0.3770752);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(14,0.7130351);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(15,0.3103525);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(16,0.5926577);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(17,0.6962957);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(18,0.8026926);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(19,0.4610399);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(20,0.7745042);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(21,0.6798574);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(22,0.7495633);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(23,0.8943107);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(24,0.9914593);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(25,0.9386741);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(26,1.126301);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(27,1.039859);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(28,0.8441836);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(29,1.056491);
   Zee_2bjet_dPhi_Zb_stack_1->SetBinError(30,1.02422);
   Zee_2bjet_dPhi_Zb_stack_1->SetEntries(215);

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
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(1,0.5989613);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(4,0.6265805);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(7,0.9816329);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(8,0.3342916);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(9,0.5407653);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(10,1.930315);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(11,1.481311);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(12,1.997206);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(13,0.8876766);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(14,0.9560665);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(15,3.528243);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(16,3.112673);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(17,2.237457);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(18,1.353501);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(19,3.75389);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(20,1.834905);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(21,3.313019);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(22,3.665926);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(23,4.036778);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(24,7.303211);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(25,4.733239);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(26,7.151101);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(27,9.054049);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(28,10.3115);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(29,12.0466);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinContent(30,10.06074);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(1,0.5023154);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(4,0.6265805);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(7,0.7188256);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(8,0.3342916);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(9,0.5407653);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(10,1.206698);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(11,0.8851947);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(12,1.117576);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(13,0.6277397);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(14,0.6961325);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(15,1.312112);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(16,1.282436);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(17,1.03025);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(18,0.7383313);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(19,1.350871);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(20,0.9507928);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(21,1.360234);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(22,1.326708);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(23,1.358324);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(24,1.862738);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(25,1.48216);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(26,1.951734);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(27,2.094232);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(28,2.266346);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(29,2.465558);
   Zee_2bjet_dPhi_Zb_stack_2->SetBinError(30,2.210075);
   Zee_2bjet_dPhi_Zb_stack_2->SetEntries(218);

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
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(1,21.61716);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(2,21.37593);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(3,25.75255);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(4,23.65635);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(5,24.04535);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(6,22.46854);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(7,24.94881);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(8,26.938);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(9,26.61942);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(10,31.53006);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(11,31.80884);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(12,35.49556);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(13,36.89022);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(14,41.64634);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(15,46.23292);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(16,51.90799);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(17,54.68488);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(18,64.56313);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(19,73.88953);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(20,74.83207);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(21,84.57577);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(22,89.01008);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(23,100.9606);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(24,102.6543);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(25,105.813);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(26,110.6379);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(27,117.6615);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(28,118.7161);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(29,114.371);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinContent(30,117.5346);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(1,1.366213);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(2,1.41034);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(3,1.457489);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(4,1.396706);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(5,1.416595);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(6,1.353982);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(7,1.429521);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(8,1.486713);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(9,1.500503);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(10,1.601733);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(11,1.629074);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(12,1.710929);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(13,1.753692);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(14,1.85182);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(15,1.938857);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(16,2.072128);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(17,2.132176);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(18,2.316057);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(19,2.492346);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(20,2.484581);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(21,2.667583);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(22,2.694756);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(23,2.896167);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(24,2.939752);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(25,2.96551);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(26,3.026108);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(27,3.129043);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(28,3.157455);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(29,3.076267);
   Zee_2bjet_dPhi_Zb_stack_3->SetBinError(30,3.138669);
   Zee_2bjet_dPhi_Zb_stack_3->SetEntries(24408);

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
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(3,1.021065);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(4,1.118236);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(5,11.18396);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(10,2.053401);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(11,0.1501624);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(13,0.8649364);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(15,6.392695);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(16,0.9485595);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(17,1.565335);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(19,1.009878);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(20,-1.361002);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(21,-2.077379);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(22,3.241444);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(23,1.68649);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(24,3.343597);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(25,0.7954282);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(26,6.841651);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(27,1.072822);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(28,0.6142113);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(29,0.9767941);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(30,1.41667);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(3,1.021065);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(4,1.118236);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(5,10.16475);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(10,2.053401);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(11,0.1501624);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(13,0.8649364);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(15,6.392695);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(16,0.9485595);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(17,1.565335);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(19,1.009878);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(20,1.361002);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(21,2.199664);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(22,2.009522);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(23,1.506893);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(24,3.883248);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(25,1.406692);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(26,3.66758);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(27,1.072822);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(28,2.237456);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(29,1.826676);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetBinError(30,1.41667);
   Zee_2bjet_XX_dPhi_Zb_stack_4->SetEntries(40);

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
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(1,1.284823);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(2,0.01700168);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(4,-2.191342);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(7,1.289383);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(8,2.035715);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(9,3.455356);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(11,-0.3302189);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(12,-4.729276);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(13,2.555832);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(14,3.057051);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(15,1.119429);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(16,3.923216);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(17,3.110522);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(18,0.2918549);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(19,0.09564317);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(20,11.07561);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(21,1.259617);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(22,-6.135811);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(23,4.148357);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(24,-4.028096);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(25,10.95682);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(26,11.33106);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(27,5.895181);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(28,3.656685);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(29,1.393141);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(30,13.49705);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(1,1.284823);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(2,2.500075);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(4,2.622556);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(7,1.289383);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(8,1.730994);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(9,2.858585);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(11,0.3302189);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(12,3.087296);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(13,1.758259);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(14,2.384386);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(15,1.119429);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(16,2.329442);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(17,2.549836);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(18,2.611651);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(19,2.770535);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(20,4.596124);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(21,3.627362);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(22,4.859745);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(23,2.813095);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(24,4.804185);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(25,5.438415);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(26,3.842066);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(27,4.758912);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(28,4.395194);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(29,3.398089);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetBinError(30,6.242324);
   Zee_2bjet_bX_dPhi_Zb_stack_5->SetEntries(197);

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
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(1,23.70817);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(2,42.11147);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(3,29.7277);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(4,22.4795);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(5,24.74955);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(6,57.43746);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(7,41.46108);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(8,29.08157);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(9,23.3995);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(10,50.46422);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(11,56.39458);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(12,14.85074);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(13,40.13693);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(14,40.01504);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(15,66.58667);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(16,88.36709);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(17,83.83462);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(18,112.751);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(19,95.26778);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(20,138.092);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(21,127.1786);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(22,147.2388);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(23,211.6958);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(24,198.3762);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(25,313.7724);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(26,335.9038);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(27,343.9462);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(28,400.6216);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(29,405.4488);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(30,363.6165);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(1,9.241137);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(2,9.986788);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(3,8.769284);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(4,12.74077);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(5,10.99937);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(6,10.36353);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(7,9.494096);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(8,9.350437);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(9,10.43584);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(10,10.53014);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(11,11.51835);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(12,11.66492);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(13,12.46044);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(14,13.13438);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(15,14.07681);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(16,14.96309);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(17,15.03142);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(18,17.76967);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(19,18.28166);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(20,20.21739);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(21,21.84261);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(22,23.84619);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(23,24.7467);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(24,27.61);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(25,29.62033);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(26,32.21274);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(27,33.11725);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(28,37.36281);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(29,34.94937);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetBinError(30,34.385);
   Zee_2bjet_bb_dPhi_Zb_stack_6->SetEntries(11144);

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
   
   TH1D *Zee_2bjet_dPhi_Zb__469 = new TH1D("Zee_2bjet_dPhi_Zb__469","",30,0,3.141593);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(1,55);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(2,49);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(3,55);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(4,65);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(5,50);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(6,58);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(7,59);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(8,67);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(9,52);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(10,65);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(11,62);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(12,69);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(13,82);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(14,102);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(15,75);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(16,115);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(17,112);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(18,137);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(19,157);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(20,169);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(21,198);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(22,223);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(23,260);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(24,329);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(25,349);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(26,387);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(27,392);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(28,425);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(29,422);
   Zee_2bjet_dPhi_Zb__469->SetBinContent(30,430);
   Zee_2bjet_dPhi_Zb__469->SetBinError(1,7.416198);
   Zee_2bjet_dPhi_Zb__469->SetBinError(2,7);
   Zee_2bjet_dPhi_Zb__469->SetBinError(3,7.416198);
   Zee_2bjet_dPhi_Zb__469->SetBinError(4,8.062258);
   Zee_2bjet_dPhi_Zb__469->SetBinError(5,7.071068);
   Zee_2bjet_dPhi_Zb__469->SetBinError(6,7.615773);
   Zee_2bjet_dPhi_Zb__469->SetBinError(7,7.681146);
   Zee_2bjet_dPhi_Zb__469->SetBinError(8,8.185353);
   Zee_2bjet_dPhi_Zb__469->SetBinError(9,7.211103);
   Zee_2bjet_dPhi_Zb__469->SetBinError(10,8.062258);
   Zee_2bjet_dPhi_Zb__469->SetBinError(11,7.874008);
   Zee_2bjet_dPhi_Zb__469->SetBinError(12,8.306624);
   Zee_2bjet_dPhi_Zb__469->SetBinError(13,9.055385);
   Zee_2bjet_dPhi_Zb__469->SetBinError(14,10.0995);
   Zee_2bjet_dPhi_Zb__469->SetBinError(15,8.660254);
   Zee_2bjet_dPhi_Zb__469->SetBinError(16,10.72381);
   Zee_2bjet_dPhi_Zb__469->SetBinError(17,10.58301);
   Zee_2bjet_dPhi_Zb__469->SetBinError(18,11.7047);
   Zee_2bjet_dPhi_Zb__469->SetBinError(19,12.52996);
   Zee_2bjet_dPhi_Zb__469->SetBinError(20,13);
   Zee_2bjet_dPhi_Zb__469->SetBinError(21,14.07125);
   Zee_2bjet_dPhi_Zb__469->SetBinError(22,14.93318);
   Zee_2bjet_dPhi_Zb__469->SetBinError(23,16.12452);
   Zee_2bjet_dPhi_Zb__469->SetBinError(24,18.13836);
   Zee_2bjet_dPhi_Zb__469->SetBinError(25,18.68154);
   Zee_2bjet_dPhi_Zb__469->SetBinError(26,19.67232);
   Zee_2bjet_dPhi_Zb__469->SetBinError(27,19.79899);
   Zee_2bjet_dPhi_Zb__469->SetBinError(28,20.61553);
   Zee_2bjet_dPhi_Zb__469->SetBinError(29,20.54264);
   Zee_2bjet_dPhi_Zb__469->SetBinError(30,20.73644);
   Zee_2bjet_dPhi_Zb__469->SetEntries(5070);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_Zb__469->SetLineColor(ci);
   Zee_2bjet_dPhi_Zb__469->SetLineWidth(2);
   Zee_2bjet_dPhi_Zb__469->SetMarkerStyle(20);
   Zee_2bjet_dPhi_Zb__469->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_Zb__469->GetXaxis()->SetRange(1,60);
   Zee_2bjet_dPhi_Zb__469->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb__469->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb__469->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb__469->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb__469->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb__469->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb__469->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb__469->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_Zb__469->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb__469->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_Zb__469->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_Zb__469->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_Zb__469->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_Zb__469->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb_fx1469[30] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb_fy1469[30] = {
   47.50948,
   63.77658,
   56.50131,
   45.68933,
   59.97885,
   79.906,
   69.47303,
   58.74722,
   55.04024,
   86.02594,
   89.9254,
   48.10299,
   81.86329,
   87.63434,
   124.3123,
   149.7805,
   147.2056,
   181.6135,
   174.9701,
   226.4311,
   215.9906,
   238.7631,
   325.5751,
   311.236,
   439.3313,
   476.8216,
   481.449,
   536.6803,
   538.0783,
   510.0154};
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb_fex1469[30] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dPhi_Zb_fey1469[30] = {
   9.445757,
   10.39468,
   8.948027,
   13.1453,
   15.04377,
   10.4516,
   9.724903,
   9.637271,
   10.94768,
   10.91441,
   11.67796,
   12.24335,
   12.75593,
   13.51368,
   15.67971,
   15.37888,
   15.52378,
   18.14209,
   18.73937,
   20.96179,
   22.46162,
   24.61462,
   25.17173,
   28.52309,
   30.34455,
   32.865,
   33.70176,
   37.8962,
   35.39775,
   35.20066};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zee_2bjet_bb_dPhi_Zb_fx1469,Graph_from_Zee_2bjet_bb_dPhi_Zb_fy1469,Graph_from_Zee_2bjet_bb_dPhi_Zb_fex1469,Graph_from_Zee_2bjet_bb_dPhi_Zb_fey1469);
   gre->SetName("Graph_from_Zee_2bjet_bb_dPhi_Zb");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469->SetMinimum(29.28962);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469->SetMaximum(628.7797);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dPhi_Zb1469);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__470 = new TH1D("data_mc_ratio__470","",30,0,3.141593);
   data_mc_ratio__470->SetBinContent(1,1.157664);
   data_mc_ratio__470->SetBinContent(2,0.7683071);
   data_mc_ratio__470->SetBinContent(3,0.9734287);
   data_mc_ratio__470->SetBinContent(4,1.422652);
   data_mc_ratio__470->SetBinContent(5,0.8336271);
   data_mc_ratio__470->SetBinContent(6,0.7258528);
   data_mc_ratio__470->SetBinContent(7,0.8492505);
   data_mc_ratio__470->SetBinContent(8,1.140479);
   data_mc_ratio__470->SetBinContent(9,0.9447633);
   data_mc_ratio__470->SetBinContent(10,0.7555861);
   data_mc_ratio__470->SetBinContent(11,0.6894604);
   data_mc_ratio__470->SetBinContent(12,1.434422);
   data_mc_ratio__470->SetBinContent(13,1.00167);
   data_mc_ratio__470->SetBinContent(14,1.163927);
   data_mc_ratio__470->SetBinContent(15,0.6033193);
   data_mc_ratio__470->SetBinContent(16,0.76779);
   data_mc_ratio__470->SetBinContent(17,0.7608404);
   data_mc_ratio__470->SetBinContent(18,0.7543493);
   data_mc_ratio__470->SetBinContent(19,0.8972959);
   data_mc_ratio__470->SetBinContent(20,0.7463638);
   data_mc_ratio__470->SetBinContent(21,0.9167066);
   data_mc_ratio__470->SetBinContent(22,0.93398);
   data_mc_ratio__470->SetBinContent(23,0.7985867);
   data_mc_ratio__470->SetBinContent(24,1.057076);
   data_mc_ratio__470->SetBinContent(25,0.7943891);
   data_mc_ratio__470->SetBinContent(26,0.8116244);
   data_mc_ratio__470->SetBinContent(27,0.8142088);
   data_mc_ratio__470->SetBinContent(28,0.7919054);
   data_mc_ratio__470->SetBinContent(29,0.7842725);
   data_mc_ratio__470->SetBinContent(30,0.8431118);
   data_mc_ratio__470->SetBinError(1,0.1560994);
   data_mc_ratio__470->SetBinError(2,0.1097582);
   data_mc_ratio__470->SetBinError(3,0.1312571);
   data_mc_ratio__470->SetBinError(4,0.1764582);
   data_mc_ratio__470->SetBinError(5,0.1178927);
   data_mc_ratio__470->SetBinError(6,0.09530915);
   data_mc_ratio__470->SetBinError(7,0.110563);
   data_mc_ratio__470->SetBinError(8,0.1393317);
   data_mc_ratio__470->SetBinError(9,0.1310151);
   data_mc_ratio__470->SetBinError(10,0.09371892);
   data_mc_ratio__470->SetBinError(11,0.08756156);
   data_mc_ratio__470->SetBinError(12,0.1726842);
   data_mc_ratio__470->SetBinError(13,0.110616);
   data_mc_ratio__470->SetBinError(14,0.115246);
   data_mc_ratio__470->SetBinError(15,0.06966531);
   data_mc_ratio__470->SetBinError(16,0.07159679);
   data_mc_ratio__470->SetBinError(17,0.07189266);
   data_mc_ratio__470->SetBinError(18,0.06444841);
   data_mc_ratio__470->SetBinError(19,0.07161201);
   data_mc_ratio__470->SetBinError(20,0.0574126);
   data_mc_ratio__470->SetBinError(21,0.0651475);
   data_mc_ratio__470->SetBinError(22,0.06254393);
   data_mc_ratio__470->SetBinError(23,0.04952625);
   data_mc_ratio__470->SetBinError(24,0.05827848);
   data_mc_ratio__470->SetBinError(25,0.04252268);
   data_mc_ratio__470->SetBinError(26,0.04125719);
   data_mc_ratio__470->SetBinError(27,0.04112375);
   data_mc_ratio__470->SetBinError(28,0.03841305);
   data_mc_ratio__470->SetBinError(29,0.03817779);
   data_mc_ratio__470->SetBinError(30,0.04065846);
   data_mc_ratio__470->SetMinimum(0.4);
   data_mc_ratio__470->SetMaximum(1.6);
   data_mc_ratio__470->SetEntries(746.2415);
   data_mc_ratio__470->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__470->SetLineColor(ci);
   data_mc_ratio__470->SetLineWidth(2);
   data_mc_ratio__470->SetMarkerStyle(20);
   data_mc_ratio__470->SetMarkerSize(1.2);
   data_mc_ratio__470->GetXaxis()->SetTitle("dPhi_{Zb}");
   data_mc_ratio__470->GetXaxis()->SetRange(1,31);
   data_mc_ratio__470->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__470->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__470->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__470->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__470->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__470->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__470->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__470->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__470->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__470->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__470->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__470->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__470->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__470->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__470->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__470->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__470->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1470[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1470[30] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t Graph_from_mc_statistical_error_fex1470[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1470[30] = {
   0.1988184,
   0.1629859,
   0.1583685,
   0.2877105,
   0.250818,
   0.1307987,
   0.139981,
   0.1640464,
   0.1989031,
   0.1268735,
   0.1298628,
   0.2545236,
   0.1558199,
   0.1542053,
   0.1261316,
   0.1026761,
   0.1054564,
   0.09989397,
   0.1071004,
   0.09257468,
   0.1039935,
   0.1030922,
   0.07731465,
   0.09164459,
   0.06906985,
   0.06892516,
   0.07000068,
   0.07061224,
   0.06578551,
   0.06901881};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1470,Graph_from_mc_statistical_error_fy1470,Graph_from_mc_statistical_error_fex1470,Graph_from_mc_statistical_error_fey1470);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1470 = new TH1F("Graph_Graph_from_mc_statistical_error1470","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1470->SetMinimum(0.6547474);
   Graph_Graph_from_mc_statistical_error1470->SetMaximum(1.345253);
   Graph_Graph_from_mc_statistical_error1470->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1470->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1470->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1470->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1470->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1470);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->Modified();
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zee_18_amcnlo->SetSelected(dPhi_Zb_Z_2bjet_Zee_18_amcnlo);
}

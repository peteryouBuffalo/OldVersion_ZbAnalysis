void A_Z2b_Z_2bjet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: A_Z2b_Z_2bjet_Zee_17_amcnlo/A_Z2b_Z_2bjet_Zee_17_amcnlo
//=========  (Thu Jan 14 10:42:51 2021) by ROOT version 6.14/09
   TCanvas *A_Z2b_Z_2bjet_Zee_17_amcnlo = new TCanvas("A_Z2b_Z_2bjet_Zee_17_amcnlo", "A_Z2b_Z_2bjet_Zee_17_amcnlo",0,0,600,600);
   A_Z2b_Z_2bjet_Zee_17_amcnlo->SetHighLightColor(2);
   A_Z2b_Z_2bjet_Zee_17_amcnlo->Range(0,0,1,1);
   A_Z2b_Z_2bjet_Zee_17_amcnlo->SetFillColor(0);
   A_Z2b_Z_2bjet_Zee_17_amcnlo->SetFillStyle(4000);
   A_Z2b_Z_2bjet_Zee_17_amcnlo->SetBorderMode(0);
   A_Z2b_Z_2bjet_Zee_17_amcnlo->SetBorderSize(2);
   A_Z2b_Z_2bjet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   A_Z2b_Z_2bjet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-1.134104,1.052419,1142.97);
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
   st->SetMaximum(979.5808);
   
   TH1F *st_stack_230 = new TH1F("st_stack_230","",25,0,1);
   st_stack_230->SetMinimum(0.01);
   st_stack_230->SetMaximum(1028.56);
   st_stack_230->SetDirectory(0);
   st_stack_230->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_230->SetLineColor(ci);
   st_stack_230->GetXaxis()->SetRange(1,25);
   st_stack_230->GetXaxis()->SetLabelFont(42);
   st_stack_230->GetXaxis()->SetLabelSize(0.035);
   st_stack_230->GetXaxis()->SetTitleSize(0.035);
   st_stack_230->GetXaxis()->SetTitleFont(42);
   st_stack_230->GetYaxis()->SetTitle("Events/0.04");
   st_stack_230->GetYaxis()->SetLabelFont(42);
   st_stack_230->GetYaxis()->SetLabelSize(0.05);
   st_stack_230->GetYaxis()->SetTitleSize(0.057);
   st_stack_230->GetYaxis()->SetTitleOffset(1.2);
   st_stack_230->GetYaxis()->SetTitleFont(42);
   st_stack_230->GetZaxis()->SetLabelFont(42);
   st_stack_230->GetZaxis()->SetLabelSize(0.035);
   st_stack_230->GetZaxis()->SetTitleSize(0.035);
   st_stack_230->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_230);
   
   
   TH1D *Zee_2bjet_A_Z2b_stack_1 = new TH1D("Zee_2bjet_A_Z2b_stack_1","",25,0,1);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(1,2.768695);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(2,3.06941);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(3,3.665074);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(4,1.803197);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(5,1.902816);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(6,1.469403);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(7,0.4960888);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(8,0.8686619);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(9,1.748532);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(10,0.3767338);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(11,0.144517);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(12,1.001046);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(13,0.371826);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(14,0.4858974);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(15,0.183099);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(16,0.43716);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(17,0.2558102);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(19,0.1895925);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(22,0.5026488);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(1,0.6685906);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(2,0.7326625);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(3,0.7954225);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(4,0.529762);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(5,0.5616922);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(6,0.4721082);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(7,0.2779917);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(8,0.3779513);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(9,0.5392674);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(10,0.2664243);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(11,0.144517);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(12,0.4133372);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(13,0.2629924);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(14,0.2876903);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(15,0.183099);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(16,0.2290806);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(17,0.1963633);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(19,0.1895925);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(22,0.2913622);
   Zee_2bjet_A_Z2b_stack_1->SetEntries(151);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_A_Z2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_stack_1->SetLineColor(ci);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_stack_1,"");
   
   TH1D *Zee_2bjet_A_Z2b_stack_2 = new TH1D("Zee_2bjet_A_Z2b_stack_2","",25,0,1);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(1,15.64832);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(2,10.69699);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(3,8.320283);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(4,5.465238);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(5,6.695441);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(6,6.020035);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(7,2.620659);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(8,1.772263);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(9,2.484569);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(10,1.811628);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(11,0.6725684);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(12,0.7734079);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(13,0.4874394);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(15,0.8625533);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(18,0.3151029);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(21,0.2283298);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(1,2.226684);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(2,1.912711);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(3,1.570285);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(4,1.261437);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(5,1.416671);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(6,1.361239);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(7,0.8864119);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(8,0.7448183);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(9,0.8510535);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(10,0.7524553);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(11,0.4761509);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(12,0.4572178);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(13,0.3447704);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(15,0.4989373);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(18,0.3151029);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(21,0.2283298);
   Zee_2bjet_A_Z2b_stack_2->SetEntries(230);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_A_Z2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_stack_2->SetLineColor(ci);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_stack_2,"");
   
   TH1D *Zee_2bjet_A_Z2b_stack_3 = new TH1D("Zee_2bjet_A_Z2b_stack_3","",25,0,1);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(1,136.6502);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(2,127.6176);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(3,121.798);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(4,109.4538);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(5,97.7263);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(6,80.93884);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(7,81.37607);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(8,59.33375);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(9,60.22048);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(10,47.29991);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(11,34.2909);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(12,23.71363);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(13,23.61138);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(14,18.76818);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(15,16.02289);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(16,14.49365);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(17,12.79379);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(18,11.35553);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(19,6.245097);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(20,5.033849);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(21,3.668388);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(22,4.564126);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(23,2.068619);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(24,2.413777);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(25,0.3782423);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(1,6.763571);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(2,6.59333);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(3,6.417664);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(4,6.061993);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(5,5.767999);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(6,5.21797);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(7,5.267999);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(8,4.502979);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(9,4.562576);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(10,4.018176);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(11,3.414622);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(12,2.878065);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(13,2.869082);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(14,2.565044);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(15,2.404591);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(16,2.163581);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(17,2.106303);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(18,2.015186);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(19,1.439887);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(20,1.287384);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(21,1.065617);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(22,1.232617);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(23,0.797177);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(24,0.9135816);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(25,0.3782423);
   Zee_2bjet_A_Z2b_stack_3->SetEntries(3646);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_A_Z2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_stack_3->SetLineColor(ci);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_stack_3,"");
   
   TH1D *Zee_2bjet_XX_A_Z2b_stack_4 = new TH1D("Zee_2bjet_XX_A_Z2b_stack_4","",25,0,1);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(1,2.884864);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(2,0.6875955);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(3,0.193986);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(4,0.02675246);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(5,0.6055117);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(6,-0.6899827);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(7,-1.088744);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(8,0.3921143);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(10,-0.9182394);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(11,-0.6749883);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(13,-0.8390071);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(14,0.8044585);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(16,1.08575);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(1,1.463104);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(2,1.134892);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(3,1.580473);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(4,1.665022);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(5,0.6055117);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(6,0.6899827);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(7,1.088744);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(8,1.240327);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(10,0.9182394);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(11,0.6749883);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(13,0.8390071);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(14,0.8044585);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(16,0.9159487);
   Zee_2bjet_XX_A_Z2b_stack_4->SetEntries(29);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_A_Z2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_A_Z2b_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_A_Z2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_A_Z2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_A_Z2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_A_Z2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_A_Z2b_stack_4,"");
   
   TH1D *Zee_2bjet_bX_A_Z2b_stack_5 = new TH1D("Zee_2bjet_bX_A_Z2b_stack_5","",25,0,1);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(1,1.99603);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(2,4.845566);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(3,3.026013);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(4,0.9852291);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(5,4.274024);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(6,1.293632);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(7,4.643247);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(8,1.544973);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(9,3.250439);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(10,0.2176759);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(11,0.4775363);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(12,2.65883);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(13,1.225463);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(14,0.1199683);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(15,0.6844574);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(16,0.01365994);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(18,-0.1303772);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(19,0.09277981);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(20,-0.6659201);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(1,2.819423);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(2,3.648416);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(3,2.74946);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(4,2.891402);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(5,2.952422);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(6,1.946866);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(7,2.491012);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(8,1.943557);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(9,2.444411);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(10,2.150133);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(11,0.9520522);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(12,1.643297);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(13,0.8730423);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(14,1.089061);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(15,0.5975031);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(16,1.090983);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(18,1.354836);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(19,0.9156024);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(20,0.6659201);
   Zee_2bjet_bX_A_Z2b_stack_5->SetEntries(165);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_A_Z2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_A_Z2b_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_A_Z2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_A_Z2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_A_Z2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_A_Z2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_A_Z2b_stack_5,"");
   
   TH1D *Zee_2bjet_bb_A_Z2b_stack_6 = new TH1D("Zee_2bjet_bb_A_Z2b_stack_6","",25,0,1);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(1,378.8213);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(2,277.9711);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(3,326.5538);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(4,249.1548);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(5,207.8859);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(6,171.2789);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(7,146.8788);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(8,122.0454);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(9,96.88352);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(10,50.67524);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(11,53.64469);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(12,65.41902);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(13,53.76865);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(14,38.76305);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(15,32.39776);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(16,19.72704);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(17,20.05148);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(18,9.559289);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(19,23.01981);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(20,13.44589);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(21,17.58761);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(22,5.942331);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(23,2.180641);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(24,3.887787);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(25,1.648434);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(1,27.684);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(2,27.48353);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(3,25.44244);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(4,23.24346);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(5,20.46873);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(6,18.77429);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(7,17.59848);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(8,14.37397);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(9,13.87595);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(10,12.48228);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(11,12.02666);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(12,10.36977);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(13,9.700222);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(14,8.833201);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(15,7.491066);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(16,6.845909);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(17,6.358981);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(18,6.332432);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(19,5.881956);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(20,4.405304);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(21,4.194987);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(22,3.008795);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(23,3.661861);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(24,2.592806);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(25,1.165798);
   Zee_2bjet_bb_A_Z2b_stack_6->SetEntries(9701);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_A_Z2b_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_A_Z2b_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_A_Z2b_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_A_Z2b_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_A_Z2b_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_A_Z2b_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_A_Z2b_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_A_Z2b__459 = new TH1D("Zee_2bjet_A_Z2b__459","",25,0,1);
   Zee_2bjet_A_Z2b__459->SetBinContent(1,466);
   Zee_2bjet_A_Z2b__459->SetBinContent(2,444);
   Zee_2bjet_A_Z2b__459->SetBinContent(3,369);
   Zee_2bjet_A_Z2b__459->SetBinContent(4,319);
   Zee_2bjet_A_Z2b__459->SetBinContent(5,236);
   Zee_2bjet_A_Z2b__459->SetBinContent(6,206);
   Zee_2bjet_A_Z2b__459->SetBinContent(7,188);
   Zee_2bjet_A_Z2b__459->SetBinContent(8,165);
   Zee_2bjet_A_Z2b__459->SetBinContent(9,118);
   Zee_2bjet_A_Z2b__459->SetBinContent(10,101);
   Zee_2bjet_A_Z2b__459->SetBinContent(11,87);
   Zee_2bjet_A_Z2b__459->SetBinContent(12,68);
   Zee_2bjet_A_Z2b__459->SetBinContent(13,54);
   Zee_2bjet_A_Z2b__459->SetBinContent(14,48);
   Zee_2bjet_A_Z2b__459->SetBinContent(15,38);
   Zee_2bjet_A_Z2b__459->SetBinContent(16,42);
   Zee_2bjet_A_Z2b__459->SetBinContent(17,25);
   Zee_2bjet_A_Z2b__459->SetBinContent(18,22);
   Zee_2bjet_A_Z2b__459->SetBinContent(19,21);
   Zee_2bjet_A_Z2b__459->SetBinContent(20,19);
   Zee_2bjet_A_Z2b__459->SetBinContent(21,10);
   Zee_2bjet_A_Z2b__459->SetBinContent(22,14);
   Zee_2bjet_A_Z2b__459->SetBinContent(23,4);
   Zee_2bjet_A_Z2b__459->SetBinContent(24,4);
   Zee_2bjet_A_Z2b__459->SetBinContent(25,2);
   Zee_2bjet_A_Z2b__459->SetBinError(1,21.58703);
   Zee_2bjet_A_Z2b__459->SetBinError(2,21.07131);
   Zee_2bjet_A_Z2b__459->SetBinError(3,19.20937);
   Zee_2bjet_A_Z2b__459->SetBinError(4,17.86057);
   Zee_2bjet_A_Z2b__459->SetBinError(5,15.36229);
   Zee_2bjet_A_Z2b__459->SetBinError(6,14.3527);
   Zee_2bjet_A_Z2b__459->SetBinError(7,13.71131);
   Zee_2bjet_A_Z2b__459->SetBinError(8,12.84523);
   Zee_2bjet_A_Z2b__459->SetBinError(9,10.86278);
   Zee_2bjet_A_Z2b__459->SetBinError(10,10.04988);
   Zee_2bjet_A_Z2b__459->SetBinError(11,9.327379);
   Zee_2bjet_A_Z2b__459->SetBinError(12,8.246211);
   Zee_2bjet_A_Z2b__459->SetBinError(13,7.348469);
   Zee_2bjet_A_Z2b__459->SetBinError(14,6.928203);
   Zee_2bjet_A_Z2b__459->SetBinError(15,6.164414);
   Zee_2bjet_A_Z2b__459->SetBinError(16,6.480741);
   Zee_2bjet_A_Z2b__459->SetBinError(17,5);
   Zee_2bjet_A_Z2b__459->SetBinError(18,4.690416);
   Zee_2bjet_A_Z2b__459->SetBinError(19,4.582576);
   Zee_2bjet_A_Z2b__459->SetBinError(20,4.358899);
   Zee_2bjet_A_Z2b__459->SetBinError(21,3.162278);
   Zee_2bjet_A_Z2b__459->SetBinError(22,3.741657);
   Zee_2bjet_A_Z2b__459->SetBinError(23,2);
   Zee_2bjet_A_Z2b__459->SetBinError(24,2);
   Zee_2bjet_A_Z2b__459->SetBinError(25,1.414214);
   Zee_2bjet_A_Z2b__459->SetEntries(3070);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b__459->SetLineColor(ci);
   Zee_2bjet_A_Z2b__459->SetLineWidth(2);
   Zee_2bjet_A_Z2b__459->SetMarkerStyle(20);
   Zee_2bjet_A_Z2b__459->SetMarkerSize(1.2);
   Zee_2bjet_A_Z2b__459->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b__459->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b__459->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b__459->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b__459->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b__459->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b__459->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b__459->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b__459->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b__459->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b__459->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b__459->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b__459->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b__459->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b__459->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_A_Z2b_fx1459[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_Zee_2bjet_bb_A_Z2b_fy1459[25] = {
   538.7694,
   424.8883,
   463.5572,
   366.889,
   319.09,
   260.3108,
   234.9261,
   185.9572,
   164.5875,
   99.46295,
   88.55522,
   93.56594,
   78.62574,
   58.94155,
   50.15076,
   35.75727,
   33.10108,
   21.09954,
   29.54728,
   17.81382,
   21.48433,
   11.00911,
   4.24926,
   6.301565,
   2.026676};
   Double_t Graph_from_Zee_2bjet_bb_A_Z2b_fex1459[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_Zee_2bjet_bb_A_Z2b_fey1459[25] = {
   28.76881,
   28.59389,
   26.48886,
   24.29013,
   21.5324,
   19.64798,
   18.59332,
   15.26111,
   14.84417,
   13.34378,
   12.56622,
   10.90393,
   10.19706,
   9.301659,
   7.908072,
   7.323199,
   6.701621,
   6.78937,
   6.127393,
   4.637619,
   4.334234,
   3.26452,
   3.747628,
   2.749049,
   1.225623};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_bb_A_Z2b_fx1459,Graph_from_Zee_2bjet_bb_A_Z2b_fy1459,Graph_from_Zee_2bjet_bb_A_Z2b_fex1459,Graph_from_Zee_2bjet_bb_A_Z2b_fey1459);
   gre->SetName("Graph_from_Zee_2bjet_bb_A_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459","",100,0,1.1);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459->SetMinimum(0.4514683);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459->SetMaximum(624.2419);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_A_Z2b1459);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_A_Z2b","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_A_Z2b_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_A_Z2b_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_A_Z2b_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_A_Z2b","MC unc. (stat.)","fl");

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
   A_Z2b_Z_2bjet_Zee_17_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.1532254,-0.2774193,1.052419,1.658065);
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
   
   TH1D *data_mc_ratio__460 = new TH1D("data_mc_ratio__460","",25,0,1);
   data_mc_ratio__460->SetBinContent(1,0.864934);
   data_mc_ratio__460->SetBinContent(2,1.044981);
   data_mc_ratio__460->SetBinContent(3,0.7960183);
   data_mc_ratio__460->SetBinContent(4,0.8694728);
   data_mc_ratio__460->SetBinContent(5,0.7396033);
   data_mc_ratio__460->SetBinContent(6,0.7913617);
   data_mc_ratio__460->SetBinContent(7,0.8002518);
   data_mc_ratio__460->SetBinContent(8,0.8873012);
   data_mc_ratio__460->SetBinContent(9,0.7169437);
   data_mc_ratio__460->SetBinContent(10,1.015453);
   data_mc_ratio__460->SetBinContent(11,0.9824379);
   data_mc_ratio__460->SetBinContent(12,0.7267602);
   data_mc_ratio__460->SetBinContent(13,0.686798);
   data_mc_ratio__460->SetBinContent(14,0.8143661);
   data_mc_ratio__460->SetBinContent(15,0.7577154);
   data_mc_ratio__460->SetBinContent(16,1.174586);
   data_mc_ratio__460->SetBinContent(17,0.7552625);
   data_mc_ratio__460->SetBinContent(18,1.042677);
   data_mc_ratio__460->SetBinContent(19,0.7107253);
   data_mc_ratio__460->SetBinContent(20,1.066587);
   data_mc_ratio__460->SetBinContent(21,0.4654556);
   data_mc_ratio__460->SetBinContent(22,1.271675);
   data_mc_ratio__460->SetBinContent(23,0.9413404);
   data_mc_ratio__460->SetBinContent(24,0.634763);
   data_mc_ratio__460->SetBinContent(25,0.9868376);
   data_mc_ratio__460->SetBinError(1,0.04006729);
   data_mc_ratio__460->SetBinError(2,0.04959259);
   data_mc_ratio__460->SetBinError(3,0.04143906);
   data_mc_ratio__460->SetBinError(4,0.04868113);
   data_mc_ratio__460->SetBinError(5,0.04814407);
   data_mc_ratio__460->SetBinError(6,0.05513678);
   data_mc_ratio__460->SetBinError(7,0.05836436);
   data_mc_ratio__460->SetBinError(8,0.0690763);
   data_mc_ratio__460->SetBinError(9,0.06600002);
   data_mc_ratio__460->SetBinError(10,0.1010414);
   data_mc_ratio__460->SetBinError(11,0.1053284);
   data_mc_ratio__460->SetBinError(12,0.08813262);
   data_mc_ratio__460->SetBinError(13,0.09346136);
   data_mc_ratio__460->SetBinError(14,0.1175436);
   data_mc_ratio__460->SetBinError(15,0.1229177);
   data_mc_ratio__460->SetBinError(16,0.1812426);
   data_mc_ratio__460->SetBinError(17,0.1510525);
   data_mc_ratio__460->SetBinError(18,0.2222994);
   data_mc_ratio__460->SetBinError(19,0.155093);
   data_mc_ratio__460->SetBinError(20,0.2446919);
   data_mc_ratio__460->SetBinError(21,0.14719);
   data_mc_ratio__460->SetBinError(22,0.3398693);
   data_mc_ratio__460->SetBinError(23,0.4706702);
   data_mc_ratio__460->SetBinError(24,0.3173815);
   data_mc_ratio__460->SetBinError(25,0.6977995);
   data_mc_ratio__460->SetMinimum(0.4);
   data_mc_ratio__460->SetMaximum(1.6);
   data_mc_ratio__460->SetEntries(159.5151);
   data_mc_ratio__460->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__460->SetLineColor(ci);
   data_mc_ratio__460->SetLineWidth(2);
   data_mc_ratio__460->SetMarkerStyle(20);
   data_mc_ratio__460->SetMarkerSize(1.2);
   data_mc_ratio__460->GetXaxis()->SetTitle("A_{Zbb}");
   data_mc_ratio__460->GetXaxis()->SetRange(1,25);
   data_mc_ratio__460->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__460->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__460->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__460->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__460->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__460->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__460->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__460->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__460->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__460->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__460->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__460->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__460->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__460->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__460->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__460->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__460->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1460[25] = {
   0.02,
   0.06,
   0.1,
   0.14,
   0.18,
   0.22,
   0.26,
   0.3,
   0.34,
   0.38,
   0.42,
   0.46,
   0.5,
   0.54,
   0.58,
   0.62,
   0.66,
   0.7,
   0.74,
   0.78,
   0.82,
   0.86,
   0.9,
   0.94,
   0.98};
   Double_t Graph_from_mc_statistical_error_fy1460[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1460[25] = {
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02,
   0.02};
   Double_t Graph_from_mc_statistical_error_fey1460[25] = {
   0.05339726,
   0.06729743,
   0.0571426,
   0.06620567,
   0.06748067,
   0.07547895,
   0.07914543,
   0.08206786,
   0.09019011,
   0.1341583,
   0.1419026,
   0.1165374,
   0.1296912,
   0.1578116,
   0.157686,
   0.2048031,
   0.2024593,
   0.3217781,
   0.2073759,
   0.2603382,
   0.2017394,
   0.296529,
   0.8819485,
   0.4362487,
   0.6047455};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1460,Graph_from_mc_statistical_error_fy1460,Graph_from_mc_statistical_error_fex1460,Graph_from_mc_statistical_error_fey1460);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1460 = new TH1F("Graph_Graph_from_mc_statistical_error1460","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1460->SetMinimum(0.1062463);
   Graph_Graph_from_mc_statistical_error1460->SetMaximum(2.058338);
   Graph_Graph_from_mc_statistical_error1460->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1460->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1460->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1460->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1460->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1460->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1460->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1460->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1460->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1460->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1460->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1460->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1460->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1460->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1460->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1460->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1460);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   A_Z2b_Z_2bjet_Zee_17_amcnlo->cd();
   A_Z2b_Z_2bjet_Zee_17_amcnlo->Modified();
   A_Z2b_Z_2bjet_Zee_17_amcnlo->cd();
   A_Z2b_Z_2bjet_Zee_17_amcnlo->SetSelected(A_Z2b_Z_2bjet_Zee_17_amcnlo);
}

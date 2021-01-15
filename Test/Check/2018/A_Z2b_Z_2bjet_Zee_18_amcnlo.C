void A_Z2b_Z_2bjet_Zee_18_amcnlo()
{
//=========Macro generated from canvas: A_Z2b_Z_2bjet_Zee_18_amcnlo/A_Z2b_Z_2bjet_Zee_18_amcnlo
//=========  (Thu Jan 14 10:42:52 2021) by ROOT version 6.14/09
   TCanvas *A_Z2b_Z_2bjet_Zee_18_amcnlo = new TCanvas("A_Z2b_Z_2bjet_Zee_18_amcnlo", "A_Z2b_Z_2bjet_Zee_18_amcnlo",0,0,600,600);
   A_Z2b_Z_2bjet_Zee_18_amcnlo->SetHighLightColor(2);
   A_Z2b_Z_2bjet_Zee_18_amcnlo->Range(0,0,1,1);
   A_Z2b_Z_2bjet_Zee_18_amcnlo->SetFillColor(0);
   A_Z2b_Z_2bjet_Zee_18_amcnlo->SetFillStyle(4000);
   A_Z2b_Z_2bjet_Zee_18_amcnlo->SetBorderMode(0);
   A_Z2b_Z_2bjet_Zee_18_amcnlo->SetBorderSize(2);
   A_Z2b_Z_2bjet_Zee_18_amcnlo->SetFrameFillStyle(1000);
   A_Z2b_Z_2bjet_Zee_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-1.851073,1.052419,1859.221);
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
   st->SetMaximum(1593.442);
   
   TH1F *st_stack_231 = new TH1F("st_stack_231","",25,0,1);
   st_stack_231->SetMinimum(0.01);
   st_stack_231->SetMaximum(1673.114);
   st_stack_231->SetDirectory(0);
   st_stack_231->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_231->SetLineColor(ci);
   st_stack_231->GetXaxis()->SetRange(1,25);
   st_stack_231->GetXaxis()->SetLabelFont(42);
   st_stack_231->GetXaxis()->SetLabelSize(0.035);
   st_stack_231->GetXaxis()->SetTitleSize(0.035);
   st_stack_231->GetXaxis()->SetTitleFont(42);
   st_stack_231->GetYaxis()->SetTitle("Events/0.04");
   st_stack_231->GetYaxis()->SetLabelFont(42);
   st_stack_231->GetYaxis()->SetLabelSize(0.05);
   st_stack_231->GetYaxis()->SetTitleSize(0.057);
   st_stack_231->GetYaxis()->SetTitleOffset(1.2);
   st_stack_231->GetYaxis()->SetTitleFont(42);
   st_stack_231->GetZaxis()->SetLabelFont(42);
   st_stack_231->GetZaxis()->SetLabelSize(0.035);
   st_stack_231->GetZaxis()->SetTitleSize(0.035);
   st_stack_231->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_231);
   
   
   TH1D *Zee_2bjet_A_Z2b_stack_1 = new TH1D("Zee_2bjet_A_Z2b_stack_1","",25,0,1);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(1,5.579511);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(2,6.410716);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(3,6.608156);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(4,4.924073);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(5,5.415719);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(6,3.277555);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(7,3.326118);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(8,3.037858);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(9,1.219868);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(10,1.06749);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(11,2.009315);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(12,0.5303201);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(13,0.7048042);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(14,1.528583);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(15,0.2615549);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(16,1.155439);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(17,0.2171662);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(19,0.2803218);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(20,0.5746281);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(22,0.01947294);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(1,1.156858);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(2,1.33264);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(3,1.376679);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(4,1.140646);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(5,1.173598);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(6,0.9401731);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(7,0.941767);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(8,0.9186271);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(9,0.577785);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(10,0.5481186);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(11,0.7681659);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(12,0.3033782);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(13,0.4098888);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(14,0.6509648);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(15,0.197715);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(16,0.5357406);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(17,0.2171662);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(19,0.2803218);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(20,0.4984205);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(22,0.01947294);
   Zee_2bjet_A_Z2b_stack_1->SetEntries(215);

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
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(1,18.46717);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(2,14.18559);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(3,13.46514);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(4,15.83922);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(5,10.32095);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(6,5.774826);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(7,3.136643);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(8,2.668104);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(9,2.774537);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(10,2.848881);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(11,0.9994619);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(12,1.89679);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(13,1.097249);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(14,1.404998);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(15,1.078332);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(16,0.862525);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(17,0.593908);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(20,0.4173177);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(1,3.069442);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(2,2.563991);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(3,2.590561);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(4,2.8526);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(5,2.272871);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(6,1.732508);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(7,1.197422);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(8,1.129642);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(9,1.151911);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(10,1.373567);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(11,0.6392859);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(12,0.9662453);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(13,0.7829565);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(14,0.816224);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(15,0.7722199);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(16,0.6099288);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(17,0.593908);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(20,0.4173177);
   Zee_2bjet_A_Z2b_stack_2->SetEntries(218);

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
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(1,235.0771);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(2,230.1315);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(3,200.2429);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(4,178.6278);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(5,154.7963);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(6,135.8054);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(7,118.7895);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(8,102.3707);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(9,80.67398);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(10,78.67697);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(11,59.95446);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(12,49.86384);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(13,40.997);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(14,33.27566);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(15,30.87173);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(16,21.15704);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(17,20.00097);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(18,14.70277);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(19,11.16853);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(20,8.746984);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(21,5.619064);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(22,5.911764);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(23,2.807563);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(24,1.675221);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(25,0.8936566);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(1,4.43613);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(2,4.377905);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(3,4.119577);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(4,3.883113);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(5,3.597624);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(6,3.352638);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(7,3.147424);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(8,2.91259);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(9,2.568357);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(10,2.546263);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(11,2.22382);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(12,2.022535);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(13,1.832354);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(14,1.652187);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(15,1.572277);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(16,1.312192);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(17,1.287644);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(18,1.108737);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(19,0.9294734);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(20,0.8393064);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(21,0.6863902);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(22,0.6921287);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(23,0.4708257);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(24,0.3786033);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(25,0.2730407);
   Zee_2bjet_A_Z2b_stack_3->SetEntries(24408);

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
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(1,10.78476);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(2,1.697606);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(3,-0.8074133);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(4,2.89142);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(5,1.355332);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(6,6.392695);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(7,1.189248);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(8,2.570984);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(9,1.757196);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(10,3.897296);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(11,1.172128);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(12,1.118236);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(14,1.845856);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(16,1.021065);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(19,1.009878);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(20,1.41667);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(21,3.545991);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(1,10.33249);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(2,2.534323);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(3,2.01313);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(4,1.685629);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(5,2.587258);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(6,6.392695);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(7,1.420508);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(8,1.841862);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(9,1.577049);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(10,3.023818);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(11,1.032939);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(12,1.118236);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(14,2.685061);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(16,1.021065);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(19,1.009878);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(20,1.41667);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(21,3.545991);
   Zee_2bjet_XX_A_Z2b_stack_4->SetEntries(40);

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
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(1,21.23814);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(2,11.00972);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(3,7.979956);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(4,1.169628);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(5,3.605838);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(6,5.826597);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(7,4.131557);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(8,2.055051);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(9,4.881981);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(10,0.09894041);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(11,0.05287506);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(12,0.9445811);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(13,-0.9105415);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(14,-1.216711);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(15,0.2783943);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(16,2.045698);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(17,2.869686);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(18,0.2473757);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(20,-0.3943862);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(21,2.120224);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(1,6.636973);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(2,6.012545);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(3,7.704796);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(4,5.456753);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(5,5.875912);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(6,3.976665);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(7,3.859032);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(8,2.955412);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(9,3.899112);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(10,3.056442);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(11,2.608685);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(12,2.455923);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(13,0.9105415);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(14,1.663067);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(15,2.384609);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(16,1.448238);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(17,2.209076);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(18,0.2473757);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(20,0.3943862);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(21,1.499838);
   Zee_2bjet_bX_A_Z2b_stack_5->SetEntries(197);

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
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(1,583.2817);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(2,612.958);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(3,525.8414);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(4,395.712);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(5,290.4404);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(6,260.819);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(7,227.1959);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(8,148.2232);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(9,155.2694);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(10,147.3587);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(11,101.4364);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(12,68.28428);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(13,85.2014);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(14,73.72153);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(15,40.96533);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(16,60.26081);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(17,24.91457);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(18,40.83706);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(19,20.76949);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(20,24.77766);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(21,7.806416);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(22,4.520436);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(23,12.15119);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(24,14.0226);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(25,1.946648);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(1,43.59514);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(2,43.35519);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(3,41.88355);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(4,36.66235);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(5,31.92772);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(6,28.43366);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(7,25.90338);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(8,22.9644);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(9,22.54222);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(10,19.42347);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(11,17.954);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(12,16.45719);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(13,14.44764);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(14,14.08132);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(15,12.30838);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(16,12.2771);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(17,11.18304);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(18,10.8366);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(19,8.894557);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(20,7.908967);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(21,5.894598);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(22,4.967712);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(23,5.196317);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(24,4.07469);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(25,2.352118);
   Zee_2bjet_bb_A_Z2b_stack_6->SetEntries(11144);

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
   
   TH1D *Zee_2bjet_A_Z2b__461 = new TH1D("Zee_2bjet_A_Z2b__461","",25,0,1);
   Zee_2bjet_A_Z2b__461->SetBinContent(1,771);
   Zee_2bjet_A_Z2b__461->SetBinContent(2,737);
   Zee_2bjet_A_Z2b__461->SetBinContent(3,595);
   Zee_2bjet_A_Z2b__461->SetBinContent(4,537);
   Zee_2bjet_A_Z2b__461->SetBinContent(5,421);
   Zee_2bjet_A_Z2b__461->SetBinContent(6,346);
   Zee_2bjet_A_Z2b__461->SetBinContent(7,283);
   Zee_2bjet_A_Z2b__461->SetBinContent(8,256);
   Zee_2bjet_A_Z2b__461->SetBinContent(9,210);
   Zee_2bjet_A_Z2b__461->SetBinContent(10,162);
   Zee_2bjet_A_Z2b__461->SetBinContent(11,130);
   Zee_2bjet_A_Z2b__461->SetBinContent(12,115);
   Zee_2bjet_A_Z2b__461->SetBinContent(13,100);
   Zee_2bjet_A_Z2b__461->SetBinContent(14,77);
   Zee_2bjet_A_Z2b__461->SetBinContent(15,71);
   Zee_2bjet_A_Z2b__461->SetBinContent(16,59);
   Zee_2bjet_A_Z2b__461->SetBinContent(17,66);
   Zee_2bjet_A_Z2b__461->SetBinContent(18,36);
   Zee_2bjet_A_Z2b__461->SetBinContent(19,27);
   Zee_2bjet_A_Z2b__461->SetBinContent(20,19);
   Zee_2bjet_A_Z2b__461->SetBinContent(21,20);
   Zee_2bjet_A_Z2b__461->SetBinContent(22,12);
   Zee_2bjet_A_Z2b__461->SetBinContent(23,13);
   Zee_2bjet_A_Z2b__461->SetBinContent(24,6);
   Zee_2bjet_A_Z2b__461->SetBinContent(25,1);
   Zee_2bjet_A_Z2b__461->SetBinError(1,27.76689);
   Zee_2bjet_A_Z2b__461->SetBinError(2,27.14774);
   Zee_2bjet_A_Z2b__461->SetBinError(3,24.39262);
   Zee_2bjet_A_Z2b__461->SetBinError(4,23.17326);
   Zee_2bjet_A_Z2b__461->SetBinError(5,20.51828);
   Zee_2bjet_A_Z2b__461->SetBinError(6,18.60108);
   Zee_2bjet_A_Z2b__461->SetBinError(7,16.8226);
   Zee_2bjet_A_Z2b__461->SetBinError(8,16);
   Zee_2bjet_A_Z2b__461->SetBinError(9,14.49138);
   Zee_2bjet_A_Z2b__461->SetBinError(10,12.72792);
   Zee_2bjet_A_Z2b__461->SetBinError(11,11.40175);
   Zee_2bjet_A_Z2b__461->SetBinError(12,10.72381);
   Zee_2bjet_A_Z2b__461->SetBinError(13,10);
   Zee_2bjet_A_Z2b__461->SetBinError(14,8.774964);
   Zee_2bjet_A_Z2b__461->SetBinError(15,8.42615);
   Zee_2bjet_A_Z2b__461->SetBinError(16,7.681146);
   Zee_2bjet_A_Z2b__461->SetBinError(17,8.124038);
   Zee_2bjet_A_Z2b__461->SetBinError(18,6);
   Zee_2bjet_A_Z2b__461->SetBinError(19,5.196152);
   Zee_2bjet_A_Z2b__461->SetBinError(20,4.358899);
   Zee_2bjet_A_Z2b__461->SetBinError(21,4.472136);
   Zee_2bjet_A_Z2b__461->SetBinError(22,3.464102);
   Zee_2bjet_A_Z2b__461->SetBinError(23,3.605551);
   Zee_2bjet_A_Z2b__461->SetBinError(24,2.44949);
   Zee_2bjet_A_Z2b__461->SetBinError(25,1);
   Zee_2bjet_A_Z2b__461->SetEntries(5070);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b__461->SetLineColor(ci);
   Zee_2bjet_A_Z2b__461->SetLineWidth(2);
   Zee_2bjet_A_Z2b__461->SetMarkerStyle(20);
   Zee_2bjet_A_Z2b__461->SetMarkerSize(1.2);
   Zee_2bjet_A_Z2b__461->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b__461->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b__461->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b__461->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b__461->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b__461->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b__461->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b__461->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b__461->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b__461->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b__461->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b__461->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b__461->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b__461->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b__461->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_A_Z2b_fx1461[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_A_Z2b_fy1461[25] = {
   874.4284,
   876.3931,
   753.3302,
   599.1642,
   465.9345,
   417.8961,
   357.7691,
   260.9259,
   246.5769,
   233.9482,
   165.6246,
   122.6381,
   127.0899,
   110.5599,
   73.45534,
   86.50257,
   48.59629,
   55.78721,
   33.22822,
   35.53887,
   19.09169,
   10.45167,
   14.95875,
   15.69782,
   2.840304};
   Double_t Graph_from_Zee_2bjet_bb_A_Z2b_fex1461[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_A_Z2b_fey1461[25] = {
   45.62658,
   44.15611,
   42.9328,
   37.43344,
   32.86466,
   29.6695,
   26.45982,
   23.45408,
   23.11059,
   20.11037,
   18.33473,
   16.82966,
   14.61855,
   14.56292,
   12.66057,
   12.49992,
   11.48905,
   10.89598,
   9.004193,
   8.114263,
   7.073965,
   5.015733,
   5.217604,
   4.092242,
   2.367913};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_bb_A_Z2b_fx1461,Graph_from_Zee_2bjet_bb_A_Z2b_fy1461,Graph_from_Zee_2bjet_bb_A_Z2b_fex1461,Graph_from_Zee_2bjet_bb_A_Z2b_fey1461);
   gre->SetName("Graph_from_Zee_2bjet_bb_A_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461","",100,0,1.1);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461->SetMinimum(0.4251525);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461->SetMaximum(1012.557);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_A_Z2b1461);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   A_Z2b_Z_2bjet_Zee_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__462 = new TH1D("data_mc_ratio__462","",25,0,1);
   data_mc_ratio__462->SetBinContent(1,0.8817189);
   data_mc_ratio__462->SetBinContent(2,0.8409468);
   data_mc_ratio__462->SetBinContent(3,0.7898263);
   data_mc_ratio__462->SetBinContent(4,0.8962485);
   data_mc_ratio__462->SetBinContent(5,0.9035605);
   data_mc_ratio__462->SetBinContent(6,0.8279571);
   data_mc_ratio__462->SetBinContent(7,0.7910131);
   data_mc_ratio__462->SetBinContent(8,0.9811216);
   data_mc_ratio__462->SetBinContent(9,0.8516612);
   data_mc_ratio__462->SetBinContent(10,0.6924609);
   data_mc_ratio__462->SetBinContent(11,0.7849074);
   data_mc_ratio__462->SetBinContent(12,0.9377188);
   data_mc_ratio__462->SetBinContent(13,0.7868445);
   data_mc_ratio__462->SetBinContent(14,0.6964549);
   data_mc_ratio__462->SetBinContent(15,0.9665737);
   data_mc_ratio__462->SetBinContent(16,0.6820606);
   data_mc_ratio__462->SetBinContent(17,1.358128);
   data_mc_ratio__462->SetBinContent(18,0.6453092);
   data_mc_ratio__462->SetBinContent(19,0.8125625);
   data_mc_ratio__462->SetBinContent(20,0.5346259);
   data_mc_ratio__462->SetBinContent(21,1.047576);
   data_mc_ratio__462->SetBinContent(22,1.148142);
   data_mc_ratio__462->SetBinContent(23,0.8690564);
   data_mc_ratio__462->SetBinContent(24,0.3822186);
   data_mc_ratio__462->SetBinContent(25,0.3520749);
   data_mc_ratio__462->SetBinError(1,0.03175433);
   data_mc_ratio__462->SetBinError(2,0.03097667);
   data_mc_ratio__462->SetBinError(3,0.03237972);
   data_mc_ratio__462->SetBinError(4,0.03867598);
   data_mc_ratio__462->SetBinError(5,0.04403685);
   data_mc_ratio__462->SetBinError(6,0.04451125);
   data_mc_ratio__462->SetBinError(7,0.04702085);
   data_mc_ratio__462->SetBinError(8,0.0613201);
   data_mc_ratio__462->SetBinError(9,0.05877021);
   data_mc_ratio__462->SetBinError(10,0.05440487);
   data_mc_ratio__462->SetBinError(11,0.06884093);
   data_mc_ratio__462->SetBinError(12,0.08744272);
   data_mc_ratio__462->SetBinError(13,0.07868445);
   data_mc_ratio__462->SetBinError(14,0.0793684);
   data_mc_ratio__462->SetBinError(15,0.1147112);
   data_mc_ratio__462->SetBinError(16,0.08879673);
   data_mc_ratio__462->SetBinError(17,0.167174);
   data_mc_ratio__462->SetBinError(18,0.1075515);
   data_mc_ratio__462->SetBinError(19,0.1563777);
   data_mc_ratio__462->SetBinError(20,0.1226516);
   data_mc_ratio__462->SetBinError(21,0.2342451);
   data_mc_ratio__462->SetBinError(22,0.3314399);
   data_mc_ratio__462->SetBinError(23,0.2410329);
   data_mc_ratio__462->SetBinError(24,0.1560401);
   data_mc_ratio__462->SetBinError(25,0.3520749);
   data_mc_ratio__462->SetMinimum(0.4);
   data_mc_ratio__462->SetMaximum(1.6);
   data_mc_ratio__462->SetEntries(287.2631);
   data_mc_ratio__462->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__462->SetLineColor(ci);
   data_mc_ratio__462->SetLineWidth(2);
   data_mc_ratio__462->SetMarkerStyle(20);
   data_mc_ratio__462->SetMarkerSize(1.2);
   data_mc_ratio__462->GetXaxis()->SetTitle("A_{Zbb}");
   data_mc_ratio__462->GetXaxis()->SetRange(1,25);
   data_mc_ratio__462->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__462->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__462->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__462->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__462->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__462->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__462->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__462->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__462->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__462->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__462->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__462->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__462->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__462->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__462->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__462->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__462->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1462[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1462[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1462[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1462[25] = {
   0.05217875,
   0.05038391,
   0.05699068,
   0.0624761,
   0.07053493,
   0.07099732,
   0.07395782,
   0.08988791,
   0.09372567,
   0.08596077,
   0.1107005,
   0.1372303,
   0.1150253,
   0.1317197,
   0.1723574,
   0.1445035,
   0.2364182,
   0.1953133,
   0.2709803,
   0.2283208,
   0.3705258,
   0.4798976,
   0.3487994,
   0.2606885,
   0.8336827};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1462,Graph_from_mc_statistical_error_fy1462,Graph_from_mc_statistical_error_fex1462,Graph_from_mc_statistical_error_fey1462);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1462 = new TH1F("Graph_Graph_from_mc_statistical_error1462","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1462->SetMinimum(0.1496855);
   Graph_Graph_from_mc_statistical_error1462->SetMaximum(2.000419);
   Graph_Graph_from_mc_statistical_error1462->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1462->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1462->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1462->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1462->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1462->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1462->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1462->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1462->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1462->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1462->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1462->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1462->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1462->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1462->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1462->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1462);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   A_Z2b_Z_2bjet_Zee_18_amcnlo->cd();
   A_Z2b_Z_2bjet_Zee_18_amcnlo->Modified();
   A_Z2b_Z_2bjet_Zee_18_amcnlo->cd();
   A_Z2b_Z_2bjet_Zee_18_amcnlo->SetSelected(A_Z2b_Z_2bjet_Zee_18_amcnlo);
}

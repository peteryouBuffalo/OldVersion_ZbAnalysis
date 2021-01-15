void dPhi_2b_Z_2bjet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: dPhi_2b_Z_2bjet_Zee_17_amcnlo/dPhi_2b_Z_2bjet_Zee_17_amcnlo
//=========  (Thu Jan 14 10:42:51 2021) by ROOT version 6.14/09
   TCanvas *dPhi_2b_Z_2bjet_Zee_17_amcnlo = new TCanvas("dPhi_2b_Z_2bjet_Zee_17_amcnlo", "dPhi_2b_Z_2bjet_Zee_17_amcnlo",0,0,600,600);
   dPhi_2b_Z_2bjet_Zee_17_amcnlo->SetHighLightColor(2);
   dPhi_2b_Z_2bjet_Zee_17_amcnlo->Range(0,0,1,1);
   dPhi_2b_Z_2bjet_Zee_17_amcnlo->SetFillColor(0);
   dPhi_2b_Z_2bjet_Zee_17_amcnlo->SetFillStyle(4000);
   dPhi_2b_Z_2bjet_Zee_17_amcnlo->SetBorderMode(0);
   dPhi_2b_Z_2bjet_Zee_17_amcnlo->SetBorderSize(2);
   dPhi_2b_Z_2bjet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   dPhi_2b_Z_2bjet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4813718,-0.6140027,3.306273,623.3886);
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
   st->SetMaximum(534.2746);
   Double_t xAxis10[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1F *st_stack_226 = new TH1F("st_stack_226","",31, xAxis10);
   st_stack_226->SetMinimum(0.01);
   st_stack_226->SetMaximum(560.9884);
   st_stack_226->SetDirectory(0);
   st_stack_226->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_226->SetLineColor(ci);
   st_stack_226->GetXaxis()->SetRange(1,31);
   st_stack_226->GetXaxis()->SetLabelFont(42);
   st_stack_226->GetXaxis()->SetLabelSize(0.035);
   st_stack_226->GetXaxis()->SetTitleSize(0.035);
   st_stack_226->GetXaxis()->SetTitleFont(42);
   st_stack_226->GetYaxis()->SetTitle("Events/0.10000000149");
   st_stack_226->GetYaxis()->SetLabelFont(42);
   st_stack_226->GetYaxis()->SetLabelSize(0.05);
   st_stack_226->GetYaxis()->SetTitleSize(0.057);
   st_stack_226->GetYaxis()->SetTitleOffset(1.2);
   st_stack_226->GetYaxis()->SetTitleFont(42);
   st_stack_226->GetZaxis()->SetLabelFont(42);
   st_stack_226->GetZaxis()->SetLabelSize(0.035);
   st_stack_226->GetZaxis()->SetTitleSize(0.035);
   st_stack_226->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_226);
   
   Double_t xAxis11[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_dPhi_2b_stack_1 = new TH1D("Zee_2bjet_dPhi_2b_stack_1","",31, xAxis11);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(1,0.5012648);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(2,0.4102077);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(3,0.356492);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(4,0.3221888);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(5,0.9009446);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(6,0.8251562);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(7,0.1583508);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(8,0.8274644);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(10,0.5308136);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(11,0.6275813);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(12,0.4543314);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(13,0.6891241);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(14,0.4326516);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(15,0.546491);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(16,0.7604659);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(17,0.7130458);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(18,0.5579394);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(19,0.9325504);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(20,0.7213187);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(21,0.1660464);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(22,0.9433736);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(23,0.5213848);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(24,0.9683299);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(25,1.031861);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(26,1.380351);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(27,0.5274796);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(28,1.640587);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(29,1.556263);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(30,0.5990619);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(31,1.137089);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(1,0.2927323);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(2,0.2324787);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(3,0.2219902);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(4,0.2321383);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(5,0.4078739);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(6,0.3752307);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(7,0.1583508);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(8,0.3503223);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(10,0.2943237);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(11,0.3287196);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(12,0.2668366);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(13,0.3437965);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(14,0.2413456);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(15,0.2989537);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(16,0.3807547);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(17,0.3599129);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(18,0.3234265);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(19,0.3684215);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(20,0.3615381);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(21,0.1660464);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(22,0.3915071);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(23,0.302343);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(24,0.4027417);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(25,0.4048809);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(26,0.4698336);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(27,0.3019659);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(28,0.5280666);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(29,0.5228437);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(30,0.3051723);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(31,0.4191917);
   Zee_2bjet_dPhi_2b_stack_1->SetEntries(151);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_dPhi_2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_2b_stack_1->SetLineColor(ci);
   Zee_2bjet_dPhi_2b_stack_1->GetXaxis()->SetRange(1,31);
   Zee_2bjet_dPhi_2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_2b_stack_1,"");
   Double_t xAxis12[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_dPhi_2b_stack_2 = new TH1D("Zee_2bjet_dPhi_2b_stack_2","",31, xAxis12);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(1,0.3134356);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(2,1.000819);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(3,0.3345536);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(4,1.206259);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(5,1.36346);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(6,1.037978);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(7,1.893928);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(8,1.725136);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(9,1.889681);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(10,0.7269921);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(11,3.900845);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(12,2.145249);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(13,1.243756);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(14,3.273975);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(15,3.6652);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(16,1.676391);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(17,2.115743);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(18,2.212362);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(19,0.9659336);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(20,3.886664);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(21,2.079461);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(22,2.998927);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(23,1.561663);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(24,2.273573);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(25,3.367737);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(26,1.599975);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(27,2.39169);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(28,4.602922);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(29,1.558773);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(30,2.352428);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(31,3.509317);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(1,0.3134356);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(2,0.5818299);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(3,0.3345536);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(4,0.6079032);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(5,0.6498401);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(6,0.5351935);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(7,0.7574018);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(8,0.8091788);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(9,0.7788909);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(10,0.4212663);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(11,1.11017);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(12,0.8163834);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(13,0.6240158);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(14,0.977479);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(15,1.134915);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(16,0.693613);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(17,0.7906923);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(18,0.8419706);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(19,0.501139);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(20,1.089027);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(21,0.8070755);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(22,1.001523);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(23,0.7002293);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(24,0.766174);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(25,0.9914749);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(26,0.7111374);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(27,0.8147635);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(28,1.197021);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(29,0.7020579);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(30,0.8036225);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(31,1.113503);
   Zee_2bjet_dPhi_2b_stack_2->SetEntries(230);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dPhi_2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_2b_stack_2->SetLineColor(ci);
   Zee_2bjet_dPhi_2b_stack_2->GetXaxis()->SetRange(1,31);
   Zee_2bjet_dPhi_2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_2b_stack_2,"");
   Double_t xAxis13[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_dPhi_2b_stack_3 = new TH1D("Zee_2bjet_dPhi_2b_stack_3","",31, xAxis13);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(1,9.689426);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(2,18.68143);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(3,12.90755);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(4,17.78323);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(5,14.75955);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(6,20.47993);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(7,25.11963);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(8,24.31762);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(9,25.06653);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(10,24.4387);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(11,23.10878);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(12,20.73849);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(13,25.75507);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(14,29.33491);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(15,31.23711);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(16,36.37636);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(17,34.12354);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(18,32.35469);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(19,38.33502);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(20,38.24168);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(21,41.57689);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(22,43.77258);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(23,42.37887);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(24,50.81131);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(25,49.82376);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(26,57.31392);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(27,57.50591);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(28,53.1668);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(29,56.93695);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(30,57.85584);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(31,87.84494);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(1,1.77433);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(2,2.526135);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(3,2.063266);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(4,2.51077);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(5,2.231762);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(6,2.70124);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(7,2.931285);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(8,2.860805);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(9,2.924193);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(10,2.925503);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(11,2.707245);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(12,2.681616);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(13,2.957155);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(14,3.143298);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(15,3.312839);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(16,3.541774);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(17,3.365187);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(18,3.272723);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(19,3.641403);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(20,3.620051);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(21,3.764465);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(22,3.843071);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(23,3.761215);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(24,4.158463);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(25,4.102811);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(26,4.445533);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(27,4.414428);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(28,4.254713);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(29,4.358574);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(30,4.387567);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(31,5.497457);
   Zee_2bjet_dPhi_2b_stack_3->SetEntries(3646);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dPhi_2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_2b_stack_3->SetLineColor(ci);
   Zee_2bjet_dPhi_2b_stack_3->GetXaxis()->SetRange(1,31);
   Zee_2bjet_dPhi_2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dPhi_2b_stack_3,"");
   Double_t xAxis14[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_XX_dPhi_2b_stack_4 = new TH1D("Zee_2bjet_XX_dPhi_2b_stack_4","",31, xAxis14);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(5,0.7751586);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(6,-0.8625497);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(7,-0.7675728);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(8,1.324704);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(9,0.8620638);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(13,1.603782);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(18,0.8305124);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(19,1.390514);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(20,-1.088744);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(21,0.1114693);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(22,0.4865629);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(23,-0.8390071);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(26,0.1623884);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(27,0.05099602);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(28,-0.1744569);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(30,-0.6069801);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(31,-0.7887692);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(5,0.7751586);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(6,0.8625497);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(7,0.8071427);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(8,0.9610283);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(9,0.8620638);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(13,1.135883);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(18,0.8305124);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(19,0.9913993);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(20,1.088744);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(21,1.057545);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(22,0.4865629);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(23,0.8390071);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(26,1.02457);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(27,1.231745);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(28,1.001253);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(30,0.6069801);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(31,1.394965);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetEntries(29);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_dPhi_2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_dPhi_2b_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetRange(1,31);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dPhi_2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_dPhi_2b_stack_4,"");
   Double_t xAxis15[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_bX_dPhi_2b_stack_5 = new TH1D("Zee_2bjet_bX_dPhi_2b_stack_5","",31, xAxis15);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(1,-1.380933);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(2,-0.05298268);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(3,1.535597);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(4,1.321213);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(5,-1.417998);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(6,-0.1395406);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(7,-0.228809);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(8,-0.9704661);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(9,2.368957);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(10,-0.8180066);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(11,-1.311168);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(12,1.87639);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(13,0.6019364);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(14,1.960694);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(15,1.852766);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(16,2.11384);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(17,2.991388);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(18,-1.788106);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(19,0.05153722);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(20,2.737367);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(21,0.3135316);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(22,2.407946);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(23,0.8589499);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(24,3.310896);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(25,2.28642);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(26,1.134515);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(27,1.70038);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(28,-1.211306);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(29,1.644579);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(30,0.8488232);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(31,5.954816);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(1,1.591828);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(2,1.218106);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(3,1.090487);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(4,0.8962614);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(5,1.914929);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(6,1.307221);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(7,1.23969);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(8,0.9704661);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(9,1.322354);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(10,1.269602);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(11,1.792933);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(12,1.105395);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(13,0.536318);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(14,1.134704);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(15,1.222737);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(16,1.527644);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(17,1.943865);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(18,1.264599);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(19,1.186369);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(20,1.399773);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(21,1.60746);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(22,1.593795);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(23,1.890591);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(24,1.93708);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(25,1.754624);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(26,1.912611);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(27,2.45932);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(28,2.058432);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(29,1.660034);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(30,2.554309);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(31,2.433937);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetEntries(165);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_dPhi_2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_dPhi_2b_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetRange(1,31);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dPhi_2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_dPhi_2b_stack_5,"");
   Double_t xAxis16[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_bb_dPhi_2b_stack_6 = new TH1D("Zee_2bjet_bb_dPhi_2b_stack_6","",31, xAxis16);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(1,35.46468);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(2,57.24911);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(3,42.1827);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(4,46.36479);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(5,45.67926);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(6,49.67897);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(7,66.18976);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(8,59.99581);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(9,41.1567);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(10,61.45248);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(11,42.72756);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(12,59.29052);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(13,64.86141);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(14,45.11751);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(15,48.52879);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(16,71.32303);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(17,51.03999);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(18,79.38821);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(19,70.3595);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(20,84.82262);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(21,88.68576);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(22,101.121);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(23,85.70258);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(24,83.25874);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(25,110.1045);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(26,119.107);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(27,115.5634);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(28,102.109);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(29,137.6147);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(30,126.8585);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(31,196.1937);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(1,9.005269);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(2,9.433037);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(3,9.449454);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(4,10.1255);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(5,10.55354);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(6,9.740217);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(7,10.78243);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(8,10.53961);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(9,10.70568);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(10,10.77042);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(11,11.30161);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(12,11.11458);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(13,11.85808);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(14,10.87702);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(15,11.4135);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(16,12.37913);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(17,11.8228);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(18,12.54492);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(19,11.99326);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(20,12.88519);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(21,12.77863);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(22,13.63811);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(23,14.00792);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(24,14.44579);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(25,15.0326);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(26,15.2071);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(27,15.36917);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(28,15.62117);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(29,16.37108);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(30,16.11264);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(31,20.23076);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetEntries(9701);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_dPhi_2b_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_dPhi_2b_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetRange(1,31);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dPhi_2b_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_dPhi_2b_stack_6,"");
   st->Draw("hist");
   Double_t xAxis17[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_dPhi_2b__451 = new TH1D("Zee_2bjet_dPhi_2b__451","",31, xAxis17);
   Zee_2bjet_dPhi_2b__451->SetBinContent(1,56);
   Zee_2bjet_dPhi_2b__451->SetBinContent(2,62);
   Zee_2bjet_dPhi_2b__451->SetBinContent(3,51);
   Zee_2bjet_dPhi_2b__451->SetBinContent(4,59);
   Zee_2bjet_dPhi_2b__451->SetBinContent(5,64);
   Zee_2bjet_dPhi_2b__451->SetBinContent(6,108);
   Zee_2bjet_dPhi_2b__451->SetBinContent(7,61);
   Zee_2bjet_dPhi_2b__451->SetBinContent(8,67);
   Zee_2bjet_dPhi_2b__451->SetBinContent(9,74);
   Zee_2bjet_dPhi_2b__451->SetBinContent(10,74);
   Zee_2bjet_dPhi_2b__451->SetBinContent(11,79);
   Zee_2bjet_dPhi_2b__451->SetBinContent(12,96);
   Zee_2bjet_dPhi_2b__451->SetBinContent(13,79);
   Zee_2bjet_dPhi_2b__451->SetBinContent(14,76);
   Zee_2bjet_dPhi_2b__451->SetBinContent(15,82);
   Zee_2bjet_dPhi_2b__451->SetBinContent(16,85);
   Zee_2bjet_dPhi_2b__451->SetBinContent(17,90);
   Zee_2bjet_dPhi_2b__451->SetBinContent(18,93);
   Zee_2bjet_dPhi_2b__451->SetBinContent(19,89);
   Zee_2bjet_dPhi_2b__451->SetBinContent(20,100);
   Zee_2bjet_dPhi_2b__451->SetBinContent(21,95);
   Zee_2bjet_dPhi_2b__451->SetBinContent(22,111);
   Zee_2bjet_dPhi_2b__451->SetBinContent(23,105);
   Zee_2bjet_dPhi_2b__451->SetBinContent(24,120);
   Zee_2bjet_dPhi_2b__451->SetBinContent(25,117);
   Zee_2bjet_dPhi_2b__451->SetBinContent(26,137);
   Zee_2bjet_dPhi_2b__451->SetBinContent(27,136);
   Zee_2bjet_dPhi_2b__451->SetBinContent(28,159);
   Zee_2bjet_dPhi_2b__451->SetBinContent(29,162);
   Zee_2bjet_dPhi_2b__451->SetBinContent(30,157);
   Zee_2bjet_dPhi_2b__451->SetBinContent(31,226);
   Zee_2bjet_dPhi_2b__451->SetBinError(1,7.483315);
   Zee_2bjet_dPhi_2b__451->SetBinError(2,7.874008);
   Zee_2bjet_dPhi_2b__451->SetBinError(3,7.141428);
   Zee_2bjet_dPhi_2b__451->SetBinError(4,7.681146);
   Zee_2bjet_dPhi_2b__451->SetBinError(5,8);
   Zee_2bjet_dPhi_2b__451->SetBinError(6,10.3923);
   Zee_2bjet_dPhi_2b__451->SetBinError(7,7.81025);
   Zee_2bjet_dPhi_2b__451->SetBinError(8,8.185353);
   Zee_2bjet_dPhi_2b__451->SetBinError(9,8.602325);
   Zee_2bjet_dPhi_2b__451->SetBinError(10,8.602325);
   Zee_2bjet_dPhi_2b__451->SetBinError(11,8.888194);
   Zee_2bjet_dPhi_2b__451->SetBinError(12,9.797959);
   Zee_2bjet_dPhi_2b__451->SetBinError(13,8.888194);
   Zee_2bjet_dPhi_2b__451->SetBinError(14,8.717798);
   Zee_2bjet_dPhi_2b__451->SetBinError(15,9.055385);
   Zee_2bjet_dPhi_2b__451->SetBinError(16,9.219544);
   Zee_2bjet_dPhi_2b__451->SetBinError(17,9.486833);
   Zee_2bjet_dPhi_2b__451->SetBinError(18,9.643651);
   Zee_2bjet_dPhi_2b__451->SetBinError(19,9.433981);
   Zee_2bjet_dPhi_2b__451->SetBinError(20,10);
   Zee_2bjet_dPhi_2b__451->SetBinError(21,9.746794);
   Zee_2bjet_dPhi_2b__451->SetBinError(22,10.53565);
   Zee_2bjet_dPhi_2b__451->SetBinError(23,10.24695);
   Zee_2bjet_dPhi_2b__451->SetBinError(24,10.95445);
   Zee_2bjet_dPhi_2b__451->SetBinError(25,10.81665);
   Zee_2bjet_dPhi_2b__451->SetBinError(26,11.7047);
   Zee_2bjet_dPhi_2b__451->SetBinError(27,11.6619);
   Zee_2bjet_dPhi_2b__451->SetBinError(28,12.60952);
   Zee_2bjet_dPhi_2b__451->SetBinError(29,12.72792);
   Zee_2bjet_dPhi_2b__451->SetBinError(30,12.52996);
   Zee_2bjet_dPhi_2b__451->SetBinError(31,15.0333);
   Zee_2bjet_dPhi_2b__451->SetEntries(3070);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_2b__451->SetLineColor(ci);
   Zee_2bjet_dPhi_2b__451->SetLineWidth(2);
   Zee_2bjet_dPhi_2b__451->SetMarkerStyle(20);
   Zee_2bjet_dPhi_2b__451->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_2b__451->GetXaxis()->SetRange(1,31);
   Zee_2bjet_dPhi_2b__451->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b__451->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b__451->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b__451->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b__451->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b__451->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b__451->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b__451->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_2b__451->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b__451->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b__451->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b__451->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b__451->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b__451->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dPhi_2b_fx1451[31] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dPhi_2b_fy1451[31] = {
   44.58788,
   77.28859,
   57.31689,
   66.99768,
   62.06038,
   71.01994,
   92.36529,
   87.22027,
   71.34393,
   86.33098,
   69.0536,
   84.50497,
   94.75508,
   80.11974,
   85.83036,
   112.2501,
   90.98371,
   113.5556,
   112.0351,
   129.3209,
   132.9332,
   151.7303,
   130.1844,
   140.6229,
   166.6142,
   180.6981,
   177.7399,
   160.1335,
   199.3112,
   187.9077,
   293.8511};
   Double_t Graph_from_Zee_2bjet_bb_dPhi_2b_fex1451[31] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dPhi_2b_fey1451[31] = {
   9.325286,
   9.861029,
   9.741643,
   10.49078,
   11.00975,
   10.24932,
   11.2978,
   11.0413,
   11.23659,
   11.2444,
   11.81569,
   11.51888,
   12.30627,
   11.42327,
   12.00481,
   12.99026,
   12.47544,
   13.08389,
   12.64418,
   13.54969,
   13.48502,
   14.30735,
   14.67067,
   15.1814,
   15.71744,
   16.01415,
   16.24866,
   16.40351,
   17.04498,
   16.92631,
   21.18469};
   TGraphErrors *gre = new TGraphErrors(31,Graph_from_Zee_2bjet_bb_dPhi_2b_fx1451,Graph_from_Zee_2bjet_bb_dPhi_2b_fy1451,Graph_from_Zee_2bjet_bb_dPhi_2b_fex1451,Graph_from_Zee_2bjet_bb_dPhi_2b_fey1451);
   gre->SetName("Graph_from_Zee_2bjet_bb_dPhi_2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451->SetMinimum(7.285275);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451->SetMaximum(343.0131);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1451);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dPhi_2b","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_dPhi_2b_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_dPhi_2b_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_dPhi_2b_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dPhi_2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_dPhi_2b","MC unc. (stat.)","fl");

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
   dPhi_2b_Z_2bjet_Zee_17_amcnlo->cd();
  
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
   Double_t xAxis18[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *data_mc_ratio__452 = new TH1D("data_mc_ratio__452","",31, xAxis18);
   data_mc_ratio__452->SetBinContent(1,1.255947);
   data_mc_ratio__452->SetBinContent(2,0.8021883);
   data_mc_ratio__452->SetBinContent(3,0.88979);
   data_mc_ratio__452->SetBinContent(4,0.8806275);
   data_mc_ratio__452->SetBinContent(5,1.031254);
   data_mc_ratio__452->SetBinContent(6,1.5207);
   data_mc_ratio__452->SetBinContent(7,0.6604213);
   data_mc_ratio__452->SetBinContent(8,0.7681701);
   data_mc_ratio__452->SetBinContent(9,1.037229);
   data_mc_ratio__452->SetBinContent(10,0.8571663);
   data_mc_ratio__452->SetBinContent(11,1.144039);
   data_mc_ratio__452->SetBinContent(12,1.136028);
   data_mc_ratio__452->SetBinContent(13,0.8337284);
   data_mc_ratio__452->SetBinContent(14,0.9485802);
   data_mc_ratio__452->SetBinContent(15,0.9553729);
   data_mc_ratio__452->SetBinContent(16,0.7572378);
   data_mc_ratio__452->SetBinContent(17,0.9891881);
   data_mc_ratio__452->SetBinContent(18,0.818982);
   data_mc_ratio__452->SetBinContent(19,0.7943942);
   data_mc_ratio__452->SetBinContent(20,0.7732702);
   data_mc_ratio__452->SetBinContent(21,0.7146449);
   data_mc_ratio__452->SetBinContent(22,0.731561);
   data_mc_ratio__452->SetBinContent(23,0.806548);
   data_mc_ratio__452->SetBinContent(24,0.8533464);
   data_mc_ratio__452->SetBinContent(25,0.7022209);
   data_mc_ratio__452->SetBinContent(26,0.7581705);
   data_mc_ratio__452->SetBinContent(27,0.765163);
   data_mc_ratio__452->SetBinContent(28,0.9929214);
   data_mc_ratio__452->SetBinContent(29,0.8127991);
   data_mc_ratio__452->SetBinContent(30,0.8355165);
   data_mc_ratio__452->SetBinContent(31,0.7690971);
   data_mc_ratio__452->SetBinError(1,0.1678329);
   data_mc_ratio__452->SetBinError(2,0.101878);
   data_mc_ratio__452->SetBinError(3,0.1245955);
   data_mc_ratio__452->SetBinError(4,0.1146479);
   data_mc_ratio__452->SetBinError(5,0.1289067);
   data_mc_ratio__452->SetBinError(6,0.1463294);
   data_mc_ratio__452->SetBinError(7,0.08455828);
   data_mc_ratio__452->SetBinError(8,0.09384691);
   data_mc_ratio__452->SetBinError(9,0.1205754);
   data_mc_ratio__452->SetBinError(10,0.09964355);
   data_mc_ratio__452->SetBinError(11,0.1287144);
   data_mc_ratio__452->SetBinError(12,0.1159454);
   data_mc_ratio__452->SetBinError(13,0.09380177);
   data_mc_ratio__452->SetBinError(14,0.1088096);
   data_mc_ratio__452->SetBinError(15,0.1055033);
   data_mc_ratio__452->SetBinError(16,0.08213397);
   data_mc_ratio__452->SetBinError(17,0.1042696);
   data_mc_ratio__452->SetBinError(18,0.08492448);
   data_mc_ratio__452->SetBinError(19,0.08420562);
   data_mc_ratio__452->SetBinError(20,0.07732702);
   data_mc_ratio__452->SetBinError(21,0.07332102);
   data_mc_ratio__452->SetBinError(22,0.06943669);
   data_mc_ratio__452->SetBinError(23,0.07871102);
   data_mc_ratio__452->SetBinError(24,0.07789951);
   data_mc_ratio__452->SetBinError(25,0.06492035);
   data_mc_ratio__452->SetBinError(26,0.06477488);
   data_mc_ratio__452->SetBinError(27,0.06561219);
   data_mc_ratio__452->SetBinError(28,0.07874379);
   data_mc_ratio__452->SetBinError(29,0.06385953);
   data_mc_ratio__452->SetBinError(30,0.06668148);
   data_mc_ratio__452->SetBinError(31,0.05115958);
   data_mc_ratio__452->SetMinimum(0.4);
   data_mc_ratio__452->SetMaximum(1.6);
   data_mc_ratio__452->SetEntries(976.078);
   data_mc_ratio__452->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__452->SetLineColor(ci);
   data_mc_ratio__452->SetLineWidth(2);
   data_mc_ratio__452->SetMarkerStyle(20);
   data_mc_ratio__452->SetMarkerSize(1.2);
   data_mc_ratio__452->GetXaxis()->SetTitle("dPhi_{bb}");
   data_mc_ratio__452->GetXaxis()->SetRange(1,31);
   data_mc_ratio__452->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__452->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__452->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__452->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__452->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__452->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__452->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__452->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__452->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__452->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__452->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__452->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__452->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__452->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__452->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__452->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__452->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1452[31] = {
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
   Double_t Graph_from_mc_statistical_error_fy1452[31] = {
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
   Double_t Graph_from_mc_statistical_error_fex1452[31] = {
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
   Double_t Graph_from_mc_statistical_error_fey1452[31] = {
   0.209144,
   0.1275871,
   0.1699611,
   0.1565842,
   0.1774038,
   0.1443161,
   0.1223165,
   0.126591,
   0.1574989,
   0.1302476,
   0.171109,
   0.1363101,
   0.1298745,
   0.1425775,
   0.1398667,
   0.115726,
   0.1371173,
   0.1152201,
   0.1128592,
   0.1047757,
   0.1014421,
   0.09429461,
   0.1126914,
   0.1079583,
   0.0943343,
   0.08862374,
   0.09141821,
   0.1024364,
   0.0855194,
   0.09007777,
   0.07209329};
   gre = new TGraphErrors(31,Graph_from_mc_statistical_error_fx1452,Graph_from_mc_statistical_error_fy1452,Graph_from_mc_statistical_error_fex1452,Graph_from_mc_statistical_error_fey1452);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1452 = new TH1F("Graph_Graph_from_mc_statistical_error1452","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1452->SetMinimum(0.7490272);
   Graph_Graph_from_mc_statistical_error1452->SetMaximum(1.250973);
   Graph_Graph_from_mc_statistical_error1452->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1452->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1452->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1452->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1452->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1452->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1452->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1452->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1452->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1452->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1452->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1452->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1452->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1452->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1452->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1452->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1452);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.141593,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_2b_Z_2bjet_Zee_17_amcnlo->cd();
   dPhi_2b_Z_2bjet_Zee_17_amcnlo->Modified();
   dPhi_2b_Z_2bjet_Zee_17_amcnlo->cd();
   dPhi_2b_Z_2bjet_Zee_17_amcnlo->SetSelected(dPhi_2b_Z_2bjet_Zee_17_amcnlo);
}

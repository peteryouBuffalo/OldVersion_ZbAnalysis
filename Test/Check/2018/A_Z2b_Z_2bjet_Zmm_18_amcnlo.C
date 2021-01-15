void A_Z2b_Z_2bjet_Zmm_18_amcnlo()
{
//=========Macro generated from canvas: A_Z2b_Z_2bjet_Zmm_18_amcnlo/A_Z2b_Z_2bjet_Zmm_18_amcnlo
//=========  (Thu Jan 14 10:43:06 2021) by ROOT version 6.14/09
   TCanvas *A_Z2b_Z_2bjet_Zmm_18_amcnlo = new TCanvas("A_Z2b_Z_2bjet_Zmm_18_amcnlo", "A_Z2b_Z_2bjet_Zmm_18_amcnlo",0,0,600,600);
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->SetHighLightColor(2);
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->Range(0,0,1,1);
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->SetFillColor(0);
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->SetFillStyle(4000);
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->SetBorderMode(0);
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->SetBorderSize(2);
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->SetFrameFillStyle(1000);
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-4.054944,1.052419,4060.889);
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
   st->SetMaximum(3480.376);
   
   TH1F *st_stack_319 = new TH1F("st_stack_319","",25,0,1);
   st_stack_319->SetMinimum(0.01);
   st_stack_319->SetMaximum(3654.395);
   st_stack_319->SetDirectory(0);
   st_stack_319->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_319->SetLineColor(ci);
   st_stack_319->GetXaxis()->SetRange(1,25);
   st_stack_319->GetXaxis()->SetLabelFont(42);
   st_stack_319->GetXaxis()->SetLabelSize(0.035);
   st_stack_319->GetXaxis()->SetTitleSize(0.035);
   st_stack_319->GetXaxis()->SetTitleFont(42);
   st_stack_319->GetYaxis()->SetTitle("Events/0.04");
   st_stack_319->GetYaxis()->SetLabelFont(42);
   st_stack_319->GetYaxis()->SetLabelSize(0.05);
   st_stack_319->GetYaxis()->SetTitleSize(0.057);
   st_stack_319->GetYaxis()->SetTitleOffset(1.2);
   st_stack_319->GetYaxis()->SetTitleFont(42);
   st_stack_319->GetZaxis()->SetLabelFont(42);
   st_stack_319->GetZaxis()->SetLabelSize(0.035);
   st_stack_319->GetZaxis()->SetTitleSize(0.035);
   st_stack_319->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_319);
   
   
   TH1D *Zmm_2bjet_A_Z2b_stack_1 = new TH1D("Zmm_2bjet_A_Z2b_stack_1","",25,0,1);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(1,17.58448);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(2,13.81095);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(3,9.010099);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(4,9.245379);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(5,8.376863);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(6,9.457286);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(7,4.502276);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(8,5.908104);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(9,5.242798);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(10,3.308955);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(11,3.268454);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(12,2.54385);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(13,0.3118676);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(14,2.250634);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(15,0.9236749);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(16,0.7893534);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(17,0.3044336);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(18,0.7705079);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(19,1.211053);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(20,0.9648695);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(22,0.2747391);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(1,2.22713);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(2,2.12377);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(3,1.639322);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(4,1.841904);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(5,1.534504);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(6,1.682143);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(7,1.116224);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(8,1.334784);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(9,1.230111);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(10,0.9404663);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(11,0.9312864);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(12,0.8493749);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(13,0.3118676);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(14,0.7985988);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(15,0.5068264);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(16,0.4829611);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(17,0.3044336);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(18,0.4333459);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(19,0.5425871);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(20,0.560648);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(22,0.2747391);
   Zmm_2bjet_A_Z2b_stack_1->SetEntries(396);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_A_Z2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_stack_1->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_stack_1,"");
   
   TH1D *Zmm_2bjet_A_Z2b_stack_2 = new TH1D("Zmm_2bjet_A_Z2b_stack_2","",25,0,1);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(1,36.19135);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(2,38.55665);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(3,31.43876);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(4,27.89163);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(5,17.24104);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(6,10.6778);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(7,17.39903);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(8,8.390453);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(9,3.451277);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(10,5.184661);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(11,3.691952);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(12,5.324239);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(13,3.73204);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(14,3.726261);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(15,1.97874);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(16,0.6641368);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(17,0.9802689);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(18,0.4797911);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(19,0.7452376);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(20,0.5149642);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(23,0.4804393);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(24,1.09715);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(1,4.291856);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(2,4.580546);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(3,4.104029);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(4,3.743568);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(5,2.924709);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(6,2.308252);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(7,4.160346);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(8,2.175656);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(9,1.30585);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(10,1.576984);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(11,1.347035);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(12,1.723851);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(13,1.42779);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(14,1.428427);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(15,0.9934668);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(16,0.6641368);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(17,0.6936327);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(18,0.4797911);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(19,0.528414);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(20,0.5149642);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(23,0.4804393);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(24,0.7741032);
   Zmm_2bjet_A_Z2b_stack_2->SetEntries(454);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_A_Z2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_stack_2->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_stack_2,"");
   
   TH1D *Zmm_2bjet_A_Z2b_stack_3 = new TH1D("Zmm_2bjet_A_Z2b_stack_3","",25,0,1);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(1,499.6911);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(2,481.344);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(3,434.6291);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(4,399.5881);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(5,340.8009);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(6,297.1284);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(7,245.9976);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(8,213.4253);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(9,175.2406);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(10,151.5267);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(11,129.5868);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(12,103.7531);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(13,85.00327);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(14,68.05191);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(15,59.41386);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(16,48.99342);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(17,41.73795);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(18,32.27025);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(19,25.07211);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(20,18.71384);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(21,14.61528);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(22,11.37208);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(23,8.669569);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(24,4.320983);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(25,1.2263);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(1,6.731431);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(2,6.626135);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(3,6.320756);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(4,6.073627);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(5,5.564981);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(6,5.178291);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(7,4.689034);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(8,4.468698);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(9,3.967279);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(10,3.702888);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(11,3.415881);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(12,3.020172);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(13,2.755559);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(14,2.456406);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(15,2.300548);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(16,2.074599);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(17,1.926831);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(18,1.687017);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(19,1.578212);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(20,1.288835);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(21,1.123592);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(22,1.019718);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(23,0.8728805);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(24,0.6285058);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(25,0.3179326);
   Zmm_2bjet_A_Z2b_stack_3->SetEntries(48154);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_A_Z2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b_stack_3->SetLineColor(ci);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_A_Z2b_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_A_Z2b_stack_4 = new TH1D("Zmm_2bjet_XX_A_Z2b_stack_4","",25,0,1);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(1,44.44914);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(2,37.82184);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(3,46.90396);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(4,36.27701);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(5,16.29275);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(6,12.44878);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(7,3.846268);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(8,6.653783);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(9,10.37725);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(10,2.70446);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(11,1.781363);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(12,1.216708);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(13,8.733657);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(14,2.184075);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(16,-1.065635);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(20,1.550318);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(21,-0.1994971);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(22,1.06903);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(1,25.7801);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(2,19.82722);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(3,23.12143);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(4,19.57527);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(5,12.25685);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(6,10.05761);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(7,6.366763);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(8,3.703277);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(9,11.06415);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(10,2.636326);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(11,3.494265);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(12,1.216708);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(13,7.598722);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(14,3.257573);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(16,1.065635);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(20,1.550318);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(21,0.1994971);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(22,1.06903);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetEntries(117);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_A_Z2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_A_Z2b_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_A_Z2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_A_Z2b_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_A_Z2b_stack_5 = new TH1D("Zmm_2bjet_bX_A_Z2b_stack_5","",25,0,1);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(1,24.94933);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(2,34.86472);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(3,17.68785);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(4,13.47251);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(5,11.31837);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(6,8.625314);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(7,16.08345);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(8,12.22772);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(9,-0.3613386);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(10,1.929688);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(11,3.802512);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(12,-2.331911);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(13,-0.8804029);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(14,8.393035);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(15,-0.6965308);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(16,7.321682);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(17,0.4562364);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(19,-0.4609361);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(20,2.951814);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(21,0.3896773);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(22,2.517773);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(23,1.204837);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(1,11.20046);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(2,8.357476);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(3,10.41407);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(4,7.605976);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(5,6.777557);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(6,7.614046);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(7,6.195852);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(8,6.419342);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(9,5.290571);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(10,4.715466);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(11,4.30211);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(12,3.660678);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(13,2.586396);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(14,3.919639);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(15,2.2905);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(16,3.005912);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(17,3.441511);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(19,1.778791);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(20,2.787562);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(21,0.2773703);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(22,2.826207);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(23,1.204837);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetEntries(396);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_A_Z2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_A_Z2b_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_A_Z2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_A_Z2b_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_A_Z2b_stack_6 = new TH1D("Zmm_2bjet_bb_A_Z2b_stack_6","",25,0,1);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(1,1291.341);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(2,1269.112);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(3,1064.555);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(4,788.3591);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(5,651.7653);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(6,544.4776);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(7,427.6698);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(8,326.0243);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(9,329.1033);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(10,235.7727);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(11,200.3238);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(12,180.175);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(13,238.0717);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(14,112.9671);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(15,58.83209);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(16,101.9697);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(17,72.79456);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(18,65.08522);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(19,42.7904);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(20,66.99296);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(21,41.13112);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(22,35.59982);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(23,9.048775);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(24,17.63862);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(25,-1.556989);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(1,65.5904);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(2,63.74124);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(3,60.19563);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(4,54.0205);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(5,49.97223);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(6,42.97112);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(7,39.16108);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(8,35.57483);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(9,32.05428);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(10,28.57593);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(11,25.97476);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(12,25.2073);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(13,23.25195);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(14,20.56447);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(15,51.26612);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(16,16.52477);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(17,15.81448);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(18,13.11978);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(19,12.55913);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(20,13.32046);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(21,9.670704);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(22,8.933383);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(23,6.741732);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(24,5.32798);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(25,2.613351);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetEntries(21441);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_A_Z2b_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_A_Z2b_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_A_Z2b_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_A_Z2b_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_A_Z2b__637 = new TH1D("Zmm_2bjet_A_Z2b__637","",25,0,1);
   Zmm_2bjet_A_Z2b__637->SetBinContent(1,1663);
   Zmm_2bjet_A_Z2b__637->SetBinContent(2,1440);
   Zmm_2bjet_A_Z2b__637->SetBinContent(3,1365);
   Zmm_2bjet_A_Z2b__637->SetBinContent(4,1126);
   Zmm_2bjet_A_Z2b__637->SetBinContent(5,912);
   Zmm_2bjet_A_Z2b__637->SetBinContent(6,753);
   Zmm_2bjet_A_Z2b__637->SetBinContent(7,580);
   Zmm_2bjet_A_Z2b__637->SetBinContent(8,521);
   Zmm_2bjet_A_Z2b__637->SetBinContent(9,462);
   Zmm_2bjet_A_Z2b__637->SetBinContent(10,322);
   Zmm_2bjet_A_Z2b__637->SetBinContent(11,278);
   Zmm_2bjet_A_Z2b__637->SetBinContent(12,225);
   Zmm_2bjet_A_Z2b__637->SetBinContent(13,210);
   Zmm_2bjet_A_Z2b__637->SetBinContent(14,188);
   Zmm_2bjet_A_Z2b__637->SetBinContent(15,139);
   Zmm_2bjet_A_Z2b__637->SetBinContent(16,128);
   Zmm_2bjet_A_Z2b__637->SetBinContent(17,116);
   Zmm_2bjet_A_Z2b__637->SetBinContent(18,91);
   Zmm_2bjet_A_Z2b__637->SetBinContent(19,73);
   Zmm_2bjet_A_Z2b__637->SetBinContent(20,53);
   Zmm_2bjet_A_Z2b__637->SetBinContent(21,44);
   Zmm_2bjet_A_Z2b__637->SetBinContent(22,29);
   Zmm_2bjet_A_Z2b__637->SetBinContent(23,24);
   Zmm_2bjet_A_Z2b__637->SetBinContent(24,12);
   Zmm_2bjet_A_Z2b__637->SetBinContent(25,3);
   Zmm_2bjet_A_Z2b__637->SetBinError(1,40.7799);
   Zmm_2bjet_A_Z2b__637->SetBinError(2,37.94733);
   Zmm_2bjet_A_Z2b__637->SetBinError(3,36.94591);
   Zmm_2bjet_A_Z2b__637->SetBinError(4,33.55592);
   Zmm_2bjet_A_Z2b__637->SetBinError(5,30.19934);
   Zmm_2bjet_A_Z2b__637->SetBinError(6,27.44085);
   Zmm_2bjet_A_Z2b__637->SetBinError(7,24.08319);
   Zmm_2bjet_A_Z2b__637->SetBinError(8,22.82542);
   Zmm_2bjet_A_Z2b__637->SetBinError(9,21.49419);
   Zmm_2bjet_A_Z2b__637->SetBinError(10,17.94436);
   Zmm_2bjet_A_Z2b__637->SetBinError(11,16.67333);
   Zmm_2bjet_A_Z2b__637->SetBinError(12,15);
   Zmm_2bjet_A_Z2b__637->SetBinError(13,14.49138);
   Zmm_2bjet_A_Z2b__637->SetBinError(14,13.71131);
   Zmm_2bjet_A_Z2b__637->SetBinError(15,11.78983);
   Zmm_2bjet_A_Z2b__637->SetBinError(16,11.31371);
   Zmm_2bjet_A_Z2b__637->SetBinError(17,10.77033);
   Zmm_2bjet_A_Z2b__637->SetBinError(18,9.539392);
   Zmm_2bjet_A_Z2b__637->SetBinError(19,8.544004);
   Zmm_2bjet_A_Z2b__637->SetBinError(20,7.28011);
   Zmm_2bjet_A_Z2b__637->SetBinError(21,6.63325);
   Zmm_2bjet_A_Z2b__637->SetBinError(22,5.385165);
   Zmm_2bjet_A_Z2b__637->SetBinError(23,4.898979);
   Zmm_2bjet_A_Z2b__637->SetBinError(24,3.464102);
   Zmm_2bjet_A_Z2b__637->SetBinError(25,1.732051);
   Zmm_2bjet_A_Z2b__637->SetEntries(10757);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b__637->SetLineColor(ci);
   Zmm_2bjet_A_Z2b__637->SetLineWidth(2);
   Zmm_2bjet_A_Z2b__637->SetMarkerStyle(20);
   Zmm_2bjet_A_Z2b__637->SetMarkerSize(1.2);
   Zmm_2bjet_A_Z2b__637->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b__637->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b__637->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b__637->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b__637->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b__637->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b__637->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b__637->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b__637->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b__637->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b__637->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b__637->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b__637->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b__637->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b__637->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_A_Z2b_fx1637[25] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_A_Z2b_fy1637[25] = {
   1914.207,
   1875.51,
   1604.225,
   1274.834,
   1045.795,
   882.8151,
   715.4984,
   572.6297,
   523.0539,
   400.4272,
   342.4549,
   290.681,
   334.9721,
   197.573,
   120.4518,
   158.6726,
   116.2735,
   98.60577,
   69.35786,
   91.68877,
   55.93658,
   50.83343,
   19.40362,
   23.05675,
   -0.3306888};
   Double_t Graph_from_Zmm_2bjet_bb_A_Z2b_fex1637[25] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_A_Z2b_fey1637[25] = {
   71.83911,
   67.78871,
   65.77271,
   58.42561,
   52.29978,
   45.17321,
   40.65779,
   36.70116,
   34.59538,
   29.37435,
   26.82827,
   25.75079,
   24.79541,
   21.39123,
   51.38091,
   16.97697,
   16.3165,
   13.24359,
   12.8047,
   13.77858,
   9.74175,
   9.489516,
   6.920645,
   5.420482,
   2.632619};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_bb_A_Z2b_fx1637,Graph_from_Zmm_2bjet_bb_A_Z2b_fy1637,Graph_from_Zmm_2bjet_bb_A_Z2b_fex1637,Graph_from_Zmm_2bjet_bb_A_Z2b_fey1637);
   gre->SetName("Graph_from_Zmm_2bjet_bb_A_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637","",100,0,1.1);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637->SetMinimum(-201.8642);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637->SetMaximum(2184.947);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1637);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_A_Z2b","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_A_Z2b_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_A_Z2b_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_A_Z2b_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_A_Z2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_A_Z2b","MC unc. (stat.)","fl");

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
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__638 = new TH1D("data_mc_ratio__638","",25,0,1);
   data_mc_ratio__638->SetBinContent(1,0.8687672);
   data_mc_ratio__638->SetBinContent(2,0.7677911);
   data_mc_ratio__638->SetBinContent(3,0.8508782);
   data_mc_ratio__638->SetBinContent(4,0.8832524);
   data_mc_ratio__638->SetBinContent(5,0.8720636);
   data_mc_ratio__638->SetBinContent(6,0.8529532);
   data_mc_ratio__638->SetBinContent(7,0.8106237);
   data_mc_ratio__638->SetBinContent(8,0.9098375);
   data_mc_ratio__638->SetBinContent(9,0.8832741);
   data_mc_ratio__638->SetBinContent(10,0.8041412);
   data_mc_ratio__638->SetBinContent(11,0.8117857);
   data_mc_ratio__638->SetBinContent(12,0.7740445);
   data_mc_ratio__638->SetBinContent(13,0.6269178);
   data_mc_ratio__638->SetBinContent(14,0.9515472);
   data_mc_ratio__638->SetBinContent(15,1.153988);
   data_mc_ratio__638->SetBinContent(16,0.8066923);
   data_mc_ratio__638->SetBinContent(17,0.9976482);
   data_mc_ratio__638->SetBinContent(18,0.9228669);
   data_mc_ratio__638->SetBinContent(19,1.052512);
   data_mc_ratio__638->SetBinContent(20,0.5780424);
   data_mc_ratio__638->SetBinContent(21,0.7866051);
   data_mc_ratio__638->SetBinContent(22,0.5704907);
   data_mc_ratio__638->SetBinContent(23,1.236883);
   data_mc_ratio__638->SetBinContent(24,0.5204549);
   data_mc_ratio__638->SetBinContent(25,-9.071974);
   data_mc_ratio__638->SetBinError(1,0.02130381);
   data_mc_ratio__638->SetBinError(2,0.02023307);
   data_mc_ratio__638->SetBinError(3,0.02303038);
   data_mc_ratio__638->SetBinError(4,0.0263218);
   data_mc_ratio__638->SetBinError(5,0.02887691);
   data_mc_ratio__638->SetBinError(6,0.03108334);
   data_mc_ratio__638->SetBinError(7,0.03365932);
   data_mc_ratio__638->SetBinError(8,0.0398607);
   data_mc_ratio__638->SetBinError(9,0.04109363);
   data_mc_ratio__638->SetBinError(10,0.04481304);
   data_mc_ratio__638->SetBinError(11,0.04868767);
   data_mc_ratio__638->SetBinError(12,0.05160296);
   data_mc_ratio__638->SetBinError(13,0.04326144);
   data_mc_ratio__638->SetBinError(14,0.06939871);
   data_mc_ratio__638->SetBinError(15,0.09788);
   data_mc_ratio__638->SetBinError(16,0.0713022);
   data_mc_ratio__638->SetBinError(17,0.09262931);
   data_mc_ratio__638->SetBinError(18,0.09674273);
   data_mc_ratio__638->SetBinError(19,0.1231872);
   data_mc_ratio__638->SetBinError(20,0.07940024);
   data_mc_ratio__638->SetBinError(21,0.1185852);
   data_mc_ratio__638->SetBinError(22,0.1059375);
   data_mc_ratio__638->SetBinError(23,0.2524776);
   data_mc_ratio__638->SetBinError(24,0.1502424);
   data_mc_ratio__638->SetBinError(25,5.237707);
   data_mc_ratio__638->SetMinimum(0.4);
   data_mc_ratio__638->SetMaximum(1.6);
   data_mc_ratio__638->SetEntries(0.02401386);
   data_mc_ratio__638->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__638->SetLineColor(ci);
   data_mc_ratio__638->SetLineWidth(2);
   data_mc_ratio__638->SetMarkerStyle(20);
   data_mc_ratio__638->SetMarkerSize(1.2);
   data_mc_ratio__638->GetXaxis()->SetTitle("A_{Zbb}");
   data_mc_ratio__638->GetXaxis()->SetRange(1,25);
   data_mc_ratio__638->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__638->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__638->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__638->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__638->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__638->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__638->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__638->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__638->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__638->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__638->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__638->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__638->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__638->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__638->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__638->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__638->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1638[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1638[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1638[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1638[25] = {
   0.03752944,
   0.03614414,
   0.04099968,
   0.04582998,
   0.05000957,
   0.05116951,
   0.05682443,
   0.06409231,
   0.06614113,
   0.07335753,
   0.07834103,
   0.08858782,
   0.07402231,
   0.10827,
   0.4265681,
   0.1069937,
   0.1403287,
   0.1343085,
   0.1846178,
   0.1502756,
   0.1741571,
   0.1866786,
   0.3566677,
   0.235093,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1638,Graph_from_mc_statistical_error_fy1638,Graph_from_mc_statistical_error_fex1638,Graph_from_mc_statistical_error_fey1638);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1638 = new TH1F("Graph_Graph_from_mc_statistical_error1638","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1638->SetMinimum(0.4881183);
   Graph_Graph_from_mc_statistical_error1638->SetMaximum(1.511882);
   Graph_Graph_from_mc_statistical_error1638->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1638->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1638->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1638->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1638->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1638->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1638->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1638->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1638->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1638->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1638->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1638->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1638->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1638->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1638->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1638->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1638);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->cd();
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->Modified();
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->cd();
   A_Z2b_Z_2bjet_Zmm_18_amcnlo->SetSelected(A_Z2b_Z_2bjet_Zmm_18_amcnlo);
}

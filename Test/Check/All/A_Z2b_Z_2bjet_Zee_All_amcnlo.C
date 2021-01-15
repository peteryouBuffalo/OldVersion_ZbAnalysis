void A_Z2b_Z_2bjet_Zee_All_amcnlo()
{
//=========Macro generated from canvas: A_Z2b_Z_2bjet_Zee_All_amcnlo/A_Z2b_Z_2bjet_Zee_All_amcnlo
//=========  (Thu Jan 14 10:42:52 2021) by ROOT version 6.14/09
   TCanvas *A_Z2b_Z_2bjet_Zee_All_amcnlo = new TCanvas("A_Z2b_Z_2bjet_Zee_All_amcnlo", "A_Z2b_Z_2bjet_Zee_All_amcnlo",0,0,600,600);
   A_Z2b_Z_2bjet_Zee_All_amcnlo->SetHighLightColor(2);
   A_Z2b_Z_2bjet_Zee_All_amcnlo->Range(0,0,1,1);
   A_Z2b_Z_2bjet_Zee_All_amcnlo->SetFillColor(0);
   A_Z2b_Z_2bjet_Zee_All_amcnlo->SetFillStyle(4000);
   A_Z2b_Z_2bjet_Zee_All_amcnlo->SetBorderMode(0);
   A_Z2b_Z_2bjet_Zee_All_amcnlo->SetBorderSize(2);
   A_Z2b_Z_2bjet_Zee_All_amcnlo->SetFrameFillStyle(1000);
   A_Z2b_Z_2bjet_Zee_All_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-3.931909,1.052419,3937.977);
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
   st->SetMaximum(3375.034);
   
   TH1F *st_stack_232 = new TH1F("st_stack_232","",25,0,1);
   st_stack_232->SetMinimum(0.01);
   st_stack_232->SetMaximum(3543.786);
   st_stack_232->SetDirectory(0);
   st_stack_232->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_232->SetLineColor(ci);
   st_stack_232->GetXaxis()->SetRange(1,25);
   st_stack_232->GetXaxis()->SetLabelFont(42);
   st_stack_232->GetXaxis()->SetLabelSize(0.035);
   st_stack_232->GetXaxis()->SetTitleSize(0.035);
   st_stack_232->GetXaxis()->SetTitleFont(42);
   st_stack_232->GetYaxis()->SetTitle("Events/0.04");
   st_stack_232->GetYaxis()->SetLabelFont(42);
   st_stack_232->GetYaxis()->SetLabelSize(0.05);
   st_stack_232->GetYaxis()->SetTitleSize(0.057);
   st_stack_232->GetYaxis()->SetTitleOffset(1.2);
   st_stack_232->GetYaxis()->SetTitleFont(42);
   st_stack_232->GetZaxis()->SetLabelFont(42);
   st_stack_232->GetZaxis()->SetLabelSize(0.035);
   st_stack_232->GetZaxis()->SetTitleSize(0.035);
   st_stack_232->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_232);
   
   
   TH1D *Zee_2bjet_A_Z2b_all_stack_1 = new TH1D("Zee_2bjet_A_Z2b_all_stack_1","",25,0,1);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(1,9.662052);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(2,11.87197);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(3,12.67443);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(4,9.30744);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(5,8.011557);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(6,6.686235);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(7,4.176829);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(8,5.131375);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(9,3.490228);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(10,2.017889);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(11,3.250496);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(12,2.303056);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(13,1.335143);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(14,2.538947);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(15,0.8236673);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(16,1.928715);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(17,0.821101);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(19,0.8224738);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(20,0.5746281);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(21,0.1752114);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinContent(22,0.5221218);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(1,1.425736);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(2,1.653122);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(3,1.72396);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(4,1.427711);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(5,1.346785);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(6,1.196069);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(7,1.013489);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(8,1.096916);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(9,0.8376806);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(10,0.6848959);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(11,0.901932);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(12,0.6282013);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(13,0.5243253);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(14,0.7735719);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(15,0.3807567);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(16,0.6292903);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(17,0.3825669);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(19,0.4203606);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(20,0.4984205);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(21,0.1752114);
   Zee_2bjet_A_Z2b_all_stack_1->SetBinError(22,0.2920122);
   Zee_2bjet_A_Z2b_all_stack_1->SetEntries(475);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_A_Z2b_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_all_stack_1->SetLineColor(ci);
   Zee_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_all_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_all_stack_1,"");
   
   TH1D *Zee_2bjet_A_Z2b_all_stack_2 = new TH1D("Zee_2bjet_A_Z2b_all_stack_2","",25,0,1);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(1,42.34126);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(2,32.4448);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(3,27.90068);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(4,25.63484);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(5,21.22182);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(6,15.01797);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(7,7.869302);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(8,7.185496);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(9,6.808705);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(10,5.426922);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(11,1.948662);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(12,3.481822);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(13,2.422056);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(14,1.648981);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(15,1.940886);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(16,0.862525);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(17,0.8674878);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(18,0.3151029);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(20,0.4173177);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinContent(21,0.5221991);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(1,4.072387);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(2,3.500317);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(3,3.295039);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(4,3.296918);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(5,2.886581);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(6,2.382925);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(7,1.66698);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(8,1.608526);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(9,1.567661);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(10,1.627608);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(11,0.8437603);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(12,1.167409);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(13,0.9829264);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(14,0.8519091);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(15,0.9193813);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(16,0.6099288);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(17,0.6538904);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(18,0.3151029);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(20,0.4173177);
   Zee_2bjet_A_Z2b_all_stack_2->SetBinError(21,0.3721473);
   Zee_2bjet_A_Z2b_all_stack_2->SetEntries(618);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_A_Z2b_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_all_stack_2->SetLineColor(ci);
   Zee_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_all_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_all_stack_2,"");
   
   TH1D *Zee_2bjet_A_Z2b_all_stack_3 = new TH1D("Zee_2bjet_A_Z2b_all_stack_3","",25,0,1);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(1,466.7319);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(2,460.4637);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(3,403.7358);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(4,365.4315);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(5,318.887);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(6,279.1178);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(7,253.049);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(8,207.6615);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(9,177.003);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(10,156.7753);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(11,117.5863);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(12,94.99909);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(13,82.16047);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(14,66.32281);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(15,57.02042);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(16,48.27011);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(17,41.03986);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(18,32.48857);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(19,23.67448);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(20,19.28152);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(21,11.24175);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(22,11.94574);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(23,6.300282);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(24,5.662965);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinContent(25,1.648386);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(1,9.051567);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(2,8.977564);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(3,8.513142);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(4,8.098756);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(5,7.605335);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(6,7.030704);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(7,6.846651);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(8,6.071009);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(9,5.817117);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(10,5.300375);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(11,4.549135);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(12,4.020635);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(13,3.835106);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(14,3.426763);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(15,3.166446);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(16,2.941148);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(17,2.751008);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(18,2.534139);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(19,2.017381);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(20,1.830859);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(21,1.397775);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(22,1.506288);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(23,1.055269);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(24,1.121446);
   Zee_2bjet_A_Z2b_all_stack_3->SetBinError(25,0.5372422);
   Zee_2bjet_A_Z2b_all_stack_3->SetEntries(32755);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_A_Z2b_all_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_all_stack_3->SetLineColor(ci);
   Zee_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_all_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_all_stack_3,"");
   
   TH1D *Zee_2bjet_XX_A_Z2b_all_stack_4 = new TH1D("Zee_2bjet_XX_A_Z2b_all_stack_4","",25,0,1);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(1,16.30976);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(2,6.349347);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(3,1.175002);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(4,2.369705);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(5,1.522262);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(6,5.326702);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(7,0.3894906);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(8,4.213151);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(9,1.747621);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(10,2.979057);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(11,0.7182622);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(12,1.044421);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(13,-0.8390071);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(14,3.076731);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(16,2.106815);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(17,0.5043973);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(18,0.4321969);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(19,1.009878);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(20,1.41667);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinContent(21,3.545991);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(1,10.5089);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(2,3.361852);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(3,2.843778);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(4,2.733185);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(5,2.847655);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(6,6.475925);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(7,1.982742);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(8,2.410731);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(9,1.900927);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(10,3.160164);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(11,1.253582);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(12,1.330377);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(13,0.8390071);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(14,2.835231);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(16,1.371691);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(17,0.5043973);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(18,0.4321969);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(19,1.009878);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(20,1.41667);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetBinError(21,3.545991);
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetEntries(129);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_A_Z2b_all_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_A_Z2b_all_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_XX_A_Z2b_all_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_A_Z2b_all_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_A_Z2b_all_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_A_Z2b_all_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_A_Z2b_all_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_A_Z2b_all_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_A_Z2b_all_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_A_Z2b_all_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_A_Z2b_all_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_A_Z2b_all_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_A_Z2b_all_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_A_Z2b_all_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_A_Z2b_all_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_A_Z2b_all_stack_4,"");
   
   TH1D *Zee_2bjet_bX_A_Z2b_all_stack_5 = new TH1D("Zee_2bjet_bX_A_Z2b_all_stack_5","",25,0,1);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(1,30.11408);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(2,18.25736);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(3,16.08078);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(4,4.307748);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(5,11.6135);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(6,9.065957);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(7,13.25011);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(8,3.452187);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(9,9.535882);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(10,2.624486);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(11,2.879185);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(12,3.21187);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(13,2.117958);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(14,-0.6388117);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(15,3.013129);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(16,3.348629);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(17,3.233954);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(18,0.1310575);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(19,0.09277981);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(20,-2.09128);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(21,2.120224);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinContent(22,0.4298189);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(1,7.786679);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(2,7.557953);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(3,8.530664);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(4,6.538312);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(5,6.955249);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(6,4.725113);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(7,4.814603);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(8,3.871312);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(9,4.781629);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(10,3.872361);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(11,3.159667);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(12,3.313025);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(13,1.550787);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(14,2.184486);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(15,2.775934);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(16,2.287862);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(17,2.323538);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(18,1.377306);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(19,0.9156024);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(20,1.065379);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(21,1.499838);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetBinError(22,0.4298189);
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetEntries(615);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_A_Z2b_all_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_A_Z2b_all_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bX_A_Z2b_all_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_A_Z2b_all_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_A_Z2b_all_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_A_Z2b_all_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_A_Z2b_all_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_A_Z2b_all_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_A_Z2b_all_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_A_Z2b_all_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_A_Z2b_all_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_A_Z2b_all_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_A_Z2b_all_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_A_Z2b_all_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_A_Z2b_all_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_A_Z2b_all_stack_5,"");
   
   TH1D *Zee_2bjet_bb_A_Z2b_all_stack_6 = new TH1D("Zee_2bjet_bb_A_Z2b_all_stack_6","",25,0,1);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(1,1291.11);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(2,1189.767);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(3,1092.562);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(4,837.3074);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(5,635.8536);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(6,566.1844);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(7,483.5696);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(8,355.3488);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(9,321.638);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(10,262.1528);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(11,205.9769);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(12,185.0903);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(13,175.7615);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(14,155.3761);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(15,104.2251);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(16,102.985);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(17,55.17472);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(18,71.02449);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(19,65.22505);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(20,47.31434);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(21,31.2662);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(22,16.49241);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(23,17.69922);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(24,21.3984);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinContent(25,3.549415);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(1,55.66907);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(2,54.98248);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(3,52.35488);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(4,46.25973);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(5,40.78635);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(6,36.71691);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(7,33.62737);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(8,29.28797);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(9,28.3668);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(10,24.94169);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(11,23.21832);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(12,21.073);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(13,18.89691);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(14,18.01571);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(15,15.6229);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(16,15.0389);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(17,13.71692);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(18,13.40222);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(19,11.57134);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(20,9.763057);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(21,7.921813);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(22,6.51022);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(23,6.636121);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(24,5.304776);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetBinError(25,2.704653);
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetEntries(34449);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_A_Z2b_all_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_A_Z2b_all_stack_6->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bb_A_Z2b_all_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_A_Z2b_all_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_A_Z2b_all_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_A_Z2b_all_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_A_Z2b_all_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_A_Z2b_all_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_A_Z2b_all_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_A_Z2b_all_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_A_Z2b_all_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_A_Z2b_all_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_A_Z2b_all_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_A_Z2b_all_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_A_Z2b_all_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_A_Z2b_all_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_A_Z2b_all__463 = new TH1D("Zee_2bjet_A_Z2b_all__463","",25,0,1);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(1,1629);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(2,1514);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(3,1267);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(4,1130);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(5,868);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(6,728);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(7,613);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(8,542);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(9,446);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(10,346);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(11,295);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(12,249);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(13,204);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(14,158);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(15,148);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(16,134);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(17,117);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(18,74);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(19,64);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(20,46);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(21,38);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(22,40);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(23,24);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(24,12);
   Zee_2bjet_A_Z2b_all__463->SetBinContent(25,3);
   Zee_2bjet_A_Z2b_all__463->SetBinError(1,40.36087);
   Zee_2bjet_A_Z2b_all__463->SetBinError(2,38.91015);
   Zee_2bjet_A_Z2b_all__463->SetBinError(3,35.59494);
   Zee_2bjet_A_Z2b_all__463->SetBinError(4,33.61547);
   Zee_2bjet_A_Z2b_all__463->SetBinError(5,29.46184);
   Zee_2bjet_A_Z2b_all__463->SetBinError(6,26.98148);
   Zee_2bjet_A_Z2b_all__463->SetBinError(7,24.75884);
   Zee_2bjet_A_Z2b_all__463->SetBinError(8,23.28089);
   Zee_2bjet_A_Z2b_all__463->SetBinError(9,21.11871);
   Zee_2bjet_A_Z2b_all__463->SetBinError(10,18.60108);
   Zee_2bjet_A_Z2b_all__463->SetBinError(11,17.17556);
   Zee_2bjet_A_Z2b_all__463->SetBinError(12,15.77973);
   Zee_2bjet_A_Z2b_all__463->SetBinError(13,14.28286);
   Zee_2bjet_A_Z2b_all__463->SetBinError(14,12.56981);
   Zee_2bjet_A_Z2b_all__463->SetBinError(15,12.16553);
   Zee_2bjet_A_Z2b_all__463->SetBinError(16,11.57584);
   Zee_2bjet_A_Z2b_all__463->SetBinError(17,10.81665);
   Zee_2bjet_A_Z2b_all__463->SetBinError(18,8.602325);
   Zee_2bjet_A_Z2b_all__463->SetBinError(19,8);
   Zee_2bjet_A_Z2b_all__463->SetBinError(20,6.78233);
   Zee_2bjet_A_Z2b_all__463->SetBinError(21,6.164414);
   Zee_2bjet_A_Z2b_all__463->SetBinError(22,6.324555);
   Zee_2bjet_A_Z2b_all__463->SetBinError(23,4.898979);
   Zee_2bjet_A_Z2b_all__463->SetBinError(24,3.464102);
   Zee_2bjet_A_Z2b_all__463->SetBinError(25,1.732051);
   Zee_2bjet_A_Z2b_all__463->SetEntries(10689);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_all__463->SetLineColor(ci);
   Zee_2bjet_A_Z2b_all__463->SetLineWidth(2);
   Zee_2bjet_A_Z2b_all__463->SetMarkerStyle(20);
   Zee_2bjet_A_Z2b_all__463->SetMarkerSize(1.2);
   Zee_2bjet_A_Z2b_all__463->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_all__463->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all__463->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all__463->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all__463->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all__463->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all__463->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all__463->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all__463->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_all__463->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all__463->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_all__463->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_all__463->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_all__463->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_all__463->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_A_Z2b_all_fx1463[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_A_Z2b_all_fy1463[25] = {
   1856.269,
   1719.154,
   1554.129,
   1244.359,
   997.1098,
   881.3991,
   762.3043,
   582.9925,
   520.2235,
   431.9765,
   332.3598,
   290.1305,
   262.9581,
   228.3248,
   167.0232,
   159.5018,
   101.6415,
   104.3914,
   90.82466,
   66.9132,
   48.87158,
   29.39009,
   23.99951,
   27.06137,
   5.197802};
   Double_t Graph_from_Zee_2bjet_bb_A_Z2b_all_fex1463[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_A_Z2b_all_fey1463[25] = {
   58.0574,
   56.45423,
   53.92769,
   47.63067,
   42.28472,
   38.32669,
   34.76484,
   30.31884,
   29.4644,
   26.04385,
   23.9346,
   21.78854,
   19.39462,
   18.72013,
   16.21103,
   15.57892,
   14.21088,
   13.71949,
   11.83218,
   10.11108,
   8.927579,
   6.702379,
   6.719501,
   5.422019,
   2.757495};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_bb_A_Z2b_all_fx1463,Graph_from_Zee_2bjet_bb_A_Z2b_all_fy1463,Graph_from_Zee_2bjet_bb_A_Z2b_all_fex1463,Graph_from_Zee_2bjet_bb_A_Z2b_all_fey1463);
   gre->SetName("Graph_from_Zee_2bjet_bb_A_Z2b_all");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463","",100,0,1.1);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463->SetMinimum(2.196277);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463->SetMaximum(2105.515);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_A_Z2b_all1463);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_A_Z2b_all","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_A_Z2b_all_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_A_Z2b_all_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_A_Z2b_all_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_all_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_all_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_all_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_A_Z2b_all","MC unc. (stat.)","fl");

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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 137.1 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   A_Z2b_Z_2bjet_Zee_All_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__464 = new TH1D("data_mc_ratio__464","",25,0,1);
   data_mc_ratio__464->SetBinContent(1,0.8775669);
   data_mc_ratio__464->SetBinContent(2,0.8806655);
   data_mc_ratio__464->SetBinContent(3,0.8152476);
   data_mc_ratio__464->SetBinContent(4,0.9080983);
   data_mc_ratio__464->SetBinContent(5,0.870516);
   data_mc_ratio__464->SetBinContent(6,0.8259596);
   data_mc_ratio__464->SetBinContent(7,0.8041408);
   data_mc_ratio__464->SetBinContent(8,0.9296861);
   data_mc_ratio__464->SetBinContent(9,0.8573239);
   data_mc_ratio__464->SetBinContent(10,0.8009696);
   data_mc_ratio__464->SetBinContent(11,0.8875922);
   data_mc_ratio__464->SetBinContent(12,0.8582344);
   data_mc_ratio__464->SetBinContent(13,0.775789);
   data_mc_ratio__464->SetBinContent(14,0.6919967);
   data_mc_ratio__464->SetBinContent(15,0.8861044);
   data_mc_ratio__464->SetBinContent(16,0.8401157);
   data_mc_ratio__464->SetBinContent(17,1.151104);
   data_mc_ratio__464->SetBinContent(18,0.7088706);
   data_mc_ratio__464->SetBinContent(19,0.7046544);
   data_mc_ratio__464->SetBinContent(20,0.6874578);
   data_mc_ratio__464->SetBinContent(21,0.7775481);
   data_mc_ratio__464->SetBinContent(22,1.361003);
   data_mc_ratio__464->SetBinContent(23,1.000021);
   data_mc_ratio__464->SetBinContent(24,0.4434366);
   data_mc_ratio__464->SetBinContent(25,0.5771671);
   data_mc_ratio__464->SetBinError(1,0.02174301);
   data_mc_ratio__464->SetBinError(2,0.02263331);
   data_mc_ratio__464->SetBinError(3,0.02290347);
   data_mc_ratio__464->SetBinError(4,0.0270143);
   data_mc_ratio__464->SetBinError(5,0.02954724);
   data_mc_ratio__464->SetBinError(6,0.0306121);
   data_mc_ratio__464->SetBinError(7,0.03247894);
   data_mc_ratio__464->SetBinError(8,0.03993344);
   data_mc_ratio__464->SetBinError(9,0.04059546);
   data_mc_ratio__464->SetBinError(10,0.04306039);
   data_mc_ratio__464->SetBinError(11,0.05167762);
   data_mc_ratio__464->SetBinError(12,0.05438839);
   data_mc_ratio__464->SetBinError(13,0.0543161);
   data_mc_ratio__464->SetBinError(14,0.0550523);
   data_mc_ratio__464->SetBinError(15,0.07283733);
   data_mc_ratio__464->SetBinError(16,0.07257494);
   data_mc_ratio__464->SetBinError(17,0.1064196);
   data_mc_ratio__464->SetBinError(18,0.08240453);
   data_mc_ratio__464->SetBinError(19,0.0880818);
   data_mc_ratio__464->SetBinError(20,0.1013601);
   data_mc_ratio__464->SetBinError(21,0.126135);
   data_mc_ratio__464->SetBinError(22,0.2151935);
   data_mc_ratio__464->SetBinError(23,0.2041283);
   data_mc_ratio__464->SetBinError(24,0.1280091);
   data_mc_ratio__464->SetBinError(25,0.3332276);
   data_mc_ratio__464->SetMinimum(0.4);
   data_mc_ratio__464->SetMaximum(1.6);
   data_mc_ratio__464->SetEntries(630.9813);
   data_mc_ratio__464->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__464->SetLineColor(ci);
   data_mc_ratio__464->SetLineWidth(2);
   data_mc_ratio__464->SetMarkerStyle(20);
   data_mc_ratio__464->SetMarkerSize(1.2);
   data_mc_ratio__464->GetXaxis()->SetTitle("A_{Zbb}");
   data_mc_ratio__464->GetXaxis()->SetRange(1,25);
   data_mc_ratio__464->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__464->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__464->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__464->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__464->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__464->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__464->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__464->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__464->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__464->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__464->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__464->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__464->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__464->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__464->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__464->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__464->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1464[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1464[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1464[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1464[25] = {
   0.0312764,
   0.03283837,
   0.03469962,
   0.03827728,
   0.04240729,
   0.04348393,
   0.04560494,
   0.05200553,
   0.05663797,
   0.06028997,
   0.07201412,
   0.07509909,
   0.07375554,
   0.08198904,
   0.09705854,
   0.09767237,
   0.1398137,
   0.1314235,
   0.130275,
   0.1511074,
   0.1826743,
   0.2280489,
   0.279985,
   0.2003601,
   0.5305117};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1464,Graph_from_mc_statistical_error_fy1464,Graph_from_mc_statistical_error_fex1464,Graph_from_mc_statistical_error_fey1464);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1464 = new TH1F("Graph_Graph_from_mc_statistical_error1464","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1464->SetMinimum(0.363386);
   Graph_Graph_from_mc_statistical_error1464->SetMaximum(1.636614);
   Graph_Graph_from_mc_statistical_error1464->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1464->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1464->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1464->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1464->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1464->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1464->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1464->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1464->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1464->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1464->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1464->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1464->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1464->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1464->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1464->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1464);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   A_Z2b_Z_2bjet_Zee_All_amcnlo->cd();
   A_Z2b_Z_2bjet_Zee_All_amcnlo->Modified();
   A_Z2b_Z_2bjet_Zee_All_amcnlo->cd();
   A_Z2b_Z_2bjet_Zee_All_amcnlo->SetSelected(A_Z2b_Z_2bjet_Zee_All_amcnlo);
}

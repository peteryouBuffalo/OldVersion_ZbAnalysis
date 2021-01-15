void A_Z2b_Z_2bjet_Zmm_16_amcnlo()
{
//=========Macro generated from canvas: A_Z2b_Z_2bjet_Zmm_16_amcnlo/A_Z2b_Z_2bjet_Zmm_16_amcnlo
//=========  (Thu Jan 14 10:43:06 2021) by ROOT version 6.14/09
   TCanvas *A_Z2b_Z_2bjet_Zmm_16_amcnlo = new TCanvas("A_Z2b_Z_2bjet_Zmm_16_amcnlo", "A_Z2b_Z_2bjet_Zmm_16_amcnlo",0,0,600,600);
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->SetHighLightColor(2);
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->Range(0,0,1,1);
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->SetFillColor(0);
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->SetFillStyle(4000);
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->SetBorderMode(0);
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->SetBorderSize(2);
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->SetFrameFillStyle(1000);
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-2.035754,1.052419,2043.718);
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
   st->SetMaximum(1751.565);
   
   TH1F *st_stack_317 = new TH1F("st_stack_317","",25,0,1);
   st_stack_317->SetMinimum(0.01);
   st_stack_317->SetMaximum(1839.143);
   st_stack_317->SetDirectory(0);
   st_stack_317->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_317->SetLineColor(ci);
   st_stack_317->GetXaxis()->SetRange(1,25);
   st_stack_317->GetXaxis()->SetLabelFont(42);
   st_stack_317->GetXaxis()->SetLabelSize(0.035);
   st_stack_317->GetXaxis()->SetTitleSize(0.035);
   st_stack_317->GetXaxis()->SetTitleFont(42);
   st_stack_317->GetYaxis()->SetTitle("Events/0.04");
   st_stack_317->GetYaxis()->SetLabelFont(42);
   st_stack_317->GetYaxis()->SetLabelSize(0.05);
   st_stack_317->GetYaxis()->SetTitleSize(0.057);
   st_stack_317->GetYaxis()->SetTitleOffset(1.2);
   st_stack_317->GetYaxis()->SetTitleFont(42);
   st_stack_317->GetZaxis()->SetLabelFont(42);
   st_stack_317->GetZaxis()->SetLabelSize(0.035);
   st_stack_317->GetZaxis()->SetTitleSize(0.035);
   st_stack_317->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_317);
   
   
   TH1D *Zmm_2bjet_A_Z2b_stack_1 = new TH1D("Zmm_2bjet_A_Z2b_stack_1","",25,0,1);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(1,4.37122);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(2,6.614858);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(3,4.073415);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(4,3.272216);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(5,5.130527);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(6,2.966101);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(7,2.301117);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(8,2.356209);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(9,2.480063);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(10,0.6901896);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(11,1.499329);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(12,0.5863727);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(13,0.7848162);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(14,0.4915221);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(15,0.7436481);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(16,0.5683467);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(17,0.3108672);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(18,0.2094155);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(19,0.1937254);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(20,0.1886738);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(21,0.02009805);
   Zmm_2bjet_A_Z2b_stack_1->SetBinContent(22,0.1828141);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(1,0.9156249);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(2,1.134563);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(3,0.8715103);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(4,0.7809938);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(5,0.99639);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(6,0.7493411);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(7,0.6553796);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(8,0.6691947);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(9,0.6885145);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(10,0.3460146);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(11,0.5329543);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(12,0.3389884);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(13,0.3931068);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(14,0.2792024);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(15,0.3683789);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(16,0.3283963);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(17,0.2288474);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(18,0.2094155);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(19,0.1937254);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(20,0.1886738);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(21,0.02009805);
   Zmm_2bjet_A_Z2b_stack_1->SetBinError(22,0.1828141);
   Zmm_2bjet_A_Z2b_stack_1->SetEntries(230);

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
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(1,18.84326);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(2,13.65538);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(3,13.07633);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(4,12.25801);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(5,10.19667);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(6,5.351722);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(7,4.581338);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(8,6.31543);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(9,3.533932);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(10,3.27167);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(11,1.800526);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(12,0.5172491);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(13,0.8946177);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(14,0.8878162);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(15,1.68959);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(17,0.818806);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(18,0.6421708);
   Zmm_2bjet_A_Z2b_stack_2->SetBinContent(22,0.2817771);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(1,2.347736);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(2,2.005867);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(3,1.954874);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(4,1.875108);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(5,1.746233);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(6,1.240848);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(7,1.163745);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(8,1.349733);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(9,1.00426);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(10,1.002597);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(11,0.7358667);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(12,0.366838);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(13,0.5173882);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(14,0.5140443);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(15,0.7741139);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(17,0.4729201);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(18,0.4540842);
   Zmm_2bjet_A_Z2b_stack_2->SetBinError(22,0.2817771);
   Zmm_2bjet_A_Z2b_stack_2->SetEntries(357);

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
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(1,229.2609);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(2,218.6207);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(3,205.3417);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(4,171.8115);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(5,154.0984);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(6,123.3146);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(7,111.0202);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(8,102.3959);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(9,83.081);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(10,75.30983);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(11,54.83194);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(12,47.38185);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(13,38.951);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(14,33.07173);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(15,27.53061);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(16,21.13535);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(17,16.91763);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(18,16.91008);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(19,13.07978);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(20,7.707431);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(21,9.681598);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(22,4.167401);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(23,4.289526);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(24,2.547917);
   Zmm_2bjet_A_Z2b_stack_3->SetBinContent(25,0.4090389);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(1,6.626963);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(2,6.467031);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(3,6.265811);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(4,5.718972);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(5,5.434521);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(6,4.854501);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(7,4.594324);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(8,4.434969);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(9,3.999166);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(10,3.802426);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(11,3.255785);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(12,3.005089);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(13,2.740885);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(14,2.527327);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(15,2.305973);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(16,2.001173);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(17,1.826941);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(18,1.817399);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(19,1.5678);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(20,1.21168);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(21,1.365406);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(22,0.9008279);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(23,0.9160822);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(24,0.6931291);
   Zmm_2bjet_A_Z2b_stack_3->SetBinError(25,0.2895937);
   Zmm_2bjet_A_Z2b_stack_3->SetEntries(9796);

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
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(1,11.83777);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(2,31.24454);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(3,3.005105);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(4,8.216554);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(5,7.951252);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(6,9.163251);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(7,2.827484);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(8,5.072621);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(9,3.775236);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(10,-0.01747089);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(11,1.847351);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(12,-1.120239);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(13,1.050151);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(15,3.713411);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(16,0.742318);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(17,-0.09437002);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(19,0.5251556);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinContent(21,0.4607156);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(1,6.461271);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(2,8.504436);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(3,4.325409);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(4,3.625927);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(5,4.312128);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(6,5.124381);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(7,2.93443);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(8,3.002979);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(9,1.918539);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(10,1.249355);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(11,1.399781);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(12,0.7961958);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(13,0.7429023);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(15,2.78456);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(16,1.049232);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(17,0.7435582);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(19,0.5251556);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetBinError(21,0.4607156);
   Zmm_2bjet_XX_A_Z2b_stack_4->SetEntries(188);

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
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(1,7.953491);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(2,12.64908);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(3,10.44136);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(4,17.05241);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(5,0.5322907);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(6,11.90175);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(7,1.727778);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(8,9.52462);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(9,0.2595693);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(10,3.442963);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(11,2.876522);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(12,1.975688);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(13,1.14337);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(14,2.599385);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(15,2.388677);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(16,1.869003);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(17,-0.008421627);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(18,1.839505);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(19,-1.554085);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(20,0.5069057);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(21,-1.104827);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(22,0.4552656);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(23,0.371502);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinContent(24,1.044774);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(1,4.993772);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(2,4.554199);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(3,3.82402);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(4,4.365417);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(5,3.232302);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(6,3.402905);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(7,3.038171);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(8,3.124276);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(9,2.767588);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(10,2.257711);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(11,1.935991);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(12,1.719408);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(13,1.47023);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(14,1.672975);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(15,2.132908);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(16,1.774498);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(17,1.025578);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(18,1.087414);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(19,1.18993);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(20,0.5069057);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(21,1.06208);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(22,0.4552656);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(23,0.371502);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetBinError(24,0.7522957);
   Zmm_2bjet_bX_A_Z2b_stack_5->SetEntries(637);

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
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(1,691.0938);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(2,637.1534);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(3,477.6226);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(4,415.3173);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(5,363.1612);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(6,312.3917);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(7,245.3946);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(8,162.6128);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(9,157.5394);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(10,137.7676);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(11,124.6478);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(12,109.2645);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(13,77.48371);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(14,76.43939);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(15,51.73133);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(16,47.69237);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(17,28.74469);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(18,44.68875);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(19,22.84631);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(20,16.76878);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(21,30.56863);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(22,14.49271);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(23,13.58417);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(24,1.26051);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinContent(25,2.417439);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(1,32.07516);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(2,30.84959);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(3,28.87522);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(4,25.86691);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(5,23.73148);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(6,21.34632);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(7,19.36667);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(8,17.37072);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(9,15.70475);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(10,14.45233);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(11,13.05417);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(12,11.83621);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(13,10.81952);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(14,10.49349);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(15,8.731136);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(16,8.523285);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(17,7.352475);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(18,7.365071);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(19,6.083214);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(20,5.604947);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(21,4.996066);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(22,4.407511);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(23,3.596399);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(24,2.765309);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetBinError(25,1.653528);
   Zmm_2bjet_bb_A_Z2b_stack_6->SetEntries(27989);

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
   
   TH1D *Zmm_2bjet_A_Z2b__633 = new TH1D("Zmm_2bjet_A_Z2b__633","",25,0,1);
   Zmm_2bjet_A_Z2b__633->SetBinContent(1,851);
   Zmm_2bjet_A_Z2b__633->SetBinContent(2,789);
   Zmm_2bjet_A_Z2b__633->SetBinContent(3,705);
   Zmm_2bjet_A_Z2b__633->SetBinContent(4,563);
   Zmm_2bjet_A_Z2b__633->SetBinContent(5,434);
   Zmm_2bjet_A_Z2b__633->SetBinContent(6,368);
   Zmm_2bjet_A_Z2b__633->SetBinContent(7,334);
   Zmm_2bjet_A_Z2b__633->SetBinContent(8,255);
   Zmm_2bjet_A_Z2b__633->SetBinContent(9,227);
   Zmm_2bjet_A_Z2b__633->SetBinContent(10,169);
   Zmm_2bjet_A_Z2b__633->SetBinContent(11,168);
   Zmm_2bjet_A_Z2b__633->SetBinContent(12,125);
   Zmm_2bjet_A_Z2b__633->SetBinContent(13,99);
   Zmm_2bjet_A_Z2b__633->SetBinContent(14,70);
   Zmm_2bjet_A_Z2b__633->SetBinContent(15,73);
   Zmm_2bjet_A_Z2b__633->SetBinContent(16,74);
   Zmm_2bjet_A_Z2b__633->SetBinContent(17,45);
   Zmm_2bjet_A_Z2b__633->SetBinContent(18,36);
   Zmm_2bjet_A_Z2b__633->SetBinContent(19,33);
   Zmm_2bjet_A_Z2b__633->SetBinContent(20,29);
   Zmm_2bjet_A_Z2b__633->SetBinContent(21,24);
   Zmm_2bjet_A_Z2b__633->SetBinContent(22,16);
   Zmm_2bjet_A_Z2b__633->SetBinContent(23,9);
   Zmm_2bjet_A_Z2b__633->SetBinContent(24,7);
   Zmm_2bjet_A_Z2b__633->SetBinError(1,29.1719);
   Zmm_2bjet_A_Z2b__633->SetBinError(2,28.08914);
   Zmm_2bjet_A_Z2b__633->SetBinError(3,26.55184);
   Zmm_2bjet_A_Z2b__633->SetBinError(4,23.72762);
   Zmm_2bjet_A_Z2b__633->SetBinError(5,20.83267);
   Zmm_2bjet_A_Z2b__633->SetBinError(6,19.18333);
   Zmm_2bjet_A_Z2b__633->SetBinError(7,18.27567);
   Zmm_2bjet_A_Z2b__633->SetBinError(8,15.96872);
   Zmm_2bjet_A_Z2b__633->SetBinError(9,15.06652);
   Zmm_2bjet_A_Z2b__633->SetBinError(10,13);
   Zmm_2bjet_A_Z2b__633->SetBinError(11,12.96148);
   Zmm_2bjet_A_Z2b__633->SetBinError(12,11.18034);
   Zmm_2bjet_A_Z2b__633->SetBinError(13,9.949874);
   Zmm_2bjet_A_Z2b__633->SetBinError(14,8.3666);
   Zmm_2bjet_A_Z2b__633->SetBinError(15,8.544004);
   Zmm_2bjet_A_Z2b__633->SetBinError(16,8.602325);
   Zmm_2bjet_A_Z2b__633->SetBinError(17,6.708204);
   Zmm_2bjet_A_Z2b__633->SetBinError(18,6);
   Zmm_2bjet_A_Z2b__633->SetBinError(19,5.744563);
   Zmm_2bjet_A_Z2b__633->SetBinError(20,5.385165);
   Zmm_2bjet_A_Z2b__633->SetBinError(21,4.898979);
   Zmm_2bjet_A_Z2b__633->SetBinError(22,4);
   Zmm_2bjet_A_Z2b__633->SetBinError(23,3);
   Zmm_2bjet_A_Z2b__633->SetBinError(24,2.645751);
   Zmm_2bjet_A_Z2b__633->SetEntries(5503);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_A_Z2b__633->SetLineColor(ci);
   Zmm_2bjet_A_Z2b__633->SetLineWidth(2);
   Zmm_2bjet_A_Z2b__633->SetMarkerStyle(20);
   Zmm_2bjet_A_Z2b__633->SetMarkerSize(1.2);
   Zmm_2bjet_A_Z2b__633->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_A_Z2b__633->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b__633->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b__633->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b__633->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b__633->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b__633->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b__633->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b__633->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_A_Z2b__633->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b__633->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_A_Z2b__633->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_A_Z2b__633->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_A_Z2b__633->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_A_Z2b__633->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_A_Z2b_fx1633[25] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_A_Z2b_fy1633[25] = {
   963.3605,
   919.9379,
   713.5605,
   627.928,
   541.0704,
   465.0892,
   367.8525,
   288.2776,
   250.6692,
   220.4648,
   187.5034,
   158.6054,
   120.3077,
   113.4899,
   87.79727,
   72.00738,
   46.6892,
   64.28992,
   35.09089,
   25.17179,
   39.62621,
   19.57997,
   18.2452,
   4.853201,
   2.826478};
   Double_t Graph_from_Zmm_2bjet_bb_A_Z2b_fex1633[25] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_A_Z2b_fey1633[25] = {
   33.84921,
   33.04386,
   30.18198,
   27.16861,
   25.01603,
   22.78534,
   20.3912,
   18.50566,
   16.59685,
   15.20234,
   13.69469,
   12.36795,
   11.30089,
   10.93809,
   9.72565,
   9.000481,
   7.699177,
   7.679826,
   6.418157,
   5.759875,
   5.307135,
   4.534063,
   3.729786,
   2.948442,
   1.678696};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_bb_A_Z2b_fx1633,Graph_from_Zmm_2bjet_bb_A_Z2b_fy1633,Graph_from_Zmm_2bjet_bb_A_Z2b_fex1633,Graph_from_Zmm_2bjet_bb_A_Z2b_fey1633);
   gre->SetName("Graph_from_Zmm_2bjet_bb_A_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633","",100,0,1.1);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633->SetMinimum(1.033004);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633->SetMaximum(1096.816);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_A_Z2b1633);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__634 = new TH1D("data_mc_ratio__634","",25,0,1);
   data_mc_ratio__634->SetBinContent(1,0.8833661);
   data_mc_ratio__634->SetBinContent(2,0.8576665);
   data_mc_ratio__634->SetBinContent(3,0.9880031);
   data_mc_ratio__634->SetBinContent(4,0.8965996);
   data_mc_ratio__634->SetBinContent(5,0.8021138);
   data_mc_ratio__634->SetBinContent(6,0.7912461);
   data_mc_ratio__634->SetBinContent(7,0.9079727);
   data_mc_ratio__634->SetBinContent(8,0.884564);
   data_mc_ratio__634->SetBinContent(9,0.905576);
   data_mc_ratio__634->SetBinContent(10,0.7665622);
   data_mc_ratio__634->SetBinContent(11,0.8959836);
   data_mc_ratio__634->SetBinContent(12,0.7881194);
   data_mc_ratio__634->SetBinContent(13,0.8228902);
   data_mc_ratio__634->SetBinContent(14,0.6167952);
   data_mc_ratio__634->SetBinContent(15,0.8314609);
   data_mc_ratio__634->SetBinContent(16,1.027672);
   data_mc_ratio__634->SetBinContent(17,0.9638203);
   data_mc_ratio__634->SetBinContent(18,0.5599633);
   data_mc_ratio__634->SetBinContent(19,0.940415);
   data_mc_ratio__634->SetBinContent(20,1.152083);
   data_mc_ratio__634->SetBinContent(21,0.6056597);
   data_mc_ratio__634->SetBinContent(22,0.8171617);
   data_mc_ratio__634->SetBinContent(23,0.4932806);
   data_mc_ratio__634->SetBinContent(24,1.442347);
   data_mc_ratio__634->SetBinError(1,0.0302814);
   data_mc_ratio__634->SetBinError(2,0.03053374);
   data_mc_ratio__634->SetBinError(3,0.03721035);
   data_mc_ratio__634->SetBinError(4,0.03778717);
   data_mc_ratio__634->SetBinError(5,0.03850269);
   data_mc_ratio__634->SetBinError(6,0.04124655);
   data_mc_ratio__634->SetBinError(7,0.04968206);
   data_mc_ratio__634->SetBinError(8,0.05539354);
   data_mc_ratio__634->SetBinError(9,0.06010519);
   data_mc_ratio__634->SetBinError(10,0.05896632);
   data_mc_ratio__634->SetBinError(11,0.06912664);
   data_mc_ratio__634->SetBinError(12,0.07049155);
   data_mc_ratio__634->SetBinError(13,0.08270358);
   data_mc_ratio__634->SetBinError(14,0.07372113);
   data_mc_ratio__634->SetBinError(15,0.09731514);
   data_mc_ratio__634->SetBinError(16,0.1194645);
   data_mc_ratio__634->SetBinError(17,0.1436778);
   data_mc_ratio__634->SetBinError(18,0.09332722);
   data_mc_ratio__634->SetBinError(19,0.1637052);
   data_mc_ratio__634->SetBinError(20,0.2139365);
   data_mc_ratio__634->SetBinError(21,0.1236298);
   data_mc_ratio__634->SetBinError(22,0.2042904);
   data_mc_ratio__634->SetBinError(23,0.1644269);
   data_mc_ratio__634->SetBinError(24,0.5451559);
   data_mc_ratio__634->SetMinimum(0.4);
   data_mc_ratio__634->SetMaximum(1.6);
   data_mc_ratio__634->SetEntries(272.881);
   data_mc_ratio__634->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__634->SetLineColor(ci);
   data_mc_ratio__634->SetLineWidth(2);
   data_mc_ratio__634->SetMarkerStyle(20);
   data_mc_ratio__634->SetMarkerSize(1.2);
   data_mc_ratio__634->GetXaxis()->SetTitle("A_{Zbb}");
   data_mc_ratio__634->GetXaxis()->SetRange(1,25);
   data_mc_ratio__634->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__634->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__634->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__634->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__634->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__634->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__634->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__634->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__634->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__634->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__634->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__634->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__634->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__634->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__634->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__634->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__634->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1634[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1634[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1634[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1634[25] = {
   0.03513659,
   0.03591966,
   0.04229771,
   0.04326708,
   0.04623434,
   0.04899133,
   0.05543309,
   0.06419389,
   0.06621018,
   0.06895587,
   0.07303702,
   0.07797937,
   0.09393328,
   0.09637944,
   0.1107739,
   0.1249939,
   0.1649027,
   0.1194561,
   0.1829009,
   0.2288226,
   0.1339299,
   0.2315664,
   0.2044257,
   0.6075251,
   0.5939179};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1634,Graph_from_mc_statistical_error_fy1634,Graph_from_mc_statistical_error_fex1634,Graph_from_mc_statistical_error_fey1634);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1634 = new TH1F("Graph_Graph_from_mc_statistical_error1634","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1634->SetMinimum(0.2709699);
   Graph_Graph_from_mc_statistical_error1634->SetMaximum(1.72903);
   Graph_Graph_from_mc_statistical_error1634->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1634->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1634->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1634->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1634->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1634->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1634->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1634->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1634->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1634->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1634->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1634->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1634->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1634->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1634->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1634->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1634);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->cd();
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->Modified();
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->cd();
   A_Z2b_Z_2bjet_Zmm_16_amcnlo->SetSelected(A_Z2b_Z_2bjet_Zmm_16_amcnlo);
}

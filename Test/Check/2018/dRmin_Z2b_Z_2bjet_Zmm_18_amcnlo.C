void dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo()
{
//=========Macro generated from canvas: dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo/dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo
//=========  (Thu Jan 14 10:43:07 2021) by ROOT version 6.14/09
   TCanvas *dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo = new TCanvas("dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo", "dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo",0,0,600,600);
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->SetHighLightColor(2);
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->Range(0,0,1,1);
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->SetFillColor(0);
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->SetFillStyle(4000);
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->SetBorderMode(0);
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->SetBorderSize(2);
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->SetFrameFillStyle(1000);
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-5.221513,6.314516,5226.291);
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
   st->SetMaximum(4479.181);
   
   TH1F *st_stack_331 = new TH1F("st_stack_331","",25,0,10);
   st_stack_331->SetMinimum(0.01);
   st_stack_331->SetMaximum(4703.14);
   st_stack_331->SetDirectory(0);
   st_stack_331->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_331->SetLineColor(ci);
   st_stack_331->GetXaxis()->SetRange(1,15);
   st_stack_331->GetXaxis()->SetLabelFont(42);
   st_stack_331->GetXaxis()->SetLabelSize(0.035);
   st_stack_331->GetXaxis()->SetTitleSize(0.035);
   st_stack_331->GetXaxis()->SetTitleFont(42);
   st_stack_331->GetYaxis()->SetTitle("Events/0.4");
   st_stack_331->GetYaxis()->SetLabelFont(42);
   st_stack_331->GetYaxis()->SetLabelSize(0.05);
   st_stack_331->GetYaxis()->SetTitleSize(0.057);
   st_stack_331->GetYaxis()->SetTitleOffset(1.2);
   st_stack_331->GetYaxis()->SetTitleFont(42);
   st_stack_331->GetZaxis()->SetLabelFont(42);
   st_stack_331->GetZaxis()->SetLabelSize(0.035);
   st_stack_331->GetZaxis()->SetTitleSize(0.035);
   st_stack_331->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_331);
   
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_1 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_1","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(1,0.5472185);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(2,5.618763);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(3,6.942353);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(4,12.36228);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(5,20.24379);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(6,19.96256);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(7,19.52145);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(8,12.33736);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(9,1.744818);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(10,0.7227486);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinContent(11,0.0572922);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(1,0.3869452);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(2,1.266641);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(3,1.396381);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(4,1.839945);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(5,2.611245);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(6,2.391712);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(7,2.431656);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(8,1.927843);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(9,0.6411555);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(10,0.5161849);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetBinError(11,0.0572922);
   Zmm_2bjet_dRmin_Z2b_stack_1->SetEntries(396);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_dRmin_Z2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_1->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_1,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_2 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_2","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(1,3.122429);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(2,5.839959);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(3,17.23739);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(4,16.89947);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(5,32.12027);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(6,48.066);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(7,44.82079);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(8,34.88163);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(9,9.097812);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(10,5.750061);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(11,1.880632);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinContent(12,0.1214277);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(1,1.274978);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(2,1.71884);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(3,3.039318);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(4,4.084208);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(5,4.153946);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(6,4.927664);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(7,4.925409);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(8,4.215195);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(9,2.129015);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(10,1.777765);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(11,0.9915004);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetBinError(12,0.1214277);
   Zmm_2bjet_dRmin_Z2b_stack_2->SetEntries(454);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dRmin_Z2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_2->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_2,"");
   
   TH1D *Zmm_2bjet_dRmin_Z2b_stack_3 = new TH1D("Zmm_2bjet_dRmin_Z2b_stack_3","",25,0,10);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(1,65.82223);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(2,210.5551);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(3,399.6329);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(4,654.4397);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(5,869.171);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(6,816.7574);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(7,565.7748);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(8,255.5371);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(9,36.6469);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(10,11.93059);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(11,3.777909);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(12,1.375153);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(13,0.7081751);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinContent(14,0.04378188);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(1,2.414565);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(2,4.334798);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(3,5.994285);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(4,7.676438);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(5,8.895999);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(6,8.665092);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(7,7.192444);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(8,4.797324);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(9,1.868022);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(10,1.036886);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(11,0.5776545);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(12,0.348418);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(13,0.2528016);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetBinError(14,0.04378188);
   Zmm_2bjet_dRmin_Z2b_stack_3->SetEntries(48154);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dRmin_Z2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b_stack_3->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dRmin_Z2b_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_dRmin_Z2b_stack_4 = new TH1D("Zmm_2bjet_XX_dRmin_Z2b_stack_4","",25,0,10);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(1,0.8695329);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(2,0.4846838);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(3,15.18382);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(4,6.593631);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(5,44.88496);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(6,-6.64352);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(7,24.25805);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(8,9.680736);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(9,22.76275);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(10,14.41188);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(11,10.5496);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(12,3.721541);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(13,26.41386);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(14,10.13567);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(15,45.78118);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinContent(16,3.956893);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(1,1.087485);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(2,1.88124);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(3,8.947904);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(4,5.045985);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(5,19.08549);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(6,5.571851);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(7,14.32089);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(8,15.83781);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(9,15.48201);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(10,11.96901);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(11,10.57923);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(12,6.758064);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(13,18.70514);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(14,10.13567);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(15,22.95655);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetBinError(16,3.956893);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetEntries(117);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dRmin_Z2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_dRmin_Z2b_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_dRmin_Z2b_stack_5 = new TH1D("Zmm_2bjet_bX_dRmin_Z2b_stack_5","",25,0,10);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(1,4.278439);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(2,14.55531);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(3,-3.520522);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(4,24.96829);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(5,19.87666);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(6,38.32068);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(7,32.50538);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(8,14.45515);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(9,8.564353);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(10,-0.4158679);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(11,5.743727);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(12,2.336442);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinContent(13,1.797362);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(1,3.85338);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(2,5.875808);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(3,6.393831);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(4,8.488294);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(5,9.5906);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(6,11.48556);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(7,11.14091);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(8,10.39778);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(9,5.718582);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(10,5.068336);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(11,3.814055);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(12,1.652345);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetBinError(13,1.329011);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetEntries(396);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dRmin_Z2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_dRmin_Z2b_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_dRmin_Z2b_stack_6 = new TH1D("Zmm_2bjet_bb_dRmin_Z2b_stack_6","",25,0,10);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(1,129.6582);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(2,357.529);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(3,536.0288);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(4,853.2426);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(5,1301.724);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(6,1547.086);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(7,1586.427);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(8,1390.602);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(9,305.5092);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(10,88.35249);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(11,50.51998);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(12,11.14487);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(13,7.182731);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(14,3.241327);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(15,2.976777);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(16,-1.180674);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(17,1.160668);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinContent(18,-1.160831);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(1,18.78202);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(2,32.43677);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(3,63.89083);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(4,53.7464);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(5,65.61558);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(6,74.66921);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(7,75.32577);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(8,66.0705);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(9,33.17336);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(10,18.60159);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(11,13.95325);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(12,9.454189);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(13,4.80265);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(14,4.234843);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(15,2.932499);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(16,1.180674);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(17,1.160668);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetBinError(18,1.160831);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetEntries(21441);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dRmin_Z2b_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_dRmin_Z2b_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dRmin_Z2b__661 = new TH1D("Zmm_2bjet_dRmin_Z2b__661","",25,0,10);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(1,157);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(2,516);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(3,849);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(4,1359);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(5,1829);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(6,2100);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(7,1933);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(8,1401);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(9,360);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(10,110);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(11,68);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(12,40);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(13,17);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(14,8);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(15,4);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(16,3);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(18,2);
   Zmm_2bjet_dRmin_Z2b__661->SetBinContent(20,1);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(1,12.52996);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(2,22.71563);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(3,29.1376);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(4,36.86462);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(5,42.76681);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(6,45.82576);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(7,43.9659);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(8,37.42993);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(9,18.97367);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(10,10.48809);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(11,8.246211);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(12,6.324555);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(13,4.123106);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(14,2.828427);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(15,2);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(16,1.732051);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(18,1.414214);
   Zmm_2bjet_dRmin_Z2b__661->SetBinError(20,1);
   Zmm_2bjet_dRmin_Z2b__661->SetEntries(10757);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dRmin_Z2b__661->SetLineColor(ci);
   Zmm_2bjet_dRmin_Z2b__661->SetLineWidth(2);
   Zmm_2bjet_dRmin_Z2b__661->SetMarkerStyle(20);
   Zmm_2bjet_dRmin_Z2b__661->SetMarkerSize(1.2);
   Zmm_2bjet_dRmin_Z2b__661->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dRmin_Z2b__661->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b__661->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b__661->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b__661->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b__661->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b__661->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b__661->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b__661->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dRmin_Z2b__661->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b__661->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dRmin_Z2b__661->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dRmin_Z2b__661->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dRmin_Z2b__661->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dRmin_Z2b__661->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fx1661[25] = {
   0.2,
   0.6,
   1,
   1.4,
   1.8,
   2.2,
   2.6,
   3,
   3.4,
   3.8,
   4.2,
   4.6,
   5,
   5.4,
   5.8,
   6.2,
   6.6,
   7,
   7.4,
   7.8,
   8.2,
   8.6,
   9,
   9.4,
   9.8};
   Double_t Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fy1661[25] = {
   204.298,
   594.5828,
   971.5047,
   1568.506,
   2288.021,
   2463.549,
   2273.307,
   1717.494,
   384.3258,
   120.7519,
   72.52914,
   18.69944,
   36.10212,
   13.42078,
   48.75795,
   2.77622,
   1.160668,
   -1.160831,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fex1661[25] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2};
   Double_t Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fey1661[25] = {
   19.40106,
   33.37001,
   65.19282,
   55.36409,
   69.74849,
   76.44305,
   78.00695,
   69.0562,
   37.16584,
   22.79181,
   17.95774,
   11.74391,
   19.35918,
   10.98489,
   23.14309,
   4.129285,
   1.160668,
   1.160831,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fx1661,Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fy1661,Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fex1661,Graph_from_Zmm_2bjet_bb_dRmin_Z2b_fey1661);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dRmin_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661","",100,0,11);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661->SetMinimum(-256.5531);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661->SetMaximum(2794.224);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dRmin_Z2b1661);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_dRmin_Z2b_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_dRmin_Z2b_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_dRmin_Z2b_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dRmin_Z2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_dRmin_Z2b","MC unc. (stat.)","fl");

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
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__662 = new TH1D("data_mc_ratio__662","",25,0,10);
   data_mc_ratio__662->SetBinContent(1,0.7684851);
   data_mc_ratio__662->SetBinContent(2,0.8678354);
   data_mc_ratio__662->SetBinContent(3,0.8739021);
   data_mc_ratio__662->SetBinContent(4,0.8664296);
   data_mc_ratio__662->SetBinContent(5,0.7993808);
   data_mc_ratio__662->SetBinContent(6,0.8524286);
   data_mc_ratio__662->SetBinContent(7,0.8503029);
   data_mc_ratio__662->SetBinContent(8,0.8157234);
   data_mc_ratio__662->SetBinContent(9,0.9367053);
   data_mc_ratio__662->SetBinContent(10,0.9109588);
   data_mc_ratio__662->SetBinContent(11,0.9375542);
   data_mc_ratio__662->SetBinContent(12,2.139102);
   data_mc_ratio__662->SetBinContent(13,0.4708864);
   data_mc_ratio__662->SetBinContent(14,0.5960904);
   data_mc_ratio__662->SetBinContent(15,0.0820379);
   data_mc_ratio__662->SetBinContent(16,1.080606);
   data_mc_ratio__662->SetBinContent(18,-1.722904);
   data_mc_ratio__662->SetBinError(1,0.06133179);
   data_mc_ratio__662->SetBinError(2,0.03820432);
   data_mc_ratio__662->SetBinError(3,0.02999224);
   data_mc_ratio__662->SetBinError(4,0.02350301);
   data_mc_ratio__662->SetBinError(5,0.01869162);
   data_mc_ratio__662->SetBinError(6,0.01860152);
   data_mc_ratio__662->SetBinError(7,0.01934006);
   data_mc_ratio__662->SetBinError(8,0.02179334);
   data_mc_ratio__662->SetBinError(9,0.0493687);
   data_mc_ratio__662->SetBinError(10,0.08685651);
   data_mc_ratio__662->SetBinError(11,0.1136952);
   data_mc_ratio__662->SetBinError(12,0.3382217);
   data_mc_ratio__662->SetBinError(13,0.1142067);
   data_mc_ratio__662->SetBinError(14,0.2107498);
   data_mc_ratio__662->SetBinError(15,0.04101895);
   data_mc_ratio__662->SetBinError(16,0.6238882);
   data_mc_ratio__662->SetBinError(18,1.218277);
   data_mc_ratio__662->SetMinimum(0.4);
   data_mc_ratio__662->SetMaximum(1.6);
   data_mc_ratio__662->SetEntries(14.93449);
   data_mc_ratio__662->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__662->SetLineColor(ci);
   data_mc_ratio__662->SetLineWidth(2);
   data_mc_ratio__662->SetMarkerStyle(20);
   data_mc_ratio__662->SetMarkerSize(1.2);
   data_mc_ratio__662->GetXaxis()->SetTitle("min[#Delta R(Z,b)]");
   data_mc_ratio__662->GetXaxis()->SetRange(1,15);
   data_mc_ratio__662->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__662->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__662->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__662->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__662->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__662->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__662->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__662->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__662->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__662->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__662->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__662->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__662->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__662->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__662->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__662->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__662->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1662[25] = {
   0.2,
   0.6,
   1,
   1.4,
   1.8,
   2.2,
   2.6,
   3,
   3.4,
   3.8,
   4.2,
   4.6,
   5,
   5.4,
   5.8,
   6.2,
   6.6,
   7,
   7.4,
   7.8,
   8.2,
   8.6,
   9,
   9.4,
   9.8};
   Double_t Graph_from_mc_statistical_error_fy1662[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1662[25] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2};
   Double_t Graph_from_mc_statistical_error_fey1662[25] = {
   0.09496449,
   0.0561234,
   0.06710499,
   0.03529734,
   0.0304842,
   0.03102964,
   0.0343143,
   0.04020754,
   0.09670401,
   0.1887491,
   0.2475934,
   0.6280357,
   0.5362338,
   0.8184981,
   0.4746527,
   1.487377,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1662,Graph_from_mc_statistical_error_fy1662,Graph_from_mc_statistical_error_fex1662,Graph_from_mc_statistical_error_fey1662);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1662 = new TH1F("Graph_Graph_from_mc_statistical_error1662","",100,0,11);
   Graph_Graph_from_mc_statistical_error1662->SetMinimum(-0.7848522);
   Graph_Graph_from_mc_statistical_error1662->SetMaximum(2.784852);
   Graph_Graph_from_mc_statistical_error1662->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1662->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1662->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1662->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1662->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1662->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1662->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1662->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1662->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1662->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1662->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1662->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1662->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1662->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1662->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1662->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1662);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->Modified();
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->cd();
   dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo->SetSelected(dRmin_Z2b_Z_2bjet_Zmm_18_amcnlo);
}

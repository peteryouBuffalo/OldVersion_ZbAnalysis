void dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo/dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo
//=========  (Thu Jan 14 10:43:06 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo = new TCanvas("dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo", "dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo",0,0,600,600);
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->SetHighLightColor(2);
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->Range(0,0,1,1);
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->SetFillColor(0);
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->SetFillStyle(4000);
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->SetBorderMode(0);
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->SetBorderSize(2);
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-0.6502028,3.416482,659.5526);
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
   st->SetMaximum(565.2688);
   
   TH1F *st_stack_325 = new TH1F("st_stack_325","",30,0,3.141593);
   st_stack_325->SetMinimum(0.01);
   st_stack_325->SetMaximum(593.5323);
   st_stack_325->SetDirectory(0);
   st_stack_325->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_325->SetLineColor(ci);
   st_stack_325->GetXaxis()->SetRange(1,31);
   st_stack_325->GetXaxis()->SetLabelFont(42);
   st_stack_325->GetXaxis()->SetLabelSize(0.035);
   st_stack_325->GetXaxis()->SetTitleSize(0.035);
   st_stack_325->GetXaxis()->SetTitleFont(42);
   st_stack_325->GetYaxis()->SetTitle("Events/0.105");
   st_stack_325->GetYaxis()->SetLabelFont(42);
   st_stack_325->GetYaxis()->SetLabelSize(0.05);
   st_stack_325->GetYaxis()->SetTitleSize(0.057);
   st_stack_325->GetYaxis()->SetTitleOffset(1.2);
   st_stack_325->GetYaxis()->SetTitleFont(42);
   st_stack_325->GetZaxis()->SetLabelFont(42);
   st_stack_325->GetZaxis()->SetLabelSize(0.035);
   st_stack_325->GetZaxis()->SetTitleSize(0.035);
   st_stack_325->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_325);
   
   
   TH1D *Zmm_2bjet_dPhi_Zb1_stack_1 = new TH1D("Zmm_2bjet_dPhi_Zb1_stack_1","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(1,1.138025);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(2,0.8172587);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(3,0.4095297);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(4,0.873132);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(5,0.1881099);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(6,1.468705);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(7,1.025832);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(8,0.9642386);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(9,0.9501475);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(10,1.168201);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(11,1.012632);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(12,0.5655189);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(13,1.229147);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(14,0.6072471);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(15,1.640927);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(16,1.969657);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(17,1.191986);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(18,2.282607);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(19,0.7395158);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(20,0.9177672);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(21,1.538752);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(22,0.59507);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(23,2.669451);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(24,2.130572);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(25,1.654888);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(26,2.06771);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(27,1.716344);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(28,2.537274);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(29,3.187986);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(30,0.7773125);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(1,0.4673456);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(2,0.3994634);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(3,0.2896401);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(4,0.3765722);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(5,0.1823757);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(6,0.5264147);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(7,0.4375008);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(8,0.431679);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(9,0.4078458);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(10,0.4775009);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(11,0.4528851);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(12,0.3265928);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(13,0.4781504);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(14,0.3510879);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(15,0.5532886);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(16,0.5919115);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(17,0.4870788);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(18,0.6644221);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(19,0.3711314);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(20,0.4190679);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(21,0.5352887);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(22,0.3355759);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(23,0.7113858);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(24,0.6447602);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(25,0.5692633);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(26,0.6191154);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(27,0.5741959);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(28,0.7041821);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(29,0.7748977);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(30,0.3820794);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetEntries(230);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_dPhi_Zb1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_stack_1->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_stack_1,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_stack_2 = new TH1D("Zmm_2bjet_dPhi_Zb1_stack_2","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(1,2.056754);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(2,1.451194);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(3,2.335348);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(4,2.355632);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(5,1.21938);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(6,1.696246);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(7,1.148522);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(8,2.38604);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(9,2.075778);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(10,1.801332);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(11,1.767654);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(12,2.853544);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(13,2.180135);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(14,4.843021);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(15,4.906945);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(16,1.747727);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(17,3.826858);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(18,2.754317);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(19,4.333125);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(20,3.684403);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(21,4.572797);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(22,5.505239);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(23,6.556089);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(24,4.814408);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(25,5.429794);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(26,5.279223);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(27,3.637929);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(28,5.688347);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(29,3.385724);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(30,2.322786);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(1,0.8222429);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(2,0.6500961);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(3,0.8281358);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(4,0.8352134);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(5,0.6114289);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(6,0.6983402);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(7,0.5748146);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(8,0.8466438);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(9,0.7866629);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(10,0.70728);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(11,0.7220461);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(12,0.9059288);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(13,0.7607863);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(14,1.217899);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(15,1.193364);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(16,0.702281);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(17,1.039568);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(18,0.8766657);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(19,1.166407);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(20,1.0275);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(21,1.174318);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(22,1.265539);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(23,1.365562);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(24,1.207631);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(25,1.259828);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(26,1.236133);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(27,1.039205);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(28,1.315837);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(29,0.9807106);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(30,0.8242026);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetEntries(357);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dPhi_Zb1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_stack_2->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_stack_2,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb1_stack_3 = new TH1D("Zmm_2bjet_dPhi_Zb1_stack_3","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(1,37.10366);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(2,30.59743);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(3,31.2033);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(4,35.75233);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(5,38.13619);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(6,37.99139);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(7,42.23927);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(8,41.0727);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(9,42.14082);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(10,52.73712);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(11,47.43673);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(12,56.92227);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(13,53.50126);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(14,56.69784);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(15,63.70434);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(16,69.38207);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(17,72.91926);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(18,79.91492);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(19,74.92092);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(20,75.24509);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(21,80.81817);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(22,76.64749);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(23,76.83888);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(24,68.62233);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(25,77.35004);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(26,78.77661);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(27,71.97995);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(28,73.37149);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(29,61.71695);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(30,67.12681);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(1,2.655636);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(2,2.431197);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(3,2.436743);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(4,2.64781);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(5,2.707052);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(6,2.707366);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(7,2.841302);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(8,2.814371);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(9,2.839529);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(10,3.209511);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(11,3.010949);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(12,3.306454);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(13,3.201714);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(14,3.29121);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(15,3.504539);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(16,3.649297);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(17,3.750119);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(18,3.919388);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(19,3.802719);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(20,3.797411);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(21,3.927985);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(22,3.828836);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(23,3.848518);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(24,3.603077);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(25,3.841782);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(26,3.870478);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(27,3.710771);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(28,3.718165);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(29,3.425137);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(30,3.559707);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetEntries(9796);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dPhi_Zb1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1_stack_3->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb1_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_dPhi_Zb1_stack_4 = new TH1D("Zmm_2bjet_XX_dPhi_Zb1_stack_4","",30,0,3.141593);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(1,1.028231);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(2,1.091413);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(3,3.286117);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(4,0.540813);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(5,2.56071);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(6,3.069909);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(7,4.952626);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(8,3.426215);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(9,0.8867522);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(10,3.3504);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(11,3.719412);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(12,2.617375);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(13,0.2652273);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(14,2.044154);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(15,5.057362);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(16,2.727576);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(17,3.008187);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(18,3.867593);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(19,2.919782);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(20,0.7031027);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(21,3.339794);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(22,3.172349);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(23,1.965898);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(24,6.019579);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(25,3.12588);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(26,3.815563);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(27,5.810289);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(28,4.475005);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(29,3.163338);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(30,4.190175);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(1,1.157142);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(2,1.626479);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(3,2.481621);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(4,0.540813);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(5,2.749286);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(6,2.732038);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(7,2.868718);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(8,2.659505);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(9,1.776509);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(10,3.156223);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(11,3.068329);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(12,2.846743);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(13,3.717632);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(14,2.77743);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(15,2.909864);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(16,1.389266);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(17,2.699705);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(18,2.749299);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(19,1.997509);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(20,2.140041);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(21,2.751223);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(22,2.685123);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(23,1.565542);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(24,3.847086);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(25,2.909874);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(26,4.400921);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(27,3.163039);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(28,2.993757);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(29,2.961586);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(30,3.513556);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetEntries(188);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_dPhi_Zb1_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_dPhi_Zb1_stack_5 = new TH1D("Zmm_2bjet_bX_dPhi_Zb1_stack_5","",30,0,3.141593);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(1,5.139408);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(2,6.777688);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(3,2.96717);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(4,2.851618);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(5,-0.172372);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(6,1.45714);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(7,1.332951);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(8,1.844999);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(9,-0.03374903);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(10,5.336378);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(11,3.449037);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(12,1.938414);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(13,0.1436262);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(14,5.692702);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(15,3.623587);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(16,0.6588764);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(17,4.98143);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(18,2.342343);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(19,3.074811);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(20,2.416535);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(21,3.342145);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(22,5.636023);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(23,4.157614);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(24,4.635101);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(25,1.231086);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(26,4.740774);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(27,-2.762638);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(28,3.190459);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(29,3.476312);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(30,6.419097);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(1,2.157249);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(2,2.449169);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(3,2.133396);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(4,1.717902);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(5,1.902157);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(6,1.882992);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(7,2.22566);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(8,1.698043);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(9,1.676767);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(10,2.198102);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(11,2.40756);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(12,2.600645);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(13,1.715029);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(14,2.613469);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(15,2.527513);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(16,2.442126);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(17,2.146191);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(18,2.266464);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(19,2.484992);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(20,2.427158);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(21,2.418053);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(22,2.356796);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(23,2.566621);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(24,2.141686);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(25,2.496212);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(26,2.83478);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(27,2.355903);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(28,2.259068);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(29,2.677843);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(30,2.546545);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetEntries(637);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_dPhi_Zb1_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_dPhi_Zb1_stack_6 = new TH1D("Zmm_2bjet_bb_dPhi_Zb1_stack_6","",30,0,3.141593);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(1,62.51277);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(2,96.07286);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(3,91.77269);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(4,93.66898);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(5,94.24363);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(6,96.00022);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(7,94.21389);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(8,102.737);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(9,96.18565);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(10,126.402);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(11,128.1956);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(12,136.1163);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(13,129.4019);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(14,124.5044);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(15,98.59196);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(16,119.1443);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(17,136.8537);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(18,161.2879);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(19,169.2488);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(20,149.5563);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(21,173.3735);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(22,200.0797);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(23,200.2519);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(24,213.738);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(25,222.1062);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(26,206.4316);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(27,179.3426);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(28,173.7537);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(29,180.7835);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(30,206.1139);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(1,11.72363);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(2,11.84106);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(3,11.69134);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(4,11.7932);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(5,11.89035);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(6,11.88138);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(7,12.18522);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(8,12.28451);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(9,12.73253);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(10,13.23122);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(11,13.38005);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(12,13.34158);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(13,13.74869);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(14,14.42257);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(15,14.51226);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(16,14.87295);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(17,14.9578);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(18,15.8342);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(19,15.98048);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(20,16.25133);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(21,16.51455);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(22,17.21501);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(23,17.04993);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(24,16.65799);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(25,17.33096);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(26,17.29158);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(27,17.16257);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(28,16.83903);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(29,17.75417);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(30,16.82973);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetEntries(27989);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_dPhi_Zb1_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dPhi_Zb1__649 = new TH1D("Zmm_2bjet_dPhi_Zb1__649","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(1,115);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(2,113);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(3,99);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(4,127);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(5,125);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(6,120);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(7,121);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(8,126);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(9,118);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(10,141);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(11,131);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(12,144);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(13,173);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(14,151);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(15,226);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(16,187);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(17,194);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(18,198);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(19,218);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(20,253);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(21,253);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(22,218);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(23,262);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(24,243);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(25,248);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(26,245);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(27,245);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(28,228);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(29,249);
   Zmm_2bjet_dPhi_Zb1__649->SetBinContent(30,232);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(1,10.72381);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(2,10.63015);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(3,9.949874);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(4,11.26943);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(5,11.18034);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(6,10.95445);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(7,11);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(8,11.22497);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(9,10.86278);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(10,11.87434);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(11,11.44552);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(12,12);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(13,13.15295);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(14,12.28821);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(15,15.0333);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(16,13.67479);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(17,13.92839);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(18,14.07125);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(19,14.76482);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(20,15.90597);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(21,15.90597);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(22,14.76482);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(23,16.18641);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(24,15.58846);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(25,15.74802);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(26,15.65248);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(27,15.65248);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(28,15.09967);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(29,15.77973);
   Zmm_2bjet_dPhi_Zb1__649->SetBinError(30,15.23155);
   Zmm_2bjet_dPhi_Zb1__649->SetEntries(5503);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1__649->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1__649->SetLineWidth(2);
   Zmm_2bjet_dPhi_Zb1__649->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_Zb1__649->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_Zb1__649->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1__649->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1__649->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1__649->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1__649->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1__649->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1__649->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1__649->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1__649->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1__649->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1__649->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1__649->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1__649->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1__649->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1__649->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fx1649[30] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fy1649[30] = {
   108.9788,
   136.8078,
   131.9742,
   136.0425,
   136.1757,
   141.6836,
   144.9131,
   152.4312,
   142.2054,
   190.7955,
   185.5811,
   201.0134,
   186.7213,
   194.3893,
   177.5251,
   195.6302,
   222.7815,
   252.4497,
   255.237,
   232.5232,
   266.9852,
   291.6358,
   292.4399,
   299.96,
   310.8979,
   301.1115,
   259.7245,
   263.0163,
   255.7138,
   286.95};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fex1649[30] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fey1649[30] = {
   12.30378,
   12.46384,
   12.41389,
   12.25453,
   12.66066,
   12.65983,
   13.04828,
   13.02649,
   13.30161,
   14.17349,
   14.28387,
   14.30822,
   14.72572,
   15.3295,
   15.47493,
   15.59678,
   15.84334,
   16.73287,
   16.77796,
   17.03609,
   17.41382,
   18.04148,
   17.80226,
   17.65593,
   18.21349,
   18.52821,
   18.03575,
   17.71076,
   18.55927,
   17.7642};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fx1649,Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fy1649,Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fex1649,Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fey1649);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dPhi_Zb1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649->SetMinimum(73.43144);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649->SetMaximum(352.355);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11649);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_dPhi_Zb1_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_dPhi_Zb1_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_dPhi_Zb1_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_dPhi_Zb1","MC unc. (stat.)","fl");

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
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__650 = new TH1D("data_mc_ratio__650","",30,0,3.141593);
   data_mc_ratio__650->SetBinContent(1,1.055251);
   data_mc_ratio__650->SetBinContent(2,0.8259761);
   data_mc_ratio__650->SetBinContent(3,0.7501469);
   data_mc_ratio__650->SetBinContent(4,0.9335318);
   data_mc_ratio__650->SetBinContent(5,0.9179321);
   data_mc_ratio__650->SetBinContent(6,0.8469575);
   data_mc_ratio__650->SetBinContent(7,0.8349833);
   data_mc_ratio__650->SetBinContent(8,0.8266023);
   data_mc_ratio__650->SetBinContent(9,0.8297857);
   data_mc_ratio__650->SetBinContent(10,0.7390113);
   data_mc_ratio__650->SetBinContent(11,0.7058909);
   data_mc_ratio__650->SetBinContent(12,0.7163702);
   data_mc_ratio__650->SetBinContent(13,0.9265148);
   data_mc_ratio__650->SetBinContent(14,0.7767916);
   data_mc_ratio__650->SetBinContent(15,1.273059);
   data_mc_ratio__650->SetBinContent(16,0.955885);
   data_mc_ratio__650->SetBinContent(17,0.8708085);
   data_mc_ratio__650->SetBinContent(18,0.7843146);
   data_mc_ratio__650->SetBinContent(19,0.8541082);
   data_mc_ratio__650->SetBinContent(20,1.088064);
   data_mc_ratio__650->SetBinContent(21,0.9476182);
   data_mc_ratio__650->SetBinContent(22,0.7475076);
   data_mc_ratio__650->SetBinContent(23,0.8959106);
   data_mc_ratio__650->SetBinContent(24,0.8101079);
   data_mc_ratio__650->SetBinContent(25,0.7976896);
   data_mc_ratio__650->SetBinContent(26,0.813652);
   data_mc_ratio__650->SetBinContent(27,0.9433072);
   data_mc_ratio__650->SetBinContent(28,0.8668664);
   data_mc_ratio__650->SetBinContent(29,0.9737447);
   data_mc_ratio__650->SetBinContent(30,0.8085031);
   data_mc_ratio__650->SetBinError(1,0.09840263);
   data_mc_ratio__650->SetBinError(2,0.07770129);
   data_mc_ratio__650->SetBinError(3,0.0753926);
   data_mc_ratio__650->SetBinError(4,0.08283755);
   data_mc_ratio__650->SetBinError(5,0.08210234);
   data_mc_ratio__650->SetBinError(6,0.07731629);
   data_mc_ratio__650->SetBinError(7,0.07590757);
   data_mc_ratio__650->SetBinError(8,0.07363959);
   data_mc_ratio__650->SetBinError(9,0.07638796);
   data_mc_ratio__650->SetBinError(10,0.06223598);
   data_mc_ratio__650->SetBinError(11,0.06167398);
   data_mc_ratio__650->SetBinError(12,0.05969752);
   data_mc_ratio__650->SetBinError(13,0.07044161);
   data_mc_ratio__650->SetBinError(14,0.0632144);
   data_mc_ratio__650->SetBinError(15,0.08468264);
   data_mc_ratio__650->SetBinError(16,0.06990123);
   data_mc_ratio__650->SetBinError(17,0.06252041);
   data_mc_ratio__650->SetBinError(18,0.05573881);
   data_mc_ratio__650->SetBinError(19,0.05784751);
   data_mc_ratio__650->SetBinError(20,0.06840597);
   data_mc_ratio__650->SetBinError(21,0.05957624);
   data_mc_ratio__650->SetBinError(22,0.0506276);
   data_mc_ratio__650->SetBinError(23,0.05534954);
   data_mc_ratio__650->SetBinError(24,0.05196845);
   data_mc_ratio__650->SetBinError(25,0.05065334);
   data_mc_ratio__650->SetBinError(26,0.05198232);
   data_mc_ratio__650->SetBinError(27,0.06026569);
   data_mc_ratio__650->SetBinError(28,0.05740963);
   data_mc_ratio__650->SetBinError(29,0.06170856);
   data_mc_ratio__650->SetBinError(30,0.05308083);
   data_mc_ratio__650->SetMinimum(0.4);
   data_mc_ratio__650->SetMaximum(1.6);
   data_mc_ratio__650->SetEntries(2431.653);
   data_mc_ratio__650->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__650->SetLineColor(ci);
   data_mc_ratio__650->SetLineWidth(2);
   data_mc_ratio__650->SetMarkerStyle(20);
   data_mc_ratio__650->SetMarkerSize(1.2);
   data_mc_ratio__650->GetXaxis()->SetTitle("dPhi_{Zb1}");
   data_mc_ratio__650->GetXaxis()->SetRange(1,31);
   data_mc_ratio__650->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__650->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__650->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__650->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__650->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__650->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__650->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__650->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__650->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__650->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__650->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__650->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__650->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__650->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__650->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__650->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__650->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1650[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1650[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1650[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1650[30] = {
   0.1129006,
   0.09110475,
   0.09406303,
   0.09007872,
   0.09297302,
   0.08935285,
   0.09004209,
   0.08545812,
   0.09353802,
   0.07428632,
   0.07696838,
   0.07118042,
   0.07886475,
   0.07885976,
   0.08717036,
   0.07972582,
   0.07111607,
   0.066282,
   0.06573483,
   0.07326619,
   0.06522393,
   0.06186305,
   0.06087494,
   0.05886093,
   0.05858352,
   0.06153273,
   0.06944186,
   0.0673371,
   0.07257826,
   0.06190694};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1650,Graph_from_mc_statistical_error_fy1650,Graph_from_mc_statistical_error_fex1650,Graph_from_mc_statistical_error_fey1650);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1650 = new TH1F("Graph_Graph_from_mc_statistical_error1650","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1650->SetMinimum(0.8645192);
   Graph_Graph_from_mc_statistical_error1650->SetMaximum(1.135481);
   Graph_Graph_from_mc_statistical_error1650->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1650->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1650->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1650->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1650->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1650->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1650->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1650->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1650->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1650->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1650->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1650->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1650->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1650->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1650->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1650->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1650);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->Modified();
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo->SetSelected(dPhi_Zb1_Z_2bjet_Zmm_16_amcnlo);
}

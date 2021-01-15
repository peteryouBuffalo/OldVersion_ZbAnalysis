void dPhi_Zb_Z_2bjet_Zmm_16_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb_Z_2bjet_Zmm_16_amcnlo/dPhi_Zb_Z_2bjet_Zmm_16_amcnlo
//=========  (Thu Jan 14 10:43:06 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb_Z_2bjet_Zmm_16_amcnlo = new TCanvas("dPhi_Zb_Z_2bjet_Zmm_16_amcnlo", "dPhi_Zb_Z_2bjet_Zmm_16_amcnlo",0,0,600,600);
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->SetHighLightColor(2);
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->Range(0,0,1,1);
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->SetFillColor(0);
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->SetFillStyle(4000);
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->SetBorderMode(0);
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->SetBorderSize(2);
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-1.112704,3.416482,1121.591);
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
   st->SetMaximum(961.258);
   
   TH1F *st_stack_321 = new TH1F("st_stack_321","",30,0,3.141593);
   st_stack_321->SetMinimum(0.01);
   st_stack_321->SetMaximum(1009.321);
   st_stack_321->SetDirectory(0);
   st_stack_321->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_321->SetLineColor(ci);
   st_stack_321->GetXaxis()->SetRange(1,31);
   st_stack_321->GetXaxis()->SetLabelFont(42);
   st_stack_321->GetXaxis()->SetLabelSize(0.035);
   st_stack_321->GetXaxis()->SetTitleSize(0.035);
   st_stack_321->GetXaxis()->SetTitleFont(42);
   st_stack_321->GetYaxis()->SetTitle("Events/0.105");
   st_stack_321->GetYaxis()->SetLabelFont(42);
   st_stack_321->GetYaxis()->SetLabelSize(0.05);
   st_stack_321->GetYaxis()->SetTitleSize(0.057);
   st_stack_321->GetYaxis()->SetTitleOffset(1.2);
   st_stack_321->GetYaxis()->SetTitleFont(42);
   st_stack_321->GetZaxis()->SetLabelFont(42);
   st_stack_321->GetZaxis()->SetLabelSize(0.035);
   st_stack_321->GetZaxis()->SetTitleSize(0.035);
   st_stack_321->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_321);
   
   
   TH1D *Zmm_2bjet_dPhi_Zb_stack_1 = new TH1D("Zmm_2bjet_dPhi_Zb_stack_1","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(1,0.2066056);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(2,0.617624);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(3,0.3973906);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(4,0.7912179);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(5,0.1988674);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(6,0.1857018);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(7,0.6254139);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(8,0.5517385);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(9,0.1975163);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(10,0.3648812);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(11,0.8031865);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(13,0.5306804);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(14,1.127113);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(15,1.322803);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(16,0.8341051);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(17,1.576285);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(18,1.320455);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(19,1.571982);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(20,1.687805);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(21,0.6566447);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(22,1.533804);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(23,2.200673);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(24,1.567178);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(25,1.537089);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(26,3.396846);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(27,3.332977);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(28,3.381255);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(29,3.87893);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(30,3.638776);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(1,0.1875873);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(2,0.3286469);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(3,0.2814163);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(4,0.3966015);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(5,0.1988674);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(6,0.1857018);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(7,0.3447242);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(8,0.3190575);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(9,0.1975163);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(10,0.2580193);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(11,0.4021146);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(13,0.301587);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(14,0.4627426);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(15,0.5011823);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(16,0.3868463);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(17,0.5401993);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(18,0.5111514);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(19,0.5369086);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(20,0.5319213);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(21,0.334875);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(22,0.5277137);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(23,0.6596374);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(24,0.554511);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(25,0.5440271);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(26,0.8039597);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(27,0.8142251);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(28,0.8030424);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(29,0.8676727);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(30,0.8310132);
   Zmm_2bjet_dPhi_Zb_stack_1->SetEntries(230);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_dPhi_Zb_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_stack_1->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_stack_1,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb_stack_2 = new TH1D("Zmm_2bjet_dPhi_Zb_stack_2","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(1,0.949896);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(2,1.152409);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(3,0.9004778);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(4,0.8830599);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(5,0.8669463);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(6,1.575);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(7,0.8020506);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(8,0.5745522);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(9,0.9236425);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(10,0.8598941);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(11,0.8262179);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(12,1.1236);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(13,1.470193);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(14,1.527367);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(15,2.05816);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(16,2.768653);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(17,2.213375);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(18,1.42234);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(19,2.94797);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(20,3.606779);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(21,4.277796);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(22,2.910691);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(23,3.272255);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(24,6.42287);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(25,6.708097);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(26,11.38004);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(27,7.502412);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(28,8.62956);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(29,7.846309);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(30,10.21368);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(1,0.5519838);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(2,0.5789297);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(3,0.5205022);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(4,0.5109054);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(5,0.5007357);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(6,0.7046003);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(7,0.4636355);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(8,0.4063203);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(9,0.5356661);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(10,0.496461);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(11,0.4772243);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(12,0.5618336);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(13,0.6612489);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(14,0.6839561);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(15,0.774719);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(16,0.875817);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(17,0.7940994);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(18,0.6371994);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(19,0.8972893);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(20,1.01721);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(21,1.090414);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(22,0.9211683);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(23,0.9691274);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(24,1.37084);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(25,1.388274);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(26,1.834219);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(27,1.471696);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(28,1.636268);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(29,1.523777);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(30,1.769433);
   Zmm_2bjet_dPhi_Zb_stack_2->SetEntries(357);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dPhi_Zb_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_stack_2->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_stack_2,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb_stack_3 = new TH1D("Zmm_2bjet_dPhi_Zb_stack_3","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(1,21.2355);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(2,22.75249);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(3,22.21977);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(4,18.48351);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(5,25.55319);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(6,21.96991);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(7,24.69261);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(8,25.8785);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(9,26.84147);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(10,27.40545);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(11,33.81037);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(12,32.22935);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(13,37.48901);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(14,41.54419);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(15,50.29429);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(16,48.96703);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(17,58.76718);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(18,65.30544);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(19,65.18421);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(20,74.51201);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(21,86.43679);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(22,89.55633);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(23,105.0568);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(24,94.56157);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(25,98.97105);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(26,104.2682);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(27,112.491);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(28,110.0198);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(29,112.1849);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(30,114.1859);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(1,2.01257);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(2,2.071661);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(3,2.038989);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(4,1.878121);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(5,2.205876);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(6,2.03572);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(7,2.159829);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(8,2.220994);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(9,2.261713);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(10,2.312313);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(11,2.537557);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(12,2.477519);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(13,2.675952);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(14,2.831475);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(15,3.106617);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(16,3.065314);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(17,3.352349);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(18,3.54175);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(19,3.522217);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(20,3.779997);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(21,4.065499);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(22,4.160223);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(23,4.493383);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(24,4.263378);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(25,4.349366);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(26,4.479313);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(27,4.63897);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(28,4.591991);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(29,4.630487);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(30,4.68253);
   Zmm_2bjet_dPhi_Zb_stack_3->SetEntries(9796);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dPhi_Zb_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_stack_3->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_dPhi_Zb_stack_4 = new TH1D("Zmm_2bjet_XX_dPhi_Zb_stack_4","",30,0,3.141593);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(1,3.515003);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(2,3.577564);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(3,-0.2994409);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(4,1.001624);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(5,-0.6143632);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(6,2.066729);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(7,3.538941);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(8,-0.02703351);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(9,4.549227);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(10,4.696805);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(11,2.004441);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(12,0.9730872);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(13,8.708928);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(14,3.965596);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(15,7.504055);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(16,0.3873991);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(17,8.195481);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(18,4.082957);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(19,-0.4584924);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(20,5.255929);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(21,3.343792);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(22,-0.3333244);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(23,8.452057);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(24,5.373487);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(25,0.2143183);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(26,0.628425);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(27,1.621718);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(28,2.117069);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(29,2.659999);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(30,3.498852);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(1,2.582289);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(2,3.058346);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(3,1.071049);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(4,0.7090914);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(5,0.6143632);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(6,1.172918);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(7,3.324315);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(8,1.025951);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(9,3.396599);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(10,3.713008);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(11,2.772156);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(12,0.9263083);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(13,4.128551);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(14,2.662089);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(15,4.675157);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(16,1.052917);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(17,4.759078);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(18,2.682373);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(19,0.794164);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(20,2.816752);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(21,2.956561);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(22,1.243653);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(23,4.612432);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(24,3.315836);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(25,1.019361);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(26,1.642995);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(27,3.428458);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(28,1.702759);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(29,1.560638);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(30,3.522653);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetEntries(188);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_dPhi_Zb_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_dPhi_Zb_stack_5 = new TH1D("Zmm_2bjet_bX_dPhi_Zb_stack_5","",30,0,3.141593);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(1,1.529541);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(2,2.612657);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(3,0.4755904);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(4,1.013555);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(5,-2.254347);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(6,0.08163674);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(7,0.1286873);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(8,0.6585334);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(9,1.050457);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(10,3.448336);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(11,-0.09176275);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(12,2.145894);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(13,4.130942);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(14,5.145662);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(15,-1.579409);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(16,-0.1327036);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(17,0.4929747);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(18,4.578438);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(19,1.49735);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(20,3.424616);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(21,-0.3218621);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(22,3.346854);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(23,7.561236);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(24,6.885728);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(25,7.104912);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(26,0.2652028);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(27,10.23433);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(28,2.785213);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(29,13.96603);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(30,9.70427);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(1,1.641662);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(2,1.170502);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(3,1.536864);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(4,1.526738);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(5,1.407663);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(6,0.9938872);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(7,1.246831);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(8,1.214025);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(9,1.050639);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(10,1.316895);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(11,1.318727);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(12,1.518724);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(13,1.626092);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(14,1.7538);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(15,1.832552);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(16,1.592272);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(17,2.037233);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(18,2.122757);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(19,2.232474);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(20,2.412406);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(21,2.207612);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(22,2.693297);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(23,2.797363);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(24,2.865685);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(25,3.100205);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(26,3.510517);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(27,3.556934);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(28,3.604037);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(29,4.130434);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(30,3.595781);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetEntries(637);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_dPhi_Zb_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_dPhi_Zb_stack_6 = new TH1D("Zmm_2bjet_bb_dPhi_Zb_stack_6","",30,0,3.141593);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(1,38.79665);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(2,40.68356);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(3,33.6591);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(4,23.88807);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(5,39.81102);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(6,43.42032);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(7,41.83025);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(8,44.60309);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(9,44.33369);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(10,42.97925);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(11,56.11694);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(12,38.33311);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(13,74.5766);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(14,72.86667);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(15,87.49736);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(16,92.93902);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(17,92.38107);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(18,98.32678);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(19,101.5713);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(20,151.3824);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(21,166.8328);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(22,193.3364);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(23,204.2177);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(24,300.131);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(25,288.4575);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(26,326.6567);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(27,369.3619);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(28,395.9179);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(29,388.1558);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(30,369.6217);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(1,7.262355);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(2,7.944021);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(3,7.566334);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(4,7.644632);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(5,7.104187);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(6,7.418837);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(7,7.59852);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(8,7.89567);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(9,8.184546);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(10,8.429098);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(11,8.89659);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(12,9.184696);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(13,9.523251);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(14,9.744927);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(15,10.89107);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(16,11.66783);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(17,11.8809);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(18,12.362);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(19,13.77206);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(20,15.10127);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(21,15.99829);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(22,17.15135);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(23,18.56254);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(24,20.45942);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(25,21.12845);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(26,22.59957);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(27,23.63325);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(28,24.3947);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(29,25.05107);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(30,24.55934);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetEntries(27989);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_dPhi_Zb_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dPhi_Zb__641 = new TH1D("Zmm_2bjet_dPhi_Zb__641","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(1,47);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(2,49);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(3,59);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(4,58);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(5,54);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(6,61);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(7,62);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(8,71);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(9,83);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(10,83);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(11,71);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(12,93);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(13,85);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(14,101);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(15,110);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(16,113);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(17,153);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(18,146);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(19,165);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(20,220);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(21,255);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(22,261);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(23,314);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(24,341);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(25,320);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(26,375);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(27,423);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(28,424);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(29,474);
   Zmm_2bjet_dPhi_Zb__641->SetBinContent(30,432);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(1,6.855655);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(2,7);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(3,7.681146);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(4,7.615773);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(5,7.348469);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(6,7.81025);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(7,7.874008);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(8,8.42615);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(9,9.110434);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(10,9.110434);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(11,8.42615);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(12,9.643651);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(13,9.219544);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(14,10.04988);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(15,10.48809);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(16,10.63015);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(17,12.36932);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(18,12.08305);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(19,12.84523);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(20,14.8324);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(21,15.96872);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(22,16.15549);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(23,17.72005);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(24,18.46619);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(25,17.88854);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(26,19.36492);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(27,20.56696);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(28,20.59126);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(29,21.77154);
   Zmm_2bjet_dPhi_Zb__641->SetBinError(30,20.78461);
   Zmm_2bjet_dPhi_Zb__641->SetEntries(5503);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb__641->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb__641->SetLineWidth(2);
   Zmm_2bjet_dPhi_Zb__641->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_Zb__641->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_Zb__641->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb__641->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb__641->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb__641->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb__641->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb__641->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb__641->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb__641->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb__641->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb__641->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb__641->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb__641->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb__641->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb__641->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb__641->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb_fx1641[30] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb_fy1641[30] = {
   66.23319,
   71.3963,
   57.35289,
   46.06105,
   63.56131,
   69.2993,
   71.61795,
   72.23938,
   77.896,
   79.75461,
   93.46939,
   74.80504,
   126.9064,
   126.1766,
   147.0973,
   145.7635,
   163.6264,
   175.0364,
   172.3143,
   239.8695,
   261.226,
   290.3507,
   330.7607,
   414.9418,
   402.9929,
   446.5953,
   504.5443,
   522.8508,
   528.6919,
   510.8632};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb_fex1641[30] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb_fey1641[30] = {
   8.15447,
   8.863745,
   8.078744,
   8.075877,
   7.614763,
   7.878946,
   8.679966,
   8.370648,
   9.223276,
   9.603655,
   9.767387,
   9.694172,
   10.86602,
   10.66889,
   12.42309,
   12.25133,
   13.42071,
   13.3316,
   14.44934,
   16.04394,
   16.95257,
   17.92773,
   19.88045,
   21.40462,
   21.86783,
   23.44864,
   24.64316,
   25.20711,
   25.91463,
   25.57826};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zmm_2bjet_bb_dPhi_Zb_fx1641,Graph_from_Zmm_2bjet_bb_dPhi_Zb_fy1641,Graph_from_Zmm_2bjet_bb_dPhi_Zb_fex1641,Graph_from_Zmm_2bjet_bb_dPhi_Zb_fey1641);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dPhi_Zb");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641->SetMinimum(34.18665);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641->SetMaximum(606.2687);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1641);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_dPhi_Zb_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_dPhi_Zb_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_dPhi_Zb_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_dPhi_Zb","MC unc. (stat.)","fl");

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
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__642 = new TH1D("data_mc_ratio__642","",30,0,3.141593);
   data_mc_ratio__642->SetBinContent(1,0.709614);
   data_mc_ratio__642->SetBinContent(2,0.6863101);
   data_mc_ratio__642->SetBinContent(3,1.028719);
   data_mc_ratio__642->SetBinContent(4,1.259199);
   data_mc_ratio__642->SetBinContent(5,0.8495734);
   data_mc_ratio__642->SetBinContent(6,0.8802398);
   data_mc_ratio__642->SetBinContent(7,0.8657047);
   data_mc_ratio__642->SetBinContent(8,0.9828434);
   data_mc_ratio__642->SetBinContent(9,1.065523);
   data_mc_ratio__642->SetBinContent(10,1.040692);
   data_mc_ratio__642->SetBinContent(11,0.759607);
   data_mc_ratio__642->SetBinContent(12,1.243232);
   data_mc_ratio__642->SetBinContent(13,0.6697852);
   data_mc_ratio__642->SetBinContent(14,0.8004654);
   data_mc_ratio__642->SetBinContent(15,0.7478046);
   data_mc_ratio__642->SetBinContent(16,0.7752283);
   data_mc_ratio__642->SetBinContent(17,0.9350572);
   data_mc_ratio__642->SetBinContent(18,0.8341122);
   data_mc_ratio__642->SetBinContent(19,0.9575523);
   data_mc_ratio__642->SetBinContent(20,0.9171653);
   data_mc_ratio__642->SetBinContent(21,0.9761664);
   data_mc_ratio__642->SetBinContent(22,0.8989128);
   data_mc_ratio__642->SetBinContent(23,0.9493268);
   data_mc_ratio__642->SetBinContent(24,0.821802);
   data_mc_ratio__642->SetBinContent(25,0.7940586);
   data_mc_ratio__642->SetBinContent(26,0.8396863);
   data_mc_ratio__642->SetBinContent(27,0.8383803);
   data_mc_ratio__642->SetBinContent(28,0.8109388);
   data_mc_ratio__642->SetBinContent(29,0.8965524);
   data_mc_ratio__642->SetBinContent(30,0.8456276);
   data_mc_ratio__642->SetBinError(1,0.1035078);
   data_mc_ratio__642->SetBinError(2,0.09804429);
   data_mc_ratio__642->SetBinError(3,0.1339278);
   data_mc_ratio__642->SetBinError(4,0.1653409);
   data_mc_ratio__642->SetBinError(5,0.1156123);
   data_mc_ratio__642->SetBinError(6,0.1127032);
   data_mc_ratio__642->SetBinError(7,0.1099446);
   data_mc_ratio__642->SetBinError(8,0.1166421);
   data_mc_ratio__642->SetBinError(9,0.1169564);
   data_mc_ratio__642->SetBinError(10,0.1142308);
   data_mc_ratio__642->SetBinError(11,0.09014876);
   data_mc_ratio__642->SetBinError(12,0.1289171);
   data_mc_ratio__642->SetBinError(13,0.0726484);
   data_mc_ratio__642->SetBinError(14,0.07964928);
   data_mc_ratio__642->SetBinError(15,0.07130037);
   data_mc_ratio__642->SetBinError(16,0.07292735);
   data_mc_ratio__642->SetBinError(17,0.07559489);
   data_mc_ratio__642->SetBinError(18,0.06903161);
   data_mc_ratio__642->SetBinError(19,0.07454535);
   data_mc_ratio__642->SetBinError(20,0.06183527);
   data_mc_ratio__642->SetBinError(21,0.06112991);
   data_mc_ratio__642->SetBinError(22,0.0556413);
   data_mc_ratio__642->SetBinError(23,0.05357361);
   data_mc_ratio__642->SetBinError(24,0.04450307);
   data_mc_ratio__642->SetBinError(25,0.04438923);
   data_mc_ratio__642->SetBinError(26,0.04336121);
   data_mc_ratio__642->SetBinError(27,0.04076344);
   data_mc_ratio__642->SetBinError(28,0.03938267);
   data_mc_ratio__642->SetBinError(29,0.04118001);
   data_mc_ratio__642->SetBinError(30,0.04068528);
   data_mc_ratio__642->SetMinimum(0.4);
   data_mc_ratio__642->SetMaximum(1.6);
   data_mc_ratio__642->SetEntries(1468.291);
   data_mc_ratio__642->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__642->SetLineColor(ci);
   data_mc_ratio__642->SetLineWidth(2);
   data_mc_ratio__642->SetMarkerStyle(20);
   data_mc_ratio__642->SetMarkerSize(1.2);
   data_mc_ratio__642->GetXaxis()->SetTitle("dPhi_{Zb}");
   data_mc_ratio__642->GetXaxis()->SetRange(1,31);
   data_mc_ratio__642->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__642->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__642->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__642->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__642->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__642->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__642->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__642->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__642->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__642->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__642->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__642->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__642->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__642->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__642->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__642->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__642->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1642[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1642[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1642[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1642[30] = {
   0.1231176,
   0.1241485,
   0.1408603,
   0.1753299,
   0.1198019,
   0.1136945,
   0.1211982,
   0.1158738,
   0.118405,
   0.120415,
   0.1044982,
   0.1295925,
   0.08562233,
   0.08455525,
   0.08445493,
   0.08404936,
   0.08202048,
   0.07616473,
   0.08385457,
   0.06688613,
   0.06489618,
   0.06174509,
   0.06010524,
   0.05158463,
   0.05426356,
   0.05250533,
   0.04884241,
   0.04821091,
   0.04901651,
   0.05006872};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1642,Graph_from_mc_statistical_error_fy1642,Graph_from_mc_statistical_error_fex1642,Graph_from_mc_statistical_error_fey1642);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1642 = new TH1F("Graph_Graph_from_mc_statistical_error1642","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1642->SetMinimum(0.7896041);
   Graph_Graph_from_mc_statistical_error1642->SetMaximum(1.210396);
   Graph_Graph_from_mc_statistical_error1642->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1642->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1642->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1642->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1642->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1642->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1642->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1642->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1642->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1642->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1642->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1642->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1642->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1642->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1642->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1642->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1642);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->Modified();
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zmm_16_amcnlo->SetSelected(dPhi_Zb_Z_2bjet_Zmm_16_amcnlo);
}

void dPhi_Zb_Z_2bjet_Zmm_18_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb_Z_2bjet_Zmm_18_amcnlo/dPhi_Zb_Z_2bjet_Zmm_18_amcnlo
//=========  (Thu Jan 14 10:43:06 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb_Z_2bjet_Zmm_18_amcnlo = new TCanvas("dPhi_Zb_Z_2bjet_Zmm_18_amcnlo", "dPhi_Zb_Z_2bjet_Zmm_18_amcnlo",0,0,600,600);
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->SetHighLightColor(2);
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->Range(0,0,1,1);
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->SetFillColor(0);
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->SetFillStyle(4000);
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->SetBorderMode(0);
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->SetBorderSize(2);
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-2.472474,3.416482,2480.001);
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
   st->SetMaximum(2125.48);
   
   TH1F *st_stack_323 = new TH1F("st_stack_323","",30,0,3.141593);
   st_stack_323->SetMinimum(0.01);
   st_stack_323->SetMaximum(2231.754);
   st_stack_323->SetDirectory(0);
   st_stack_323->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_323->SetLineColor(ci);
   st_stack_323->GetXaxis()->SetRange(1,31);
   st_stack_323->GetXaxis()->SetLabelFont(42);
   st_stack_323->GetXaxis()->SetLabelSize(0.035);
   st_stack_323->GetXaxis()->SetTitleSize(0.035);
   st_stack_323->GetXaxis()->SetTitleFont(42);
   st_stack_323->GetYaxis()->SetTitle("Events/0.105");
   st_stack_323->GetYaxis()->SetLabelFont(42);
   st_stack_323->GetYaxis()->SetLabelSize(0.05);
   st_stack_323->GetYaxis()->SetTitleSize(0.057);
   st_stack_323->GetYaxis()->SetTitleOffset(1.2);
   st_stack_323->GetYaxis()->SetTitleFont(42);
   st_stack_323->GetZaxis()->SetLabelFont(42);
   st_stack_323->GetZaxis()->SetLabelSize(0.035);
   st_stack_323->GetZaxis()->SetTitleSize(0.035);
   st_stack_323->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_323);
   
   
   TH1D *Zmm_2bjet_dPhi_Zb_stack_1 = new TH1D("Zmm_2bjet_dPhi_Zb_stack_1","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(1,0.728249);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(2,0.3617982);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(4,0.941625);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(5,1.606986);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(6,0.8585618);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(7,1.198609);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(8,1.85717);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(9,1.676442);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(10,1.080914);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(11,1.566806);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(12,1.410703);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(13,0.875595);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(14,2.836998);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(15,2.587322);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(16,2.168832);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(17,3.090658);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(18,3.880041);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(19,2.373517);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(20,2.629484);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(21,3.027523);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(22,5.096105);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(23,4.561947);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(24,4.842578);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(25,8.276144);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(26,6.650678);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(27,5.373599);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(28,11.14206);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(29,9.537774);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(30,7.821904);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(1,0.4387271);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(2,0.3617982);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(4,0.5261521);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(5,0.6757841);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(6,0.4978824);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(7,0.5517702);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(8,0.7753714);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(9,0.7058162);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(10,0.5099216);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(11,0.6474274);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(12,0.5991772);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(13,0.5100862);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(14,0.8983072);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(15,0.7707104);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(16,0.8039573);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(17,1.267051);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(18,1.080088);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(19,0.8137132);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(20,0.8556409);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(21,0.8949847);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(22,1.242154);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(23,1.130198);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(24,1.209523);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(25,1.628874);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(26,1.444478);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(27,1.233655);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(28,1.872268);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(29,1.622472);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(30,1.494779);
   Zmm_2bjet_dPhi_Zb_stack_1->SetEntries(396);

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
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(1,2.466716);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(2,0.7815425);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(3,1.109237);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(4,6.93996);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(5,1.917636);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(6,2.051906);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(7,1.004392);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(8,3.055469);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(9,1.791092);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(10,0.9768439);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(11,0.5176465);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(12,1.064208);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(13,3.131466);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(14,2.035265);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(15,1.655421);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(16,4.2731);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(17,4.770423);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(18,5.03486);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(19,3.994538);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(20,12.02467);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(21,7.204033);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(22,13.37793);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(23,14.14333);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(24,17.2204);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(25,21.03505);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(26,13.89157);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(27,12.70362);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(28,26.16412);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(29,18.32719);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(30,15.17424);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(1,1.18501);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(2,0.5694618);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(3,0.8000968);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(4,3.425747);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(5,0.9038667);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(6,1.038048);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(7,0.7130405);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(8,1.38505);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(9,0.9208586);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(10,0.6912625);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(11,0.5176465);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(12,0.7576316);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(13,1.329473);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(14,1.006928);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(15,0.9847849);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(16,1.476601);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(17,1.631675);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(18,1.632606);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(19,1.320431);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(20,2.50345);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(21,1.912121);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(22,2.625306);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(23,2.746745);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(24,3.010199);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(25,3.255519);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(26,2.601065);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(27,2.608412);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(28,3.730267);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(29,3.121607);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(30,2.812248);
   Zmm_2bjet_dPhi_Zb_stack_2->SetEntries(454);

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
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(1,49.87092);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(2,44.25336);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(3,50.21136);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(4,46.95068);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(5,45.23415);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(6,52.14869);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(7,48.83856);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(8,59.42094);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(9,58.69651);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(10,60.11683);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(11,72.72802);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(12,71.4357);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(13,78.94243);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(14,85.92754);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(15,104.0501);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(16,106.6569);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(17,123.6846);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(18,137.9461);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(19,148.898);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(20,171.3124);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(21,178.0795);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(22,189.9909);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(23,202.7417);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(24,223.9218);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(25,235.9467);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(26,239.7142);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(27,249.9535);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(28,250.3782);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(29,251.4532);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(30,252.6692);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(1,2.112346);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(2,1.977985);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(3,2.134897);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(4,2.053428);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(5,2.010471);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(6,2.145807);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(7,2.172345);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(8,2.30247);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(9,2.276005);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(10,2.304374);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(11,2.535228);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(12,2.520708);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(13,2.706832);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(14,2.77517);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(15,3.075304);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(16,3.126492);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(17,3.357265);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(18,3.547611);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(19,3.662401);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(20,3.928642);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(21,4.075456);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(22,4.258641);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(23,4.275974);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(24,4.480861);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(25,4.588136);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(26,4.645479);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(27,4.830129);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(28,4.748695);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(29,4.814731);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(30,4.76237);
   Zmm_2bjet_dPhi_Zb_stack_3->SetEntries(48154);

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
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(1,3.046718);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(2,2.269869);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(3,4.175295);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(4,24.77754);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(5,6.449619);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(6,3.046751);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(7,5.50855);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(8,4.577412);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(9,18.32424);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(10,0.2491011);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(11,1.620171);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(12,-12.97664);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(13,9.198168);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(14,-0.705601);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(15,8.283041);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(16,20.9011);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(17,31.55499);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(18,3.689539);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(19,12.06318);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(20,11.53686);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(21,3.135488);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(22,-4.587593);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(23,9.684815);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(24,20.10205);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(25,0.02279025);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(26,12.15021);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(27,19.32);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(28,2.472123);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(29,4.079833);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(30,9.075637);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(1,3.046718);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(2,2.269869);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(3,4.175295);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(4,15.60552);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(5,7.585433);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(6,3.046751);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(7,4.250252);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(8,8.445627);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(9,13.18484);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(10,5.24101);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(11,1.261205);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(12,11.1227);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(13,12.49347);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(14,0.705601);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(15,8.283041);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(16,16.31386);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(17,19.21897);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(18,2.812848);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(19,9.54432);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(20,11.78243);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(21,6.547747);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(22,3.934927);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(23,5.669324);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(24,13.78035);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(25,1.562152);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(26,10.89343);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(27,13.51303);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(28,3.925972);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(29,2.910754);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(30,5.703949);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetEntries(117);

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
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(1,4.662596);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(2,0.1269995);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(3,-2.495726);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(4,1.122222);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(5,0.5126439);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(6,2.066605);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(7,-1.539141);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(8,-0.1436208);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(9,-0.2432432);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(10,-0.4167592);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(11,7.039894);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(12,3.771133);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(13,5.065231);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(14,8.954809);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(15,1.373443);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(16,-1.559808);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(17,10.97159);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(18,3.11492);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(19,11.03207);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(20,5.438526);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(21,9.473142);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(22,16.69577);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(23,8.723242);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(24,6.807766);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(25,0.6903943);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(26,9.533355);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(27,0.9087452);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(28,17.15892);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(29,12.6911);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(30,21.92858);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(1,3.211941);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(2,0.1269995);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(3,2.240114);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(4,2.594848);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(5,2.551291);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(6,1.591059);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(7,2.224599);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(8,4.129728);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(9,3.867747);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(10,2.283441);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(11,3.484668);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(12,3.210617);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(13,3.471869);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(14,4.195239);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(15,2.21839);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(16,3.143635);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(17,4.718875);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(18,4.887952);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(19,5.752176);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(20,4.66114);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(21,4.778553);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(22,6.799585);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(23,5.336162);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(24,6.368996);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(25,5.689082);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(26,6.262709);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(27,7.003087);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(28,7.555836);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(29,8.016068);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(30,8.63719);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetEntries(396);

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
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(1,54.70551);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(2,54.77672);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(3,58.08802);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(4,78.83707);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(5,70.29015);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(6,61.10888);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(7,35.53691);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(8,78.07488);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(9,71.74732);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(10,70.39267);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(11,119.5377);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(12,90.2521);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(13,74.18235);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(14,107.605);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(15,133.6862);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(16,155.043);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(17,225.4259);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(18,193.9657);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(19,246.5099);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(20,308.3918);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(21,389.4385);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(22,404.6422);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(23,452.0391);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(24,428.3568);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(25,508.7868);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(26,604.1752);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(27,630.1696);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(28,861.6984);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(29,868.2242);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(30,734.3558);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(1,13.18258);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(2,14.0162);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(3,14.22268);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(4,15.03331);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(5,14.1802);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(6,14.5721);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(7,14.76282);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(8,15.74322);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(9,15.56451);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(10,15.8759);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(11,16.94266);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(12,17.92129);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(13,18.38961);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(14,21.15927);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(15,20.11682);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(16,22.1567);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(17,24.69733);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(18,25.97968);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(19,26.51525);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(20,31.42916);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(21,33.43865);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(22,36.29389);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(23,39.53691);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(24,41.09997);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(25,64.37723);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(26,46.43514);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(27,51.39099);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(28,51.80779);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(29,52.08995);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(30,51.14378);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetEntries(21441);

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
   
   TH1D *Zmm_2bjet_dPhi_Zb__645 = new TH1D("Zmm_2bjet_dPhi_Zb__645","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(1,107);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(2,114);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(3,92);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(4,111);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(5,117);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(6,119);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(7,140);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(8,137);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(9,125);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(10,143);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(11,165);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(12,153);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(13,199);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(14,205);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(15,207);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(16,249);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(17,272);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(18,315);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(19,324);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(20,357);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(21,446);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(22,466);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(23,553);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(24,689);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(25,684);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(26,759);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(27,826);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(28,862);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(29,929);
   Zmm_2bjet_dPhi_Zb__645->SetBinContent(30,892);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(1,10.34408);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(2,10.67708);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(3,9.591663);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(4,10.53565);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(5,10.81665);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(6,10.90871);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(7,11.83216);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(8,11.7047);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(9,11.18034);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(10,11.95826);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(11,12.84523);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(12,12.36932);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(13,14.10674);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(14,14.31782);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(15,14.38749);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(16,15.77973);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(17,16.49242);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(18,17.74824);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(19,18);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(20,18.89444);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(21,21.11871);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(22,21.58703);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(23,23.51595);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(24,26.24881);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(25,26.15339);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(26,27.54995);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(27,28.74022);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(28,29.35984);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(29,30.4795);
   Zmm_2bjet_dPhi_Zb__645->SetBinError(30,29.86637);
   Zmm_2bjet_dPhi_Zb__645->SetEntries(10757);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb__645->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb__645->SetLineWidth(2);
   Zmm_2bjet_dPhi_Zb__645->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_Zb__645->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_Zb__645->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb__645->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb__645->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb__645->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb__645->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb__645->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb__645->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb__645->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb__645->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb__645->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb__645->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb__645->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb__645->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb__645->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb__645->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb_fx1645[30] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb_fy1645[30] = {
   115.4807,
   102.5703,
   111.0882,
   159.5691,
   126.0112,
   121.2814,
   90.54788,
   146.8422,
   151.9924,
   132.3996,
   203.0103,
   154.9572,
   171.3952,
   206.654,
   251.6355,
   287.4831,
   399.4982,
   347.6311,
   424.8712,
   511.3337,
   590.3582,
   625.2154,
   691.8941,
   701.2513,
   774.7579,
   886.1152,
   918.4291,
   1169.014,
   1164.313,
   1041.025};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb_fex1645[30] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb_fey1645[30] = {
   14.12226,
   14.35235,
   15.16356,
   22.19223,
   16.44511,
   15.16872,
   15.69988,
   18.54867,
   20.91841,
   17.05211,
   17.54713,
   21.5054,
   22.70844,
   21.80218,
   22.11872,
   27.92034,
   31.89253,
   26.89173,
   29.03548,
   34.21663,
   34.71192,
   37.49047,
   40.63113,
   44.16188,
   64.91176,
   48.42048,
   53.89188,
   52.88215,
   53.11922,
   52.49424};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zmm_2bjet_bb_dPhi_Zb_fx1645,Graph_from_Zmm_2bjet_bb_dPhi_Zb_fy1645,Graph_from_Zmm_2bjet_bb_dPhi_Zb_fex1645,Graph_from_Zmm_2bjet_bb_dPhi_Zb_fey1645);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dPhi_Zb");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645->SetMinimum(67.3632);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645->SetMaximum(1336.601);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1645);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__646 = new TH1D("data_mc_ratio__646","",30,0,3.141593);
   data_mc_ratio__646->SetBinContent(1,0.9265617);
   data_mc_ratio__646->SetBinContent(2,1.111433);
   data_mc_ratio__646->SetBinContent(3,0.8281709);
   data_mc_ratio__646->SetBinContent(4,0.6956234);
   data_mc_ratio__646->SetBinContent(5,0.928489);
   data_mc_ratio__646->SetBinContent(6,0.9811892);
   data_mc_ratio__646->SetBinContent(7,1.546143);
   data_mc_ratio__646->SetBinContent(8,0.932974);
   data_mc_ratio__646->SetBinContent(9,0.8224098);
   data_mc_ratio__646->SetBinContent(10,1.080064);
   data_mc_ratio__646->SetBinContent(11,0.8127667);
   data_mc_ratio__646->SetBinContent(12,0.9873694);
   data_mc_ratio__646->SetBinContent(13,1.161059);
   data_mc_ratio__646->SetBinContent(14,0.9919963);
   data_mc_ratio__646->SetBinContent(15,0.8226185);
   data_mc_ratio__646->SetBinContent(16,0.8661378);
   data_mc_ratio__646->SetBinContent(17,0.6808541);
   data_mc_ratio__646->SetBinContent(18,0.9061329);
   data_mc_ratio__646->SetBinContent(19,0.762584);
   data_mc_ratio__646->SetBinContent(20,0.6981742);
   data_mc_ratio__646->SetBinContent(21,0.7554735);
   data_mc_ratio__646->SetBinContent(22,0.7453431);
   data_mc_ratio__646->SetBinContent(23,0.7992552);
   data_mc_ratio__646->SetBinContent(24,0.9825293);
   data_mc_ratio__646->SetBinContent(25,0.8828565);
   data_mc_ratio__646->SetBinContent(26,0.8565478);
   data_mc_ratio__646->SetBinContent(27,0.8993617);
   data_mc_ratio__646->SetBinContent(28,0.7373737);
   data_mc_ratio__646->SetBinContent(29,0.7978952);
   data_mc_ratio__646->SetBinContent(30,0.8568475);
   data_mc_ratio__646->SetBinError(1,0.0895741);
   data_mc_ratio__646->SetBinError(2,0.1040952);
   data_mc_ratio__646->SetBinError(3,0.08634278);
   data_mc_ratio__646->SetBinError(4,0.06602566);
   data_mc_ratio__646->SetBinError(5,0.08583884);
   data_mc_ratio__646->SetBinError(6,0.08994547);
   data_mc_ratio__646->SetBinError(7,0.130673);
   data_mc_ratio__646->SetBinError(8,0.07970935);
   data_mc_ratio__646->SetBinError(9,0.07355856);
   data_mc_ratio__646->SetBinError(10,0.09031947);
   data_mc_ratio__646->SetBinError(11,0.0632738);
   data_mc_ratio__646->SetBinError(12,0.07982408);
   data_mc_ratio__646->SetBinError(13,0.0823053);
   data_mc_ratio__646->SetBinError(14,0.06928403);
   data_mc_ratio__646->SetBinError(15,0.05717594);
   data_mc_ratio__646->SetBinError(16,0.05488925);
   data_mc_ratio__646->SetBinError(17,0.04128284);
   data_mc_ratio__646->SetBinError(18,0.05105481);
   data_mc_ratio__646->SetBinError(19,0.04236578);
   data_mc_ratio__646->SetBinError(20,0.0369513);
   data_mc_ratio__646->SetBinError(21,0.03577271);
   data_mc_ratio__646->SetBinError(22,0.03452735);
   data_mc_ratio__646->SetBinError(23,0.03398779);
   data_mc_ratio__646->SetBinError(24,0.03743139);
   data_mc_ratio__646->SetBinError(25,0.03375686);
   data_mc_ratio__646->SetBinError(26,0.03109072);
   data_mc_ratio__646->SetBinError(27,0.0312928);
   data_mc_ratio__646->SetBinError(28,0.02511505);
   data_mc_ratio__646->SetBinError(29,0.02617809);
   data_mc_ratio__646->SetBinError(30,0.02868938);
   data_mc_ratio__646->SetMinimum(0.4);
   data_mc_ratio__646->SetMaximum(1.6);
   data_mc_ratio__646->SetEntries(1624.219);
   data_mc_ratio__646->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__646->SetLineColor(ci);
   data_mc_ratio__646->SetLineWidth(2);
   data_mc_ratio__646->SetMarkerStyle(20);
   data_mc_ratio__646->SetMarkerSize(1.2);
   data_mc_ratio__646->GetXaxis()->SetTitle("dPhi_{Zb}");
   data_mc_ratio__646->GetXaxis()->SetRange(1,31);
   data_mc_ratio__646->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__646->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__646->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__646->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__646->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__646->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__646->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__646->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__646->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__646->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__646->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__646->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__646->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__646->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__646->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__646->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__646->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1646[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1646[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1646[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1646[30] = {
   0.122291,
   0.139927,
   0.1365002,
   0.139076,
   0.1305052,
   0.1250705,
   0.1733876,
   0.126317,
   0.137628,
   0.1287928,
   0.0864347,
   0.1387828,
   0.1324916,
   0.1055009,
   0.08789985,
   0.09711993,
   0.07983147,
   0.07735709,
   0.06833947,
   0.06691644,
   0.05879807,
   0.05996409,
   0.05872449,
   0.06297582,
   0.08378329,
   0.05464355,
   0.05867832,
   0.04523655,
   0.04562279,
   0.05042551};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1646,Graph_from_mc_statistical_error_fy1646,Graph_from_mc_statistical_error_fex1646,Graph_from_mc_statistical_error_fey1646);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1646 = new TH1F("Graph_Graph_from_mc_statistical_error1646","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1646->SetMinimum(0.7919348);
   Graph_Graph_from_mc_statistical_error1646->SetMaximum(1.208065);
   Graph_Graph_from_mc_statistical_error1646->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1646->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1646->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1646->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1646->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1646->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1646->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1646->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1646->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1646->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1646->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1646->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1646->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1646->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1646->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1646->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1646);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->Modified();
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zmm_18_amcnlo->SetSelected(dPhi_Zb_Z_2bjet_Zmm_18_amcnlo);
}

void dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo/dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo
//=========  (Thu Jan 14 10:43:07 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo = new TCanvas("dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo", "dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo",0,0,600,600);
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->SetHighLightColor(2);
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->Range(0,0,1,1);
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->SetFillColor(0);
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->SetFillStyle(4000);
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->SetBorderMode(0);
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->SetBorderSize(2);
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-0.7491575,3.416482,758.4083);
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
   st->SetMaximum(649.9929);
   
   TH1F *st_stack_326 = new TH1F("st_stack_326","",30,0,3.141593);
   st_stack_326->SetMinimum(0.01);
   st_stack_326->SetMaximum(682.4925);
   st_stack_326->SetDirectory(0);
   st_stack_326->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_326->SetLineColor(ci);
   st_stack_326->GetXaxis()->SetRange(1,31);
   st_stack_326->GetXaxis()->SetLabelFont(42);
   st_stack_326->GetXaxis()->SetLabelSize(0.035);
   st_stack_326->GetXaxis()->SetTitleSize(0.035);
   st_stack_326->GetXaxis()->SetTitleFont(42);
   st_stack_326->GetYaxis()->SetTitle("Events/0.105");
   st_stack_326->GetYaxis()->SetLabelFont(42);
   st_stack_326->GetYaxis()->SetLabelSize(0.05);
   st_stack_326->GetYaxis()->SetTitleSize(0.057);
   st_stack_326->GetYaxis()->SetTitleOffset(1.2);
   st_stack_326->GetYaxis()->SetTitleFont(42);
   st_stack_326->GetZaxis()->SetLabelFont(42);
   st_stack_326->GetZaxis()->SetLabelSize(0.035);
   st_stack_326->GetZaxis()->SetTitleSize(0.035);
   st_stack_326->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_326);
   
   
   TH1D *Zmm_2bjet_dPhi_Zb1_stack_1 = new TH1D("Zmm_2bjet_dPhi_Zb1_stack_1","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(1,0.4831272);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(2,0.6293756);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(3,1.289109);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(4,2.855344);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(5,1.689674);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(6,1.403478);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(7,1.059324);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(8,1.714023);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(9,1.267865);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(10,2.01808);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(11,1.195671);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(12,1.798613);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(13,1.527831);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(14,1.584901);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(15,2.29907);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(16,0.941611);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(17,2.718129);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(18,1.272528);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(19,0.9921334);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(20,2.696847);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(21,2.213858);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(22,2.658646);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(23,3.069985);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(24,2.238574);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(25,3.34985);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(26,2.040345);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(27,3.21731);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(28,4.031025);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(29,2.729995);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinContent(30,2.415754);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(1,0.2847226);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(2,0.3187066);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(3,0.4912198);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(4,1.189334);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(5,0.5668431);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(6,0.5280753);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(7,0.4470253);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(8,0.5743508);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(9,0.4971577);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(10,0.6449772);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(11,0.4555702);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(12,0.6082161);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(13,0.8022584);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(14,0.5392723);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(15,0.6445897);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(16,0.4514765);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(17,0.7345194);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(18,0.4672059);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(19,0.4477597);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(20,0.7265515);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(21,0.6745274);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(22,0.7196292);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(23,0.7793913);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(24,0.67499);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(25,0.779966);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(26,0.6303898);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(27,0.7843427);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(28,0.8531267);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(29,0.7069992);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetBinError(30,0.6826752);
   Zmm_2bjet_dPhi_Zb1_stack_1->SetEntries(345);

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
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(1,1.607128);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(2,1.932737);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(3,1.754392);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(4,2.028033);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(5,1.086712);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(6,2.208051);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(7,2.077016);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(8,1.967106);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(9,2.672085);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(10,2.73948);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(11,5.9858);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(12,3.626068);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(13,5.003772);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(14,3.75051);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(15,4.402342);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(16,3.847034);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(17,4.019618);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(18,7.146585);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(19,7.082944);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(20,5.996259);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(21,7.365703);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(22,8.027333);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(23,9.268712);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(24,6.295091);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(25,7.798594);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(26,4.074636);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(27,7.728962);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(28,2.919865);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(29,8.375379);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinContent(30,3.910448);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(1,0.7417871);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(2,0.8022021);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(3,0.785122);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(4,0.8459935);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(5,0.5899795);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(6,0.8481681);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(7,0.8596438);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(8,0.8131483);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(9,0.9556379);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(10,0.9657699);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(11,1.388972);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(12,1.102678);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(13,1.306514);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(14,1.11176);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(15,1.24608);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(16,1.088116);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(17,1.172724);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(18,1.744108);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(19,1.562969);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(20,1.418535);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(21,1.583575);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(22,1.738643);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(23,1.762718);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(24,1.708595);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(25,1.641217);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(26,1.170042);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(27,1.631762);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(28,1.007966);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(29,1.762505);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetBinError(30,1.145874);
   Zmm_2bjet_dPhi_Zb1_stack_2->SetEntries(434);

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
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(1,49.42595);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(2,51.44757);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(3,46.83254);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(4,40.61688);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(5,38.58512);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(6,46.84261);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(7,54.77552);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(8,54.56668);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(9,48.4268);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(10,53.22298);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(11,70.32208);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(12,70.83452);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(13,82.4722);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(14,82.95478);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(15,83.55868);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(16,88.86948);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(17,88.15071);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(18,90.3617);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(19,100.771);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(20,105.6674);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(21,110.4197);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(22,115.9193);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(23,103.4979);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(24,109.9773);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(25,94.61261);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(26,98.55542);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(27,100.6953);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(28,102.8545);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(29,88.43903);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinContent(30,91.87775);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(1,4.389623);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(2,4.507535);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(3,4.254279);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(4,3.950201);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(5,3.908862);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(6,4.25212);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(7,4.61342);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(8,4.600048);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(9,4.36811);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(10,4.536978);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(11,5.216027);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(12,5.212276);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(13,5.674946);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(14,5.651809);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(15,5.668328);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(16,5.886103);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(17,5.770222);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(18,5.933171);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(19,6.28525);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(20,6.440668);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(21,6.566664);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(22,6.827294);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(23,6.370662);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(24,6.57404);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(25,6.038634);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(26,6.188147);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(27,6.227095);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(28,6.316615);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(29,5.801887);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetBinError(30,5.985795);
   Zmm_2bjet_dPhi_Zb1_stack_3->SetEntries(6946);

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
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(1,-0.3687728);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(2,9.366947);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(3,0.9644056);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(4,2.922344);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(5,4.35829);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(6,3.943041);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(7,1.994836);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(8,-0.1667337);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(9,0.1321771);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(10,0.04528458);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(11,-0.5832854);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(12,-2.975787);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(13,3.930258);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(14,0.32687);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(15,0.1294326);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(16,0.7062286);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(17,-0.08553343);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(18,5.083491);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(19,5.863034);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(20,3.114455);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(21,-0.8338123);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(22,0.7853811);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(23,4.542978);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(24,0.6497471);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(25,3.061844);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(26,-0.1616806);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(27,8.805035);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(29,0.2519656);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinContent(30,0.144695);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(1,0.8224942);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(2,5.026549);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(3,0.9644056);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(4,2.208107);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(5,4.044833);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(6,3.14267);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(7,1.389504);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(8,1.572874);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(9,1.838378);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(10,1.931415);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(11,0.5832854);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(12,2.253137);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(13,3.726988);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(14,1.059066);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(15,0.8587025);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(16,0.8421202);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(17,1.340461);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(18,4.225621);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(19,4.166664);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(20,3.271772);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(21,0.8338123);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(22,4.254908);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(23,3.771756);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(24,1.506526);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(25,2.294689);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(26,1.636554);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(27,4.77479);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(29,0.1784493);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetBinError(30,2.774404);
   Zmm_2bjet_XX_dPhi_Zb1_stack_4->SetEntries(108);

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
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(1,0.572713);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(2,3.048743);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(3,2.217127);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(4,-0.9458561);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(5,0.9767373);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(6,2.426253);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(7,1.113997);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(8,3.517778);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(9,1.578717);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(10,6.987909);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(11,0.03975429);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(12,5.157756);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(13,2.3162);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(14,3.6189);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(15,2.970873);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(16,2.697042);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(17,1.462628);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(18,4.086839);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(19,2.118746);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(20,2.706267);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(21,3.738357);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(22,7.567301);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(23,0.8285545);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(24,-0.1988554);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(25,4.681359);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(26,6.50767);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(27,2.447365);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(28,10.60051);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(29,1.663195);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinContent(30,-0.213336);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(1,3.411775);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(2,2.844418);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(3,2.246282);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(4,1.135582);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(5,1.960591);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(6,1.372197);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(7,2.042758);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(8,2.208996);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(9,2.536627);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(10,3.480101);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(11,1.771904);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(12,2.657786);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(13,1.587358);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(14,2.070247);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(15,1.720654);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(16,3.00539);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(17,2.633896);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(18,2.693842);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(19,2.916394);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(20,2.327986);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(21,2.152609);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(22,4.978381);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(23,3.125442);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(24,2.539411);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(25,3.179519);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(26,3.033103);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(27,1.93066);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(28,3.745733);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(29,2.534415);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetBinError(30,2.869662);
   Zmm_2bjet_bX_dPhi_Zb1_stack_5->SetEntries(333);

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
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(1,104.5055);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(2,128.2428);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(3,62.44148);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(4,110.946);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(5,112.4203);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(6,86.79364);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(7,107.0937);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(8,128.6361);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(9,99.69668);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(10,112.0635);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(11,105.1361);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(12,124.3665);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(13,156.6736);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(14,156.6196);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(15,166.9368);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(16,159.8177);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(17,167.4925);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(18,201.9549);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(19,186.9855);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(20,197.6508);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(21,198.3695);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(22,221.8125);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(23,228.6681);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(24,195.0833);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(25,243.9918);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(26,212.0739);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(27,211.5122);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(28,217.624);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(29,237.6945);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinContent(30,220.7284);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(1,15.65839);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(2,16.09883);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(3,15.8016);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(4,15.95495);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(5,16.50585);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(6,16.13787);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(7,16.82751);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(8,16.94095);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(9,17.2947);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(10,17.75696);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(11,18.31427);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(12,18.50906);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(13,18.55602);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(14,18.77245);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(15,19.8979);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(16,20.73616);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(17,21.25609);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(18,22.27771);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(19,22.26013);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(20,22.99899);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(21,23.21551);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(22,22.12116);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(23,23.61167);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(24,23.82057);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(25,24.3026);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(26,22.30493);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(27,23.00756);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(28,22.38677);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(29,21.56606);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetBinError(30,22.61023);
   Zmm_2bjet_bb_dPhi_Zb1_stack_6->SetEntries(17994);

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
   
   TH1D *Zmm_2bjet_dPhi_Zb1__651 = new TH1D("Zmm_2bjet_dPhi_Zb1__651","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(1,123);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(2,147);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(3,124);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(4,131);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(5,138);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(6,140);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(7,147);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(8,143);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(9,168);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(10,157);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(11,170);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(12,187);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(13,212);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(14,221);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(15,230);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(16,224);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(17,237);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(18,247);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(19,263);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(20,254);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(21,256);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(22,281);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(23,297);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(24,282);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(25,305);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(26,311);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(27,279);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(28,301);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(29,307);
   Zmm_2bjet_dPhi_Zb1__651->SetBinContent(30,265);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(1,11.09054);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(2,12.12436);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(3,11.13553);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(4,11.44552);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(5,11.74734);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(6,11.83216);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(7,12.12436);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(8,11.95826);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(9,12.96148);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(10,12.52996);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(11,13.0384);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(12,13.67479);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(13,14.56022);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(14,14.86607);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(15,15.16575);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(16,14.96663);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(17,15.3948);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(18,15.71623);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(19,16.21727);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(20,15.93738);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(21,16);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(22,16.76305);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(23,17.23369);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(24,16.79286);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(25,17.46425);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(26,17.63519);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(27,16.70329);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(28,17.34935);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(29,17.52142);
   Zmm_2bjet_dPhi_Zb1__651->SetBinError(30,16.27882);
   Zmm_2bjet_dPhi_Zb1__651->SetEntries(6547);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb1__651->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb1__651->SetLineWidth(2);
   Zmm_2bjet_dPhi_Zb1__651->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_Zb1__651->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_Zb1__651->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb1__651->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1__651->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1__651->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1__651->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1__651->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1__651->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1__651->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1__651->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb1__651->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1__651->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb1__651->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb1__651->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb1__651->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb1__651->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fx1651[30] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fy1651[30] = {
   156.2257,
   194.6682,
   115.4991,
   158.4227,
   159.1169,
   143.6171,
   168.1144,
   190.235,
   153.7743,
   177.0772,
   182.0961,
   202.8076,
   251.9238,
   248.8556,
   260.2972,
   256.8791,
   263.7581,
   309.906,
   303.8134,
   317.832,
   321.2733,
   356.7705,
   349.8762,
   314.0452,
   357.4961,
   323.0903,
   334.4062,
   338.0299,
   339.154,
   318.8637};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fex1651[30] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fey1651[30] = {
   16.65539,
   17.70854,
   16.57175,
   16.68712,
   17.56691,
   17.0666,
   17.64911,
   17.79047,
   18.14281,
   18.79053,
   19.18948,
   19.58263,
   19.88194,
   19.78086,
   20.82601,
   21.81201,
   22.2658,
   23.66161,
   23.73874,
   24.27138,
   24.29758,
   24.13269,
   25.0161,
   24.95458,
   25.41177,
   23.4403,
   24.45257,
   23.59749,
   22.557,
   23.76476};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fx1651,Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fy1651,Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fex1651,Graph_from_Zmm_2bjet_bb_dPhi_Zb1_fey1651);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dPhi_Zb1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651->SetMinimum(70.52925);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651->SetMaximum(411.3059);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb11651);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__652 = new TH1D("data_mc_ratio__652","",30,0,3.141593);
   data_mc_ratio__652->SetBinContent(1,0.7873225);
   data_mc_ratio__652->SetBinContent(2,0.7551311);
   data_mc_ratio__652->SetBinContent(3,1.073602);
   data_mc_ratio__652->SetBinContent(4,0.8269017);
   data_mc_ratio__652->SetBinContent(5,0.8672872);
   data_mc_ratio__652->SetBinContent(6,0.9748145);
   data_mc_ratio__652->SetBinContent(7,0.8744044);
   data_mc_ratio__652->SetBinContent(8,0.751702);
   data_mc_ratio__652->SetBinContent(9,1.09251);
   data_mc_ratio__652->SetBinContent(10,0.8866189);
   data_mc_ratio__652->SetBinContent(11,0.9335731);
   data_mc_ratio__652->SetBinContent(12,0.922056);
   data_mc_ratio__652->SetBinContent(13,0.8415242);
   data_mc_ratio__652->SetBinContent(14,0.8880653);
   data_mc_ratio__652->SetBinContent(15,0.8836054);
   data_mc_ratio__652->SetBinContent(16,0.8720054);
   data_mc_ratio__652->SetBinContent(17,0.8985507);
   data_mc_ratio__652->SetBinContent(18,0.7970158);
   data_mc_ratio__652->SetBinContent(19,0.865663);
   data_mc_ratio__652->SetBinContent(20,0.7991644);
   data_mc_ratio__652->SetBinContent(21,0.7968294);
   data_mc_ratio__652->SetBinContent(22,0.7876212);
   data_mc_ratio__652->SetBinContent(23,0.8488716);
   data_mc_ratio__652->SetBinContent(24,0.89796);
   data_mc_ratio__652->SetBinContent(25,0.8531562);
   data_mc_ratio__652->SetBinContent(26,0.9625792);
   data_mc_ratio__652->SetBinContent(27,0.8343146);
   data_mc_ratio__652->SetBinContent(28,0.8904538);
   data_mc_ratio__652->SetBinContent(29,0.9051935);
   data_mc_ratio__652->SetBinContent(30,0.8310761);
   data_mc_ratio__652->SetBinError(1,0.07099048);
   data_mc_ratio__652->SetBinError(2,0.06228216);
   data_mc_ratio__652->SetBinError(3,0.0964123);
   data_mc_ratio__652->SetBinError(4,0.07224674);
   data_mc_ratio__652->SetBinError(5,0.07382839);
   data_mc_ratio__652->SetBinError(6,0.08238686);
   data_mc_ratio__652->SetBinError(7,0.07211966);
   data_mc_ratio__652->SetBinError(8,0.06286048);
   data_mc_ratio__652->SetBinError(9,0.08428898);
   data_mc_ratio__652->SetBinError(10,0.07075989);
   data_mc_ratio__652->SetBinError(11,0.07160179);
   data_mc_ratio__652->SetBinError(12,0.06742741);
   data_mc_ratio__652->SetBinError(13,0.05779612);
   data_mc_ratio__652->SetBinError(14,0.05973774);
   data_mc_ratio__652->SetBinError(15,0.05826322);
   data_mc_ratio__652->SetBinError(16,0.05826331);
   data_mc_ratio__652->SetBinError(17,0.05836714);
   data_mc_ratio__652->SetBinError(18,0.0507129);
   data_mc_ratio__652->SetBinError(19,0.05337907);
   data_mc_ratio__652->SetBinError(20,0.05014403);
   data_mc_ratio__652->SetBinError(21,0.04980184);
   data_mc_ratio__652->SetBinError(22,0.04698554);
   data_mc_ratio__652->SetBinError(23,0.04925652);
   data_mc_ratio__652->SetBinError(24,0.05347274);
   data_mc_ratio__652->SetBinError(25,0.04885158);
   data_mc_ratio__652->SetBinError(26,0.05458286);
   data_mc_ratio__652->SetBinError(27,0.04994911);
   data_mc_ratio__652->SetBinError(28,0.0513249);
   data_mc_ratio__652->SetBinError(29,0.05166212);
   data_mc_ratio__652->SetBinError(30,0.0510526);
   data_mc_ratio__652->SetMinimum(0.4);
   data_mc_ratio__652->SetMaximum(1.6);
   data_mc_ratio__652->SetEntries(2172.363);
   data_mc_ratio__652->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__652->SetLineColor(ci);
   data_mc_ratio__652->SetLineWidth(2);
   data_mc_ratio__652->SetMarkerStyle(20);
   data_mc_ratio__652->SetMarkerSize(1.2);
   data_mc_ratio__652->GetXaxis()->SetTitle("dPhi_{Zb1}");
   data_mc_ratio__652->GetXaxis()->SetRange(1,31);
   data_mc_ratio__652->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__652->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__652->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__652->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__652->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__652->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__652->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__652->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__652->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__652->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__652->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__652->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__652->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__652->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__652->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__652->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__652->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1652[30] = {
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
   Double_t Graph_from_mc_statistical_error_fy1652[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1652[30] = {
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
   Double_t Graph_from_mc_statistical_error_fey1652[30] = {
   0.1066111,
   0.09096781,
   0.1434795,
   0.1053329,
   0.1104025,
   0.1188341,
   0.1049827,
   0.09351842,
   0.1179833,
   0.1061149,
   0.1053811,
   0.09655766,
   0.07892045,
   0.0794873,
   0.08000859,
   0.08491157,
   0.08441753,
   0.07635091,
   0.07813593,
   0.07636543,
   0.07562902,
   0.06764206,
   0.07149986,
   0.07946174,
   0.07108266,
   0.0725503,
   0.07312236,
   0.06980887,
   0.0665096,
   0.07452952};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1652,Graph_from_mc_statistical_error_fy1652,Graph_from_mc_statistical_error_fex1652,Graph_from_mc_statistical_error_fey1652);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1652 = new TH1F("Graph_Graph_from_mc_statistical_error1652","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1652->SetMinimum(0.8278246);
   Graph_Graph_from_mc_statistical_error1652->SetMaximum(1.172175);
   Graph_Graph_from_mc_statistical_error1652->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1652->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1652->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1652->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1652->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1652->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1652->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1652->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1652->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1652->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1652->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1652->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1652->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1652->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1652->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1652->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1652);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->Modified();
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->cd();
   dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo->SetSelected(dPhi_Zb1_Z_2bjet_Zmm_17_amcnlo);
}

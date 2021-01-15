void dPhi_2b_Z_2bjet_Zee_18_amcnlo()
{
//=========Macro generated from canvas: dPhi_2b_Z_2bjet_Zee_18_amcnlo/dPhi_2b_Z_2bjet_Zee_18_amcnlo
//=========  (Thu Jan 14 10:42:51 2021) by ROOT version 6.14/09
   TCanvas *dPhi_2b_Z_2bjet_Zee_18_amcnlo = new TCanvas("dPhi_2b_Z_2bjet_Zee_18_amcnlo", "dPhi_2b_Z_2bjet_Zee_18_amcnlo",0,0,600,600);
   dPhi_2b_Z_2bjet_Zee_18_amcnlo->SetHighLightColor(2);
   dPhi_2b_Z_2bjet_Zee_18_amcnlo->Range(0,0,1,1);
   dPhi_2b_Z_2bjet_Zee_18_amcnlo->SetFillColor(0);
   dPhi_2b_Z_2bjet_Zee_18_amcnlo->SetFillStyle(4000);
   dPhi_2b_Z_2bjet_Zee_18_amcnlo->SetBorderMode(0);
   dPhi_2b_Z_2bjet_Zee_18_amcnlo->SetBorderSize(2);
   dPhi_2b_Z_2bjet_Zee_18_amcnlo->SetFrameFillStyle(1000);
   dPhi_2b_Z_2bjet_Zee_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4813718,-1.044735,3.306273,1053.69);
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
   st->SetMaximum(903.0632);
   Double_t xAxis19[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1F *st_stack_227 = new TH1F("st_stack_227","",31, xAxis19);
   st_stack_227->SetMinimum(0.01);
   st_stack_227->SetMaximum(948.2163);
   st_stack_227->SetDirectory(0);
   st_stack_227->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_227->SetLineColor(ci);
   st_stack_227->GetXaxis()->SetRange(1,31);
   st_stack_227->GetXaxis()->SetLabelFont(42);
   st_stack_227->GetXaxis()->SetLabelSize(0.035);
   st_stack_227->GetXaxis()->SetTitleSize(0.035);
   st_stack_227->GetXaxis()->SetTitleFont(42);
   st_stack_227->GetYaxis()->SetTitle("Events/0.10000000149");
   st_stack_227->GetYaxis()->SetLabelFont(42);
   st_stack_227->GetYaxis()->SetLabelSize(0.05);
   st_stack_227->GetYaxis()->SetTitleSize(0.057);
   st_stack_227->GetYaxis()->SetTitleOffset(1.2);
   st_stack_227->GetYaxis()->SetTitleFont(42);
   st_stack_227->GetZaxis()->SetLabelFont(42);
   st_stack_227->GetZaxis()->SetLabelSize(0.035);
   st_stack_227->GetZaxis()->SetTitleSize(0.035);
   st_stack_227->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_227);
   
   Double_t xAxis20[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_dPhi_2b_stack_1 = new TH1D("Zee_2bjet_dPhi_2b_stack_1","",31, xAxis20);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(1,0.5192845);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(2,0.8091614);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(3,0.5240903);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(4,1.500477);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(5,0.6888278);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(6,0.9213462);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(8,0.614661);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(9,0.2912697);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(10,1.042417);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(11,2.059478);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(12,0.2920918);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(13,2.109928);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(14,1.203447);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(15,1.395845);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(16,2.605351);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(17,2.204529);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(18,1.75547);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(19,1.445065);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(20,2.280719);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(21,1.02278);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(22,2.210807);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(23,1.533886);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(24,1.21843);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(25,1.215611);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(26,1.628516);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(27,2.033699);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(28,2.005297);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(29,2.43752);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(30,2.957121);
   Zee_2bjet_dPhi_2b_stack_1->SetBinContent(31,5.621546);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(1,0.3400694);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(2,0.4056911);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(3,0.371636);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(4,0.6293239);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(5,0.4032612);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(6,0.4578996);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(8,0.3777079);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(9,0.217759);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(10,0.5488307);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(11,0.7506086);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(12,0.2534794);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(13,0.7734892);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(14,0.607423);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(15,0.6331003);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(16,0.8787229);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(17,0.8078439);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(18,0.7202574);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(19,0.6487567);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(20,0.742741);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(21,0.4892957);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(22,0.8061801);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(23,0.6250064);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(24,0.549599);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(25,0.5385951);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(26,0.6832565);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(27,0.7120138);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(28,0.7833219);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(29,0.8209649);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(30,0.8130413);
   Zee_2bjet_dPhi_2b_stack_1->SetBinError(31,1.23576);
   Zee_2bjet_dPhi_2b_stack_1->SetEntries(215);

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
   Double_t xAxis21[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_dPhi_2b_stack_2 = new TH1D("Zee_2bjet_dPhi_2b_stack_2","",31, xAxis21);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(1,0.8881213);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(2,2.560131);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(3,1.513285);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(4,1.450678);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(5,2.665024);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(6,0.4289079);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(7,2.331535);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(8,1.382645);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(9,1.519257);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(10,2.578289);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(11,2.954656);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(12,6.529208);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(13,3.678574);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(14,2.465555);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(15,2.038829);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(16,5.138499);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(17,5.406643);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(18,4.221901);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(19,2.6407);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(20,3.415161);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(21,3.609564);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(22,3.166413);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(23,1.433605);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(24,3.554016);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(25,2.570746);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(26,4.649678);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(27,3.63);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(28,3.918217);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(29,6.470063);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(30,4.140757);
   Zee_2bjet_dPhi_2b_stack_2->SetBinContent(31,4.880985);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(1,0.6910452);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(2,1.153954);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(3,0.9011256);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(4,0.8658308);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(5,1.198775);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(6,0.4289079);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(7,1.075743);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(8,0.7998241);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(9,0.7923289);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(10,1.06425);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(11,1.225505);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(12,1.92304);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(13,1.377072);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(14,1.00755);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(15,0.9559939);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(16,1.567707);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(17,1.652472);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(18,1.563815);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(19,1.174976);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(20,1.372279);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(21,1.255103);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(22,1.308094);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(23,0.7042914);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(24,1.358923);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(25,1.115799);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(26,1.484767);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(27,1.402852);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(28,1.438653);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(29,1.826493);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(30,1.339333);
   Zee_2bjet_dPhi_2b_stack_2->SetBinError(31,1.527494);
   Zee_2bjet_dPhi_2b_stack_2->SetEntries(218);

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
   Double_t xAxis22[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_dPhi_2b_stack_3 = new TH1D("Zee_2bjet_dPhi_2b_stack_3","",31, xAxis22);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(1,23.65445);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(2,22.69516);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(3,24.73376);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(4,26.88335);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(5,30.19261);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(6,32.93142);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(7,31.80062);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(8,36.04042);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(9,38.17759);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(10,39.35034);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(11,40.54076);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(12,40.65119);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(13,44.3408);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(14,46.48563);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(15,46.93312);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(16,50.02199);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(17,54.25766);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(18,53.84843);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(19,59.26805);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(20,60.98193);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(21,66.34709);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(22,71.12359);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(23,74.49716);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(24,80.63875);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(25,86.31211);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(26,89.76438);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(27,98.04805);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(28,102.8777);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(29,99.52885);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(30,102.4039);
   Zee_2bjet_dPhi_2b_stack_3->SetBinContent(31,147.5077);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(1,1.406681);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(2,1.385621);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(3,1.446848);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(4,1.507336);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(5,1.586952);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(6,1.669837);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(7,1.641839);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(8,1.740233);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(9,1.772892);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(10,1.81565);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(11,1.835843);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(12,1.834014);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(13,1.91729);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(14,1.968614);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(15,1.98576);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(16,2.041759);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(17,2.154253);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(18,2.107319);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(19,2.251338);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(20,2.259209);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(21,2.337926);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(22,2.423312);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(23,2.474434);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(24,2.612732);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(25,2.677868);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(26,2.712757);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(27,2.864149);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(28,2.893649);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(29,2.88741);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(30,2.899124);
   Zee_2bjet_dPhi_2b_stack_3->SetBinError(31,3.491056);
   Zee_2bjet_dPhi_2b_stack_3->SetEntries(24408);

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
   Double_t xAxis23[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_XX_dPhi_2b_stack_4 = new TH1D("Zee_2bjet_XX_dPhi_2b_stack_4","",31, xAxis23);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(2,2.053401);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(4,1.847874);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(5,1.072822);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(8,-1.217016);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(10,1.136093);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(11,0.3909382);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(12,0.9581298);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(14,0.8067674);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(15,1.32225);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(18,1.472574);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(19,-0.1369953);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(21,8.546154);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(22,2.466732);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(23,1.115153);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(24,3.545991);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(25,-0.6415181);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(26,-0.2846472);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(27,0.9485595);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(28,1.624871);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(29,1.259167);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(30,3.849774);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinContent(31,10.72188);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(2,2.053401);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(4,2.348155);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(5,1.072822);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(8,1.217016);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(10,1.136093);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(11,0.3909382);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(12,0.9581298);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(14,0.8067674);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(15,1.146555);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(18,2.164703);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(19,0.9427627);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(21,10.2275);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(22,1.751826);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(23,1.115153);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(24,3.545991);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(25,0.6415181);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(26,1.735185);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(27,0.9485595);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(28,1.624871);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(29,1.119125);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(30,3.007352);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetBinError(31,7.059571);
   Zee_2bjet_XX_dPhi_2b_stack_4->SetEntries(40);

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
   Double_t xAxis24[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_bX_dPhi_2b_stack_5 = new TH1D("Zee_2bjet_bX_dPhi_2b_stack_5","",31, xAxis24);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(1,3.455032);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(2,0.3980231);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(3,3.879616);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(4,5.52462);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(5,4.550415);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(6,0.08272026);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(7,-3.904085);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(8,0.6320202);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(9,3.914266);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(10,2.85741);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(11,3.016492);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(12,2.505018);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(13,3.775925);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(14,-4.105123);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(15,5.081005);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(16,0.5466741);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(17,0.7315677);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(18,2.16252);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(19,1.13239);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(20,2.79667);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(21,3.607868);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(22,4.260256);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(23,5.605783);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(24,-1.488278);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(25,1.73113);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(26,0.8508604);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(27,4.952911);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(28,1.3841);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(29,-0.9187037);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(30,9.286041);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinContent(31,-0.2705421);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(1,1.966235);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(2,0.3980231);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(3,3.340837);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(4,4.267888);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(5,2.261209);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(6,2.30679);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(7,2.739061);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(8,0.6320202);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(9,3.615132);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(10,2.026565);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(11,2.854831);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(12,1.78495);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(13,3.836942);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(14,3.24351);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(15,3.577017);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(16,2.482622);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(17,2.613539);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(18,3.565754);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(19,1.13239);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(20,3.379375);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(21,3.26048);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(22,3.279793);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(23,3.074211);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(24,2.629402);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(25,3.313027);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(26,2.91002);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(27,4.032588);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(28,1.729215);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(29,4.00555);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(30,4.374353);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetBinError(31,5.575647);
   Zee_2bjet_bX_dPhi_2b_stack_5->SetEntries(197);

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
   Double_t xAxis25[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_bb_dPhi_2b_stack_6 = new TH1D("Zee_2bjet_bb_dPhi_2b_stack_6","",31, xAxis25);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(1,58.55255);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(2,69.59996);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(3,87.03563);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(4,56.30173);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(5,125.7251);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(6,109.3659);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(7,117.1044);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(8,84.37921);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(9,94.6183);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(10,84.83573);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(11,102.2069);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(12,98.27408);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(13,89.12688);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(14,115.8063);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(15,96.53857);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(16,84.7242);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(17,114.731);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(18,97.49904);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(19,119.0677);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(20,105.5501);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(21,138.0973);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(22,134.9104);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(23,130.3972);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(24,151.2479);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(25,170.6309);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(26,220.6642);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(27,132.4348);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(28,215.4648);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(29,193.2282);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(30,202.3732);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinContent(31,328.2231);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(1,15.12849);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(2,14.47361);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(3,15.60145);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(4,15.28838);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(5,21.23085);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(6,17.41566);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(7,17.1149);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(8,16.96594);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(9,16.47181);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(10,16.60335);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(11,17.40592);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(12,18.21211);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(13,17.23614);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(14,18.70914);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(15,16.23863);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(16,18.43497);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(17,18.00746);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(18,18.83664);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(19,21.6839);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(20,18.96905);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(21,20.17119);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(22,20.77832);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(23,21.43915);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(24,22.31314);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(25,23.8371);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(26,23.64783);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(27,23.99889);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(28,25.38168);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(29,24.72424);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(30,25.92376);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetBinError(31,31.08958);
   Zee_2bjet_bb_dPhi_2b_stack_6->SetEntries(11144);

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
   Double_t xAxis26[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *Zee_2bjet_dPhi_2b__453 = new TH1D("Zee_2bjet_dPhi_2b__453","",31, xAxis26);
   Zee_2bjet_dPhi_2b__453->SetBinContent(1,83);
   Zee_2bjet_dPhi_2b__453->SetBinContent(2,98);
   Zee_2bjet_dPhi_2b__453->SetBinContent(3,84);
   Zee_2bjet_dPhi_2b__453->SetBinContent(4,102);
   Zee_2bjet_dPhi_2b__453->SetBinContent(5,119);
   Zee_2bjet_dPhi_2b__453->SetBinContent(6,147);
   Zee_2bjet_dPhi_2b__453->SetBinContent(7,148);
   Zee_2bjet_dPhi_2b__453->SetBinContent(8,118);
   Zee_2bjet_dPhi_2b__453->SetBinContent(9,128);
   Zee_2bjet_dPhi_2b__453->SetBinContent(10,118);
   Zee_2bjet_dPhi_2b__453->SetBinContent(11,131);
   Zee_2bjet_dPhi_2b__453->SetBinContent(12,114);
   Zee_2bjet_dPhi_2b__453->SetBinContent(13,137);
   Zee_2bjet_dPhi_2b__453->SetBinContent(14,117);
   Zee_2bjet_dPhi_2b__453->SetBinContent(15,121);
   Zee_2bjet_dPhi_2b__453->SetBinContent(16,145);
   Zee_2bjet_dPhi_2b__453->SetBinContent(17,143);
   Zee_2bjet_dPhi_2b__453->SetBinContent(18,136);
   Zee_2bjet_dPhi_2b__453->SetBinContent(19,148);
   Zee_2bjet_dPhi_2b__453->SetBinContent(20,171);
   Zee_2bjet_dPhi_2b__453->SetBinContent(21,165);
   Zee_2bjet_dPhi_2b__453->SetBinContent(22,194);
   Zee_2bjet_dPhi_2b__453->SetBinContent(23,211);
   Zee_2bjet_dPhi_2b__453->SetBinContent(24,209);
   Zee_2bjet_dPhi_2b__453->SetBinContent(25,187);
   Zee_2bjet_dPhi_2b__453->SetBinContent(26,225);
   Zee_2bjet_dPhi_2b__453->SetBinContent(27,226);
   Zee_2bjet_dPhi_2b__453->SetBinContent(28,268);
   Zee_2bjet_dPhi_2b__453->SetBinContent(29,233);
   Zee_2bjet_dPhi_2b__453->SetBinContent(30,258);
   Zee_2bjet_dPhi_2b__453->SetBinContent(31,386);
   Zee_2bjet_dPhi_2b__453->SetBinError(1,9.110434);
   Zee_2bjet_dPhi_2b__453->SetBinError(2,9.899495);
   Zee_2bjet_dPhi_2b__453->SetBinError(3,9.165151);
   Zee_2bjet_dPhi_2b__453->SetBinError(4,10.0995);
   Zee_2bjet_dPhi_2b__453->SetBinError(5,10.90871);
   Zee_2bjet_dPhi_2b__453->SetBinError(6,12.12436);
   Zee_2bjet_dPhi_2b__453->SetBinError(7,12.16553);
   Zee_2bjet_dPhi_2b__453->SetBinError(8,10.86278);
   Zee_2bjet_dPhi_2b__453->SetBinError(9,11.31371);
   Zee_2bjet_dPhi_2b__453->SetBinError(10,10.86278);
   Zee_2bjet_dPhi_2b__453->SetBinError(11,11.44552);
   Zee_2bjet_dPhi_2b__453->SetBinError(12,10.67708);
   Zee_2bjet_dPhi_2b__453->SetBinError(13,11.7047);
   Zee_2bjet_dPhi_2b__453->SetBinError(14,10.81665);
   Zee_2bjet_dPhi_2b__453->SetBinError(15,11);
   Zee_2bjet_dPhi_2b__453->SetBinError(16,12.04159);
   Zee_2bjet_dPhi_2b__453->SetBinError(17,11.95826);
   Zee_2bjet_dPhi_2b__453->SetBinError(18,11.6619);
   Zee_2bjet_dPhi_2b__453->SetBinError(19,12.16553);
   Zee_2bjet_dPhi_2b__453->SetBinError(20,13.0767);
   Zee_2bjet_dPhi_2b__453->SetBinError(21,12.84523);
   Zee_2bjet_dPhi_2b__453->SetBinError(22,13.92839);
   Zee_2bjet_dPhi_2b__453->SetBinError(23,14.52584);
   Zee_2bjet_dPhi_2b__453->SetBinError(24,14.45683);
   Zee_2bjet_dPhi_2b__453->SetBinError(25,13.67479);
   Zee_2bjet_dPhi_2b__453->SetBinError(26,15);
   Zee_2bjet_dPhi_2b__453->SetBinError(27,15.0333);
   Zee_2bjet_dPhi_2b__453->SetBinError(28,16.37071);
   Zee_2bjet_dPhi_2b__453->SetBinError(29,15.26434);
   Zee_2bjet_dPhi_2b__453->SetBinError(30,16.06238);
   Zee_2bjet_dPhi_2b__453->SetBinError(31,19.64688);
   Zee_2bjet_dPhi_2b__453->SetEntries(5070);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dPhi_2b__453->SetLineColor(ci);
   Zee_2bjet_dPhi_2b__453->SetLineWidth(2);
   Zee_2bjet_dPhi_2b__453->SetMarkerStyle(20);
   Zee_2bjet_dPhi_2b__453->SetMarkerSize(1.2);
   Zee_2bjet_dPhi_2b__453->GetXaxis()->SetRange(1,31);
   Zee_2bjet_dPhi_2b__453->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b__453->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b__453->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b__453->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b__453->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b__453->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b__453->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b__453->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dPhi_2b__453->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b__453->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dPhi_2b__453->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dPhi_2b__453->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dPhi_2b__453->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dPhi_2b__453->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dPhi_2b_fx1453[31] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dPhi_2b_fy1453[31] = {
   87.06943,
   98.11584,
   117.6864,
   93.50872,
   164.8948,
   143.7303,
   147.3324,
   121.8319,
   138.5207,
   131.8003,
   151.1692,
   149.2097,
   143.0321,
   162.6626,
   153.3096,
   143.0367,
   177.3314,
   160.9599,
   183.4169,
   175.0246,
   221.2308,
   218.1382,
   214.5828,
   238.7169,
   261.819,
   317.273,
   242.048,
   327.275,
   302.005,
   325.0108,
   496.6847};
   Double_t Graph_from_Zee_2bjet_bb_dPhi_2b_fex1453[31] = {
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
   Double_t Graph_from_Zee_2bjet_bb_dPhi_2b_fey1453[31] = {
   15.3398,
   14.7403,
   16.05023,
   16.15181,
   21.47396,
   17.6581,
   17.44349,
   17.13284,
   16.97669,
   16.9056,
   17.79619,
   18.51786,
   17.83192,
   19.14322,
   16.82441,
   18.79921,
   18.4153,
   19.48395,
   21.89138,
   19.46237,
   23.00847,
   21.30253,
   21.84814,
   22.94208,
   24.25492,
   24.09832,
   24.57207,
   25.7083,
   25.31664,
   26.66609,
   32.61189};
   TGraphErrors *gre = new TGraphErrors(31,Graph_from_Zee_2bjet_bb_dPhi_2b_fx1453,Graph_from_Zee_2bjet_bb_dPhi_2b_fy1453,Graph_from_Zee_2bjet_bb_dPhi_2b_fex1453,Graph_from_Zee_2bjet_bb_dPhi_2b_fey1453);
   gre->SetName("Graph_from_Zee_2bjet_bb_dPhi_2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453","",100,0,3.455752);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453->SetMinimum(25.97294);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453->SetMaximum(575.0533);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dPhi_2b1453);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   dPhi_2b_Z_2bjet_Zee_18_amcnlo->cd();
  
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
   Double_t xAxis27[32] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.7, 1.8, 1.9, 2, 2.1, 2.2, 2.3, 2.4, 2.5, 2.6, 2.7, 2.8, 2.9, 3, 3.141593}; 
   
   TH1D *data_mc_ratio__454 = new TH1D("data_mc_ratio__454","",31, xAxis27);
   data_mc_ratio__454->SetBinContent(1,0.9532622);
   data_mc_ratio__454->SetBinContent(2,0.9988194);
   data_mc_ratio__454->SetBinContent(3,0.7137614);
   data_mc_ratio__454->SetBinContent(4,1.090807);
   data_mc_ratio__454->SetBinContent(5,0.7216724);
   data_mc_ratio__454->SetBinContent(6,1.022749);
   data_mc_ratio__454->SetBinContent(7,1.004531);
   data_mc_ratio__454->SetBinContent(8,0.9685473);
   data_mc_ratio__454->SetBinContent(9,0.9240497);
   data_mc_ratio__454->SetBinContent(10,0.895294);
   data_mc_ratio__454->SetBinContent(11,0.8665785);
   data_mc_ratio__454->SetBinContent(12,0.7640253);
   data_mc_ratio__454->SetBinContent(13,0.9578269);
   data_mc_ratio__454->SetBinContent(14,0.7192804);
   data_mc_ratio__454->SetBinContent(15,0.7892525);
   data_mc_ratio__454->SetBinContent(16,1.013726);
   data_mc_ratio__454->SetBinContent(17,0.8063998);
   data_mc_ratio__454->SetBinContent(18,0.8449308);
   data_mc_ratio__454->SetBinContent(19,0.8069047);
   data_mc_ratio__454->SetBinContent(20,0.9770054);
   data_mc_ratio__454->SetBinContent(21,0.7458276);
   data_mc_ratio__454->SetBinContent(22,0.8893443);
   data_mc_ratio__454->SetBinContent(23,0.9833036);
   data_mc_ratio__454->SetBinContent(24,0.8755142);
   data_mc_ratio__454->SetBinContent(25,0.7142339);
   data_mc_ratio__454->SetBinContent(26,0.7091684);
   data_mc_ratio__454->SetBinContent(27,0.9336991);
   data_mc_ratio__454->SetBinContent(28,0.8188831);
   data_mc_ratio__454->SetBinContent(29,0.7715103);
   data_mc_ratio__454->SetBinContent(30,0.7938199);
   data_mc_ratio__454->SetBinContent(31,0.7771529);
   data_mc_ratio__454->SetBinError(1,0.1046341);
   data_mc_ratio__454->SetBinError(2,0.100896);
   data_mc_ratio__454->SetBinError(3,0.07787776);
   data_mc_ratio__454->SetBinError(4,0.108006);
   data_mc_ratio__454->SetBinError(5,0.0661556);
   data_mc_ratio__454->SetBinError(6,0.08435491);
   data_mc_ratio__454->SetBinError(7,0.08257195);
   data_mc_ratio__454->SetBinError(8,0.08916201);
   data_mc_ratio__454->SetBinError(9,0.08167523);
   data_mc_ratio__454->SetBinError(10,0.08241849);
   data_mc_ratio__454->SetBinError(11,0.07571331);
   data_mc_ratio__454->SetBinError(12,0.07155753);
   data_mc_ratio__454->SetBinError(13,0.08183267);
   data_mc_ratio__454->SetBinError(14,0.06649749);
   data_mc_ratio__454->SetBinError(15,0.07175023);
   data_mc_ratio__454->SetBinError(16,0.08418534);
   data_mc_ratio__454->SetBinError(17,0.06743454);
   data_mc_ratio__454->SetBinError(18,0.07245222);
   data_mc_ratio__454->SetBinError(19,0.06632716);
   data_mc_ratio__454->SetBinError(20,0.07471347);
   data_mc_ratio__454->SetBinError(21,0.0580626);
   data_mc_ratio__454->SetBinError(22,0.0638512);
   data_mc_ratio__454->SetBinError(23,0.06769341);
   data_mc_ratio__454->SetBinError(24,0.06056058);
   data_mc_ratio__454->SetBinError(25,0.05222996);
   data_mc_ratio__454->SetBinError(26,0.04727789);
   data_mc_ratio__454->SetBinError(27,0.06210874);
   data_mc_ratio__454->SetBinError(28,0.05002125);
   data_mc_ratio__454->SetBinError(29,0.05054332);
   data_mc_ratio__454->SetBinError(30,0.04942107);
   data_mc_ratio__454->SetBinError(31,0.03955604);
   data_mc_ratio__454->SetMinimum(0.4);
   data_mc_ratio__454->SetMaximum(1.6);
   data_mc_ratio__454->SetEntries(1408.526);
   data_mc_ratio__454->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__454->SetLineColor(ci);
   data_mc_ratio__454->SetLineWidth(2);
   data_mc_ratio__454->SetMarkerStyle(20);
   data_mc_ratio__454->SetMarkerSize(1.2);
   data_mc_ratio__454->GetXaxis()->SetTitle("dPhi_{bb}");
   data_mc_ratio__454->GetXaxis()->SetRange(1,31);
   data_mc_ratio__454->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__454->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__454->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__454->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__454->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__454->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__454->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__454->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__454->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__454->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__454->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__454->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__454->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__454->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__454->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__454->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__454->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1454[31] = {
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
   Double_t Graph_from_mc_statistical_error_fy1454[31] = {
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
   Double_t Graph_from_mc_statistical_error_fex1454[31] = {
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
   Double_t Graph_from_mc_statistical_error_fey1454[31] = {
   0.1761789,
   0.1502337,
   0.1363814,
   0.1727305,
   0.1302283,
   0.1228558,
   0.1183954,
   0.1406269,
   0.1225571,
   0.1282668,
   0.1177236,
   0.1241063,
   0.1246707,
   0.1176867,
   0.1097414,
   0.1314293,
   0.1038468,
   0.1210485,
   0.1193531,
   0.1111979,
   0.1040022,
   0.09765611,
   0.1018168,
   0.09610584,
   0.09264003,
   0.07595453,
   0.1015173,
   0.07855259,
   0.08382854,
   0.08204679,
   0.06565913};
   gre = new TGraphErrors(31,Graph_from_mc_statistical_error_fx1454,Graph_from_mc_statistical_error_fy1454,Graph_from_mc_statistical_error_fex1454,Graph_from_mc_statistical_error_fey1454);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1454 = new TH1F("Graph_Graph_from_mc_statistical_error1454","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1454->SetMinimum(0.7885853);
   Graph_Graph_from_mc_statistical_error1454->SetMaximum(1.211415);
   Graph_Graph_from_mc_statistical_error1454->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1454->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1454->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1454->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1454->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1454->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1454->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1454->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1454->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1454->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1454->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1454->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1454->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1454->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1454->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1454->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1454);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.141593,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_2b_Z_2bjet_Zee_18_amcnlo->cd();
   dPhi_2b_Z_2bjet_Zee_18_amcnlo->Modified();
   dPhi_2b_Z_2bjet_Zee_18_amcnlo->cd();
   dPhi_2b_Z_2bjet_Zee_18_amcnlo->SetSelected(dPhi_2b_Z_2bjet_Zee_18_amcnlo);
}

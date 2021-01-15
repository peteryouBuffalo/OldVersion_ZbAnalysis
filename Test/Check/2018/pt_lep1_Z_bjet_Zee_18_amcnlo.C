void pt_lep1_Z_bjet_Zee_18_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_bjet_Zee_18_amcnlo/pt_lep1_Z_bjet_Zee_18_amcnlo
//=========  (Thu Jan 14 10:42:29 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_bjet_Zee_18_amcnlo = new TCanvas("pt_lep1_Z_bjet_Zee_18_amcnlo", "pt_lep1_Z_bjet_Zee_18_amcnlo",0,0,600,600);
   pt_lep1_Z_bjet_Zee_18_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_bjet_Zee_18_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_bjet_Zee_18_amcnlo->SetFillColor(0);
   pt_lep1_Z_bjet_Zee_18_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_bjet_Zee_18_amcnlo->SetBorderMode(0);
   pt_lep1_Z_bjet_Zee_18_amcnlo->SetBorderSize(2);
   pt_lep1_Z_bjet_Zee_18_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_bjet_Zee_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-64.23106,210.4839,64176.83);
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
   st->SetMaximum(55002.59);
   
   TH1F *st_stack_87 = new TH1F("st_stack_87","",40,0,200);
   st_stack_87->SetMinimum(0.01);
   st_stack_87->SetMaximum(57752.72);
   st_stack_87->SetDirectory(0);
   st_stack_87->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_87->SetLineColor(ci);
   st_stack_87->GetXaxis()->SetRange(1,40);
   st_stack_87->GetXaxis()->SetLabelFont(42);
   st_stack_87->GetXaxis()->SetLabelSize(0.035);
   st_stack_87->GetXaxis()->SetTitleSize(0.035);
   st_stack_87->GetXaxis()->SetTitleFont(42);
   st_stack_87->GetYaxis()->SetTitle("Events/5.0");
   st_stack_87->GetYaxis()->SetLabelFont(42);
   st_stack_87->GetYaxis()->SetLabelSize(0.05);
   st_stack_87->GetYaxis()->SetTitleSize(0.057);
   st_stack_87->GetYaxis()->SetTitleOffset(1.2);
   st_stack_87->GetYaxis()->SetTitleFont(42);
   st_stack_87->GetZaxis()->SetLabelFont(42);
   st_stack_87->GetZaxis()->SetLabelSize(0.035);
   st_stack_87->GetZaxis()->SetTitleSize(0.035);
   st_stack_87->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_87);
   
   
   TH1D *Zee_bjet_pt_lep1_stack_1 = new TH1D("Zee_bjet_pt_lep1_stack_1","",40,0,200);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(6,334.7492);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(7,356.5603);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(8,319.6397);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(9,238.948);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(10,155.9058);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(11,89.45017);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(12,48.3181);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(13,26.30644);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(14,16.17684);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(15,6.901553);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(16,5.639911);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(17,3.349937);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(18,1.611135);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(19,1.502786);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(20,2.338982);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(22,0.9771487);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(28,0.2942866);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(34,0.2367603);
   Zee_bjet_pt_lep1_stack_1->SetBinContent(39,0.3408085);
   Zee_bjet_pt_lep1_stack_1->SetBinError(6,9.467114);
   Zee_bjet_pt_lep1_stack_1->SetBinError(7,9.75229);
   Zee_bjet_pt_lep1_stack_1->SetBinError(8,9.16969);
   Zee_bjet_pt_lep1_stack_1->SetBinError(9,8.061536);
   Zee_bjet_pt_lep1_stack_1->SetBinError(10,6.422865);
   Zee_bjet_pt_lep1_stack_1->SetBinError(11,4.874342);
   Zee_bjet_pt_lep1_stack_1->SetBinError(12,3.552135);
   Zee_bjet_pt_lep1_stack_1->SetBinError(13,2.628194);
   Zee_bjet_pt_lep1_stack_1->SetBinError(14,2.07364);
   Zee_bjet_pt_lep1_stack_1->SetBinError(15,1.313145);
   Zee_bjet_pt_lep1_stack_1->SetBinError(16,1.251287);
   Zee_bjet_pt_lep1_stack_1->SetBinError(17,0.9502809);
   Zee_bjet_pt_lep1_stack_1->SetBinError(18,0.6506274);
   Zee_bjet_pt_lep1_stack_1->SetBinError(19,0.6224456);
   Zee_bjet_pt_lep1_stack_1->SetBinError(20,0.8662368);
   Zee_bjet_pt_lep1_stack_1->SetBinError(22,0.4931266);
   Zee_bjet_pt_lep1_stack_1->SetBinError(28,0.2942866);
   Zee_bjet_pt_lep1_stack_1->SetBinError(34,0.2367603);
   Zee_bjet_pt_lep1_stack_1->SetBinError(39,0.3408085);
   Zee_bjet_pt_lep1_stack_1->SetEntries(7147);

   ci = TColor::GetColor("#cccc00");
   Zee_bjet_pt_lep1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_pt_lep1_stack_1->SetLineColor(ci);
   Zee_bjet_pt_lep1_stack_1->GetXaxis()->SetRange(1,200);
   Zee_bjet_pt_lep1_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_pt_lep1_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_pt_lep1_stack_1,"");
   
   TH1D *Zee_bjet_pt_lep1_stack_2 = new TH1D("Zee_bjet_pt_lep1_stack_2","",40,0,200);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(6,176.4955);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(7,194.9378);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(8,189.4622);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(9,132.822);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(10,94.08806);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(11,51.92953);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(12,34.40896);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(13,23.73123);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(14,16.55277);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(15,16.99475);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(16,10.66255);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(17,9.165536);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(18,4.93024);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(19,4.880224);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(20,2.485317);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(21,4.291724);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(22,4.289627);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(23,4.767173);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(24,1.8923);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(25,2.84992);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(26,1.259);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(27,0.4840477);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(28,0.7236991);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(29,1.587152);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(30,1.496613);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(31,0.4509368);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(39,0.4697626);
   Zee_bjet_pt_lep1_stack_2->SetBinContent(41,1.985075);
   Zee_bjet_pt_lep1_stack_2->SetBinError(6,10.08257);
   Zee_bjet_pt_lep1_stack_2->SetBinError(7,10.34306);
   Zee_bjet_pt_lep1_stack_2->SetBinError(8,10.22079);
   Zee_bjet_pt_lep1_stack_2->SetBinError(9,8.227404);
   Zee_bjet_pt_lep1_stack_2->SetBinError(10,7.683513);
   Zee_bjet_pt_lep1_stack_2->SetBinError(11,5.47523);
   Zee_bjet_pt_lep1_stack_2->SetBinError(12,4.157625);
   Zee_bjet_pt_lep1_stack_2->SetBinError(13,3.509252);
   Zee_bjet_pt_lep1_stack_2->SetBinError(14,3.039633);
   Zee_bjet_pt_lep1_stack_2->SetBinError(15,3.16864);
   Zee_bjet_pt_lep1_stack_2->SetBinError(16,2.466833);
   Zee_bjet_pt_lep1_stack_2->SetBinError(17,2.447023);
   Zee_bjet_pt_lep1_stack_2->SetBinError(18,1.642491);
   Zee_bjet_pt_lep1_stack_2->SetBinError(19,1.577197);
   Zee_bjet_pt_lep1_stack_2->SetBinError(20,1.077645);
   Zee_bjet_pt_lep1_stack_2->SetBinError(21,1.816867);
   Zee_bjet_pt_lep1_stack_2->SetBinError(22,1.675706);
   Zee_bjet_pt_lep1_stack_2->SetBinError(23,1.632142);
   Zee_bjet_pt_lep1_stack_2->SetBinError(24,0.972966);
   Zee_bjet_pt_lep1_stack_2->SetBinError(25,1.264655);
   Zee_bjet_pt_lep1_stack_2->SetBinError(26,0.7504652);
   Zee_bjet_pt_lep1_stack_2->SetBinError(27,0.4840477);
   Zee_bjet_pt_lep1_stack_2->SetBinError(28,0.7236991);
   Zee_bjet_pt_lep1_stack_2->SetBinError(29,0.9396675);
   Zee_bjet_pt_lep1_stack_2->SetBinError(30,0.869113);
   Zee_bjet_pt_lep1_stack_2->SetBinError(31,0.4509368);
   Zee_bjet_pt_lep1_stack_2->SetBinError(39,0.4697626);
   Zee_bjet_pt_lep1_stack_2->SetBinError(41,1.173234);
   Zee_bjet_pt_lep1_stack_2->SetEntries(2071);

   ci = TColor::GetColor("#0000cc");
   Zee_bjet_pt_lep1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_pt_lep1_stack_2->SetLineColor(ci);
   Zee_bjet_pt_lep1_stack_2->GetXaxis()->SetRange(1,200);
   Zee_bjet_pt_lep1_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_pt_lep1_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_pt_lep1_stack_2,"");
   
   TH1D *Zee_bjet_pt_lep1_stack_3 = new TH1D("Zee_bjet_pt_lep1_stack_3","",40,0,200);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(6,4404.928);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(7,4802.805);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(8,4469.48);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(9,3346.874);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(10,2213.919);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(11,1289.306);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(12,684.8981);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(13,370.1493);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(14,186.8306);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(15,96.50007);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(16,51.24445);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(17,26.36663);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(18,16.47549);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(19,10.65152);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(20,6.588028);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(21,5.01098);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(22,3.883211);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(23,2.596459);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(24,1.46965);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(25,2.210828);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(26,0.7748457);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(27,0.5262234);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(28,0.6994084);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(29,0.2767875);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(30,0.5488216);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(31,0.154867);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(32,0.2839631);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(33,0.2341799);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(34,0.1265668);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(35,0.09425544);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(37,0.09146028);
   Zee_bjet_pt_lep1_stack_3->SetBinContent(39,0.0854631);
   Zee_bjet_pt_lep1_stack_3->SetBinError(6,19.53435);
   Zee_bjet_pt_lep1_stack_3->SetBinError(7,20.36588);
   Zee_bjet_pt_lep1_stack_3->SetBinError(8,19.60307);
   Zee_bjet_pt_lep1_stack_3->SetBinError(9,16.88828);
   Zee_bjet_pt_lep1_stack_3->SetBinError(10,13.74607);
   Zee_bjet_pt_lep1_stack_3->SetBinError(11,10.55138);
   Zee_bjet_pt_lep1_stack_3->SetBinError(12,7.694685);
   Zee_bjet_pt_lep1_stack_3->SetBinError(13,5.620589);
   Zee_bjet_pt_lep1_stack_3->SetBinError(14,4.045945);
   Zee_bjet_pt_lep1_stack_3->SetBinError(15,2.875819);
   Zee_bjet_pt_lep1_stack_3->SetBinError(16,2.113818);
   Zee_bjet_pt_lep1_stack_3->SetBinError(17,1.508551);
   Zee_bjet_pt_lep1_stack_3->SetBinError(18,1.200863);
   Zee_bjet_pt_lep1_stack_3->SetBinError(19,0.9662319);
   Zee_bjet_pt_lep1_stack_3->SetBinError(20,0.772573);
   Zee_bjet_pt_lep1_stack_3->SetBinError(21,0.6653188);
   Zee_bjet_pt_lep1_stack_3->SetBinError(22,0.6307189);
   Zee_bjet_pt_lep1_stack_3->SetBinError(23,0.4655413);
   Zee_bjet_pt_lep1_stack_3->SetBinError(24,0.3565108);
   Zee_bjet_pt_lep1_stack_3->SetBinError(25,0.4451356);
   Zee_bjet_pt_lep1_stack_3->SetBinError(26,0.2539987);
   Zee_bjet_pt_lep1_stack_3->SetBinError(27,0.209537);
   Zee_bjet_pt_lep1_stack_3->SetBinError(28,0.2577282);
   Zee_bjet_pt_lep1_stack_3->SetBinError(29,0.1402197);
   Zee_bjet_pt_lep1_stack_3->SetBinError(30,0.2137335);
   Zee_bjet_pt_lep1_stack_3->SetBinError(31,0.109513);
   Zee_bjet_pt_lep1_stack_3->SetBinError(32,0.1475313);
   Zee_bjet_pt_lep1_stack_3->SetBinError(33,0.1356379);
   Zee_bjet_pt_lep1_stack_3->SetBinError(34,0.09451704);
   Zee_bjet_pt_lep1_stack_3->SetBinError(35,0.09425544);
   Zee_bjet_pt_lep1_stack_3->SetBinError(37,0.09146028);
   Zee_bjet_pt_lep1_stack_3->SetBinError(39,0.0854631);
   Zee_bjet_pt_lep1_stack_3->SetEntries(288499);

   ci = TColor::GetColor("#cc0000");
   Zee_bjet_pt_lep1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_pt_lep1_stack_3->SetLineColor(ci);
   Zee_bjet_pt_lep1_stack_3->GetXaxis()->SetRange(1,200);
   Zee_bjet_pt_lep1_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_pt_lep1_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_pt_lep1_stack_3,"");
   
   TH1D *Zee_bjet_pt_lep1_stack_4 = new TH1D("Zee_bjet_pt_lep1_stack_4","",40,0,200);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(6,22585.76);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(7,24897.12);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(8,23032.03);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(9,17382.5);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(10,9427.554);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(11,4687.577);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(12,2910.424);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(13,1833.714);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(14,1170.237);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(15,912.8412);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(16,584.7952);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(17,414.5655);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(18,363.1992);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(19,293.7792);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(20,148.9643);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(21,153.6615);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(22,111.5247);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(23,112.9781);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(24,87.5293);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(25,63.31032);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(26,49.44008);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(27,27.47295);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(28,32.44028);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(29,32.21901);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(30,22.82437);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(31,13.79959);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(32,22.52505);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(33,15.98665);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(34,6.813661);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(35,2.007907);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(36,10.68399);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(37,12.73207);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(38,2.802066);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(39,6.279388);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(40,5.273215);
   Zee_bjet_pt_lep1_stack_4->SetBinContent(41,14.47341);
   Zee_bjet_pt_lep1_stack_4->SetBinError(6,277.7641);
   Zee_bjet_pt_lep1_stack_4->SetBinError(7,295.3237);
   Zee_bjet_pt_lep1_stack_4->SetBinError(8,287.7226);
   Zee_bjet_pt_lep1_stack_4->SetBinError(9,247.8307);
   Zee_bjet_pt_lep1_stack_4->SetBinError(10,179.4363);
   Zee_bjet_pt_lep1_stack_4->SetBinError(11,125.1706);
   Zee_bjet_pt_lep1_stack_4->SetBinError(12,95.49167);
   Zee_bjet_pt_lep1_stack_4->SetBinError(13,76.1387);
   Zee_bjet_pt_lep1_stack_4->SetBinError(14,60.95143);
   Zee_bjet_pt_lep1_stack_4->SetBinError(15,53.68087);
   Zee_bjet_pt_lep1_stack_4->SetBinError(16,44.04994);
   Zee_bjet_pt_lep1_stack_4->SetBinError(17,38.56548);
   Zee_bjet_pt_lep1_stack_4->SetBinError(18,33.82853);
   Zee_bjet_pt_lep1_stack_4->SetBinError(19,29.09089);
   Zee_bjet_pt_lep1_stack_4->SetBinError(20,24.87976);
   Zee_bjet_pt_lep1_stack_4->SetBinError(21,20.95145);
   Zee_bjet_pt_lep1_stack_4->SetBinError(22,20.38183);
   Zee_bjet_pt_lep1_stack_4->SetBinError(23,17.48784);
   Zee_bjet_pt_lep1_stack_4->SetBinError(24,19.42879);
   Zee_bjet_pt_lep1_stack_4->SetBinError(25,13.78912);
   Zee_bjet_pt_lep1_stack_4->SetBinError(26,12.89551);
   Zee_bjet_pt_lep1_stack_4->SetBinError(27,11.17795);
   Zee_bjet_pt_lep1_stack_4->SetBinError(28,10.07451);
   Zee_bjet_pt_lep1_stack_4->SetBinError(29,9.532621);
   Zee_bjet_pt_lep1_stack_4->SetBinError(30,7.946054);
   Zee_bjet_pt_lep1_stack_4->SetBinError(31,6.691995);
   Zee_bjet_pt_lep1_stack_4->SetBinError(32,6.378009);
   Zee_bjet_pt_lep1_stack_4->SetBinError(33,7.213625);
   Zee_bjet_pt_lep1_stack_4->SetBinError(34,5.410398);
   Zee_bjet_pt_lep1_stack_4->SetBinError(35,5.383498);
   Zee_bjet_pt_lep1_stack_4->SetBinError(36,4.062874);
   Zee_bjet_pt_lep1_stack_4->SetBinError(37,5.609931);
   Zee_bjet_pt_lep1_stack_4->SetBinError(38,4.471194);
   Zee_bjet_pt_lep1_stack_4->SetBinError(39,4.14954);
   Zee_bjet_pt_lep1_stack_4->SetBinError(40,3.604097);
   Zee_bjet_pt_lep1_stack_4->SetBinError(41,6.903416);
   Zee_bjet_pt_lep1_stack_4->SetEntries(283156);

   ci = TColor::GetColor("#00cc00");
   Zee_bjet_pt_lep1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_bjet_pt_lep1_stack_4->SetLineColor(ci);
   Zee_bjet_pt_lep1_stack_4->GetXaxis()->SetRange(1,200);
   Zee_bjet_pt_lep1_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_pt_lep1_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_bjet_pt_lep1_stack_4,"");
   st->Draw("hist");
   
   TH1D *Zee_bjet_pt_lep1__173 = new TH1D("Zee_bjet_pt_lep1__173","",40,0,200);
   Zee_bjet_pt_lep1__173->SetBinContent(6,23598);
   Zee_bjet_pt_lep1__173->SetBinContent(7,26288);
   Zee_bjet_pt_lep1__173->SetBinContent(8,25617);
   Zee_bjet_pt_lep1__173->SetBinContent(9,19566);
   Zee_bjet_pt_lep1__173->SetBinContent(10,10920);
   Zee_bjet_pt_lep1__173->SetBinContent(11,5921);
   Zee_bjet_pt_lep1__173->SetBinContent(12,3435);
   Zee_bjet_pt_lep1__173->SetBinContent(13,2170);
   Zee_bjet_pt_lep1__173->SetBinContent(14,1347);
   Zee_bjet_pt_lep1__173->SetBinContent(15,983);
   Zee_bjet_pt_lep1__173->SetBinContent(16,668);
   Zee_bjet_pt_lep1__173->SetBinContent(17,484);
   Zee_bjet_pt_lep1__173->SetBinContent(18,377);
   Zee_bjet_pt_lep1__173->SetBinContent(19,281);
   Zee_bjet_pt_lep1__173->SetBinContent(20,231);
   Zee_bjet_pt_lep1__173->SetBinContent(21,153);
   Zee_bjet_pt_lep1__173->SetBinContent(22,150);
   Zee_bjet_pt_lep1__173->SetBinContent(23,109);
   Zee_bjet_pt_lep1__173->SetBinContent(24,79);
   Zee_bjet_pt_lep1__173->SetBinContent(25,77);
   Zee_bjet_pt_lep1__173->SetBinContent(26,57);
   Zee_bjet_pt_lep1__173->SetBinContent(27,51);
   Zee_bjet_pt_lep1__173->SetBinContent(28,40);
   Zee_bjet_pt_lep1__173->SetBinContent(29,42);
   Zee_bjet_pt_lep1__173->SetBinContent(30,30);
   Zee_bjet_pt_lep1__173->SetBinContent(31,13);
   Zee_bjet_pt_lep1__173->SetBinContent(32,18);
   Zee_bjet_pt_lep1__173->SetBinContent(33,14);
   Zee_bjet_pt_lep1__173->SetBinContent(34,18);
   Zee_bjet_pt_lep1__173->SetBinContent(35,18);
   Zee_bjet_pt_lep1__173->SetBinContent(36,13);
   Zee_bjet_pt_lep1__173->SetBinContent(37,9);
   Zee_bjet_pt_lep1__173->SetBinContent(38,10);
   Zee_bjet_pt_lep1__173->SetBinContent(39,10);
   Zee_bjet_pt_lep1__173->SetBinContent(40,6);
   Zee_bjet_pt_lep1__173->SetBinContent(41,34);
   Zee_bjet_pt_lep1__173->SetBinError(6,153.6164);
   Zee_bjet_pt_lep1__173->SetBinError(7,162.1357);
   Zee_bjet_pt_lep1__173->SetBinError(8,160.0531);
   Zee_bjet_pt_lep1__173->SetBinError(9,139.8785);
   Zee_bjet_pt_lep1__173->SetBinError(10,104.4988);
   Zee_bjet_pt_lep1__173->SetBinError(11,76.94803);
   Zee_bjet_pt_lep1__173->SetBinError(12,58.60887);
   Zee_bjet_pt_lep1__173->SetBinError(13,46.58326);
   Zee_bjet_pt_lep1__173->SetBinError(14,36.7015);
   Zee_bjet_pt_lep1__173->SetBinError(15,31.35283);
   Zee_bjet_pt_lep1__173->SetBinError(16,25.8457);
   Zee_bjet_pt_lep1__173->SetBinError(17,22);
   Zee_bjet_pt_lep1__173->SetBinError(18,19.41649);
   Zee_bjet_pt_lep1__173->SetBinError(19,16.76305);
   Zee_bjet_pt_lep1__173->SetBinError(20,15.19868);
   Zee_bjet_pt_lep1__173->SetBinError(21,12.36932);
   Zee_bjet_pt_lep1__173->SetBinError(22,12.24745);
   Zee_bjet_pt_lep1__173->SetBinError(23,10.44031);
   Zee_bjet_pt_lep1__173->SetBinError(24,8.888194);
   Zee_bjet_pt_lep1__173->SetBinError(25,8.774964);
   Zee_bjet_pt_lep1__173->SetBinError(26,7.549834);
   Zee_bjet_pt_lep1__173->SetBinError(27,7.141428);
   Zee_bjet_pt_lep1__173->SetBinError(28,6.324555);
   Zee_bjet_pt_lep1__173->SetBinError(29,6.480741);
   Zee_bjet_pt_lep1__173->SetBinError(30,5.477226);
   Zee_bjet_pt_lep1__173->SetBinError(31,3.605551);
   Zee_bjet_pt_lep1__173->SetBinError(32,4.242641);
   Zee_bjet_pt_lep1__173->SetBinError(33,3.741657);
   Zee_bjet_pt_lep1__173->SetBinError(34,4.242641);
   Zee_bjet_pt_lep1__173->SetBinError(35,4.242641);
   Zee_bjet_pt_lep1__173->SetBinError(36,3.605551);
   Zee_bjet_pt_lep1__173->SetBinError(37,3);
   Zee_bjet_pt_lep1__173->SetBinError(38,3.162278);
   Zee_bjet_pt_lep1__173->SetBinError(39,3.162278);
   Zee_bjet_pt_lep1__173->SetBinError(40,2.44949);
   Zee_bjet_pt_lep1__173->SetBinError(41,5.830952);
   Zee_bjet_pt_lep1__173->SetEntries(122837);

   ci = TColor::GetColor("#000099");
   Zee_bjet_pt_lep1__173->SetLineColor(ci);
   Zee_bjet_pt_lep1__173->SetLineWidth(2);
   Zee_bjet_pt_lep1__173->SetMarkerStyle(20);
   Zee_bjet_pt_lep1__173->SetMarkerSize(1.2);
   Zee_bjet_pt_lep1__173->GetXaxis()->SetRange(1,200);
   Zee_bjet_pt_lep1__173->GetXaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1__173->GetXaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1__173->GetXaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1__173->GetXaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1__173->GetYaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1__173->GetYaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1__173->GetYaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1__173->GetYaxis()->SetTitleOffset(0);
   Zee_bjet_pt_lep1__173->GetYaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1__173->GetZaxis()->SetLabelFont(42);
   Zee_bjet_pt_lep1__173->GetZaxis()->SetLabelSize(0.035);
   Zee_bjet_pt_lep1__173->GetZaxis()->SetTitleSize(0.035);
   Zee_bjet_pt_lep1__173->GetZaxis()->SetTitleFont(42);
   Zee_bjet_pt_lep1__173->Draw("same E");
   
   Double_t Graph_from_Zee_bjet_pt_lep1_fx1173[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t Graph_from_Zee_bjet_pt_lep1_fy1173[40] = {
   0,
   0,
   0,
   0,
   0,
   27501.94,
   30251.43,
   28010.61,
   21101.14,
   11891.47,
   6118.263,
   3678.049,
   2253.901,
   1389.797,
   1033.238,
   652.3421,
   453.4476,
   386.216,
   310.8138,
   160.3766,
   162.9642,
   120.6747,
   120.3417,
   90.89125,
   68.37107,
   51.47393,
   28.48322,
   34.15767,
   34.08295,
   24.86981,
   14.40539,
   22.80901,
   16.22083,
   7.176988,
   2.102162,
   10.68399,
   12.82353,
   2.802066,
   7.175422,
   5.273215};
   Double_t Graph_from_Zee_bjet_pt_lep1_fex1173[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph_from_Zee_bjet_pt_lep1_fey1173[40] = {
   0,
   0,
   0,
   0,
   0,
   278.7934,
   296.3662,
   288.7163,
   248.6724,
   180.2405,
   125.8282,
   95.95713,
   76.47167,
   61.19629,
   53.86716,
   44.18729,
   38.68414,
   33.89591,
   29.15628,
   24.93012,
   21.0406,
   20.46627,
   17.57,
   19.4564,
   13.85414,
   12.91983,
   11.19039,
   10.10805,
   9.579849,
   7.9963,
   6.708065,
   6.379715,
   7.2149,
   5.4164,
   5.384323,
   4.062874,
   5.610676,
   4.471194,
   4.190801,
   3.604097};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zee_bjet_pt_lep1_fx1173,Graph_from_Zee_bjet_pt_lep1_fy1173,Graph_from_Zee_bjet_pt_lep1_fex1173,Graph_from_Zee_bjet_pt_lep1_fey1173);
   gre->SetName("Graph_from_Zee_bjet_pt_lep1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_bjet_pt_lep11173 = new TH1F("Graph_Graph_from_Zee_bjet_pt_lep11173","",100,0,220);
   Graph_Graph_from_Zee_bjet_pt_lep11173->SetMinimum(-3058.39);
   Graph_Graph_from_Zee_bjet_pt_lep11173->SetMaximum(33602.9);
   Graph_Graph_from_Zee_bjet_pt_lep11173->SetDirectory(0);
   Graph_Graph_from_Zee_bjet_pt_lep11173->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_bjet_pt_lep11173->SetLineColor(ci);
   Graph_Graph_from_Zee_bjet_pt_lep11173->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11173->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11173->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11173->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11173->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11173->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11173->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11173->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_bjet_pt_lep11173->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11173->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_bjet_pt_lep11173->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11173->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_bjet_pt_lep11173->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_bjet_pt_lep11173);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_bjet_pt_lep1","Data (Z(ee) + b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_bjet_pt_lep1_stack_4","Z+jets","F");

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
   entry=leg->AddEntry("Zee_bjet_pt_lep1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_bjet_pt_lep1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_bjet_pt_lep1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_bjet_pt_lep1","MC unc. (stat.)","fl");

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
   pt_lep1_Z_bjet_Zee_18_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-30.64508,-0.2774193,210.4839,1.658065);
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
   
   TH1D *data_mc_ratio__174 = new TH1D("data_mc_ratio__174","",40,0,200);
   data_mc_ratio__174->SetBinContent(6,0.8580487);
   data_mc_ratio__174->SetBinContent(7,0.8689838);
   data_mc_ratio__174->SetBinContent(8,0.9145462);
   data_mc_ratio__174->SetBinContent(9,0.9272483);
   data_mc_ratio__174->SetBinContent(10,0.9183055);
   data_mc_ratio__174->SetBinContent(11,0.9677584);
   data_mc_ratio__174->SetBinContent(12,0.933919);
   data_mc_ratio__174->SetBinContent(13,0.9627753);
   data_mc_ratio__174->SetBinContent(14,0.9692064);
   data_mc_ratio__174->SetBinContent(15,0.9513785);
   data_mc_ratio__174->SetBinContent(16,1.024003);
   data_mc_ratio__174->SetBinContent(17,1.067378);
   data_mc_ratio__174->SetBinContent(18,0.9761376);
   data_mc_ratio__174->SetBinContent(19,0.9040783);
   data_mc_ratio__174->SetBinContent(20,1.44036);
   data_mc_ratio__174->SetBinContent(21,0.9388563);
   data_mc_ratio__174->SetBinContent(22,1.243012);
   data_mc_ratio__174->SetBinContent(23,0.9057542);
   data_mc_ratio__174->SetBinContent(24,0.8691706);
   data_mc_ratio__174->SetBinContent(25,1.126207);
   data_mc_ratio__174->SetBinContent(26,1.107357);
   data_mc_ratio__174->SetBinContent(27,1.790528);
   data_mc_ratio__174->SetBinContent(28,1.17104);
   data_mc_ratio__174->SetBinContent(29,1.232288);
   data_mc_ratio__174->SetBinContent(30,1.206282);
   data_mc_ratio__174->SetBinContent(31,0.9024397);
   data_mc_ratio__174->SetBinContent(32,0.7891618);
   data_mc_ratio__174->SetBinContent(33,0.863088);
   data_mc_ratio__174->SetBinContent(34,2.508016);
   data_mc_ratio__174->SetBinContent(35,8.562613);
   data_mc_ratio__174->SetBinContent(36,1.216774);
   data_mc_ratio__174->SetBinContent(37,0.7018347);
   data_mc_ratio__174->SetBinContent(38,3.568795);
   data_mc_ratio__174->SetBinContent(39,1.393646);
   data_mc_ratio__174->SetBinContent(40,1.137826);
   data_mc_ratio__174->SetBinContent(41,2.065804);
   data_mc_ratio__174->SetBinError(6,0.005585658);
   data_mc_ratio__174->SetBinError(7,0.005359607);
   data_mc_ratio__174->SetBinError(8,0.005714017);
   data_mc_ratio__174->SetBinError(9,0.006628954);
   data_mc_ratio__174->SetBinError(10,0.008787713);
   data_mc_ratio__174->SetBinError(11,0.01257678);
   data_mc_ratio__174->SetBinError(12,0.01593477);
   data_mc_ratio__174->SetBinError(13,0.02066784);
   data_mc_ratio__174->SetBinError(14,0.02640781);
   data_mc_ratio__174->SetBinError(15,0.03034426);
   data_mc_ratio__174->SetBinError(16,0.03961985);
   data_mc_ratio__174->SetBinError(17,0.04851718);
   data_mc_ratio__174->SetBinError(18,0.05027364);
   data_mc_ratio__174->SetBinError(19,0.05393279);
   data_mc_ratio__174->SetBinError(20,0.09476873);
   data_mc_ratio__174->SetBinError(21,0.07590203);
   data_mc_ratio__174->SetBinError(22,0.1014915);
   data_mc_ratio__174->SetBinError(23,0.08675552);
   data_mc_ratio__174->SetBinError(24,0.09778933);
   data_mc_ratio__174->SetBinError(25,0.1283432);
   data_mc_ratio__174->SetBinError(26,0.146673);
   data_mc_ratio__174->SetBinError(27,0.2507241);
   data_mc_ratio__174->SetBinError(28,0.1851577);
   data_mc_ratio__174->SetBinError(29,0.1901461);
   data_mc_ratio__174->SetBinError(30,0.2202359);
   data_mc_ratio__174->SetBinError(31,0.2502917);
   data_mc_ratio__174->SetBinError(32,0.1860072);
   data_mc_ratio__174->SetBinError(33,0.23067);
   data_mc_ratio__174->SetBinError(34,0.591145);
   data_mc_ratio__174->SetBinError(35,2.018227);
   data_mc_ratio__174->SetBinError(36,0.3374723);
   data_mc_ratio__174->SetBinError(37,0.2339449);
   data_mc_ratio__174->SetBinError(38,1.128552);
   data_mc_ratio__174->SetBinError(39,0.4407097);
   data_mc_ratio__174->SetBinError(40,0.4645155);
   data_mc_ratio__174->SetBinError(41,0.9476314);
   data_mc_ratio__174->SetMinimum(0.4);
   data_mc_ratio__174->SetMaximum(1.6);
   data_mc_ratio__174->SetEntries(4.35824);
   data_mc_ratio__174->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__174->SetLineColor(ci);
   data_mc_ratio__174->SetLineWidth(2);
   data_mc_ratio__174->SetMarkerStyle(20);
   data_mc_ratio__174->SetMarkerSize(1.2);
   data_mc_ratio__174->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__174->GetXaxis()->SetRange(1,40);
   data_mc_ratio__174->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__174->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__174->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__174->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__174->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__174->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__174->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__174->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__174->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__174->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__174->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__174->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__174->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__174->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__174->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__174->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__174->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1174[40] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5,
   92.5,
   97.5,
   102.5,
   107.5,
   112.5,
   117.5,
   122.5,
   127.5,
   132.5,
   137.5,
   142.5,
   147.5,
   152.5,
   157.5,
   162.5,
   167.5,
   172.5,
   177.5,
   182.5,
   187.5,
   192.5,
   197.5};
   Double_t Graph_from_mc_statistical_error_fy1174[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1174[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t Graph_from_mc_statistical_error_fey1174[40] = {
   0,
   0,
   0,
   0,
   0,
   0.01013723,
   0.009796768,
   0.01030739,
   0.01178478,
   0.01515712,
   0.020566,
   0.02608914,
   0.03392859,
   0.04403254,
   0.05213434,
   0.06773637,
   0.08531116,
   0.08776411,
   0.09380626,
   0.1554474,
   0.1291118,
   0.1695987,
   0.146001,
   0.2140625,
   0.2026316,
   0.2509975,
   0.3928765,
   0.2959232,
   0.2810745,
   0.3215264,
   0.4656634,
   0.2797015,
   0.4447924,
   0.7546899,
   2.561326,
   0.3802767,
   0.4375297,
   1.595678,
   0.5840495,
   0.6834725};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1174,Graph_from_mc_statistical_error_fy1174,Graph_from_mc_statistical_error_fex1174,Graph_from_mc_statistical_error_fey1174);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1174 = new TH1F("Graph_Graph_from_mc_statistical_error1174","",100,0,220);
   Graph_Graph_from_mc_statistical_error1174->SetMinimum(-2.073592);
   Graph_Graph_from_mc_statistical_error1174->SetMaximum(4.073592);
   Graph_Graph_from_mc_statistical_error1174->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1174->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1174->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1174->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1174->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1174->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1174->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1174->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1174->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1174->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1174->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1174->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1174->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1174->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1174->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1174->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1174);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_bjet_Zee_18_amcnlo->cd();
   pt_lep1_Z_bjet_Zee_18_amcnlo->Modified();
   pt_lep1_Z_bjet_Zee_18_amcnlo->cd();
   pt_lep1_Z_bjet_Zee_18_amcnlo->SetSelected(pt_lep1_Z_bjet_Zee_18_amcnlo);
}

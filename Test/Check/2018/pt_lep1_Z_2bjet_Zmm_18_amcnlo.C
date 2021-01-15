void pt_lep1_Z_2bjet_Zmm_18_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_2bjet_Zmm_18_amcnlo/pt_lep1_Z_2bjet_Zmm_18_amcnlo
//=========  (Thu Jan 14 10:42:55 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_2bjet_Zmm_18_amcnlo = new TCanvas("pt_lep1_Z_2bjet_Zmm_18_amcnlo", "pt_lep1_Z_2bjet_Zmm_18_amcnlo",0,0,600,600);
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->SetFillColor(0);
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->SetBorderMode(0);
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->SetBorderSize(2);
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-5.480088,210.4839,5484.607);
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
   st->SetMaximum(4700.57);
   
   TH1F *st_stack_263 = new TH1F("st_stack_263","",40,0,200);
   st_stack_263->SetMinimum(0.01);
   st_stack_263->SetMaximum(4935.599);
   st_stack_263->SetDirectory(0);
   st_stack_263->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_263->SetLineColor(ci);
   st_stack_263->GetXaxis()->SetRange(1,40);
   st_stack_263->GetXaxis()->SetLabelFont(42);
   st_stack_263->GetXaxis()->SetLabelSize(0.035);
   st_stack_263->GetXaxis()->SetTitleSize(0.035);
   st_stack_263->GetXaxis()->SetTitleFont(42);
   st_stack_263->GetYaxis()->SetTitle("Events/5.0");
   st_stack_263->GetYaxis()->SetLabelFont(42);
   st_stack_263->GetYaxis()->SetLabelSize(0.05);
   st_stack_263->GetYaxis()->SetTitleSize(0.057);
   st_stack_263->GetYaxis()->SetTitleOffset(1.2);
   st_stack_263->GetYaxis()->SetTitleFont(42);
   st_stack_263->GetZaxis()->SetLabelFont(42);
   st_stack_263->GetZaxis()->SetLabelSize(0.035);
   st_stack_263->GetZaxis()->SetTitleSize(0.035);
   st_stack_263->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_263);
   
   
   TH1D *Zmm_2bjet_pt_lep1_stack_1 = new TH1D("Zmm_2bjet_pt_lep1_stack_1","",40,0,200);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(6,19.35004);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(7,21.40622);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(8,17.77146);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(9,16.64395);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(10,11.64366);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(11,7.989191);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(12,1.798496);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(13,2.019588);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(14,0.4785161);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(15,0.401436);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(16,0.2369833);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(18,0.2552427);
   Zmm_2bjet_pt_lep1_stack_1->SetBinContent(19,0.06585005);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(6,2.354787);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(7,2.518711);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(8,2.270549);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(9,2.347587);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(10,1.891903);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(11,1.557062);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(12,0.7458599);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(13,0.7245961);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(14,0.3383796);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(15,0.2841403);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(16,0.2369833);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(18,0.2056855);
   Zmm_2bjet_pt_lep1_stack_1->SetBinError(19,0.06585005);
   Zmm_2bjet_pt_lep1_stack_1->SetEntries(396);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_pt_lep1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_stack_1->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_stack_1,"");
   
   TH1D *Zmm_2bjet_pt_lep1_stack_2 = new TH1D("Zmm_2bjet_pt_lep1_stack_2","",40,0,200);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(6,43.86054);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(7,44.9974);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(8,34.95303);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(9,33.80234);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(10,16.22117);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(11,16.21893);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(12,6.315856);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(13,4.074906);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(14,3.80883);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(15,4.498258);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(16,2.159018);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(17,2.509591);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(18,0.9431804);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(19,1.609462);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(20,0.7753293);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(21,1.558739);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(22,0.7405091);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(24,0.2392898);
   Zmm_2bjet_pt_lep1_stack_2->SetBinContent(26,0.5514881);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(6,5.604166);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(7,4.790812);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(8,4.281821);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(9,4.183194);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(10,2.803685);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(11,2.966929);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(12,1.834858);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(13,1.466439);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(14,1.429387);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(15,1.534586);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(16,1.018975);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(17,1.269365);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(18,0.6681669);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(19,0.9424968);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(20,0.5231411);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(21,0.9032206);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(22,0.7405091);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(24,0.2392898);
   Zmm_2bjet_pt_lep1_stack_2->SetBinError(26,0.5514881);
   Zmm_2bjet_pt_lep1_stack_2->SetEntries(454);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_pt_lep1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_stack_2->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_stack_2,"");
   
   TH1D *Zmm_2bjet_pt_lep1_stack_3 = new TH1D("Zmm_2bjet_pt_lep1_stack_3","",40,0,200);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(6,741.8229);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(7,830.942);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(8,775.711);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(9,602.4706);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(10,422.0393);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(11,249.871);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(12,130.9307);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(13,67.77947);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(14,35.22379);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(15,16.91062);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(16,8.301216);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(17,5.02735);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(18,2.433417);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(19,1.295302);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(20,0.5352801);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(21,0.4313205);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(22,0.1510443);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(23,0.1597057);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(25,0.1211102);
   Zmm_2bjet_pt_lep1_stack_3->SetBinContent(29,0.01553304);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(6,8.187631);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(7,8.690583);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(8,8.397859);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(9,7.361441);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(10,6.22515);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(11,4.789012);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(12,3.412026);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(13,2.475586);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(14,1.786565);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(15,1.233593);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(16,0.8706423);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(17,0.929797);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(18,0.4694181);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(19,0.340119);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(20,0.2147265);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(21,0.2056702);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(22,0.1093069);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(23,0.1005033);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(25,0.1211102);
   Zmm_2bjet_pt_lep1_stack_3->SetBinError(29,0.01553304);
   Zmm_2bjet_pt_lep1_stack_3->SetEntries(48154);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_pt_lep1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1_stack_3->SetLineColor(ci);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_pt_lep1_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_pt_lep1_stack_4 = new TH1D("Zmm_2bjet_XX_pt_lep1_stack_4","",40,0,200);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(6,15.3864);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(7,51.30369);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(8,61.56756);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(9,75.95184);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(10,19.55607);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(11,0.2355702);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(12,1.429748);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(13,2.195184);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(14,-0.2133732);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(15,4.115781);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(17,1.533974);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(23,1.081239);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinContent(41,-1.098424);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(6,15.0919);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(7,20.64205);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(8,26.03948);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(9,31.66472);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(10,11.56338);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(11,1.563013);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(12,1.933695);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(13,1.96774);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(14,1.949522);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(15,3.228857);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(17,1.533974);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(23,1.081239);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetBinError(41,1.098424);
   Zmm_2bjet_XX_pt_lep1_stack_4->SetEntries(117);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_pt_lep1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_pt_lep1_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_pt_lep1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_pt_lep1_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_pt_lep1_stack_5 = new TH1D("Zmm_2bjet_bX_pt_lep1_stack_5","",40,0,200);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(6,25.45961);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(7,39.74942);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(8,38.53809);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(9,17.46098);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(10,24.98904);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(11,5.468956);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(12,-3.113712);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(13,2.31985);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(14,1.231702);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(15,4.414659);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(16,-0.6180127);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(17,1.041248);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(18,0.5369933);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(20,2.067862);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(21,1.623368);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(22,1.425382);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(23,1.10285);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(25,1.570533);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(38,-1.067244);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinContent(41,-0.7361746);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(6,11.33084);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(7,11.4433);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(8,12.39289);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(9,10.50842);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(10,7.50904);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(11,6.059402);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(12,3.868836);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(13,4.872194);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(14,1.231702);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(15,4.17133);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(16,2.057435);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(17,2.002528);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(18,1.163229);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(20,1.47339);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(21,1.623368);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(22,1.425382);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(23,1.10285);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(25,1.570533);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(38,1.067244);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetBinError(41,0.7361746);
   Zmm_2bjet_bX_pt_lep1_stack_5->SetEntries(396);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_pt_lep1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_pt_lep1_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_pt_lep1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_pt_lep1_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_pt_lep1_stack_6 = new TH1D("Zmm_2bjet_bb_pt_lep1_stack_6","",40,0,200);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(6,1600.731);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(7,1596.915);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(8,1615.57);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(9,1163.224);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(10,729.191);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(11,496.0472);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(12,267.913);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(13,173.2044);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(14,156.2978);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(15,117.2);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(16,78.10829);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(17,28.33635);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(18,25.51272);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(19,13.33951);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(20,21.80787);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(21,24.71664);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(22,15.05755);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(23,9.554575);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(24,8.187116);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(25,5.731313);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(26,4.071922);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(27,5.053786);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(28,0.8888515);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(29,0.3965338);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(30,0.9823494);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(31,5.26403);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(32,0.02534874);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(33,0.9916997);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(34,0.3662025);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(35,-1.099611);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(37,-0.6195684);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(39,2.357696);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(40,1.470196);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinContent(41,3.249505);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(6,74.06932);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(7,75.77505);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(8,72.52472);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(9,64.44196);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(10,69.67466);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(11,39.06721);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(12,29.9302);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(13,24.42085);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(14,21.00732);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(15,17.41957);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(16,14.88465);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(17,11.35348);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(18,11.15397);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(19,9.143229);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(20,7.337941);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(21,7.539022);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(22,5.988748);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(23,5.398191);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(24,4.153896);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(25,3.821394);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(26,3.686207);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(27,3.4727);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(28,1.749608);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(29,2.551391);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(30,0.9823494);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(31,2.469646);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(32,1.562027);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(33,0.7491157);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(34,0.3662025);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(35,1.099611);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(37,0.6195684);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(39,1.667411);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(40,1.470196);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetBinError(41,1.901749);
   Zmm_2bjet_bb_pt_lep1_stack_6->SetEntries(21441);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_pt_lep1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_pt_lep1_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_pt_lep1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_pt_lep1_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_pt_lep1__525 = new TH1D("Zmm_2bjet_pt_lep1__525","",40,0,200);
   Zmm_2bjet_pt_lep1__525->SetBinContent(6,2019);
   Zmm_2bjet_pt_lep1__525->SetBinContent(7,2167);
   Zmm_2bjet_pt_lep1__525->SetBinContent(8,2133);
   Zmm_2bjet_pt_lep1__525->SetBinContent(9,1685);
   Zmm_2bjet_pt_lep1__525->SetBinContent(10,994);
   Zmm_2bjet_pt_lep1__525->SetBinContent(11,603);
   Zmm_2bjet_pt_lep1__525->SetBinContent(12,364);
   Zmm_2bjet_pt_lep1__525->SetBinContent(13,235);
   Zmm_2bjet_pt_lep1__525->SetBinContent(14,160);
   Zmm_2bjet_pt_lep1__525->SetBinContent(15,85);
   Zmm_2bjet_pt_lep1__525->SetBinContent(16,73);
   Zmm_2bjet_pt_lep1__525->SetBinContent(17,46);
   Zmm_2bjet_pt_lep1__525->SetBinContent(18,39);
   Zmm_2bjet_pt_lep1__525->SetBinContent(19,28);
   Zmm_2bjet_pt_lep1__525->SetBinContent(20,21);
   Zmm_2bjet_pt_lep1__525->SetBinContent(21,18);
   Zmm_2bjet_pt_lep1__525->SetBinContent(22,15);
   Zmm_2bjet_pt_lep1__525->SetBinContent(23,20);
   Zmm_2bjet_pt_lep1__525->SetBinContent(24,7);
   Zmm_2bjet_pt_lep1__525->SetBinContent(25,9);
   Zmm_2bjet_pt_lep1__525->SetBinContent(26,8);
   Zmm_2bjet_pt_lep1__525->SetBinContent(27,12);
   Zmm_2bjet_pt_lep1__525->SetBinContent(28,1);
   Zmm_2bjet_pt_lep1__525->SetBinContent(29,2);
   Zmm_2bjet_pt_lep1__525->SetBinContent(30,2);
   Zmm_2bjet_pt_lep1__525->SetBinContent(31,3);
   Zmm_2bjet_pt_lep1__525->SetBinContent(32,2);
   Zmm_2bjet_pt_lep1__525->SetBinContent(33,1);
   Zmm_2bjet_pt_lep1__525->SetBinContent(36,1);
   Zmm_2bjet_pt_lep1__525->SetBinContent(39,1);
   Zmm_2bjet_pt_lep1__525->SetBinContent(41,3);
   Zmm_2bjet_pt_lep1__525->SetBinError(6,44.93328);
   Zmm_2bjet_pt_lep1__525->SetBinError(7,46.55105);
   Zmm_2bjet_pt_lep1__525->SetBinError(8,46.18441);
   Zmm_2bjet_pt_lep1__525->SetBinError(9,41.04875);
   Zmm_2bjet_pt_lep1__525->SetBinError(10,31.52777);
   Zmm_2bjet_pt_lep1__525->SetBinError(11,24.55606);
   Zmm_2bjet_pt_lep1__525->SetBinError(12,19.07878);
   Zmm_2bjet_pt_lep1__525->SetBinError(13,15.32971);
   Zmm_2bjet_pt_lep1__525->SetBinError(14,12.64911);
   Zmm_2bjet_pt_lep1__525->SetBinError(15,9.219544);
   Zmm_2bjet_pt_lep1__525->SetBinError(16,8.544004);
   Zmm_2bjet_pt_lep1__525->SetBinError(17,6.78233);
   Zmm_2bjet_pt_lep1__525->SetBinError(18,6.244998);
   Zmm_2bjet_pt_lep1__525->SetBinError(19,5.291503);
   Zmm_2bjet_pt_lep1__525->SetBinError(20,4.582576);
   Zmm_2bjet_pt_lep1__525->SetBinError(21,4.242641);
   Zmm_2bjet_pt_lep1__525->SetBinError(22,3.872983);
   Zmm_2bjet_pt_lep1__525->SetBinError(23,4.472136);
   Zmm_2bjet_pt_lep1__525->SetBinError(24,2.645751);
   Zmm_2bjet_pt_lep1__525->SetBinError(25,3);
   Zmm_2bjet_pt_lep1__525->SetBinError(26,2.828427);
   Zmm_2bjet_pt_lep1__525->SetBinError(27,3.464102);
   Zmm_2bjet_pt_lep1__525->SetBinError(28,1);
   Zmm_2bjet_pt_lep1__525->SetBinError(29,1.414214);
   Zmm_2bjet_pt_lep1__525->SetBinError(30,1.414214);
   Zmm_2bjet_pt_lep1__525->SetBinError(31,1.732051);
   Zmm_2bjet_pt_lep1__525->SetBinError(32,1.414214);
   Zmm_2bjet_pt_lep1__525->SetBinError(33,1);
   Zmm_2bjet_pt_lep1__525->SetBinError(36,1);
   Zmm_2bjet_pt_lep1__525->SetBinError(39,1);
   Zmm_2bjet_pt_lep1__525->SetBinError(41,1.732051);
   Zmm_2bjet_pt_lep1__525->SetEntries(10757);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_pt_lep1__525->SetLineColor(ci);
   Zmm_2bjet_pt_lep1__525->SetLineWidth(2);
   Zmm_2bjet_pt_lep1__525->SetMarkerStyle(20);
   Zmm_2bjet_pt_lep1__525->SetMarkerSize(1.2);
   Zmm_2bjet_pt_lep1__525->GetXaxis()->SetRange(1,200);
   Zmm_2bjet_pt_lep1__525->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1__525->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1__525->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1__525->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1__525->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1__525->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1__525->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1__525->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_pt_lep1__525->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1__525->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_pt_lep1__525->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_pt_lep1__525->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_pt_lep1__525->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_pt_lep1__525->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep1_fx1525[40] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep1_fy1525[40] = {
   0,
   0,
   0,
   0,
   0,
   2446.61,
   2585.314,
   2544.111,
   1909.554,
   1223.64,
   775.8309,
   405.2741,
   251.5934,
   196.8273,
   147.5408,
   88.1875,
   38.44852,
   29.68156,
   16.31013,
   25.18634,
   28.33007,
   17.37448,
   11.89837,
   8.426406,
   7.422956,
   4.62341,
   5.053786,
   0.8888515,
   0.4120668,
   0.9823494,
   5.26403,
   0.02534874,
   0.9916997,
   0.3662025,
   -1.099611,
   0,
   -0.6195684,
   -1.067244,
   2.357696,
   1.470196};
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep1_fex1525[40] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_pt_lep1_fey1525[40] = {
   0,
   0,
   0,
   0,
   0,
   77.11295,
   80.02327,
   78.64787,
   73.09616,
   71.37821,
   39.9946,
   30.49736,
   25.15536,
   21.2597,
   18.30913,
   15.08769,
   11.73629,
   11.24603,
   9.198204,
   7.505734,
   7.767257,
   6.20138,
   5.615686,
   4.160783,
   4.133315,
   3.727233,
   3.4727,
   1.749608,
   2.551439,
   0.9823494,
   2.469646,
   1.562027,
   0.7491157,
   0.3662025,
   1.099611,
   0,
   0.6195684,
   1.067244,
   1.667411,
   1.470196};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zmm_2bjet_bb_pt_lep1_fx1525,Graph_from_Zmm_2bjet_bb_pt_lep1_fy1525,Graph_from_Zmm_2bjet_bb_pt_lep1_fex1525,Graph_from_Zmm_2bjet_bb_pt_lep1_fey1525);
   gre->SetName("Graph_from_Zmm_2bjet_bb_pt_lep1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525","",100,0,220);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525->SetMinimum(-268.9528);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525->SetMaximum(2932.09);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_pt_lep11525);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_pt_lep1","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_pt_lep1_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_pt_lep1_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_pt_lep1_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_pt_lep1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_pt_lep1","MC unc. (stat.)","fl");

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
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__526 = new TH1D("data_mc_ratio__526","",40,0,200);
   data_mc_ratio__526->SetBinContent(6,0.8252234);
   data_mc_ratio__526->SetBinContent(7,0.8381962);
   data_mc_ratio__526->SetBinContent(8,0.8384068);
   data_mc_ratio__526->SetBinContent(9,0.8824049);
   data_mc_ratio__526->SetBinContent(10,0.8123302);
   data_mc_ratio__526->SetBinContent(11,0.7772312);
   data_mc_ratio__526->SetBinContent(12,0.8981577);
   data_mc_ratio__526->SetBinContent(13,0.9340469);
   data_mc_ratio__526->SetBinContent(14,0.8128955);
   data_mc_ratio__526->SetBinContent(15,0.576112);
   data_mc_ratio__526->SetBinContent(16,0.8277817);
   data_mc_ratio__526->SetBinContent(17,1.196405);
   data_mc_ratio__526->SetBinContent(18,1.313947);
   data_mc_ratio__526->SetBinContent(19,1.716725);
   data_mc_ratio__526->SetBinContent(20,0.8337853);
   data_mc_ratio__526->SetBinContent(21,0.6353673);
   data_mc_ratio__526->SetBinContent(22,0.8633352);
   data_mc_ratio__526->SetBinContent(23,1.680903);
   data_mc_ratio__526->SetBinContent(24,0.8307219);
   data_mc_ratio__526->SetBinContent(25,1.212455);
   data_mc_ratio__526->SetBinContent(26,1.730325);
   data_mc_ratio__526->SetBinContent(27,2.374457);
   data_mc_ratio__526->SetBinContent(28,1.125047);
   data_mc_ratio__526->SetBinContent(29,4.853582);
   data_mc_ratio__526->SetBinContent(30,2.035936);
   data_mc_ratio__526->SetBinContent(31,0.5699055);
   data_mc_ratio__526->SetBinContent(32,78.89939);
   data_mc_ratio__526->SetBinContent(33,1.00837);
   data_mc_ratio__526->SetBinContent(39,0.4241428);
   data_mc_ratio__526->SetBinContent(41,2.120282);
   data_mc_ratio__526->SetBinError(6,0.01836553);
   data_mc_ratio__526->SetBinError(7,0.01800596);
   data_mc_ratio__526->SetBinError(8,0.01815346);
   data_mc_ratio__526->SetBinError(9,0.02149651);
   data_mc_ratio__526->SetBinError(10,0.02576555);
   data_mc_ratio__526->SetBinError(11,0.0316513);
   data_mc_ratio__526->SetBinError(12,0.04707625);
   data_mc_ratio__526->SetBinError(13,0.0609305);
   data_mc_ratio__526->SetBinError(14,0.06426503);
   data_mc_ratio__526->SetBinError(15,0.06248812);
   data_mc_ratio__526->SetBinError(16,0.09688452);
   data_mc_ratio__526->SetBinError(17,0.1764003);
   data_mc_ratio__526->SetBinError(18,0.2103999);
   data_mc_ratio__526->SetBinError(19,0.3244305);
   data_mc_ratio__526->SetBinError(20,0.1819469);
   data_mc_ratio__526->SetBinError(21,0.1497575);
   data_mc_ratio__526->SetBinError(22,0.2229122);
   data_mc_ratio__526->SetBinError(23,0.3758612);
   data_mc_ratio__526->SetBinError(24,0.3139834);
   data_mc_ratio__526->SetBinError(25,0.4041517);
   data_mc_ratio__526->SetBinError(26,0.6117621);
   data_mc_ratio__526->SetBinError(27,0.6854468);
   data_mc_ratio__526->SetBinError(28,1.125047);
   data_mc_ratio__526->SetBinError(29,3.432001);
   data_mc_ratio__526->SetBinError(30,1.439624);
   data_mc_ratio__526->SetBinError(31,0.3290351);
   data_mc_ratio__526->SetBinError(32,55.7903);
   data_mc_ratio__526->SetBinError(33,1.00837);
   data_mc_ratio__526->SetBinError(39,0.4241428);
   data_mc_ratio__526->SetBinError(41,3.680554);
   data_mc_ratio__526->SetMinimum(0.4);
   data_mc_ratio__526->SetMaximum(1.6);
   data_mc_ratio__526->SetEntries(0.0005336868);
   data_mc_ratio__526->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__526->SetLineColor(ci);
   data_mc_ratio__526->SetLineWidth(2);
   data_mc_ratio__526->SetMarkerStyle(20);
   data_mc_ratio__526->SetMarkerSize(1.2);
   data_mc_ratio__526->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__526->GetXaxis()->SetRange(1,40);
   data_mc_ratio__526->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__526->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__526->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__526->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__526->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__526->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__526->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__526->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__526->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__526->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__526->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__526->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__526->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__526->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__526->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__526->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__526->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1526[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1526[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1526[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1526[40] = {
   0,
   0,
   0,
   0,
   0,
   0.03151828,
   0.03095302,
   0.03091369,
   0.03827918,
   0.05833267,
   0.05155067,
   0.07525119,
   0.09998419,
   0.1080119,
   0.1240954,
   0.1710865,
   0.305247,
   0.3788896,
   0.5639565,
   0.2980081,
   0.2741701,
   0.3569246,
   0.471971,
   0.493779,
   0.5568288,
   0.8061653,
   0.6871481,
   1.968392,
   6.191808,
   1,
   0.469155,
   61.62151,
   0.7553856,
   1,
   0,
   0,
   0,
   0,
   0.7072206,
   1};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1526,Graph_from_mc_statistical_error_fy1526,Graph_from_mc_statistical_error_fex1526,Graph_from_mc_statistical_error_fey1526);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1526 = new TH1F("Graph_Graph_from_mc_statistical_error1526","",100,0,220);
   Graph_Graph_from_mc_statistical_error1526->SetMinimum(-72.94581);
   Graph_Graph_from_mc_statistical_error1526->SetMaximum(74.94581);
   Graph_Graph_from_mc_statistical_error1526->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1526->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1526->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1526->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1526->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1526->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1526->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1526->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1526->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1526->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1526->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1526->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1526->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1526->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1526->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1526->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1526);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->cd();
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->Modified();
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->cd();
   pt_lep1_Z_2bjet_Zmm_18_amcnlo->SetSelected(pt_lep1_Z_2bjet_Zmm_18_amcnlo);
}

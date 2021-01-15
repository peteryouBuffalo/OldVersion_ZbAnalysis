void A_Z2b_Z_2bjet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: A_Z2b_Z_2bjet_Zee_16_amcnlo/A_Z2b_Z_2bjet_Zee_16_amcnlo
//=========  (Thu Jan 14 10:42:51 2021) by ROOT version 6.14/09
   TCanvas *A_Z2b_Z_2bjet_Zee_16_amcnlo = new TCanvas("A_Z2b_Z_2bjet_Zee_16_amcnlo", "A_Z2b_Z_2bjet_Zee_16_amcnlo",0,0,600,600);
   A_Z2b_Z_2bjet_Zee_16_amcnlo->SetHighLightColor(2);
   A_Z2b_Z_2bjet_Zee_16_amcnlo->Range(0,0,1,1);
   A_Z2b_Z_2bjet_Zee_16_amcnlo->SetFillColor(0);
   A_Z2b_Z_2bjet_Zee_16_amcnlo->SetFillStyle(4000);
   A_Z2b_Z_2bjet_Zee_16_amcnlo->SetBorderMode(0);
   A_Z2b_Z_2bjet_Zee_16_amcnlo->SetBorderSize(2);
   A_Z2b_Z_2bjet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   A_Z2b_Z_2bjet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.1532254,-0.9308818,1.052419,939.9509);
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
   st->SetMaximum(805.5835);
   
   TH1F *st_stack_229 = new TH1F("st_stack_229","",25,0,1);
   st_stack_229->SetMinimum(0.01);
   st_stack_229->SetMaximum(845.8627);
   st_stack_229->SetDirectory(0);
   st_stack_229->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_229->SetLineColor(ci);
   st_stack_229->GetXaxis()->SetRange(1,25);
   st_stack_229->GetXaxis()->SetLabelFont(42);
   st_stack_229->GetXaxis()->SetLabelSize(0.035);
   st_stack_229->GetXaxis()->SetTitleSize(0.035);
   st_stack_229->GetXaxis()->SetTitleFont(42);
   st_stack_229->GetYaxis()->SetTitle("Events/0.04");
   st_stack_229->GetYaxis()->SetLabelFont(42);
   st_stack_229->GetYaxis()->SetLabelSize(0.05);
   st_stack_229->GetYaxis()->SetTitleSize(0.057);
   st_stack_229->GetYaxis()->SetTitleOffset(1.2);
   st_stack_229->GetYaxis()->SetTitleFont(42);
   st_stack_229->GetZaxis()->SetLabelFont(42);
   st_stack_229->GetZaxis()->SetLabelSize(0.035);
   st_stack_229->GetZaxis()->SetTitleSize(0.035);
   st_stack_229->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_229);
   
   
   TH1D *Zee_2bjet_A_Z2b_stack_1 = new TH1D("Zee_2bjet_A_Z2b_stack_1","",25,0,1);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(1,1.313846);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(2,2.391848);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(3,2.401198);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(4,2.58017);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(5,0.6930219);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(6,1.939277);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(7,0.3546219);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(8,1.224855);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(9,0.5218274);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(10,0.5736655);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(11,1.096665);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(12,0.7716898);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(13,0.2585131);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(14,0.5244668);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(15,0.3790134);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(16,0.3361153);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(17,0.3481246);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(19,0.3525594);
   Zee_2bjet_A_Z2b_stack_1->SetBinContent(21,0.1752114);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(1,0.4973838);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(2,0.6481434);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(3,0.6664032);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(4,0.6757502);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(5,0.347847);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(6,0.5690069);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(7,0.2509102);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(8,0.465298);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(9,0.277604);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(10,0.3125165);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(11,0.4500192);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(12,0.3629751);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(13,0.194276);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(14,0.3031377);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(15,0.2689967);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(16,0.2377189);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(17,0.2462473);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(19,0.249354);
   Zee_2bjet_A_Z2b_stack_1->SetBinError(21,0.1752114);
   Zee_2bjet_A_Z2b_stack_1->SetEntries(109);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_A_Z2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_stack_1->SetLineColor(ci);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_stack_1,"");
   
   TH1D *Zee_2bjet_A_Z2b_stack_2 = new TH1D("Zee_2bjet_A_Z2b_stack_2","",25,0,1);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(1,8.225772);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(2,7.56222);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(3,6.115256);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(4,4.330384);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(5,4.205435);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(6,3.223111);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(7,2.112);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(8,2.745129);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(9,1.549599);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(10,0.7664126);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(11,0.2766319);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(12,0.811624);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(13,0.8373676);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(14,0.2439826);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(17,0.2735798);
   Zee_2bjet_A_Z2b_stack_2->SetBinContent(21,0.2938692);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(1,1.484836);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(2,1.421162);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(3,1.296333);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(4,1.068232);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(5,1.076779);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(6,0.9076213);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(7,0.7478482);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(8,0.8697767);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(9,0.6374722);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(10,0.4429829);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(11,0.2766319);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(12,0.4692187);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(13,0.4840007);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(14,0.2439826);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(17,0.2735798);
   Zee_2bjet_A_Z2b_stack_2->SetBinError(21,0.2938692);
   Zee_2bjet_A_Z2b_stack_2->SetEntries(170);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_A_Z2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_stack_2->SetLineColor(ci);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_stack_2,"");
   
   TH1D *Zee_2bjet_A_Z2b_stack_3 = new TH1D("Zee_2bjet_A_Z2b_stack_3","",25,0,1);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(1,95.00457);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(2,102.7145);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(3,81.69481);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(4,77.34988);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(5,66.36447);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(6,62.37357);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(7,52.88339);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(8,45.95707);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(9,36.10851);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(10,30.79842);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(11,23.34092);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(12,21.42161);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(13,17.55209);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(14,14.27897);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(15,10.1258);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(16,12.61942);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(17,8.245111);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(18,6.430267);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(19,6.260856);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(20,5.500683);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(21,1.954299);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(22,1.469846);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(23,1.4241);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(24,1.573966);
   Zee_2bjet_A_Z2b_stack_3->SetBinContent(25,0.3764875);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(1,4.062724);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(2,4.237759);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(3,3.783684);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(4,3.709924);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(5,3.410047);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(6,3.311104);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(7,3.036205);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(8,2.845548);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(9,2.534817);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(10,2.337688);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(11,2.022278);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(12,1.947204);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(13,1.766037);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(14,1.559978);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(15,1.331265);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(16,1.499139);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(17,1.213878);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(18,1.063762);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(19,1.064251);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(20,0.9951138);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(21,0.5891552);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(22,0.5201107);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(23,0.5063835);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(24,0.5288371);
   Zee_2bjet_A_Z2b_stack_3->SetBinError(25,0.2664784);
   Zee_2bjet_A_Z2b_stack_3->SetEntries(4701);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_A_Z2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b_stack_3->SetLineColor(ci);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_A_Z2b_stack_3,"");
   
   TH1D *Zee_2bjet_XX_A_Z2b_stack_4 = new TH1D("Zee_2bjet_XX_A_Z2b_stack_4","",25,0,1);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(1,2.640127);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(2,3.964146);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(3,1.78843);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(4,-0.5484671);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(5,-0.4385821);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(6,-0.37601);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(7,0.2889862);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(8,1.250053);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(9,-0.009575284);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(11,0.2211225);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(12,-0.07381499);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(14,0.4264159);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(17,0.5043973);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinContent(18,0.4321969);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(1,1.239363);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(2,1.895067);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(3,1.239551);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(4,1.362592);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(5,1.024008);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(6,0.7713504);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(7,0.8532628);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(8,0.938486);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(9,1.061338);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(11,0.2211225);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(12,0.7207292);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(14,0.4264159);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(17,0.5043973);
   Zee_2bjet_XX_A_Z2b_stack_4->SetBinError(18,0.4321969);
   Zee_2bjet_XX_A_Z2b_stack_4->SetEntries(60);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_A_Z2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_A_Z2b_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_A_Z2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_A_Z2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_A_Z2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_A_Z2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_A_Z2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_A_Z2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_A_Z2b_stack_4,"");
   
   TH1D *Zee_2bjet_bX_A_Z2b_stack_5 = new TH1D("Zee_2bjet_bX_A_Z2b_stack_5","",25,0,1);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(1,6.879914);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(2,2.40207);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(3,5.074807);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(4,2.152891);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(5,3.733637);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(6,1.945728);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(7,4.475308);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(8,-0.1478371);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(9,1.403463);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(10,2.30787);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(11,2.348774);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(12,-0.3915413);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(13,1.803037);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(14,0.4579315);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(15,2.050277);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(16,1.289271);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(17,0.3642686);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(18,0.01405903);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(20,-1.030974);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinContent(22,0.4298189);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(1,2.938337);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(2,2.767855);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(3,2.418432);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(4,2.14783);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(5,2.26547);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(6,1.650012);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(7,1.443306);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(8,1.57327);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(9,1.298366);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(10,1.015024);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(11,1.507266);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(12,1.498051);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(13,0.9020261);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(14,0.9056131);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(15,1.289356);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(16,1.395233);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(17,0.7202865);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(18,0.01405903);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(20,0.7321497);
   Zee_2bjet_bX_A_Z2b_stack_5->SetBinError(22,0.4298189);
   Zee_2bjet_bX_A_Z2b_stack_5->SetEntries(253);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_A_Z2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_A_Z2b_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_A_Z2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_A_Z2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_A_Z2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_A_Z2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_A_Z2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_A_Z2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_A_Z2b_stack_5,"");
   
   TH1D *Zee_2bjet_bb_A_Z2b_stack_6 = new TH1D("Zee_2bjet_bb_A_Z2b_stack_6","",25,0,1);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(1,329.0067);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(2,298.8381);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(3,240.1671);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(4,192.4406);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(5,137.5273);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(6,134.0865);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(7,109.4949);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(8,85.08021);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(9,69.48518);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(10,64.11891);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(11,50.89588);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(12,51.38698);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(13,36.79143);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(14,42.89157);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(15,30.86203);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(16,22.9972);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(17,10.20868);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(18,20.62813);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(19,21.43575);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(20,9.090791);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(21,5.872176);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(22,6.029647);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(23,3.367395);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(24,3.488013);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinContent(25,-0.04566598);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(1,20.78714);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(2,19.69915);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(3,18.42508);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(4,15.98675);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(5,15.00594);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(6,13.68153);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(7,12.25187);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(8,11.12701);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(9,10.19713);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(10,9.43449);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(11,8.491374);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(12,8.105561);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(13,7.366447);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(14,6.946716);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(15,6.038434);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(16,5.345557);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(17,4.759924);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(18,4.699766);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(19,4.492809);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(20,3.654972);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(21,3.226596);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(22,2.94142);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(23,1.904511);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(24,2.19429);
   Zee_2bjet_bb_A_Z2b_stack_6->SetBinError(25,0.6508477);
   Zee_2bjet_bb_A_Z2b_stack_6->SetEntries(13604);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_A_Z2b_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_A_Z2b_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_A_Z2b_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_A_Z2b_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_A_Z2b_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_A_Z2b_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_A_Z2b_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_A_Z2b_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_A_Z2b_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_A_Z2b__457 = new TH1D("Zee_2bjet_A_Z2b__457","",25,0,1);
   Zee_2bjet_A_Z2b__457->SetBinContent(1,392);
   Zee_2bjet_A_Z2b__457->SetBinContent(2,333);
   Zee_2bjet_A_Z2b__457->SetBinContent(3,303);
   Zee_2bjet_A_Z2b__457->SetBinContent(4,274);
   Zee_2bjet_A_Z2b__457->SetBinContent(5,211);
   Zee_2bjet_A_Z2b__457->SetBinContent(6,176);
   Zee_2bjet_A_Z2b__457->SetBinContent(7,142);
   Zee_2bjet_A_Z2b__457->SetBinContent(8,121);
   Zee_2bjet_A_Z2b__457->SetBinContent(9,118);
   Zee_2bjet_A_Z2b__457->SetBinContent(10,83);
   Zee_2bjet_A_Z2b__457->SetBinContent(11,78);
   Zee_2bjet_A_Z2b__457->SetBinContent(12,66);
   Zee_2bjet_A_Z2b__457->SetBinContent(13,50);
   Zee_2bjet_A_Z2b__457->SetBinContent(14,33);
   Zee_2bjet_A_Z2b__457->SetBinContent(15,39);
   Zee_2bjet_A_Z2b__457->SetBinContent(16,33);
   Zee_2bjet_A_Z2b__457->SetBinContent(17,26);
   Zee_2bjet_A_Z2b__457->SetBinContent(18,16);
   Zee_2bjet_A_Z2b__457->SetBinContent(19,16);
   Zee_2bjet_A_Z2b__457->SetBinContent(20,8);
   Zee_2bjet_A_Z2b__457->SetBinContent(21,8);
   Zee_2bjet_A_Z2b__457->SetBinContent(22,14);
   Zee_2bjet_A_Z2b__457->SetBinContent(23,7);
   Zee_2bjet_A_Z2b__457->SetBinContent(24,2);
   Zee_2bjet_A_Z2b__457->SetBinError(1,19.79899);
   Zee_2bjet_A_Z2b__457->SetBinError(2,18.24829);
   Zee_2bjet_A_Z2b__457->SetBinError(3,17.4069);
   Zee_2bjet_A_Z2b__457->SetBinError(4,16.55295);
   Zee_2bjet_A_Z2b__457->SetBinError(5,14.52584);
   Zee_2bjet_A_Z2b__457->SetBinError(6,13.2665);
   Zee_2bjet_A_Z2b__457->SetBinError(7,11.91638);
   Zee_2bjet_A_Z2b__457->SetBinError(8,11);
   Zee_2bjet_A_Z2b__457->SetBinError(9,10.86278);
   Zee_2bjet_A_Z2b__457->SetBinError(10,9.110434);
   Zee_2bjet_A_Z2b__457->SetBinError(11,8.831761);
   Zee_2bjet_A_Z2b__457->SetBinError(12,8.124038);
   Zee_2bjet_A_Z2b__457->SetBinError(13,7.071068);
   Zee_2bjet_A_Z2b__457->SetBinError(14,5.744563);
   Zee_2bjet_A_Z2b__457->SetBinError(15,6.244998);
   Zee_2bjet_A_Z2b__457->SetBinError(16,5.744563);
   Zee_2bjet_A_Z2b__457->SetBinError(17,5.09902);
   Zee_2bjet_A_Z2b__457->SetBinError(18,4);
   Zee_2bjet_A_Z2b__457->SetBinError(19,4);
   Zee_2bjet_A_Z2b__457->SetBinError(20,2.828427);
   Zee_2bjet_A_Z2b__457->SetBinError(21,2.828427);
   Zee_2bjet_A_Z2b__457->SetBinError(22,3.741657);
   Zee_2bjet_A_Z2b__457->SetBinError(23,2.645751);
   Zee_2bjet_A_Z2b__457->SetBinError(24,1.414214);
   Zee_2bjet_A_Z2b__457->SetEntries(2549);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_A_Z2b__457->SetLineColor(ci);
   Zee_2bjet_A_Z2b__457->SetLineWidth(2);
   Zee_2bjet_A_Z2b__457->SetMarkerStyle(20);
   Zee_2bjet_A_Z2b__457->SetMarkerSize(1.2);
   Zee_2bjet_A_Z2b__457->GetXaxis()->SetRange(1,100);
   Zee_2bjet_A_Z2b__457->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b__457->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b__457->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b__457->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b__457->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b__457->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b__457->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b__457->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_A_Z2b__457->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b__457->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_A_Z2b__457->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_A_Z2b__457->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_A_Z2b__457->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_A_Z2b__457->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_A_Z2b_fx1457[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_A_Z2b_fy1457[25] = {
   443.0709,
   417.873,
   337.2416,
   278.3054,
   212.0853,
   203.1922,
   169.6092,
   136.1095,
   109.059,
   98.56528,
   78.17999,
   73.92655,
   57.24244,
   58.82334,
   43.41712,
   37.242,
   19.94416,
   27.50466,
   28.04917,
   13.5605,
   8.295555,
   7.929312,
   4.791495,
   5.061979,
   0.3308215};
   Double_t Graph_from_Zee_2bjet_bb_A_Z2b_fex1457[25] = {
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
   Double_t Graph_from_Zee_2bjet_bb_A_Z2b_fey1457[25] = {
   21.47633,
   20.48675,
   19.06069,
   16.65555,
   15.62907,
   14.23421,
   12.75776,
   11.67204,
   10.66314,
   9.787674,
   8.876532,
   8.520989,
   7.646507,
   7.200262,
   6.322164,
   5.729361,
   5.003907,
   4.838015,
   4.623867,
   3.858123,
   3.29774,
   3.017816,
   1.970681,
   2.257117,
   0.7032876};
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_bb_A_Z2b_fx1457,Graph_from_Zee_2bjet_bb_A_Z2b_fy1457,Graph_from_Zee_2bjet_bb_A_Z2b_fex1457,Graph_from_Zee_2bjet_bb_A_Z2b_fey1457);
   gre->SetName("Graph_from_Zee_2bjet_bb_A_Z2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457","",100,0,1.1);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457->SetMinimum(-46.86444);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457->SetMaximum(511.0392);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_A_Z2b1457);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_A_Z2b","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_A_Z2b_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_A_Z2b_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_A_Z2b_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_A_Z2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_A_Z2b","MC unc. (stat.)","fl");

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
   A_Z2b_Z_2bjet_Zee_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__458 = new TH1D("data_mc_ratio__458","",25,0,1);
   data_mc_ratio__458->SetBinContent(1,0.8847342);
   data_mc_ratio__458->SetBinContent(2,0.7968929);
   data_mc_ratio__458->SetBinContent(3,0.8984657);
   data_mc_ratio__458->SetBinContent(4,0.9845299);
   data_mc_ratio__458->SetBinContent(5,0.9948826);
   data_mc_ratio__458->SetBinContent(6,0.8661749);
   data_mc_ratio__458->SetBinContent(7,0.8372186);
   data_mc_ratio__458->SetBinContent(8,0.8889903);
   data_mc_ratio__458->SetBinContent(9,1.081983);
   data_mc_ratio__458->SetBinContent(10,0.8420815);
   data_mc_ratio__458->SetBinContent(11,0.9976978);
   data_mc_ratio__458->SetBinContent(12,0.892778);
   data_mc_ratio__458->SetBinContent(13,0.8734778);
   data_mc_ratio__458->SetBinContent(14,0.5610018);
   data_mc_ratio__458->SetBinContent(15,0.8982632);
   data_mc_ratio__458->SetBinContent(16,0.8860962);
   data_mc_ratio__458->SetBinContent(17,1.30364);
   data_mc_ratio__458->SetBinContent(18,0.5817197);
   data_mc_ratio__458->SetBinContent(19,0.570427);
   data_mc_ratio__458->SetBinContent(20,0.5899487);
   data_mc_ratio__458->SetBinContent(21,0.9643718);
   data_mc_ratio__458->SetBinContent(22,1.765601);
   data_mc_ratio__458->SetBinContent(23,1.460922);
   data_mc_ratio__458->SetBinContent(24,0.3951024);
   data_mc_ratio__458->SetBinError(1,0.04468582);
   data_mc_ratio__458->SetBinError(2,0.04366946);
   data_mc_ratio__458->SetBinError(3,0.05161551);
   data_mc_ratio__458->SetBinError(4,0.05947763);
   data_mc_ratio__458->SetBinError(5,0.06849055);
   data_mc_ratio__458->SetBinError(6,0.06529039);
   data_mc_ratio__458->SetBinError(7,0.07025783);
   data_mc_ratio__458->SetBinError(8,0.0808173);
   data_mc_ratio__458->SetBinError(9,0.09960462);
   data_mc_ratio__458->SetBinError(10,0.09243046);
   data_mc_ratio__458->SetBinError(11,0.112967);
   data_mc_ratio__458->SetBinError(12,0.1098934);
   data_mc_ratio__458->SetBinError(13,0.1235284);
   data_mc_ratio__458->SetBinError(14,0.09765789);
   data_mc_ratio__458->SetBinError(15,0.1438372);
   data_mc_ratio__458->SetBinError(16,0.1542496);
   data_mc_ratio__458->SetBinError(17,0.2556648);
   data_mc_ratio__458->SetBinError(18,0.1454299);
   data_mc_ratio__458->SetBinError(19,0.1426067);
   data_mc_ratio__458->SetBinError(20,0.2085784);
   data_mc_ratio__458->SetBinError(21,0.3409569);
   data_mc_ratio__458->SetBinError(22,0.4718767);
   data_mc_ratio__458->SetBinError(23,0.5521766);
   data_mc_ratio__458->SetBinError(24,0.2793796);
   data_mc_ratio__458->SetMinimum(0.4);
   data_mc_ratio__458->SetMaximum(1.6);
   data_mc_ratio__458->SetEntries(208.3745);
   data_mc_ratio__458->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__458->SetLineColor(ci);
   data_mc_ratio__458->SetLineWidth(2);
   data_mc_ratio__458->SetMarkerStyle(20);
   data_mc_ratio__458->SetMarkerSize(1.2);
   data_mc_ratio__458->GetXaxis()->SetTitle("A_{Zbb}");
   data_mc_ratio__458->GetXaxis()->SetRange(1,25);
   data_mc_ratio__458->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__458->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__458->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__458->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__458->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__458->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__458->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__458->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__458->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__458->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__458->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__458->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__458->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__458->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__458->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__458->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__458->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1458[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1458[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1458[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1458[25] = {
   0.04847154,
   0.04902627,
   0.05651939,
   0.0598463,
   0.07369239,
   0.07005291,
   0.07521854,
   0.0857548,
   0.09777401,
   0.09930144,
   0.1135397,
   0.1152629,
   0.1335811,
   0.1224049,
   0.1456145,
   0.1538414,
   0.2508959,
   0.175898,
   0.1648486,
   0.2845119,
   0.3975309,
   0.3805899,
   0.4112874,
   0.4458961,
   2.125883};
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1458,Graph_from_mc_statistical_error_fy1458,Graph_from_mc_statistical_error_fex1458,Graph_from_mc_statistical_error_fey1458);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1458 = new TH1F("Graph_Graph_from_mc_statistical_error1458","",100,0,1.1);
   Graph_Graph_from_mc_statistical_error1458->SetMinimum(-1.551059);
   Graph_Graph_from_mc_statistical_error1458->SetMaximum(3.551059);
   Graph_Graph_from_mc_statistical_error1458->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1458->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1458->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1458->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1458->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1458->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1458->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1458->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1458->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1458->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1458->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1458->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1458->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1458->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1458->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1458->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1458);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,1,1);
   line->Draw();
   bottomPad->Modified();
   A_Z2b_Z_2bjet_Zee_16_amcnlo->cd();
   A_Z2b_Z_2bjet_Zee_16_amcnlo->Modified();
   A_Z2b_Z_2bjet_Zee_16_amcnlo->cd();
   A_Z2b_Z_2bjet_Zee_16_amcnlo->SetSelected(A_Z2b_Z_2bjet_Zee_16_amcnlo);
}

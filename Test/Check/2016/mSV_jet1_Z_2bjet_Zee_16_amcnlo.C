void mSV_jet1_Z_2bjet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: mSV_jet1_Z_2bjet_Zee_16_amcnlo/mSV_jet1_Z_2bjet_Zee_16_amcnlo
//=========  (Thu Jan 14 10:42:53 2021) by ROOT version 6.14/09
   TCanvas *mSV_jet1_Z_2bjet_Zee_16_amcnlo = new TCanvas("mSV_jet1_Z_2bjet_Zee_16_amcnlo", "mSV_jet1_Z_2bjet_Zee_16_amcnlo",0,0,600,600);
   mSV_jet1_Z_2bjet_Zee_16_amcnlo->SetHighLightColor(2);
   mSV_jet1_Z_2bjet_Zee_16_amcnlo->Range(0,0,1,1);
   mSV_jet1_Z_2bjet_Zee_16_amcnlo->SetFillColor(0);
   mSV_jet1_Z_2bjet_Zee_16_amcnlo->SetFillStyle(4000);
   mSV_jet1_Z_2bjet_Zee_16_amcnlo->SetBorderMode(0);
   mSV_jet1_Z_2bjet_Zee_16_amcnlo->SetBorderSize(2);
   mSV_jet1_Z_2bjet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   mSV_jet1_Z_2bjet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-0.5855877,6.314516,595.002);
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
   st->SetMaximum(509.946);
   
   TH1F *st_stack_245 = new TH1F("st_stack_245","",50,0,10);
   st_stack_245->SetMinimum(0.01);
   st_stack_245->SetMaximum(535.4433);
   st_stack_245->SetDirectory(0);
   st_stack_245->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_245->SetLineColor(ci);
   st_stack_245->GetXaxis()->SetRange(1,30);
   st_stack_245->GetXaxis()->SetLabelFont(42);
   st_stack_245->GetXaxis()->SetLabelSize(0.035);
   st_stack_245->GetXaxis()->SetTitleSize(0.035);
   st_stack_245->GetXaxis()->SetTitleFont(42);
   st_stack_245->GetYaxis()->SetTitle("Events/0.2");
   st_stack_245->GetYaxis()->SetLabelFont(42);
   st_stack_245->GetYaxis()->SetLabelSize(0.05);
   st_stack_245->GetYaxis()->SetTitleSize(0.057);
   st_stack_245->GetYaxis()->SetTitleOffset(1.2);
   st_stack_245->GetYaxis()->SetTitleFont(42);
   st_stack_245->GetZaxis()->SetLabelFont(42);
   st_stack_245->GetZaxis()->SetLabelSize(0.035);
   st_stack_245->GetZaxis()->SetTitleSize(0.035);
   st_stack_245->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_245);
   
   
   TH1D *Zee_2bjet_mSV_jet1_stack_1 = new TH1D("Zee_2bjet_mSV_jet1_stack_1","",50,0,10);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(0,0.794503);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(2,0.1384214);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(3,0.7946197);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(4,0.3565331);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(5,1.335599);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(6,1.078552);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(7,1.406727);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(8,1.298099);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(9,3.122457);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(10,2.402879);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(11,1.777472);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(12,1.21727);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(13,0.7144421);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(14,0.3902634);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(15,0.1819951);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(16,0.3277445);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(17,0.1708886);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(18,0.367792);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(19,0.1772325);
   Zee_2bjet_mSV_jet1_stack_1->SetBinContent(21,0.1831978);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(0,0.3539559);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(2,0.1384214);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(3,0.3634033);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(4,0.2221383);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(5,0.479622);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(6,0.4410747);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(7,0.4978684);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(8,0.4927147);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(9,0.7596372);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(10,0.650419);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(11,0.5640232);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(12,0.4629933);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(13,0.3576973);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(14,0.2773567);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(15,0.1819951);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(16,0.2072132);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(17,0.1708886);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(18,0.2543405);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(19,0.1772325);
   Zee_2bjet_mSV_jet1_stack_1->SetBinError(21,0.1831978);
   Zee_2bjet_mSV_jet1_stack_1->SetEntries(109);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_mSV_jet1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_mSV_jet1_stack_1->SetLineColor(ci);
   Zee_2bjet_mSV_jet1_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_mSV_jet1_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet1_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_mSV_jet1_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet1_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_mSV_jet1_stack_1,"");
   
   TH1D *Zee_2bjet_mSV_jet1_stack_2 = new TH1D("Zee_2bjet_mSV_jet1_stack_2","",50,0,10);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(0,2.916802);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(3,1.066959);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(4,1.52451);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(5,1.472393);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(6,1.809095);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(7,2.181601);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(8,6.295566);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(9,3.063592);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(10,4.994601);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(11,3.779024);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(12,3.241874);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(13,2.268112);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(14,2.773997);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(15,1.928873);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(16,1.413071);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(17,1.386964);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(19,0.0466277);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(20,0.5419695);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(21,0.5652824);
   Zee_2bjet_mSV_jet1_stack_2->SetBinContent(24,0.3014579);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(0,0.8678714);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(3,0.534318);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(4,0.6400869);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(5,0.5941067);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(6,0.6853918);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(7,0.7584806);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(8,1.307225);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(9,0.8886589);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(10,1.181587);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(11,1.012146);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(12,0.9378022);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(13,0.760986);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(14,0.8894954);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(15,0.7315259);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(16,0.6038599);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(17,0.6206158);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(19,0.03371389);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(20,0.383667);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(21,0.3998054);
   Zee_2bjet_mSV_jet1_stack_2->SetBinError(24,0.3014579);
   Zee_2bjet_mSV_jet1_stack_2->SetEntries(170);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_mSV_jet1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_mSV_jet1_stack_2->SetLineColor(ci);
   Zee_2bjet_mSV_jet1_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_mSV_jet1_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet1_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_mSV_jet1_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet1_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_mSV_jet1_stack_2,"");
   
   TH1D *Zee_2bjet_mSV_jet1_stack_3 = new TH1D("Zee_2bjet_mSV_jet1_stack_3","",50,0,10);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(0,35.94689);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(2,9.020689);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(3,25.67621);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(4,36.58807);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(5,44.40037);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(6,61.3107);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(7,72.10672);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(8,65.61496);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(9,72.80201);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(10,62.34274);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(11,58.28543);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(12,49.59904);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(13,44.01233);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(14,35.21462);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(15,32.08305);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(16,19.70437);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(17,18.80722);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(18,12.03129);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(19,7.87453);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(20,6.903026);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(21,4.358369);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(22,3.114737);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(23,2.610657);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(24,0.8702904);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(25,0.5054882);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(26,0.7450021);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(27,0.196678);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(28,0.3568018);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(30,0.1918007);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(31,0.1914022);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(38,0.2014464);
   Zee_2bjet_mSV_jet1_stack_3->SetBinContent(51,0.1567293);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(0,2.512405);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(2,1.256518);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(3,2.139125);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(4,2.522191);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(5,2.801164);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(6,3.275731);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(7,3.541348);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(8,3.38193);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(9,3.583095);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(10,3.305156);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(11,3.214572);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(12,2.958714);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(13,2.790894);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(14,2.491798);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(15,2.378815);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(16,1.854351);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(17,1.81827);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(18,1.451166);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(19,1.174007);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(20,1.107514);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(21,0.8766119);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(22,0.7457145);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(23,0.6760387);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(24,0.3897248);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(25,0.2953909);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(26,0.3738212);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(27,0.196678);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(28,0.252372);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(30,0.1918007);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(31,0.1914022);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(38,0.2014464);
   Zee_2bjet_mSV_jet1_stack_3->SetBinError(51,0.1567293);
   Zee_2bjet_mSV_jet1_stack_3->SetEntries(4701);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_mSV_jet1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_mSV_jet1_stack_3->SetLineColor(ci);
   Zee_2bjet_mSV_jet1_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_mSV_jet1_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet1_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_mSV_jet1_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet1_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_mSV_jet1_stack_3,"");
   
   TH1D *Zee_2bjet_XX_mSV_jet1_stack_4 = new TH1D("Zee_2bjet_XX_mSV_jet1_stack_4","",50,0,10);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(0,1.277111);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(3,0.7482643);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(4,1.707346);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(5,1.864825);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(6,0.0848529);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(7,0.6269253);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(8,0.5012348);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(9,0.7583104);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(10,0.07280342);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(11,0.492073);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(12,1.112212);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(16,0.3190706);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinContent(17,0.5043973);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(0,1.136615);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(3,1.071323);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(4,1.243551);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(5,1.57911);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(6,1.059592);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(7,0.8792975);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(8,0.983639);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(9,1.442995);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(10,1.097061);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(11,0.7940867);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(12,0.6892031);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(16,0.3190706);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetBinError(17,0.5043973);
   Zee_2bjet_XX_mSV_jet1_stack_4->SetEntries(60);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_mSV_jet1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_mSV_jet1_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_mSV_jet1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_mSV_jet1_stack_4,"");
   
   TH1D *Zee_2bjet_bX_mSV_jet1_stack_5 = new TH1D("Zee_2bjet_bX_mSV_jet1_stack_5","",50,0,10);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(0,3.878083);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(2,0.6502347);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(3,2.191463);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(4,0.7899158);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(5,3.297262);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(6,3.687131);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(7,3.60809);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(8,2.037786);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(9,6.867944);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(10,2.043992);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(11,1.455721);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(12,1.985268);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(13,0.03493272);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(14,0.79797);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(15,0.564555);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(16,1.057875);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(17,0.4333098);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(18,0.200389);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(19,0.07436929);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(21,0.4224373);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(22,1.008394);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinContent(25,0.4756502);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(0,2.014628);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(2,1.089731);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(3,1.217608);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(4,1.898992);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(5,1.858814);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(6,1.944792);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(7,1.909942);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(8,2.067319);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(9,2.373804);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(10,2.286519);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(11,1.593885);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(12,1.898831);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(13,1.339295);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(14,1.651172);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(15,0.8635608);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(16,1.366246);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(17,0.8692961);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(18,1.008368);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(19,0.7671554);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(21,0.3880876);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(22,0.7150154);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetBinError(25,0.4756502);
   Zee_2bjet_bX_mSV_jet1_stack_5->SetEntries(253);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_mSV_jet1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_mSV_jet1_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_mSV_jet1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_mSV_jet1_stack_5,"");
   
   TH1D *Zee_2bjet_bb_mSV_jet1_stack_6 = new TH1D("Zee_2bjet_bb_mSV_jet1_stack_6","",50,0,10);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(0,85.01167);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(2,18.05094);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(3,57.66459);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(4,83.08798);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(5,120.5449);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(6,152.2591);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(7,162.2285);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(8,155.057);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(9,193.856);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(10,194.1227);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(11,157.3532);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(12,115.1779);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(13,132.9461);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(14,69.9687);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(15,76.53097);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(16,54.77848);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(17,51.91042);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(18,31.57802);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(19,21.26431);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(20,15.38268);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(21,7.575367);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(22,7.039467);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(23,7.747331);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(24,-0.911721);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(25,2.364777);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(26,1.854143);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(27,-0.4274171);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(28,0.9587024);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(30,-0.4460994);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(32,1.179865);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(33,0.4965889);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(34,-0.5325568);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinContent(51,0.4730556);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(0,11.20597);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(2,4.845501);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(3,8.57057);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(4,10.23542);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(5,12.18679);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(6,14.1903);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(7,15.06266);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(8,15.30169);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(9,16.00045);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(10,15.48727);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(11,14.64894);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(12,13.2287);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(13,12.56737);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(14,11.25735);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(15,10.26075);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(16,8.913095);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(17,8.127704);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(18,6.680782);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(19,5.975118);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(20,4.839355);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(21,4.124922);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(22,3.178996);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(23,2.665157);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(24,1.601781);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(25,1.508009);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(26,1.296387);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(27,0.7683006);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(28,0.67906);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(30,0.4460994);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(32,0.691741);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(33,0.4965889);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(34,0.5325568);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetBinError(51,0.4730556);
   Zee_2bjet_bb_mSV_jet1_stack_6->SetEntries(13604);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_mSV_jet1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_mSV_jet1_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_mSV_jet1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_mSV_jet1_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_mSV_jet1__489 = new TH1D("Zee_2bjet_mSV_jet1__489","",50,0,10);
   Zee_2bjet_mSV_jet1__489->SetBinContent(0,102);
   Zee_2bjet_mSV_jet1__489->SetBinContent(2,19);
   Zee_2bjet_mSV_jet1__489->SetBinContent(3,67);
   Zee_2bjet_mSV_jet1__489->SetBinContent(4,109);
   Zee_2bjet_mSV_jet1__489->SetBinContent(5,132);
   Zee_2bjet_mSV_jet1__489->SetBinContent(6,200);
   Zee_2bjet_mSV_jet1__489->SetBinContent(7,206);
   Zee_2bjet_mSV_jet1__489->SetBinContent(8,222);
   Zee_2bjet_mSV_jet1__489->SetBinContent(9,207);
   Zee_2bjet_mSV_jet1__489->SetBinContent(10,221);
   Zee_2bjet_mSV_jet1__489->SetBinContent(11,191);
   Zee_2bjet_mSV_jet1__489->SetBinContent(12,187);
   Zee_2bjet_mSV_jet1__489->SetBinContent(13,123);
   Zee_2bjet_mSV_jet1__489->SetBinContent(14,143);
   Zee_2bjet_mSV_jet1__489->SetBinContent(15,108);
   Zee_2bjet_mSV_jet1__489->SetBinContent(16,71);
   Zee_2bjet_mSV_jet1__489->SetBinContent(17,83);
   Zee_2bjet_mSV_jet1__489->SetBinContent(18,41);
   Zee_2bjet_mSV_jet1__489->SetBinContent(19,41);
   Zee_2bjet_mSV_jet1__489->SetBinContent(20,25);
   Zee_2bjet_mSV_jet1__489->SetBinContent(21,20);
   Zee_2bjet_mSV_jet1__489->SetBinContent(22,14);
   Zee_2bjet_mSV_jet1__489->SetBinContent(23,5);
   Zee_2bjet_mSV_jet1__489->SetBinContent(24,6);
   Zee_2bjet_mSV_jet1__489->SetBinContent(25,2);
   Zee_2bjet_mSV_jet1__489->SetBinContent(27,3);
   Zee_2bjet_mSV_jet1__489->SetBinContent(28,1);
   Zee_2bjet_mSV_jet1__489->SetBinError(0,10.0995);
   Zee_2bjet_mSV_jet1__489->SetBinError(2,4.358899);
   Zee_2bjet_mSV_jet1__489->SetBinError(3,8.185353);
   Zee_2bjet_mSV_jet1__489->SetBinError(4,10.44031);
   Zee_2bjet_mSV_jet1__489->SetBinError(5,11.48913);
   Zee_2bjet_mSV_jet1__489->SetBinError(6,14.14214);
   Zee_2bjet_mSV_jet1__489->SetBinError(7,14.3527);
   Zee_2bjet_mSV_jet1__489->SetBinError(8,14.89966);
   Zee_2bjet_mSV_jet1__489->SetBinError(9,14.38749);
   Zee_2bjet_mSV_jet1__489->SetBinError(10,14.86607);
   Zee_2bjet_mSV_jet1__489->SetBinError(11,13.82027);
   Zee_2bjet_mSV_jet1__489->SetBinError(12,13.67479);
   Zee_2bjet_mSV_jet1__489->SetBinError(13,11.09054);
   Zee_2bjet_mSV_jet1__489->SetBinError(14,11.95826);
   Zee_2bjet_mSV_jet1__489->SetBinError(15,10.3923);
   Zee_2bjet_mSV_jet1__489->SetBinError(16,8.42615);
   Zee_2bjet_mSV_jet1__489->SetBinError(17,9.110434);
   Zee_2bjet_mSV_jet1__489->SetBinError(18,6.403124);
   Zee_2bjet_mSV_jet1__489->SetBinError(19,6.403124);
   Zee_2bjet_mSV_jet1__489->SetBinError(20,5);
   Zee_2bjet_mSV_jet1__489->SetBinError(21,4.472136);
   Zee_2bjet_mSV_jet1__489->SetBinError(22,3.741657);
   Zee_2bjet_mSV_jet1__489->SetBinError(23,2.236068);
   Zee_2bjet_mSV_jet1__489->SetBinError(24,2.44949);
   Zee_2bjet_mSV_jet1__489->SetBinError(25,1.414214);
   Zee_2bjet_mSV_jet1__489->SetBinError(27,1.732051);
   Zee_2bjet_mSV_jet1__489->SetBinError(28,1);
   Zee_2bjet_mSV_jet1__489->SetEntries(2549);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_mSV_jet1__489->SetLineColor(ci);
   Zee_2bjet_mSV_jet1__489->SetLineWidth(2);
   Zee_2bjet_mSV_jet1__489->SetMarkerStyle(20);
   Zee_2bjet_mSV_jet1__489->SetMarkerSize(1.2);
   Zee_2bjet_mSV_jet1__489->GetXaxis()->SetRange(1,100);
   Zee_2bjet_mSV_jet1__489->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1__489->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1__489->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1__489->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet1__489->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1__489->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1__489->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1__489->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_mSV_jet1__489->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet1__489->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_mSV_jet1__489->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_mSV_jet1__489->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_mSV_jet1__489->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_mSV_jet1__489->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_mSV_jet1_fx1489[50] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_Zee_2bjet_bb_mSV_jet1_fy1489[50] = {
   0,
   27.86029,
   88.1421,
   124.0544,
   172.9153,
   220.2294,
   242.1586,
   230.8046,
   280.4703,
   265.9797,
   223.143,
   172.3335,
   179.9759,
   109.1456,
   111.2894,
   77.60061,
   73.2132,
   44.1775,
   29.43707,
   22.82768,
   13.10465,
   11.1626,
   10.35799,
   0.2600273,
   3.345915,
   2.599145,
   -0.230739,
   1.315504,
   0,
   -0.2542987,
   0.1914022,
   1.179865,
   0.4965889,
   -0.5325568,
   0,
   0,
   0,
   0.2014464,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_Zee_2bjet_bb_mSV_jet1_fex1489[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_Zee_2bjet_bb_mSV_jet1_fey1489[50] = {
   0,
   5.12488,
   9.004354,
   10.80449,
   12.76308,
   14.75345,
   15.64191,
   15.89881,
   16.67144,
   16.09443,
   15.14723,
   13.74507,
   12.9703,
   11.68466,
   10.59508,
   9.233521,
   8.413687,
   6.915216,
   6.140147,
   4.979271,
   4.257634,
   3.342657,
   2.749562,
   1.675847,
   1.608599,
   1.349207,
   0.7930751,
   0.7244405,
   0,
   0.4855844,
   0.1914022,
   0.691741,
   0.4965889,
   0.5325568,
   0,
   0,
   0,
   0.2014464,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(50,Graph_from_Zee_2bjet_bb_mSV_jet1_fx1489,Graph_from_Zee_2bjet_bb_mSV_jet1_fy1489,Graph_from_Zee_2bjet_bb_mSV_jet1_fex1489,Graph_from_Zee_2bjet_bb_mSV_jet1_fey1489);
   gre->SetName("Graph_from_Zee_2bjet_bb_mSV_jet1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489","",100,0,11);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489->SetMinimum(-31.27157);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489->SetMaximum(326.9975);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_mSV_jet11489);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_mSV_jet1","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_mSV_jet1_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_mSV_jet1_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_mSV_jet1_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_mSV_jet1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_mSV_jet1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_mSV_jet1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_mSV_jet1","MC unc. (stat.)","fl");

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
   mSV_jet1_Z_2bjet_Zee_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__490 = new TH1D("data_mc_ratio__490","",50,0,10);
   data_mc_ratio__490->SetBinContent(0,0.7856727);
   data_mc_ratio__490->SetBinContent(2,0.6819743);
   data_mc_ratio__490->SetBinContent(3,0.7601362);
   data_mc_ratio__490->SetBinContent(4,0.8786471);
   data_mc_ratio__490->SetBinContent(5,0.7633793);
   data_mc_ratio__490->SetBinContent(6,0.9081439);
   data_mc_ratio__490->SetBinContent(7,0.8506821);
   data_mc_ratio__490->SetBinContent(8,0.9618525);
   data_mc_ratio__490->SetBinContent(9,0.7380461);
   data_mc_ratio__490->SetBinContent(10,0.8308906);
   data_mc_ratio__490->SetBinContent(11,0.8559535);
   data_mc_ratio__490->SetBinContent(12,1.085105);
   data_mc_ratio__490->SetBinContent(13,0.6834248);
   data_mc_ratio__490->SetBinContent(14,1.310177);
   data_mc_ratio__490->SetBinContent(15,0.9704425);
   data_mc_ratio__490->SetBinContent(16,0.9149413);
   data_mc_ratio__490->SetBinContent(17,1.133675);
   data_mc_ratio__490->SetBinContent(18,0.9280743);
   data_mc_ratio__490->SetBinContent(19,1.392802);
   data_mc_ratio__490->SetBinContent(20,1.095162);
   data_mc_ratio__490->SetBinContent(21,1.526175);
   data_mc_ratio__490->SetBinContent(22,1.254188);
   data_mc_ratio__490->SetBinContent(23,0.4827193);
   data_mc_ratio__490->SetBinContent(24,23.0745);
   data_mc_ratio__490->SetBinContent(25,0.5977438);
   data_mc_ratio__490->SetBinContent(27,-13.0017);
   data_mc_ratio__490->SetBinContent(28,0.7601648);
   data_mc_ratio__490->SetBinError(0,0.1054045);
   data_mc_ratio__490->SetBinError(2,0.1564556);
   data_mc_ratio__490->SetBinError(3,0.09286541);
   data_mc_ratio__490->SetBinError(4,0.08415912);
   data_mc_ratio__490->SetBinError(5,0.06644364);
   data_mc_ratio__490->SetBinError(6,0.06421547);
   data_mc_ratio__490->SetBinError(7,0.05926983);
   data_mc_ratio__490->SetBinError(8,0.06455531);
   data_mc_ratio__490->SetBinError(9,0.05129775);
   data_mc_ratio__490->SetBinError(10,0.05589175);
   data_mc_ratio__490->SetBinError(11,0.06193463);
   data_mc_ratio__490->SetBinError(12,0.07935074);
   data_mc_ratio__490->SetBinError(13,0.06162234);
   data_mc_ratio__490->SetBinError(14,0.1095625);
   data_mc_ratio__490->SetBinError(15,0.09338087);
   data_mc_ratio__490->SetBinError(16,0.1085836);
   data_mc_ratio__490->SetBinError(17,0.124437);
   data_mc_ratio__490->SetBinError(18,0.1449409);
   data_mc_ratio__490->SetBinError(19,0.2175191);
   data_mc_ratio__490->SetBinError(20,0.2190324);
   data_mc_ratio__490->SetBinError(21,0.3412632);
   data_mc_ratio__490->SetBinError(22,0.3351959);
   data_mc_ratio__490->SetBinError(23,0.2158786);
   data_mc_ratio__490->SetBinError(24,9.420126);
   data_mc_ratio__490->SetBinError(25,0.4226687);
   data_mc_ratio__490->SetBinError(27,7.506536);
   data_mc_ratio__490->SetBinError(28,0.7601648);
   data_mc_ratio__490->SetMinimum(0.4);
   data_mc_ratio__490->SetMaximum(1.6);
   data_mc_ratio__490->SetEntries(0.0433713);
   data_mc_ratio__490->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__490->SetLineColor(ci);
   data_mc_ratio__490->SetLineWidth(2);
   data_mc_ratio__490->SetMarkerStyle(20);
   data_mc_ratio__490->SetMarkerSize(1.2);
   data_mc_ratio__490->GetXaxis()->SetTitle("Sub-leading jet m_{SV} [GeV]");
   data_mc_ratio__490->GetXaxis()->SetRange(1,30);
   data_mc_ratio__490->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__490->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__490->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__490->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__490->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__490->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__490->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__490->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__490->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__490->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__490->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__490->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__490->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__490->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__490->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__490->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__490->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1490[50] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9,
   2.1,
   2.3,
   2.5,
   2.7,
   2.9,
   3.1,
   3.3,
   3.5,
   3.7,
   3.9,
   4.1,
   4.3,
   4.5,
   4.7,
   4.9,
   5.1,
   5.3,
   5.5,
   5.7,
   5.9,
   6.1,
   6.3,
   6.5,
   6.7,
   6.9,
   7.1,
   7.3,
   7.5,
   7.7,
   7.9,
   8.1,
   8.3,
   8.5,
   8.7,
   8.9,
   9.1,
   9.3,
   9.5,
   9.7,
   9.9};
   Double_t Graph_from_mc_statistical_error_fy1490[50] = {
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
   Double_t Graph_from_mc_statistical_error_fex1490[50] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t Graph_from_mc_statistical_error_fey1490[50] = {
   0,
   0.1839493,
   0.1021572,
   0.0870948,
   0.07381116,
   0.06699129,
   0.06459364,
   0.06888428,
   0.05944103,
   0.06051,
   0.06788129,
   0.07975851,
   0.07206686,
   0.1070558,
   0.0952029,
   0.1189877,
   0.1149204,
   0.1565326,
   0.2085855,
   0.2181243,
   0.3248948,
   0.2994515,
   0.2654533,
   6.44489,
   0.4807649,
   0.5190966,
   0,
   0.5506942,
   0,
   0,
   1,
   0.5862882,
   1,
   0,
   0,
   0,
   0,
   1,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(50,Graph_from_mc_statistical_error_fx1490,Graph_from_mc_statistical_error_fy1490,Graph_from_mc_statistical_error_fex1490,Graph_from_mc_statistical_error_fey1490);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1490 = new TH1F("Graph_Graph_from_mc_statistical_error1490","",100,0,11);
   Graph_Graph_from_mc_statistical_error1490->SetMinimum(-6.733868);
   Graph_Graph_from_mc_statistical_error1490->SetMaximum(8.733868);
   Graph_Graph_from_mc_statistical_error1490->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1490->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1490->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1490->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1490->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1490);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   mSV_jet1_Z_2bjet_Zee_16_amcnlo->cd();
   mSV_jet1_Z_2bjet_Zee_16_amcnlo->Modified();
   mSV_jet1_Z_2bjet_Zee_16_amcnlo->cd();
   mSV_jet1_Z_2bjet_Zee_16_amcnlo->SetSelected(mSV_jet1_Z_2bjet_Zee_16_amcnlo);
}

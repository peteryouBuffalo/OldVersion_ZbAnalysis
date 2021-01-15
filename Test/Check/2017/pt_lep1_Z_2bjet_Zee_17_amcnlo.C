void pt_lep1_Z_2bjet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_2bjet_Zee_17_amcnlo/pt_lep1_Z_2bjet_Zee_17_amcnlo
//=========  (Thu Jan 14 10:42:42 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_2bjet_Zee_17_amcnlo = new TCanvas("pt_lep1_Z_2bjet_Zee_17_amcnlo", "pt_lep1_Z_2bjet_Zee_17_amcnlo",0,0,600,600);
   pt_lep1_Z_2bjet_Zee_17_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_2bjet_Zee_17_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_2bjet_Zee_17_amcnlo->SetFillColor(0);
   pt_lep1_Z_2bjet_Zee_17_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_2bjet_Zee_17_amcnlo->SetBorderMode(0);
   pt_lep1_Z_2bjet_Zee_17_amcnlo->SetBorderSize(2);
   pt_lep1_Z_2bjet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_2bjet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-1.587767,210.4839,1596.179);
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
   st->SetMaximum(1368.002);
   
   TH1F *st_stack_174 = new TH1F("st_stack_174","",40,0,200);
   st_stack_174->SetMinimum(0.01);
   st_stack_174->SetMaximum(1436.403);
   st_stack_174->SetDirectory(0);
   st_stack_174->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_174->SetLineColor(ci);
   st_stack_174->GetXaxis()->SetRange(1,40);
   st_stack_174->GetXaxis()->SetLabelFont(42);
   st_stack_174->GetXaxis()->SetLabelSize(0.035);
   st_stack_174->GetXaxis()->SetTitleSize(0.035);
   st_stack_174->GetXaxis()->SetTitleFont(42);
   st_stack_174->GetYaxis()->SetTitle("Events/5.0");
   st_stack_174->GetYaxis()->SetLabelFont(42);
   st_stack_174->GetYaxis()->SetLabelSize(0.05);
   st_stack_174->GetYaxis()->SetTitleSize(0.057);
   st_stack_174->GetYaxis()->SetTitleOffset(1.2);
   st_stack_174->GetYaxis()->SetTitleFont(42);
   st_stack_174->GetZaxis()->SetLabelFont(42);
   st_stack_174->GetZaxis()->SetLabelSize(0.035);
   st_stack_174->GetZaxis()->SetTitleSize(0.035);
   st_stack_174->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_174);
   
   
   TH1D *Zee_2bjet_pt_lep1_stack_1 = new TH1D("Zee_2bjet_pt_lep1_stack_1","",40,0,200);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(6,4.537917);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(7,4.312954);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(8,3.834561);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(9,3.380287);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(10,1.870961);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(11,0.9246698);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(12,0.6756047);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(13,1.450355);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(14,0.3777788);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(16,0.375122);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(6,0.8635219);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(7,0.8599109);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(8,0.7906882);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(9,0.7317398);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(10,0.5365558);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(11,0.3892691);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(12,0.3364257);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(13,0.5161724);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(14,0.267142);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(16,0.2652654);
   Zee_2bjet_pt_lep1_stack_1->SetEntries(151);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_pt_lep1_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_stack_1->SetLineColor(ci);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_stack_1,"");
   
   TH1D *Zee_2bjet_pt_lep1_stack_2 = new TH1D("Zee_2bjet_pt_lep1_stack_2","",40,0,200);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(6,11.91414);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(7,11.04197);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(8,13.2348);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(9,10.73224);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(10,7.003281);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(11,3.34068);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(12,2.548822);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(13,1.611156);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(14,0.9240954);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(15,0.5936145);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(16,0.550502);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(17,0.6158107);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(18,0.3972012);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(20,0.2878182);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(23,0.07869681);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(6,1.925549);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(7,1.896096);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(8,1.971866);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(9,1.77186);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(10,1.554836);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(11,1.005197);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(12,0.9032027);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(13,0.7244179);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(14,0.5347207);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(15,0.4236548);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(16,0.3929462);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(17,0.4357772);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(18,0.3486934);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(20,0.2878182);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(23,0.07869681);
   Zee_2bjet_pt_lep1_stack_2->SetEntries(230);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_pt_lep1_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_stack_2->SetLineColor(ci);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_stack_2,"");
   
   TH1D *Zee_2bjet_pt_lep1_stack_3 = new TH1D("Zee_2bjet_pt_lep1_stack_3","",40,0,200);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(6,189.4363);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(7,235.3451);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(8,212.9937);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(9,174.0057);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(10,117.9714);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(11,73.00348);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(12,50.20415);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(13,22.7863);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(14,12.13471);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(15,7.286452);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(16,4.67313);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(17,0.9571265);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(18,0.5628723);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(23,0.4043599);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(26,0.07224948);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(6,8.053233);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(7,9.005471);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(8,8.429871);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(9,7.643335);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(10,6.336097);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(11,4.947633);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(12,4.161134);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(13,2.775298);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(14,2.062493);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(15,1.624464);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(16,1.292245);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(17,0.5570113);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(18,0.4830456);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(23,0.4043599);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(26,0.07224948);
   Zee_2bjet_pt_lep1_stack_3->SetEntries(3646);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_pt_lep1_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1_stack_3->SetLineColor(ci);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep1_stack_3,"");
   
   TH1D *Zee_2bjet_XX_pt_lep1_stack_4 = new TH1D("Zee_2bjet_XX_pt_lep1_stack_4","",40,0,200);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(6,2.313589);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(7,-0.2503886);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(8,0.4958467);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(9,-0.4490719);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(10,0.8433278);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(12,0.6055117);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(16,-1.088744);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(6,1.640483);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(7,2.525724);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(8,1.290154);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(9,0.6662831);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(10,1.738752);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(12,0.6055117);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(16,1.088744);
   Zee_2bjet_XX_pt_lep1_stack_4->SetEntries(29);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_pt_lep1_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_pt_lep1_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetRange(1,200);
   Zee_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_pt_lep1_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_pt_lep1_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_pt_lep1_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_pt_lep1_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_pt_lep1_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_pt_lep1_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_pt_lep1_stack_4,"");
   
   TH1D *Zee_2bjet_bX_pt_lep1_stack_5 = new TH1D("Zee_2bjet_bX_pt_lep1_stack_5","",40,0,200);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(6,13.36341);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(7,-0.1742188);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(8,3.179238);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(9,5.580835);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(10,2.959205);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(11,-2.024874);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(12,2.381587);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(13,-0.0465213);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(14,2.2074);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(15,2.267336);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(17,-0.8435515);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(19,0.0983273);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(20,0.002035004);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(26,1.603014);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(6,4.102385);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(7,3.301539);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(8,3.896112);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(9,3.890819);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(10,2.464553);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(11,2.509405);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(12,1.772453);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(13,0.0465213);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(14,1.296703);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(15,1.787677);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(17,0.8435515);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(19,0.0983273);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(20,0.1305045);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(26,1.144155);
   Zee_2bjet_bX_pt_lep1_stack_5->SetEntries(165);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_pt_lep1_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_pt_lep1_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetRange(1,200);
   Zee_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_pt_lep1_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_pt_lep1_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_pt_lep1_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_pt_lep1_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_pt_lep1_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_pt_lep1_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_pt_lep1_stack_5,"");
   
   TH1D *Zee_2bjet_bb_pt_lep1_stack_6 = new TH1D("Zee_2bjet_bb_pt_lep1_stack_6","",40,0,200);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(6,428.6067);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(7,502.126);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(8,401.5136);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(9,359.6423);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(10,178.9481);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(11,149.0826);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(12,111.5443);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(13,78.93597);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(14,47.03509);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(15,27.6851);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(16,22.95821);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(17,19.60428);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(18,12.59281);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(19,3.950396);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(20,14.15752);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(21,6.443813);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(22,6.291043);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(23,5.331822);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(24,3.095452);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(25,1.651644);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(26,0.7987561);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(27,-0.7206375);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(28,0.8617107);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(29,4.2149);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(30,-0.8012067);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(31,0.1295133);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(32,-9.263573e-05);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(37,-0.01702028);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(39,2.499182);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(40,0.5397869);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(41,0.4906386);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(6,30.12359);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(7,32.44494);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(8,30.3092);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(9,27.7645);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(10,21.3291);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(11,17.03832);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(12,13.93522);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(13,11.37958);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(14,10.04634);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(15,7.188271);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(16,6.47258);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(17,6.064693);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(18,4.772164);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(19,4.250065);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(20,3.760297);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(21,3.624224);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(22,2.628361);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(23,2.489649);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(24,1.955496);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(25,1.805308);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(26,1.423749);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(27,1.635673);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(28,1.141942);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(29,1.753518);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(30,0.8012067);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(31,1.342198);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(32,1.468305);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(37,0.01702028);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(39,1.444277);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(40,0.5397869);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(41,1.102815);
   Zee_2bjet_bb_pt_lep1_stack_6->SetEntries(9701);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_pt_lep1_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_pt_lep1_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetRange(1,200);
   Zee_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_pt_lep1_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_pt_lep1_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_pt_lep1_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_pt_lep1_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_pt_lep1_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_pt_lep1_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_pt_lep1_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_pt_lep1__347 = new TH1D("Zee_2bjet_pt_lep1__347","",40,0,200);
   Zee_2bjet_pt_lep1__347->SetBinContent(6,496);
   Zee_2bjet_pt_lep1__347->SetBinContent(7,629);
   Zee_2bjet_pt_lep1__347->SetBinContent(8,618);
   Zee_2bjet_pt_lep1__347->SetBinContent(9,479);
   Zee_2bjet_pt_lep1__347->SetBinContent(10,282);
   Zee_2bjet_pt_lep1__347->SetBinContent(11,184);
   Zee_2bjet_pt_lep1__347->SetBinContent(12,112);
   Zee_2bjet_pt_lep1__347->SetBinContent(13,84);
   Zee_2bjet_pt_lep1__347->SetBinContent(14,56);
   Zee_2bjet_pt_lep1__347->SetBinContent(15,36);
   Zee_2bjet_pt_lep1__347->SetBinContent(16,30);
   Zee_2bjet_pt_lep1__347->SetBinContent(17,17);
   Zee_2bjet_pt_lep1__347->SetBinContent(18,12);
   Zee_2bjet_pt_lep1__347->SetBinContent(19,6);
   Zee_2bjet_pt_lep1__347->SetBinContent(20,5);
   Zee_2bjet_pt_lep1__347->SetBinContent(21,5);
   Zee_2bjet_pt_lep1__347->SetBinContent(22,2);
   Zee_2bjet_pt_lep1__347->SetBinContent(23,3);
   Zee_2bjet_pt_lep1__347->SetBinContent(24,2);
   Zee_2bjet_pt_lep1__347->SetBinContent(25,3);
   Zee_2bjet_pt_lep1__347->SetBinContent(27,1);
   Zee_2bjet_pt_lep1__347->SetBinContent(28,2);
   Zee_2bjet_pt_lep1__347->SetBinContent(30,2);
   Zee_2bjet_pt_lep1__347->SetBinContent(31,3);
   Zee_2bjet_pt_lep1__347->SetBinContent(32,1);
   Zee_2bjet_pt_lep1__347->SetBinError(6,22.27106);
   Zee_2bjet_pt_lep1__347->SetBinError(7,25.07987);
   Zee_2bjet_pt_lep1__347->SetBinError(8,24.85961);
   Zee_2bjet_pt_lep1__347->SetBinError(9,21.88607);
   Zee_2bjet_pt_lep1__347->SetBinError(10,16.79286);
   Zee_2bjet_pt_lep1__347->SetBinError(11,13.56466);
   Zee_2bjet_pt_lep1__347->SetBinError(12,10.58301);
   Zee_2bjet_pt_lep1__347->SetBinError(13,9.165151);
   Zee_2bjet_pt_lep1__347->SetBinError(14,7.483315);
   Zee_2bjet_pt_lep1__347->SetBinError(15,6);
   Zee_2bjet_pt_lep1__347->SetBinError(16,5.477226);
   Zee_2bjet_pt_lep1__347->SetBinError(17,4.123106);
   Zee_2bjet_pt_lep1__347->SetBinError(18,3.464102);
   Zee_2bjet_pt_lep1__347->SetBinError(19,2.44949);
   Zee_2bjet_pt_lep1__347->SetBinError(20,2.236068);
   Zee_2bjet_pt_lep1__347->SetBinError(21,2.236068);
   Zee_2bjet_pt_lep1__347->SetBinError(22,1.414214);
   Zee_2bjet_pt_lep1__347->SetBinError(23,1.732051);
   Zee_2bjet_pt_lep1__347->SetBinError(24,1.414214);
   Zee_2bjet_pt_lep1__347->SetBinError(25,1.732051);
   Zee_2bjet_pt_lep1__347->SetBinError(27,1);
   Zee_2bjet_pt_lep1__347->SetBinError(28,1.414214);
   Zee_2bjet_pt_lep1__347->SetBinError(30,1.414214);
   Zee_2bjet_pt_lep1__347->SetBinError(31,1.732051);
   Zee_2bjet_pt_lep1__347->SetBinError(32,1);
   Zee_2bjet_pt_lep1__347->SetEntries(3070);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1__347->SetLineColor(ci);
   Zee_2bjet_pt_lep1__347->SetLineWidth(2);
   Zee_2bjet_pt_lep1__347->SetMarkerStyle(20);
   Zee_2bjet_pt_lep1__347->SetMarkerSize(1.2);
   Zee_2bjet_pt_lep1__347->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1__347->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1__347->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1__347->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1__347->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1__347->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1__347->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1__347->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1__347->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1__347->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1__347->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1__347->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1__347->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1__347->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1__347->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_pt_lep1_fx1347[40] = {
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
   Double_t Graph_from_Zee_2bjet_bb_pt_lep1_fy1347[40] = {
   0,
   0,
   0,
   0,
   0,
   650.1721,
   752.4014,
   635.2517,
   552.8923,
   309.5962,
   224.3265,
   167.96,
   104.7373,
   62.67908,
   37.8325,
   27.46822,
   20.33367,
   13.55288,
   4.048723,
   14.44738,
   6.443813,
   6.291043,
   5.814879,
   3.095452,
   1.651644,
   2.474019,
   -0.7206375,
   0.8617107,
   4.2149,
   -0.8012067,
   0.1295133,
   -9.263573e-05,
   0,
   0,
   0,
   0,
   -0.01702028,
   0,
   2.499182,
   0.5397869};
   Double_t Graph_from_Zee_2bjet_bb_pt_lep1_fex1347[40] = {
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
   Double_t Graph_from_Zee_2bjet_bb_pt_lep1_fey1347[40] = {
   0,
   0,
   0,
   0,
   0,
   31.56357,
   33.99098,
   31.79729,
   29.12981,
   22.51398,
   17.95111,
   14.69499,
   11.74694,
   10.35478,
   7.59509,
   6.70629,
   6.163785,
   4.809207,
   4.251202,
   3.773553,
   3.624224,
   2.628361,
   2.5235,
   1.955496,
   1.805308,
   1.827942,
   1.635673,
   1.141942,
   1.753518,
   0.8012067,
   1.342198,
   1.468305,
   0,
   0,
   0,
   0,
   0.01702028,
   0,
   1.444277,
   0.5397869};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zee_2bjet_bb_pt_lep1_fx1347,Graph_from_Zee_2bjet_bb_pt_lep1_fy1347,Graph_from_Zee_2bjet_bb_pt_lep1_fex1347,Graph_from_Zee_2bjet_bb_pt_lep1_fey1347);
   gre->SetName("Graph_from_Zee_2bjet_bb_pt_lep1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_pt_lep11347 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_pt_lep11347","",100,0,220);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11347->SetMinimum(-81.23118);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11347->SetMaximum(865.2672);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11347->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11347->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11347->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11347->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11347->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11347->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11347->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11347->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11347->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11347->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11347->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11347->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11347->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11347->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11347->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11347->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_pt_lep11347);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_pt_lep1","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_pt_lep1_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_pt_lep1_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_pt_lep1_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep1_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_pt_lep1","MC unc. (stat.)","fl");

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
   pt_lep1_Z_2bjet_Zee_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__348 = new TH1D("data_mc_ratio__348","",40,0,200);
   data_mc_ratio__348->SetBinContent(6,0.762875);
   data_mc_ratio__348->SetBinContent(7,0.83599);
   data_mc_ratio__348->SetBinContent(8,0.9728427);
   data_mc_ratio__348->SetBinContent(9,0.8663532);
   data_mc_ratio__348->SetBinContent(10,0.9108638);
   data_mc_ratio__348->SetBinContent(11,0.8202329);
   data_mc_ratio__348->SetBinContent(12,0.6668255);
   data_mc_ratio__348->SetBinContent(13,0.8020068);
   data_mc_ratio__348->SetBinContent(14,0.89344);
   data_mc_ratio__348->SetBinContent(15,0.9515628);
   data_mc_ratio__348->SetBinContent(16,1.092171);
   data_mc_ratio__348->SetBinContent(17,0.8360518);
   data_mc_ratio__348->SetBinContent(18,0.8854203);
   data_mc_ratio__348->SetBinContent(19,1.481949);
   data_mc_ratio__348->SetBinContent(20,0.3460836);
   data_mc_ratio__348->SetBinContent(21,0.7759381);
   data_mc_ratio__348->SetBinContent(22,0.3179123);
   data_mc_ratio__348->SetBinContent(23,0.5159179);
   data_mc_ratio__348->SetBinContent(24,0.6461092);
   data_mc_ratio__348->SetBinContent(25,1.816372);
   data_mc_ratio__348->SetBinContent(27,-1.38766);
   data_mc_ratio__348->SetBinContent(28,2.320965);
   data_mc_ratio__348->SetBinContent(30,-2.496235);
   data_mc_ratio__348->SetBinContent(31,23.16364);
   data_mc_ratio__348->SetBinContent(32,-10794.97);
   data_mc_ratio__348->SetBinError(6,0.0342541);
   data_mc_ratio__348->SetBinError(7,0.0333331);
   data_mc_ratio__348->SetBinError(8,0.03913347);
   data_mc_ratio__348->SetBinError(9,0.03958469);
   data_mc_ratio__348->SetBinError(10,0.05424115);
   data_mc_ratio__348->SetBinError(11,0.06046837);
   data_mc_ratio__348->SetBinError(12,0.06300909);
   data_mc_ratio__348->SetBinError(13,0.08750612);
   data_mc_ratio__348->SetBinError(14,0.1193909);
   data_mc_ratio__348->SetBinError(15,0.1585938);
   data_mc_ratio__348->SetBinError(16,0.1994023);
   data_mc_ratio__348->SetBinError(17,0.2027723);
   data_mc_ratio__348->SetBinError(18,0.2555988);
   data_mc_ratio__348->SetBinError(19,0.605003);
   data_mc_ratio__348->SetBinError(20,0.1547733);
   data_mc_ratio__348->SetBinError(21,0.3470101);
   data_mc_ratio__348->SetBinError(22,0.224798);
   data_mc_ratio__348->SetBinError(23,0.2978653);
   data_mc_ratio__348->SetBinError(24,0.4568682);
   data_mc_ratio__348->SetBinError(25,1.048683);
   data_mc_ratio__348->SetBinError(27,1.38766);
   data_mc_ratio__348->SetBinError(28,1.64117);
   data_mc_ratio__348->SetBinError(30,1.765105);
   data_mc_ratio__348->SetBinError(31,13.37353);
   data_mc_ratio__348->SetBinError(32,10794.97);
   data_mc_ratio__348->SetMinimum(0.4);
   data_mc_ratio__348->SetMaximum(1.6);
   data_mc_ratio__348->SetEntries(10756.17);
   data_mc_ratio__348->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__348->SetLineColor(ci);
   data_mc_ratio__348->SetLineWidth(2);
   data_mc_ratio__348->SetMarkerStyle(20);
   data_mc_ratio__348->SetMarkerSize(1.2);
   data_mc_ratio__348->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__348->GetXaxis()->SetRange(1,40);
   data_mc_ratio__348->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__348->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__348->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__348->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__348->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__348->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__348->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__348->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__348->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__348->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__348->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__348->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__348->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__348->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__348->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__348->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__348->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1348[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1348[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1348[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1348[40] = {
   0,
   0,
   0,
   0,
   0,
   0.04854649,
   0.04517666,
   0.05005464,
   0.05268623,
   0.07272045,
   0.08002225,
   0.08749101,
   0.1121563,
   0.1652032,
   0.2007557,
   0.2441472,
   0.303132,
   0.3548475,
   1.050011,
   0.2611929,
   0.5624347,
   0.4177942,
   0.4339729,
   0.631732,
   1.093037,
   0.738855,
   0,
   1.325204,
   0.4160284,
   0,
   10.3634,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.5778998,
   1};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1348,Graph_from_mc_statistical_error_fy1348,Graph_from_mc_statistical_error_fex1348,Graph_from_mc_statistical_error_fey1348);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1348 = new TH1F("Graph_Graph_from_mc_statistical_error1348","",100,0,220);
   Graph_Graph_from_mc_statistical_error1348->SetMinimum(-11.43608);
   Graph_Graph_from_mc_statistical_error1348->SetMaximum(13.43608);
   Graph_Graph_from_mc_statistical_error1348->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1348->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1348->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1348->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1348->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1348->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1348->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1348->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1348->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1348->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1348->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1348->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1348->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1348->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1348->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1348->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1348);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_2bjet_Zee_17_amcnlo->cd();
   pt_lep1_Z_2bjet_Zee_17_amcnlo->Modified();
   pt_lep1_Z_2bjet_Zee_17_amcnlo->cd();
   pt_lep1_Z_2bjet_Zee_17_amcnlo->SetSelected(pt_lep1_Z_2bjet_Zee_17_amcnlo);
}

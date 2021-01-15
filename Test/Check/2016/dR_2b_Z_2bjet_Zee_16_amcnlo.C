void dR_2b_Z_2bjet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: dR_2b_Z_2bjet_Zee_16_amcnlo/dR_2b_Z_2bjet_Zee_16_amcnlo
//=========  (Thu Jan 14 10:42:50 2021) by ROOT version 6.14/09
   TCanvas *dR_2b_Z_2bjet_Zee_16_amcnlo = new TCanvas("dR_2b_Z_2bjet_Zee_16_amcnlo", "dR_2b_Z_2bjet_Zee_16_amcnlo",0,0,600,600);
   dR_2b_Z_2bjet_Zee_16_amcnlo->SetHighLightColor(2);
   dR_2b_Z_2bjet_Zee_16_amcnlo->Range(0,0,1,1);
   dR_2b_Z_2bjet_Zee_16_amcnlo->SetFillColor(0);
   dR_2b_Z_2bjet_Zee_16_amcnlo->SetFillStyle(4000);
   dR_2b_Z_2bjet_Zee_16_amcnlo->SetBorderMode(0);
   dR_2b_Z_2bjet_Zee_16_amcnlo->SetBorderSize(2);
   dR_2b_Z_2bjet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   dR_2b_Z_2bjet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-1.186757,6.314516,1195.57);
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
   st->SetMaximum(1024.661);
   
   TH1F *st_stack_221 = new TH1F("st_stack_221","",25,0,10);
   st_stack_221->SetMinimum(0.01);
   st_stack_221->SetMaximum(1075.894);
   st_stack_221->SetDirectory(0);
   st_stack_221->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_221->SetLineColor(ci);
   st_stack_221->GetXaxis()->SetRange(1,15);
   st_stack_221->GetXaxis()->SetLabelFont(42);
   st_stack_221->GetXaxis()->SetLabelSize(0.035);
   st_stack_221->GetXaxis()->SetTitleSize(0.035);
   st_stack_221->GetXaxis()->SetTitleFont(42);
   st_stack_221->GetYaxis()->SetTitle("Events/0.4");
   st_stack_221->GetYaxis()->SetLabelFont(42);
   st_stack_221->GetYaxis()->SetLabelSize(0.05);
   st_stack_221->GetYaxis()->SetTitleSize(0.057);
   st_stack_221->GetYaxis()->SetTitleOffset(1.2);
   st_stack_221->GetYaxis()->SetTitleFont(42);
   st_stack_221->GetZaxis()->SetLabelFont(42);
   st_stack_221->GetZaxis()->SetLabelSize(0.035);
   st_stack_221->GetZaxis()->SetTitleSize(0.035);
   st_stack_221->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_221);
   
   
   TH1D *Zee_2bjet_dR_2b_stack_1 = new TH1D("Zee_2bjet_dR_2b_stack_1","",25,0,10);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(2,0.5800401);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(3,1.724735);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(4,1.05509);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(5,1.615632);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(6,2.929543);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(7,4.293615);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(8,3.684922);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(9,2.173523);
   Zee_2bjet_dR_2b_stack_1->SetBinContent(10,0.1795887);
   Zee_2bjet_dR_2b_stack_1->SetBinError(2,0.3349031);
   Zee_2bjet_dR_2b_stack_1->SetBinError(3,0.5550441);
   Zee_2bjet_dR_2b_stack_1->SetBinError(4,0.4142716);
   Zee_2bjet_dR_2b_stack_1->SetBinError(5,0.5394888);
   Zee_2bjet_dR_2b_stack_1->SetBinError(6,0.7234171);
   Zee_2bjet_dR_2b_stack_1->SetBinError(7,0.8711226);
   Zee_2bjet_dR_2b_stack_1->SetBinError(8,0.8005606);
   Zee_2bjet_dR_2b_stack_1->SetBinError(9,0.612548);
   Zee_2bjet_dR_2b_stack_1->SetBinError(10,0.1795887);
   Zee_2bjet_dR_2b_stack_1->SetEntries(109);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_dR_2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_1->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_1,"");
   
   TH1D *Zee_2bjet_dR_2b_stack_2 = new TH1D("Zee_2bjet_dR_2b_stack_2","",25,0,10);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(2,3.60826);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(3,6.469205);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(4,7.163596);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(5,6.728727);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(6,6.479878);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(7,7.840398);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(8,4.465256);
   Zee_2bjet_dR_2b_stack_2->SetBinContent(9,0.8170536);
   Zee_2bjet_dR_2b_stack_2->SetBinError(2,0.9869715);
   Zee_2bjet_dR_2b_stack_2->SetBinError(3,1.33928);
   Zee_2bjet_dR_2b_stack_2->SetBinError(4,1.387186);
   Zee_2bjet_dR_2b_stack_2->SetBinError(5,1.349544);
   Zee_2bjet_dR_2b_stack_2->SetBinError(6,1.312704);
   Zee_2bjet_dR_2b_stack_2->SetBinError(7,1.437901);
   Zee_2bjet_dR_2b_stack_2->SetBinError(8,1.082366);
   Zee_2bjet_dR_2b_stack_2->SetBinError(9,0.473008);
   Zee_2bjet_dR_2b_stack_2->SetEntries(170);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_dR_2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_2->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_2,"");
   
   TH1D *Zee_2bjet_dR_2b_stack_3 = new TH1D("Zee_2bjet_dR_2b_stack_3","",25,0,10);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(2,25.96166);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(3,48.27328);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(4,65.98024);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(5,91.41426);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(6,115.7038);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(7,155.2623);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(8,179.2554);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(9,72.18864);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(10,22.98063);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(11,5.310087);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(12,1.306441);
   Zee_2bjet_dR_2b_stack_3->SetBinContent(13,0.1869208);
   Zee_2bjet_dR_2b_stack_3->SetBinError(2,2.136845);
   Zee_2bjet_dR_2b_stack_3->SetBinError(3,2.89974);
   Zee_2bjet_dR_2b_stack_3->SetBinError(4,3.390385);
   Zee_2bjet_dR_2b_stack_3->SetBinError(5,4.000851);
   Zee_2bjet_dR_2b_stack_3->SetBinError(6,4.491328);
   Zee_2bjet_dR_2b_stack_3->SetBinError(7,5.234104);
   Zee_2bjet_dR_2b_stack_3->SetBinError(8,5.630316);
   Zee_2bjet_dR_2b_stack_3->SetBinError(9,3.572703);
   Zee_2bjet_dR_2b_stack_3->SetBinError(10,2.014617);
   Zee_2bjet_dR_2b_stack_3->SetBinError(11,0.9636245);
   Zee_2bjet_dR_2b_stack_3->SetBinError(12,0.4657031);
   Zee_2bjet_dR_2b_stack_3->SetBinError(13,0.1869208);
   Zee_2bjet_dR_2b_stack_3->SetEntries(4701);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_dR_2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b_stack_3->SetLineColor(ci);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_dR_2b_stack_3,"");
   
   TH1D *Zee_2bjet_XX_dR_2b_stack_4 = new TH1D("Zee_2bjet_XX_dR_2b_stack_4","",25,0,10);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(2,2.343696);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(3,3.111328);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(4,-0.6581039);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(5,-0.8082574);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(6,0.3257487);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(7,1.201794);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(8,3.35807);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(9,-0.05406186);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(10,1.707058);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(11,0.3972593);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(12,-0.4352756);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinContent(14,-0.4198303);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(2,1.049271);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(3,1.179436);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(4,1.044432);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(5,1.313221);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(6,1.068545);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(7,1.162146);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(8,1.470444);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(9,1.454928);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(10,0.8507796);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(11,0.9603572);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(12,0.4352756);
   Zee_2bjet_XX_dR_2b_stack_4->SetBinError(14,0.4198303);
   Zee_2bjet_XX_dR_2b_stack_4->SetEntries(60);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_dR_2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_dR_2b_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetRange(1,100);
   Zee_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_dR_2b_stack_4,"");
   
   TH1D *Zee_2bjet_bX_dR_2b_stack_5 = new TH1D("Zee_2bjet_bX_dR_2b_stack_5","",25,0,10);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(2,7.268817);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(3,0.4006862);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(4,-0.3298754);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(5,4.564404);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(6,5.730608);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(7,5.756708);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(8,4.147163);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(9,3.626078);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(10,4.453323);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(11,1.91027);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinContent(12,0.03459156);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(2,2.338059);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(3,1.978098);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(4,1.568898);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(5,2.400353);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(6,2.424663);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(7,2.959229);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(8,3.13875);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(9,2.206772);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(10,1.688341);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(11,1.466348);
   Zee_2bjet_bX_dR_2b_stack_5->SetBinError(12,0.9612229);
   Zee_2bjet_bX_dR_2b_stack_5->SetEntries(253);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_dR_2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_dR_2b_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_dR_2b_stack_5,"");
   
   TH1D *Zee_2bjet_bb_dR_2b_stack_6 = new TH1D("Zee_2bjet_bb_dR_2b_stack_6","",25,0,10);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(2,125.9353);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(3,131.353);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(4,156.8711);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(5,189.7003);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(6,257.2918);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(7,305.5201);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(8,368.6529);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(9,249.7682);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(10,132.3419);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(11,33.67006);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(12,19.99338);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(13,5.005812);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinContent(14,0.04176033);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(2,11.66871);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(3,12.64114);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(4,14.85921);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(5,16.54684);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(6,18.75678);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(7,21.46738);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(8,22.9846);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(9,17.80642);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(10,12.63048);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(11,8.082376);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(12,5.035946);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(13,2.555133);
   Zee_2bjet_bb_dR_2b_stack_6->SetBinError(14,0.8682799);
   Zee_2bjet_bb_dR_2b_stack_6->SetEntries(13604);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_dR_2b_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_dR_2b_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetRange(1,100);
   Zee_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_dR_2b_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_dR_2b__441 = new TH1D("Zee_2bjet_dR_2b__441","",25,0,10);
   Zee_2bjet_dR_2b__441->SetBinContent(2,152);
   Zee_2bjet_dR_2b__441->SetBinContent(3,185);
   Zee_2bjet_dR_2b__441->SetBinContent(4,206);
   Zee_2bjet_dR_2b__441->SetBinContent(5,288);
   Zee_2bjet_dR_2b__441->SetBinContent(6,329);
   Zee_2bjet_dR_2b__441->SetBinContent(7,422);
   Zee_2bjet_dR_2b__441->SetBinContent(8,518);
   Zee_2bjet_dR_2b__441->SetBinContent(9,282);
   Zee_2bjet_dR_2b__441->SetBinContent(10,105);
   Zee_2bjet_dR_2b__441->SetBinContent(11,41);
   Zee_2bjet_dR_2b__441->SetBinContent(12,16);
   Zee_2bjet_dR_2b__441->SetBinContent(13,5);
   Zee_2bjet_dR_2b__441->SetBinError(2,12.32883);
   Zee_2bjet_dR_2b__441->SetBinError(3,13.60147);
   Zee_2bjet_dR_2b__441->SetBinError(4,14.3527);
   Zee_2bjet_dR_2b__441->SetBinError(5,16.97056);
   Zee_2bjet_dR_2b__441->SetBinError(6,18.13836);
   Zee_2bjet_dR_2b__441->SetBinError(7,20.54264);
   Zee_2bjet_dR_2b__441->SetBinError(8,22.75961);
   Zee_2bjet_dR_2b__441->SetBinError(9,16.79286);
   Zee_2bjet_dR_2b__441->SetBinError(10,10.24695);
   Zee_2bjet_dR_2b__441->SetBinError(11,6.403124);
   Zee_2bjet_dR_2b__441->SetBinError(12,4);
   Zee_2bjet_dR_2b__441->SetBinError(13,2.236068);
   Zee_2bjet_dR_2b__441->SetEntries(2549);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_dR_2b__441->SetLineColor(ci);
   Zee_2bjet_dR_2b__441->SetLineWidth(2);
   Zee_2bjet_dR_2b__441->SetMarkerStyle(20);
   Zee_2bjet_dR_2b__441->SetMarkerSize(1.2);
   Zee_2bjet_dR_2b__441->GetXaxis()->SetRange(1,100);
   Zee_2bjet_dR_2b__441->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b__441->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b__441->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b__441->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b__441->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b__441->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b__441->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b__441->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_dR_2b__441->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b__441->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_dR_2b__441->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_dR_2b__441->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_dR_2b__441->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_dR_2b__441->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_dR_2b_fx1441[25] = {
   0.2,
   0.6,
   1,
   1.4,
   1.8,
   2.2,
   2.6,
   3,
   3.4,
   3.8,
   4.2,
   4.6,
   5,
   5.4,
   5.8,
   6.2,
   6.6,
   7,
   7.4,
   7.8,
   8.2,
   8.6,
   9,
   9.4,
   9.8};
   Double_t Graph_from_Zee_2bjet_bb_dR_2b_fy1441[25] = {
   0,
   165.6977,
   191.3323,
   230.082,
   293.2151,
   388.4614,
   479.875,
   563.5636,
   328.5194,
   161.6625,
   41.28767,
   20.89914,
   5.192733,
   -0.37807,
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
   Double_t Graph_from_Zee_2bjet_bb_dR_2b_fex1441[25] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2};
   Double_t Graph_from_Zee_2bjet_bb_dR_2b_fey1441[25] = {
   0,
   12.18108,
   13.25189,
   15.42527,
   17.30327,
   19.52578,
   22.38701,
   23.95451,
   18.36895,
   12.93036,
   8.326214,
   5.166338,
   2.561961,
   0.9644519,
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
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zee_2bjet_bb_dR_2b_fx1441,Graph_from_Zee_2bjet_bb_dR_2b_fy1441,Graph_from_Zee_2bjet_bb_dR_2b_fex1441,Graph_from_Zee_2bjet_bb_dR_2b_fey1441);
   gre->SetName("Graph_from_Zee_2bjet_bb_dR_2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_dR_2b1441 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_dR_2b1441","",100,0,11);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1441->SetMinimum(-60.22859);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1441->SetMaximum(646.4042);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1441->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1441->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1441->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1441->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1441->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1441->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1441->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1441->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1441->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1441->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1441->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1441->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1441->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1441->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1441->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_dR_2b1441->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_dR_2b1441);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_dR_2b","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_dR_2b_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_dR_2b_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_dR_2b_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_dR_2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_dR_2b","MC unc. (stat.)","fl");

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
   dR_2b_Z_2bjet_Zee_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__442 = new TH1D("data_mc_ratio__442","",25,0,10);
   data_mc_ratio__442->SetBinContent(2,0.917333);
   data_mc_ratio__442->SetBinContent(3,0.9669044);
   data_mc_ratio__442->SetBinContent(4,0.8953328);
   data_mc_ratio__442->SetBinContent(5,0.9822142);
   data_mc_ratio__442->SetBinContent(6,0.846931);
   data_mc_ratio__442->SetBinContent(7,0.8793957);
   data_mc_ratio__442->SetBinContent(8,0.9191509);
   data_mc_ratio__442->SetBinContent(9,0.8583967);
   data_mc_ratio__442->SetBinContent(10,0.6495013);
   data_mc_ratio__442->SetBinContent(11,0.9930325);
   data_mc_ratio__442->SetBinContent(12,0.7655819);
   data_mc_ratio__442->SetBinContent(13,0.9628841);
   data_mc_ratio__442->SetBinError(2,0.07440553);
   data_mc_ratio__442->SetBinError(3,0.07108822);
   data_mc_ratio__442->SetBinError(4,0.06238079);
   data_mc_ratio__442->SetBinError(5,0.05787752);
   data_mc_ratio__442->SetBinError(6,0.04669282);
   data_mc_ratio__442->SetBinError(7,0.04280831);
   data_mc_ratio__442->SetBinError(8,0.04038517);
   data_mc_ratio__442->SetBinError(9,0.05111678);
   data_mc_ratio__442->SetBinError(10,0.06338484);
   data_mc_ratio__442->SetBinError(11,0.1550856);
   data_mc_ratio__442->SetBinError(12,0.1913955);
   data_mc_ratio__442->SetBinError(13,0.4306149);
   data_mc_ratio__442->SetMinimum(0.4);
   data_mc_ratio__442->SetMaximum(1.6);
   data_mc_ratio__442->SetEntries(187.3643);
   data_mc_ratio__442->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__442->SetLineColor(ci);
   data_mc_ratio__442->SetLineWidth(2);
   data_mc_ratio__442->SetMarkerStyle(20);
   data_mc_ratio__442->SetMarkerSize(1.2);
   data_mc_ratio__442->GetXaxis()->SetTitle("#DeltaR_{bb}");
   data_mc_ratio__442->GetXaxis()->SetRange(1,15);
   data_mc_ratio__442->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__442->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__442->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__442->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__442->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__442->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__442->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__442->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__442->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__442->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__442->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__442->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__442->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__442->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__442->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__442->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__442->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1442[25] = {
   0.2,
   0.6,
   1,
   1.4,
   1.8,
   2.2,
   2.6,
   3,
   3.4,
   3.8,
   4.2,
   4.6,
   5,
   5.4,
   5.8,
   6.2,
   6.6,
   7,
   7.4,
   7.8,
   8.2,
   8.6,
   9,
   9.4,
   9.8};
   Double_t Graph_from_mc_statistical_error_fy1442[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1442[25] = {
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2,
   0.2};
   Double_t Graph_from_mc_statistical_error_fey1442[25] = {
   0,
   0.07351387,
   0.06926113,
   0.06704248,
   0.05901221,
   0.0502644,
   0.04665176,
   0.04250542,
   0.05591436,
   0.07998369,
   0.2016634,
   0.2472034,
   0.4933743,
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
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1442,Graph_from_mc_statistical_error_fy1442,Graph_from_mc_statistical_error_fex1442,Graph_from_mc_statistical_error_fey1442);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1442 = new TH1F("Graph_Graph_from_mc_statistical_error1442","",100,0,11);
   Graph_Graph_from_mc_statistical_error1442->SetMinimum(0.4079508);
   Graph_Graph_from_mc_statistical_error1442->SetMaximum(1.592049);
   Graph_Graph_from_mc_statistical_error1442->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1442->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1442->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1442->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1442->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1442->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1442->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1442->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1442->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1442->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1442->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1442->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1442->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1442->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1442->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1442->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1442);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dR_2b_Z_2bjet_Zee_16_amcnlo->cd();
   dR_2b_Z_2bjet_Zee_16_amcnlo->Modified();
   dR_2b_Z_2bjet_Zee_16_amcnlo->cd();
   dR_2b_Z_2bjet_Zee_16_amcnlo->SetSelected(dR_2b_Z_2bjet_Zee_16_amcnlo);
}

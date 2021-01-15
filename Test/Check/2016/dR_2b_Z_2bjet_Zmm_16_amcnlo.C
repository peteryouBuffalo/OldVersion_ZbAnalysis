void dR_2b_Z_2bjet_Zmm_16_amcnlo()
{
//=========Macro generated from canvas: dR_2b_Z_2bjet_Zmm_16_amcnlo/dR_2b_Z_2bjet_Zmm_16_amcnlo
//=========  (Thu Jan 14 10:43:04 2021) by ROOT version 6.14/09
   TCanvas *dR_2b_Z_2bjet_Zmm_16_amcnlo = new TCanvas("dR_2b_Z_2bjet_Zmm_16_amcnlo", "dR_2b_Z_2bjet_Zmm_16_amcnlo",0,0,600,600);
   dR_2b_Z_2bjet_Zmm_16_amcnlo->SetHighLightColor(2);
   dR_2b_Z_2bjet_Zmm_16_amcnlo->Range(0,0,1,1);
   dR_2b_Z_2bjet_Zmm_16_amcnlo->SetFillColor(0);
   dR_2b_Z_2bjet_Zmm_16_amcnlo->SetFillStyle(4000);
   dR_2b_Z_2bjet_Zmm_16_amcnlo->SetBorderMode(0);
   dR_2b_Z_2bjet_Zmm_16_amcnlo->SetBorderSize(2);
   dR_2b_Z_2bjet_Zmm_16_amcnlo->SetFrameFillStyle(1000);
   dR_2b_Z_2bjet_Zmm_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.9193524,-2.769148,6.314516,2776.378);
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
   st->SetMaximum(2379.489);
   
   TH1F *st_stack_309 = new TH1F("st_stack_309","",25,0,10);
   st_stack_309->SetMinimum(0.01);
   st_stack_309->SetMaximum(2498.464);
   st_stack_309->SetDirectory(0);
   st_stack_309->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_309->SetLineColor(ci);
   st_stack_309->GetXaxis()->SetRange(1,15);
   st_stack_309->GetXaxis()->SetLabelFont(42);
   st_stack_309->GetXaxis()->SetLabelSize(0.035);
   st_stack_309->GetXaxis()->SetTitleSize(0.035);
   st_stack_309->GetXaxis()->SetTitleFont(42);
   st_stack_309->GetYaxis()->SetTitle("Events/0.4");
   st_stack_309->GetYaxis()->SetLabelFont(42);
   st_stack_309->GetYaxis()->SetLabelSize(0.05);
   st_stack_309->GetYaxis()->SetTitleSize(0.057);
   st_stack_309->GetYaxis()->SetTitleOffset(1.2);
   st_stack_309->GetYaxis()->SetTitleFont(42);
   st_stack_309->GetZaxis()->SetLabelFont(42);
   st_stack_309->GetZaxis()->SetLabelSize(0.035);
   st_stack_309->GetZaxis()->SetTitleSize(0.035);
   st_stack_309->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_309);
   
   
   TH1D *Zmm_2bjet_dR_2b_stack_1 = new TH1D("Zmm_2bjet_dR_2b_stack_1","",25,0,10);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(2,1.172844);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(3,2.373753);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(4,3.325944);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(5,4.35101);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(6,6.09979);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(7,6.372434);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(8,7.848161);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(9,4.954567);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(10,2.564047);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(11,0.7838783);
   Zmm_2bjet_dR_2b_stack_1->SetBinContent(12,0.189116);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(2,0.4744111);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(3,0.6866166);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(4,0.7979084);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(5,0.9136438);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(6,1.071757);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(7,1.094064);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(8,1.213281);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(9,0.9781291);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(10,0.6950893);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(11,0.3707095);
   Zmm_2bjet_dR_2b_stack_1->SetBinError(12,0.189116);
   Zmm_2bjet_dR_2b_stack_1->SetEntries(230);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_dR_2b_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_stack_1->SetLineColor(ci);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_stack_1,"");
   
   TH1D *Zmm_2bjet_dR_2b_stack_2 = new TH1D("Zmm_2bjet_dR_2b_stack_2","",25,0,10);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(2,6.984363);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(3,11.64717);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(4,14.12426);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(5,13.165);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(6,17.07248);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(7,15.86764);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(8,16.43286);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(9,2.694193);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(10,0.3042516);
   Zmm_2bjet_dR_2b_stack_2->SetBinContent(12,0.3240708);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(2,1.467025);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(3,1.857965);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(4,2.053403);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(5,1.962886);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(6,2.230853);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(7,2.125618);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(8,2.179531);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(9,0.9229296);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(10,0.3042516);
   Zmm_2bjet_dR_2b_stack_2->SetBinError(12,0.3240708);
   Zmm_2bjet_dR_2b_stack_2->SetEntries(357);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dR_2b_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_stack_2->SetLineColor(ci);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_stack_2,"");
   
   TH1D *Zmm_2bjet_dR_2b_stack_3 = new TH1D("Zmm_2bjet_dR_2b_stack_3","",25,0,10);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(2,59.83443);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(3,104.4313);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(4,154.6341);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(5,200.5496);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(6,269.2897);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(7,356.294);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(8,412.7636);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(9,151.9929);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(10,45.99945);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(11,13.8598);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(12,2.493589);
   Zmm_2bjet_dR_2b_stack_3->SetBinContent(13,0.7252376);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(2,3.362883);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(3,4.459223);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(4,5.439835);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(5,6.158871);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(6,7.179516);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(7,8.257778);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(8,8.935792);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(9,5.398791);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(10,2.969329);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(11,1.631057);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(12,0.68706);
   Zmm_2bjet_dR_2b_stack_3->SetBinError(13,0.3682487);
   Zmm_2bjet_dR_2b_stack_3->SetEntries(9796);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dR_2b_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b_stack_3->SetLineColor(ci);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dR_2b_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_dR_2b_stack_4 = new TH1D("Zmm_2bjet_XX_dR_2b_stack_4","",25,0,10);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(2,12.38938);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(3,2.821209);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(4,2.815123);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(5,7.183909);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(6,7.99021);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(7,11.48415);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(8,32.64212);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(9,6.921918);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(10,0.849161);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(11,-0.6983279);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(12,6.313955);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinContent(13,-0.5119855);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(2,5.738446);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(3,1.814176);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(4,2.880912);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(5,3.983086);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(6,5.185624);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(7,5.020231);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(8,9.104276);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(9,3.522322);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(10,2.2543);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(11,1.416527);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(12,3.401584);
   Zmm_2bjet_XX_dR_2b_stack_4->SetBinError(13,0.5119855);
   Zmm_2bjet_XX_dR_2b_stack_4->SetEntries(188);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_dR_2b_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_dR_2b_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dR_2b_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_dR_2b_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dR_2b_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_dR_2b_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_dR_2b_stack_5 = new TH1D("Zmm_2bjet_bX_dR_2b_stack_5","",25,0,10);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(1,0.2538521);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(2,7.233807);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(3,7.23054);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(4,0.728641);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(5,15.17303);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(6,4.351224);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(7,17.80956);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(8,13.14489);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(9,16.00378);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(10,3.454201);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(11,2.434237);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(12,1.059922);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinContent(13,1.010874);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(1,0.2538521);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(2,3.047673);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(3,2.834427);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(4,3.734029);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(5,3.816223);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(6,4.243831);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(7,5.343682);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(8,5.891708);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(9,4.307655);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(10,2.910443);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(11,1.643652);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(12,1.016948);
   Zmm_2bjet_bX_dR_2b_stack_5->SetBinError(13,0.7147961);
   Zmm_2bjet_bX_dR_2b_stack_5->SetEntries(637);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_dR_2b_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_dR_2b_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dR_2b_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_dR_2b_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dR_2b_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_dR_2b_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_dR_2b_stack_6 = new TH1D("Zmm_2bjet_bb_dR_2b_stack_6","",25,0,10);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(2,247.8491);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(3,273.7517);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(4,329.3249);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(5,411.6293);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(6,565.9378);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(7,750.8969);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(8,825.8874);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(9,444.8245);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(10,248.0418);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(11,108.6813);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(12,48.63155);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(13,5.091598);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinContent(14,2.137807);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(2,18.39149);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(3,19.85182);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(4,22.84918);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(5,25.43776);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(6,29.48327);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(7,32.9178);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(8,35.95415);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(9,27.70316);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(10,20.11552);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(11,13.29587);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(12,7.457576);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(13,3.458126);
   Zmm_2bjet_bb_dR_2b_stack_6->SetBinError(14,1.427656);
   Zmm_2bjet_bb_dR_2b_stack_6->SetEntries(27989);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_dR_2b_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_dR_2b_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dR_2b_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_dR_2b_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dR_2b_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_dR_2b_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dR_2b__617 = new TH1D("Zmm_2bjet_dR_2b__617","",25,0,10);
   Zmm_2bjet_dR_2b__617->SetBinContent(2,289);
   Zmm_2bjet_dR_2b__617->SetBinContent(3,422);
   Zmm_2bjet_dR_2b__617->SetBinContent(4,468);
   Zmm_2bjet_dR_2b__617->SetBinContent(5,598);
   Zmm_2bjet_dR_2b__617->SetBinContent(6,681);
   Zmm_2bjet_dR_2b__617->SetBinContent(7,952);
   Zmm_2bjet_dR_2b__617->SetBinContent(8,1122);
   Zmm_2bjet_dR_2b__617->SetBinContent(9,560);
   Zmm_2bjet_dR_2b__617->SetBinContent(10,262);
   Zmm_2bjet_dR_2b__617->SetBinContent(11,91);
   Zmm_2bjet_dR_2b__617->SetBinContent(12,40);
   Zmm_2bjet_dR_2b__617->SetBinContent(13,16);
   Zmm_2bjet_dR_2b__617->SetBinContent(14,2);
   Zmm_2bjet_dR_2b__617->SetBinError(2,17);
   Zmm_2bjet_dR_2b__617->SetBinError(3,20.54264);
   Zmm_2bjet_dR_2b__617->SetBinError(4,21.63331);
   Zmm_2bjet_dR_2b__617->SetBinError(5,24.45404);
   Zmm_2bjet_dR_2b__617->SetBinError(6,26.09598);
   Zmm_2bjet_dR_2b__617->SetBinError(7,30.8545);
   Zmm_2bjet_dR_2b__617->SetBinError(8,33.49627);
   Zmm_2bjet_dR_2b__617->SetBinError(9,23.66432);
   Zmm_2bjet_dR_2b__617->SetBinError(10,16.18641);
   Zmm_2bjet_dR_2b__617->SetBinError(11,9.539392);
   Zmm_2bjet_dR_2b__617->SetBinError(12,6.324555);
   Zmm_2bjet_dR_2b__617->SetBinError(13,4);
   Zmm_2bjet_dR_2b__617->SetBinError(14,1.414214);
   Zmm_2bjet_dR_2b__617->SetEntries(5503);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dR_2b__617->SetLineColor(ci);
   Zmm_2bjet_dR_2b__617->SetLineWidth(2);
   Zmm_2bjet_dR_2b__617->SetMarkerStyle(20);
   Zmm_2bjet_dR_2b__617->SetMarkerSize(1.2);
   Zmm_2bjet_dR_2b__617->GetXaxis()->SetRange(1,100);
   Zmm_2bjet_dR_2b__617->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b__617->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b__617->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b__617->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b__617->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b__617->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b__617->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b__617->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dR_2b__617->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b__617->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dR_2b__617->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dR_2b__617->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dR_2b__617->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dR_2b__617->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dR_2b_fx1617[25] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dR_2b_fy1617[25] = {
   0.2538521,
   335.464,
   402.2556,
   504.953,
   652.0519,
   870.7411,
   1158.725,
   1308.719,
   627.3918,
   301.2129,
   125.0608,
   59.01221,
   6.315725,
   2.137807,
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
   Double_t Graph_from_Zmm_2bjet_bb_dR_2b_fex1617[25] = {
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
   Double_t Graph_from_Zmm_2bjet_bb_dR_2b_fey1617[25] = {
   0.2538521,
   19.85324,
   20.71782,
   24.05769,
   26.83519,
   31.17426,
   34.80295,
   38.68297,
   28.79901,
   20.67799,
   13.5752,
   8.29658,
   3.587103,
   1.427656,
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
   TGraphErrors *gre = new TGraphErrors(25,Graph_from_Zmm_2bjet_bb_dR_2b_fx1617,Graph_from_Zmm_2bjet_bb_dR_2b_fy1617,Graph_from_Zmm_2bjet_bb_dR_2b_fex1617,Graph_from_Zmm_2bjet_bb_dR_2b_fey1617);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dR_2b");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617","",100,0,11);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617->SetMinimum(0);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617->SetMaximum(1482.142);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dR_2b1617);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dR_2b","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_dR_2b_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_dR_2b_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_dR_2b_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dR_2b_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_dR_2b","MC unc. (stat.)","fl");

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
   dR_2b_Z_2bjet_Zmm_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__618 = new TH1D("data_mc_ratio__618","",25,0,10);
   data_mc_ratio__618->SetBinContent(2,0.8614934);
   data_mc_ratio__618->SetBinContent(3,1.049084);
   data_mc_ratio__618->SetBinContent(4,0.9268189);
   data_mc_ratio__618->SetBinContent(5,0.917105);
   data_mc_ratio__618->SetBinContent(6,0.7820924);
   data_mc_ratio__618->SetBinContent(7,0.8215929);
   data_mc_ratio__618->SetBinContent(8,0.8573269);
   data_mc_ratio__618->SetBinContent(9,0.8925842);
   data_mc_ratio__618->SetBinContent(10,0.8698167);
   data_mc_ratio__618->SetBinContent(11,0.7276458);
   data_mc_ratio__618->SetBinContent(12,0.6778259);
   data_mc_ratio__618->SetBinContent(13,2.533359);
   data_mc_ratio__618->SetBinContent(14,0.9355382);
   data_mc_ratio__618->SetBinError(2,0.05067609);
   data_mc_ratio__618->SetBinError(3,0.05106862);
   data_mc_ratio__618->SetBinError(4,0.04284222);
   data_mc_ratio__618->SetBinError(5,0.03750321);
   data_mc_ratio__618->SetBinError(6,0.02996985);
   data_mc_ratio__618->SetBinError(7,0.02662798);
   data_mc_ratio__618->SetBinError(8,0.0255947);
   data_mc_ratio__618->SetBinError(9,0.03771857);
   data_mc_ratio__618->SetBinError(10,0.05373746);
   data_mc_ratio__618->SetBinError(11,0.07627801);
   data_mc_ratio__618->SetBinError(12,0.1071737);
   data_mc_ratio__618->SetBinError(13,0.6333398);
   data_mc_ratio__618->SetBinError(14,0.6615254);
   data_mc_ratio__618->SetMinimum(0.4);
   data_mc_ratio__618->SetMaximum(1.6);
   data_mc_ratio__618->SetEntries(49.11485);
   data_mc_ratio__618->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__618->SetLineColor(ci);
   data_mc_ratio__618->SetLineWidth(2);
   data_mc_ratio__618->SetMarkerStyle(20);
   data_mc_ratio__618->SetMarkerSize(1.2);
   data_mc_ratio__618->GetXaxis()->SetTitle("#DeltaR_{bb}");
   data_mc_ratio__618->GetXaxis()->SetRange(1,15);
   data_mc_ratio__618->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__618->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__618->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__618->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__618->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__618->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__618->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__618->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__618->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__618->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__618->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__618->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__618->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__618->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__618->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__618->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__618->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1618[25] = {
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
   Double_t Graph_from_mc_statistical_error_fy1618[25] = {
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
   Double_t Graph_from_mc_statistical_error_fex1618[25] = {
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
   Double_t Graph_from_mc_statistical_error_fey1618[25] = {
   1,
   0.05918145,
   0.05150412,
   0.04764343,
   0.04115499,
   0.03580199,
   0.03003557,
   0.02955788,
   0.04590276,
   0.06864909,
   0.1085488,
   0.1405909,
   0.5679638,
   0.6678135,
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
   gre = new TGraphErrors(25,Graph_from_mc_statistical_error_fx1618,Graph_from_mc_statistical_error_fy1618,Graph_from_mc_statistical_error_fex1618,Graph_from_mc_statistical_error_fey1618);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1618 = new TH1F("Graph_Graph_from_mc_statistical_error1618","",100,0,11);
   Graph_Graph_from_mc_statistical_error1618->SetMinimum(1.998401e-16);
   Graph_Graph_from_mc_statistical_error1618->SetMaximum(2.2);
   Graph_Graph_from_mc_statistical_error1618->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1618->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1618->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1618->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1618->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1618->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1618->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1618->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1618->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1618->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1618->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1618->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1618->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1618->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1618->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1618->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1618);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,6,1);
   line->Draw();
   bottomPad->Modified();
   dR_2b_Z_2bjet_Zmm_16_amcnlo->cd();
   dR_2b_Z_2bjet_Zmm_16_amcnlo->Modified();
   dR_2b_Z_2bjet_Zmm_16_amcnlo->cd();
   dR_2b_Z_2bjet_Zmm_16_amcnlo->SetSelected(dR_2b_Z_2bjet_Zmm_16_amcnlo);
}

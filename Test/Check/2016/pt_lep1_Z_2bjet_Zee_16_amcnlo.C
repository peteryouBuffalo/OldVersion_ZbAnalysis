void pt_lep1_Z_2bjet_Zee_16_amcnlo()
{
//=========Macro generated from canvas: pt_lep1_Z_2bjet_Zee_16_amcnlo/pt_lep1_Z_2bjet_Zee_16_amcnlo
//=========  (Thu Jan 14 10:42:42 2021) by ROOT version 6.14/09
   TCanvas *pt_lep1_Z_2bjet_Zee_16_amcnlo = new TCanvas("pt_lep1_Z_2bjet_Zee_16_amcnlo", "pt_lep1_Z_2bjet_Zee_16_amcnlo",0,0,600,600);
   pt_lep1_Z_2bjet_Zee_16_amcnlo->SetHighLightColor(2);
   pt_lep1_Z_2bjet_Zee_16_amcnlo->Range(0,0,1,1);
   pt_lep1_Z_2bjet_Zee_16_amcnlo->SetFillColor(0);
   pt_lep1_Z_2bjet_Zee_16_amcnlo->SetFillStyle(4000);
   pt_lep1_Z_2bjet_Zee_16_amcnlo->SetBorderMode(0);
   pt_lep1_Z_2bjet_Zee_16_amcnlo->SetBorderSize(2);
   pt_lep1_Z_2bjet_Zee_16_amcnlo->SetFrameFillStyle(1000);
   pt_lep1_Z_2bjet_Zee_16_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-1.256421,210.4839,1265.165);
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
   st->SetMaximum(1084.307);
   
   TH1F *st_stack_173 = new TH1F("st_stack_173","",40,0,200);
   st_stack_173->SetMinimum(0.01);
   st_stack_173->SetMaximum(1138.522);
   st_stack_173->SetDirectory(0);
   st_stack_173->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_173->SetLineColor(ci);
   st_stack_173->GetXaxis()->SetRange(1,40);
   st_stack_173->GetXaxis()->SetLabelFont(42);
   st_stack_173->GetXaxis()->SetLabelSize(0.035);
   st_stack_173->GetXaxis()->SetTitleSize(0.035);
   st_stack_173->GetXaxis()->SetTitleFont(42);
   st_stack_173->GetYaxis()->SetTitle("Events/5.0");
   st_stack_173->GetYaxis()->SetLabelFont(42);
   st_stack_173->GetYaxis()->SetLabelSize(0.05);
   st_stack_173->GetYaxis()->SetTitleSize(0.057);
   st_stack_173->GetYaxis()->SetTitleOffset(1.2);
   st_stack_173->GetYaxis()->SetTitleFont(42);
   st_stack_173->GetZaxis()->SetLabelFont(42);
   st_stack_173->GetZaxis()->SetLabelSize(0.035);
   st_stack_173->GetZaxis()->SetTitleSize(0.035);
   st_stack_173->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_173);
   
   
   TH1D *Zee_2bjet_pt_lep1_stack_1 = new TH1D("Zee_2bjet_pt_lep1_stack_1","",40,0,200);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(6,3.024047);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(7,4.930892);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(8,2.53373);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(9,2.656439);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(10,2.437922);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(11,1.347431);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(12,1.132165);
   Zee_2bjet_pt_lep1_stack_1->SetBinContent(14,0.1740617);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(6,0.7311476);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(7,0.9362509);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(8,0.6555601);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(9,0.6807796);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(10,0.6755237);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(11,0.4801644);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(12,0.4380689);
   Zee_2bjet_pt_lep1_stack_1->SetBinError(14,0.1740617);
   Zee_2bjet_pt_lep1_stack_1->SetEntries(109);

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
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(6,4.876189);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(7,6.534696);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(8,9.747813);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(9,5.832604);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(10,3.710717);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(11,3.488303);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(12,1.373756);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(13,1.99323);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(14,0.8827439);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(15,1.156143);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(16,0.8679802);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(17,0.9354119);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(19,0.3536958);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(20,0.2029477);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(22,0.8835963);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(23,0.191014);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(24,0.2592858);
   Zee_2bjet_pt_lep1_stack_2->SetBinContent(26,0.2822457);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(6,1.146225);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(7,1.33703);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(8,1.600799);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(9,1.222681);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(10,0.9988293);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(11,0.9703206);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(12,0.6158784);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(13,0.7371466);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(14,0.5097752);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(15,0.551702);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(16,0.5017967);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(17,0.5429935);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(19,0.2867748);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(20,0.2029477);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(22,0.5106726);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(23,0.191014);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(24,0.2592858);
   Zee_2bjet_pt_lep1_stack_2->SetBinError(26,0.2822457);
   Zee_2bjet_pt_lep1_stack_2->SetEntries(170);

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
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(6,140.9223);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(7,166.3344);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(8,156.1064);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(9,125.3325);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(10,82.09303);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(11,50.9133);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(12,28.95572);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(13,15.4686);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(14,7.586625);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(15,4.826318);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(16,2.123838);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(17,1.140016);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(18,0.4975441);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(19,0.6034755);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(20,0.5753797);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(21,0.1680142);
   Zee_2bjet_pt_lep1_stack_3->SetBinContent(22,0.1762737);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(6,4.984802);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(7,5.403567);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(8,5.239957);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(9,4.696079);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(10,3.793999);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(11,2.98951);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(12,2.249155);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(13,1.635594);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(14,1.163687);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(15,0.9246674);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(16,0.6091591);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(17,0.4344236);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(18,0.2875307);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(19,0.3219152);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(20,0.3325431);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(21,0.1680142);
   Zee_2bjet_pt_lep1_stack_3->SetBinError(22,0.1762737);
   Zee_2bjet_pt_lep1_stack_3->SetEntries(4701);

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
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(6,0.995128);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(7,2.205963);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(8,1.780951);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(9,-0.02667772);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(10,1.625108);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(11,0.1667394);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(12,0.1702003);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(13,0.938113);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(14,0.4776457);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(15,0.4124378);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(22,0.4023746);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(23,0.4594612);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinContent(41,0.4619803);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(6,1.185805);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(7,2.240102);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(8,1.562257);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(9,1.242723);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(10,1.237001);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(11,0.6160449);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(12,0.587687);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(13,0.6646121);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(14,0.4776457);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(15,0.4124378);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(22,0.4023746);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(23,0.4594612);
   Zee_2bjet_XX_pt_lep1_stack_4->SetBinError(41,0.4619803);
   Zee_2bjet_XX_pt_lep1_stack_4->SetEntries(60);

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
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(6,6.821275);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(7,4.352112);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(8,6.262955);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(9,6.111539);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(10,5.537109);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(11,1.607795);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(12,1.353427);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(13,1.571718);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(14,0.8962218);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(15,-0.9074414);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(16,-0.1903354);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(17,1.549269);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(18,0.0537697);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(19,0.5612656);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(20,0.04168171);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(23,0.5555578);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(29,0.8529275);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinContent(30,0.5319278);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(6,3.479331);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(7,3.002984);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(8,3.196133);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(9,2.409742);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(10,2.279785);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(11,1.809334);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(12,1.602901);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(13,1.144863);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(14,0.5960315);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(15,0.6683442);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(16,0.1903354);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(17,0.8978439);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(18,0.0537697);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(19,0.5612656);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(20,0.6924531);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(23,0.5555578);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(29,0.5954777);
   Zee_2bjet_bX_pt_lep1_stack_5->SetBinError(30,0.5319278);
   Zee_2bjet_bX_pt_lep1_stack_5->SetEntries(253);

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
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(6,310.3328);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(7,412.0109);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(8,354.9356);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(9,330.8922);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(10,152.2683);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(11,129.243);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(12,88.11501);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(13,44.01074);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(14,34.83031);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(15,19.61812);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(16,25.95998);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(17,15.502);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(18,11.55637);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(19,11.37207);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(20,6.178045);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(21,1.849616);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(22,5.554457);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(23,2.858664);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(24,2.458839);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(25,2.537865);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(26,3.787427);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(27,-0.09726608);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(28,3.225763);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(29,-0.4594271);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(30,0.1188344);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(31,1.362838);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(32,0.5997549);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(33,-0.467934);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(34,0.9752653);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(35,1.397692);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(36,0.4205857);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(38,0.1196975);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(39,0.4848503);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(40,0.4895766);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinContent(41,2.102974);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(6,21.88975);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(7,23.05435);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(8,22.42021);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(9,20.63393);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(10,15.19774);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(11,12.2315);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(12,10.26376);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(13,8.341395);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(14,7.031803);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(15,6.081618);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(16,5.446331);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(17,4.287781);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(18,3.969748);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(19,3.46454);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(20,3.089668);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(21,2.650762);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(22,2.675291);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(23,2.040122);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(24,2.194624);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(25,1.604953);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(26,1.658011);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(27,1.376163);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(28,1.604047);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(29,0.7805279);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(30,0.666461);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(31,0.8011812);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(32,0.8984412);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(33,0.8277097);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(34,0.6901444);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(35,0.8078298);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(36,0.4205857);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(38,0.600946);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(39,0.7986826);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(40,0.4895766);
   Zee_2bjet_bb_pt_lep1_stack_6->SetBinError(41,1.003148);
   Zee_2bjet_bb_pt_lep1_stack_6->SetEntries(13604);

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
   
   TH1D *Zee_2bjet_pt_lep1__345 = new TH1D("Zee_2bjet_pt_lep1__345","",40,0,200);
   Zee_2bjet_pt_lep1__345->SetBinContent(6,433);
   Zee_2bjet_pt_lep1__345->SetBinContent(7,477);
   Zee_2bjet_pt_lep1__345->SetBinContent(8,464);
   Zee_2bjet_pt_lep1__345->SetBinContent(9,401);
   Zee_2bjet_pt_lep1__345->SetBinContent(10,256);
   Zee_2bjet_pt_lep1__345->SetBinContent(11,157);
   Zee_2bjet_pt_lep1__345->SetBinContent(12,121);
   Zee_2bjet_pt_lep1__345->SetBinContent(13,60);
   Zee_2bjet_pt_lep1__345->SetBinContent(14,54);
   Zee_2bjet_pt_lep1__345->SetBinContent(15,29);
   Zee_2bjet_pt_lep1__345->SetBinContent(16,27);
   Zee_2bjet_pt_lep1__345->SetBinContent(17,19);
   Zee_2bjet_pt_lep1__345->SetBinContent(18,9);
   Zee_2bjet_pt_lep1__345->SetBinContent(19,5);
   Zee_2bjet_pt_lep1__345->SetBinContent(20,7);
   Zee_2bjet_pt_lep1__345->SetBinContent(21,4);
   Zee_2bjet_pt_lep1__345->SetBinContent(22,5);
   Zee_2bjet_pt_lep1__345->SetBinContent(23,4);
   Zee_2bjet_pt_lep1__345->SetBinContent(24,4);
   Zee_2bjet_pt_lep1__345->SetBinContent(25,2);
   Zee_2bjet_pt_lep1__345->SetBinContent(26,3);
   Zee_2bjet_pt_lep1__345->SetBinContent(29,1);
   Zee_2bjet_pt_lep1__345->SetBinContent(32,1);
   Zee_2bjet_pt_lep1__345->SetBinContent(33,1);
   Zee_2bjet_pt_lep1__345->SetBinContent(35,1);
   Zee_2bjet_pt_lep1__345->SetBinContent(36,3);
   Zee_2bjet_pt_lep1__345->SetBinContent(41,1);
   Zee_2bjet_pt_lep1__345->SetBinError(6,20.80865);
   Zee_2bjet_pt_lep1__345->SetBinError(7,21.84033);
   Zee_2bjet_pt_lep1__345->SetBinError(8,21.54066);
   Zee_2bjet_pt_lep1__345->SetBinError(9,20.02498);
   Zee_2bjet_pt_lep1__345->SetBinError(10,16);
   Zee_2bjet_pt_lep1__345->SetBinError(11,12.52996);
   Zee_2bjet_pt_lep1__345->SetBinError(12,11);
   Zee_2bjet_pt_lep1__345->SetBinError(13,7.745967);
   Zee_2bjet_pt_lep1__345->SetBinError(14,7.348469);
   Zee_2bjet_pt_lep1__345->SetBinError(15,5.385165);
   Zee_2bjet_pt_lep1__345->SetBinError(16,5.196152);
   Zee_2bjet_pt_lep1__345->SetBinError(17,4.358899);
   Zee_2bjet_pt_lep1__345->SetBinError(18,3);
   Zee_2bjet_pt_lep1__345->SetBinError(19,2.236068);
   Zee_2bjet_pt_lep1__345->SetBinError(20,2.645751);
   Zee_2bjet_pt_lep1__345->SetBinError(21,2);
   Zee_2bjet_pt_lep1__345->SetBinError(22,2.236068);
   Zee_2bjet_pt_lep1__345->SetBinError(23,2);
   Zee_2bjet_pt_lep1__345->SetBinError(24,2);
   Zee_2bjet_pt_lep1__345->SetBinError(25,1.414214);
   Zee_2bjet_pt_lep1__345->SetBinError(26,1.732051);
   Zee_2bjet_pt_lep1__345->SetBinError(29,1);
   Zee_2bjet_pt_lep1__345->SetBinError(32,1);
   Zee_2bjet_pt_lep1__345->SetBinError(33,1);
   Zee_2bjet_pt_lep1__345->SetBinError(35,1);
   Zee_2bjet_pt_lep1__345->SetBinError(36,1.732051);
   Zee_2bjet_pt_lep1__345->SetBinError(41,1);
   Zee_2bjet_pt_lep1__345->SetEntries(2549);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep1__345->SetLineColor(ci);
   Zee_2bjet_pt_lep1__345->SetLineWidth(2);
   Zee_2bjet_pt_lep1__345->SetMarkerStyle(20);
   Zee_2bjet_pt_lep1__345->SetMarkerSize(1.2);
   Zee_2bjet_pt_lep1__345->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep1__345->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1__345->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1__345->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1__345->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1__345->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1__345->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1__345->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1__345->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep1__345->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1__345->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep1__345->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep1__345->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep1__345->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep1__345->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_pt_lep1_fx1345[40] = {
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
   Double_t Graph_from_Zee_2bjet_bb_pt_lep1_fy1345[40] = {
   0,
   0,
   0,
   0,
   0,
   466.9717,
   596.3689,
   531.3675,
   470.7986,
   247.6722,
   186.7666,
   121.1003,
   63.9824,
   44.8476,
   25.10558,
   28.76146,
   19.1267,
   12.10768,
   12.89051,
   6.998054,
   2.017631,
   7.016702,
   4.064697,
   2.718125,
   2.537865,
   4.069673,
   -0.09726608,
   3.225763,
   0.3935004,
   0.6507623,
   1.362838,
   0.5997549,
   -0.467934,
   0.9752653,
   1.397692,
   0.4205857,
   0,
   0.1196975,
   0.4848503,
   0.4895766};
   Double_t Graph_from_Zee_2bjet_bb_pt_lep1_fex1345[40] = {
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
   Double_t Graph_from_Zee_2bjet_bb_pt_lep1_fey1345[40] = {
   0,
   0,
   0,
   0,
   0,
   22.78968,
   24.02918,
   23.36175,
   21.38041,
   15.92317,
   12.78171,
   10.6719,
   8.634225,
   7.188462,
   6.225934,
   5.506508,
   4.435624,
   3.98051,
   3.536089,
   3.19019,
   2.656082,
   2.758794,
   2.172172,
   2.209887,
   1.604953,
   1.681863,
   1.376163,
   1.604047,
   0.9817421,
   0.8527118,
   0.8011812,
   0.8984412,
   0.8277097,
   0.6901444,
   0.8078298,
   0.4205857,
   0,
   0.600946,
   0.7986826,
   0.4895766};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zee_2bjet_bb_pt_lep1_fx1345,Graph_from_Zee_2bjet_bb_pt_lep1_fy1345,Graph_from_Zee_2bjet_bb_pt_lep1_fex1345,Graph_from_Zee_2bjet_bb_pt_lep1_fey1345);
   gre->SetName("Graph_from_Zee_2bjet_bb_pt_lep1");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_pt_lep11345 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_pt_lep11345","",100,0,220);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11345->SetMinimum(-63.66058);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11345->SetMaximum(682.5852);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11345->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11345->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11345->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11345->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11345->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11345->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11345->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11345->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11345->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11345->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11345->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11345->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11345->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11345->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11345->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep11345->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_pt_lep11345);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   pt_lep1_Z_2bjet_Zee_16_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__346 = new TH1D("data_mc_ratio__346","",40,0,200);
   data_mc_ratio__346->SetBinContent(6,0.927251);
   data_mc_ratio__346->SetBinContent(7,0.7998405);
   data_mc_ratio__346->SetBinContent(8,0.8732187);
   data_mc_ratio__346->SetBinContent(9,0.8517443);
   data_mc_ratio__346->SetBinContent(10,1.033624);
   data_mc_ratio__346->SetBinContent(11,0.8406214);
   data_mc_ratio__346->SetBinContent(12,0.999172);
   data_mc_ratio__346->SetBinContent(13,0.9377579);
   data_mc_ratio__346->SetBinContent(14,1.204078);
   data_mc_ratio__346->SetBinContent(15,1.155122);
   data_mc_ratio__346->SetBinContent(16,0.9387561);
   data_mc_ratio__346->SetBinContent(17,0.9933757);
   data_mc_ratio__346->SetBinContent(18,0.7433296);
   data_mc_ratio__346->SetBinContent(19,0.3878823);
   data_mc_ratio__346->SetBinContent(20,1.000278);
   data_mc_ratio__346->SetBinContent(21,1.982523);
   data_mc_ratio__346->SetBinContent(22,0.7125855);
   data_mc_ratio__346->SetBinContent(23,0.9840832);
   data_mc_ratio__346->SetBinContent(24,1.471603);
   data_mc_ratio__346->SetBinContent(25,0.7880639);
   data_mc_ratio__346->SetBinContent(26,0.7371599);
   data_mc_ratio__346->SetBinContent(29,2.541293);
   data_mc_ratio__346->SetBinContent(32,1.667348);
   data_mc_ratio__346->SetBinContent(33,-2.137054);
   data_mc_ratio__346->SetBinContent(35,0.7154653);
   data_mc_ratio__346->SetBinContent(36,7.13291);
   data_mc_ratio__346->SetBinContent(41,0.3898706);
   data_mc_ratio__346->SetBinError(6,0.04456084);
   data_mc_ratio__346->SetBinError(7,0.03662218);
   data_mc_ratio__346->SetBinError(8,0.04053816);
   data_mc_ratio__346->SetBinError(9,0.04253408);
   data_mc_ratio__346->SetBinError(10,0.06460151);
   data_mc_ratio__346->SetBinError(11,0.06708889);
   data_mc_ratio__346->SetBinError(12,0.09083382);
   data_mc_ratio__346->SetBinError(13,0.121064);
   data_mc_ratio__346->SetBinError(14,0.1638542);
   data_mc_ratio__346->SetBinError(15,0.2145008);
   data_mc_ratio__346->SetBinError(16,0.1806637);
   data_mc_ratio__346->SetBinError(17,0.227896);
   data_mc_ratio__346->SetBinError(18,0.2477765);
   data_mc_ratio__346->SetBinError(19,0.1734662);
   data_mc_ratio__346->SetBinError(20,0.3780696);
   data_mc_ratio__346->SetBinError(21,0.9912617);
   data_mc_ratio__346->SetBinError(22,0.3186779);
   data_mc_ratio__346->SetBinError(23,0.4920416);
   data_mc_ratio__346->SetBinError(24,0.7358014);
   data_mc_ratio__346->SetBinError(25,0.5572453);
   data_mc_ratio__346->SetBinError(26,0.4255995);
   data_mc_ratio__346->SetBinError(29,2.541293);
   data_mc_ratio__346->SetBinError(32,1.667348);
   data_mc_ratio__346->SetBinError(33,2.137054);
   data_mc_ratio__346->SetBinError(35,0.7154653);
   data_mc_ratio__346->SetBinError(36,4.118187);
   data_mc_ratio__346->SetBinError(41,0.4244754);
   data_mc_ratio__346->SetMinimum(0.4);
   data_mc_ratio__346->SetMaximum(1.6);
   data_mc_ratio__346->SetEntries(5.904604);
   data_mc_ratio__346->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__346->SetLineColor(ci);
   data_mc_ratio__346->SetLineWidth(2);
   data_mc_ratio__346->SetMarkerStyle(20);
   data_mc_ratio__346->SetMarkerSize(1.2);
   data_mc_ratio__346->GetXaxis()->SetTitle("Sub-leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__346->GetXaxis()->SetRange(1,40);
   data_mc_ratio__346->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__346->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__346->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__346->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__346->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__346->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__346->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__346->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__346->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__346->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__346->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__346->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__346->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__346->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__346->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__346->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__346->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1346[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1346[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1346[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1346[40] = {
   0,
   0,
   0,
   0,
   0,
   0.04880313,
   0.04029248,
   0.04396533,
   0.04541307,
   0.06429131,
   0.0684368,
   0.08812447,
   0.1349469,
   0.1602864,
   0.2479901,
   0.1914544,
   0.2319074,
   0.328759,
   0.2743173,
   0.4558682,
   1.316436,
   0.3931753,
   0.5343996,
   0.8130191,
   0.6324027,
   0.4132674,
   0,
   0.4972612,
   2.494895,
   1.310328,
   0.5878769,
   1.498014,
   0,
   0.7076478,
   0.5779742,
   1,
   0,
   5.020539,
   1.647277,
   1};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1346,Graph_from_mc_statistical_error_fy1346,Graph_from_mc_statistical_error_fex1346,Graph_from_mc_statistical_error_fey1346);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1346 = new TH1F("Graph_Graph_from_mc_statistical_error1346","",100,0,220);
   Graph_Graph_from_mc_statistical_error1346->SetMinimum(-5.024647);
   Graph_Graph_from_mc_statistical_error1346->SetMaximum(7.024647);
   Graph_Graph_from_mc_statistical_error1346->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1346->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1346->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1346->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1346->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1346->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1346->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1346->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1346->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1346->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1346->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1346->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1346->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1346->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1346->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1346->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1346);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep1_Z_2bjet_Zee_16_amcnlo->cd();
   pt_lep1_Z_2bjet_Zee_16_amcnlo->Modified();
   pt_lep1_Z_2bjet_Zee_16_amcnlo->cd();
   pt_lep1_Z_2bjet_Zee_16_amcnlo->SetSelected(pt_lep1_Z_2bjet_Zee_16_amcnlo);
}

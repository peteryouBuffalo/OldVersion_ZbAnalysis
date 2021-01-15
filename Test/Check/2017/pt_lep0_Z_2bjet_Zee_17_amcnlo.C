void pt_lep0_Z_2bjet_Zee_17_amcnlo()
{
//=========Macro generated from canvas: pt_lep0_Z_2bjet_Zee_17_amcnlo/pt_lep0_Z_2bjet_Zee_17_amcnlo
//=========  (Thu Jan 14 10:42:42 2021) by ROOT version 6.14/09
   TCanvas *pt_lep0_Z_2bjet_Zee_17_amcnlo = new TCanvas("pt_lep0_Z_2bjet_Zee_17_amcnlo", "pt_lep0_Z_2bjet_Zee_17_amcnlo",0,0,600,600);
   pt_lep0_Z_2bjet_Zee_17_amcnlo->SetHighLightColor(2);
   pt_lep0_Z_2bjet_Zee_17_amcnlo->Range(0,0,1,1);
   pt_lep0_Z_2bjet_Zee_17_amcnlo->SetFillColor(0);
   pt_lep0_Z_2bjet_Zee_17_amcnlo->SetFillStyle(4000);
   pt_lep0_Z_2bjet_Zee_17_amcnlo->SetBorderMode(0);
   pt_lep0_Z_2bjet_Zee_17_amcnlo->SetBorderSize(2);
   pt_lep0_Z_2bjet_Zee_17_amcnlo->SetFrameFillStyle(1000);
   pt_lep0_Z_2bjet_Zee_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-0.8260566,210.4839,835.2305);
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
   st->SetMaximum(715.8332);
   
   TH1F *st_stack_170 = new TH1F("st_stack_170","",40,0,200);
   st_stack_170->SetMinimum(0.01);
   st_stack_170->SetMaximum(751.6248);
   st_stack_170->SetDirectory(0);
   st_stack_170->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_170->SetLineColor(ci);
   st_stack_170->GetXaxis()->SetRange(1,40);
   st_stack_170->GetXaxis()->SetLabelFont(42);
   st_stack_170->GetXaxis()->SetLabelSize(0.035);
   st_stack_170->GetXaxis()->SetTitleSize(0.035);
   st_stack_170->GetXaxis()->SetTitleFont(42);
   st_stack_170->GetYaxis()->SetTitle("Events/5.0");
   st_stack_170->GetYaxis()->SetLabelFont(42);
   st_stack_170->GetYaxis()->SetLabelSize(0.05);
   st_stack_170->GetYaxis()->SetTitleSize(0.057);
   st_stack_170->GetYaxis()->SetTitleOffset(1.2);
   st_stack_170->GetYaxis()->SetTitleFont(42);
   st_stack_170->GetZaxis()->SetLabelFont(42);
   st_stack_170->GetZaxis()->SetLabelSize(0.035);
   st_stack_170->GetZaxis()->SetTitleSize(0.035);
   st_stack_170->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_170);
   
   
   TH1D *Zee_2bjet_pt_lep0_stack_1 = new TH1D("Zee_2bjet_pt_lep0_stack_1","",40,0,200);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(8,1.137551);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(9,1.251037);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(10,1.03746);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(11,1.473052);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(12,2.137122);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(13,3.384739);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(14,1.189575);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(15,2.501216);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(16,1.537492);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(17,0.6860653);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(18,0.7868823);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(19,0.7984885);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(20,0.6909907);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(21,0.5403116);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(23,0.576366);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(25,0.3287708);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(26,0.1293224);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(27,0.3816679);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(28,0.2649905);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(29,0.4079938);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(33,0.1926013);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(34,0.1853928);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(41,0.1211217);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(8,0.4220446);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(9,0.4734363);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(10,0.4010364);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(11,0.4983628);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(12,0.5755394);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(13,0.749976);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(14,0.432741);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(15,0.6578948);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(16,0.5143463);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(17,0.3445176);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(18,0.338586);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(19,0.3595726);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(20,0.3498172);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(21,0.2849207);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(23,0.3341248);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(25,0.2339776);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(26,0.1293224);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(27,0.2358605);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(28,0.2059682);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(29,0.2884964);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(33,0.1926013);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(34,0.1853928);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(41,0.1211217);
   Zee_2bjet_pt_lep0_stack_1->SetEntries(151);

   ci = TColor::GetColor("#00cccc");
   Zee_2bjet_pt_lep0_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep0_stack_1->SetLineColor(ci);
   Zee_2bjet_pt_lep0_stack_1->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep0_stack_1->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0_stack_1->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0_stack_1->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0_stack_1->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep0_stack_1->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0_stack_1->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep0_stack_1,"");
   
   TH1D *Zee_2bjet_pt_lep0_stack_2 = new TH1D("Zee_2bjet_pt_lep0_stack_2","",40,0,200);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(8,0.8891664);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(9,3.43543);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(10,7.370858);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(11,8.046127);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(12,5.698939);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(13,7.151378);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(14,4.997763);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(15,2.352002);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(16,3.430727);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(17,2.40932);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(18,1.943955);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(19,2.482347);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(20,1.707507);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(21,2.798437);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(22,1.839195);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(24,0.9067965);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(25,1.719747);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(26,0.3329861);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(27,0.319955);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(29,1.091558);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(30,0.6011515);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(32,0.3457996);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(33,0.6742866);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(34,0.2646434);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(36,0.6708064);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(37,0.2878182);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(41,1.106127);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(8,0.5187665);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(9,1.096772);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(10,1.466497);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(11,1.585355);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(12,1.324613);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(13,1.52141);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(14,1.216687);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(15,0.8366851);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(16,1.036113);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(17,0.8196221);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(18,0.7694075);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(19,0.887247);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(20,0.7116581);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(21,0.9909221);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(22,0.7585022);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(24,0.5261354);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(25,0.7079599);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(26,0.3329861);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(27,0.319955);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(29,0.578117);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(30,0.4254671);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(32,0.3457996);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(33,0.4769074);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(34,0.2646434);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(36,0.4743401);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(37,0.2878182);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(41,0.5605547);
   Zee_2bjet_pt_lep0_stack_2->SetEntries(230);

   ci = TColor::GetColor("#ff6600");
   Zee_2bjet_pt_lep0_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep0_stack_2->SetLineColor(ci);
   Zee_2bjet_pt_lep0_stack_2->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep0_stack_2->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0_stack_2->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0_stack_2->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0_stack_2->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep0_stack_2->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0_stack_2->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep0_stack_2,"");
   
   TH1D *Zee_2bjet_pt_lep0_stack_3 = new TH1D("Zee_2bjet_pt_lep0_stack_3","",40,0,200);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(8,45.97019);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(9,75.31537);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(10,108.2982);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(11,125.5977);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(12,135.3292);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(13,118.1616);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(14,101.1042);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(15,76.80735);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(16,71.81919);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(17,53.38142);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(18,42.91665);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(19,30.63321);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(20,23.31047);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(21,23.56341);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(22,15.52773);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(23,16.3259);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(24,8.071001);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(25,8.813717);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(26,3.188334);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(27,4.223896);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(28,3.80201);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(29,1.112206);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(30,2.688464);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(31,0.8034765);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(32,0.6339088);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(33,0.7975129);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(34,1.204211);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(35,0.3997089);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(37,0.3543403);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(38,0.5663717);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(40,0.7384639);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(41,0.3775823);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(8,3.915862);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(9,4.98545);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(10,5.994747);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(11,6.494366);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(12,6.81383);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(13,6.312038);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(14,5.801578);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(15,5.078498);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(16,4.959141);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(17,4.341177);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(18,3.883268);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(19,3.220302);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(20,2.876978);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(21,2.897711);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(22,2.350923);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(23,2.4014);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(24,1.741805);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(25,1.770455);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(26,1.023315);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(27,1.226313);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(28,1.165624);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(29,0.614871);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(30,0.9664471);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(31,0.5390121);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(32,0.4517368);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(33,0.5747519);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(34,0.626741);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(35,0.3997089);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(37,0.3543403);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(38,0.4066786);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(40,0.5237821);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(41,0.3775823);
   Zee_2bjet_pt_lep0_stack_3->SetEntries(3646);

   ci = TColor::GetColor("#cccc00");
   Zee_2bjet_pt_lep0_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep0_stack_3->SetLineColor(ci);
   Zee_2bjet_pt_lep0_stack_3->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep0_stack_3->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0_stack_3->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0_stack_3->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0_stack_3->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep0_stack_3->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0_stack_3->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_pt_lep0_stack_3,"");
   
   TH1D *Zee_2bjet_XX_pt_lep0_stack_4 = new TH1D("Zee_2bjet_XX_pt_lep0_stack_4","",40,0,200);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(9,0.4865629);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(10,-1.008025);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(11,-0.8333987);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(12,-1.684111);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(13,3.92176);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(14,1.676617);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(16,0.8605954);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(17,-1.763732);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(18,0.7751586);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(38,0.03864428);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(9,0.4865629);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(10,1.192896);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(11,1.803643);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(12,1.190854);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(13,1.728292);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(14,1.647605);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(16,1.215822);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(17,1.281005);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(18,0.7751586);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(38,0.03864428);
   Zee_2bjet_XX_pt_lep0_stack_4->SetEntries(29);

   ci = TColor::GetColor("#0000cc");
   Zee_2bjet_XX_pt_lep0_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_XX_pt_lep0_stack_4->SetLineColor(ci);
   Zee_2bjet_XX_pt_lep0_stack_4->GetXaxis()->SetRange(1,200);
   Zee_2bjet_XX_pt_lep0_stack_4->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_XX_pt_lep0_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_pt_lep0_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_pt_lep0_stack_4->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_XX_pt_lep0_stack_4->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_XX_pt_lep0_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_pt_lep0_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_pt_lep0_stack_4->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_XX_pt_lep0_stack_4->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_XX_pt_lep0_stack_4->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_XX_pt_lep0_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_XX_pt_lep0_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_XX_pt_lep0_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_XX_pt_lep0_stack_4,"");
   
   TH1D *Zee_2bjet_bX_pt_lep0_stack_5 = new TH1D("Zee_2bjet_bX_pt_lep0_stack_5","",40,0,200);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(8,1.767282);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(9,2.620026);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(10,7.545997);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(11,1.570295);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(12,1.196936);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(13,1.102693);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(14,1.006877);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(15,7.080114);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(16,-0.8534182);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(17,1.397653);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(18,1.927259);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(19,0.7554686);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(20,0.03014841);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(21,-0.9524678);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(22,-1.744236);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(23,0.7745209);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(24,0.9284166);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(25,-0.1915584);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(27,0.911651);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(28,-0.883755);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(31,0.0983273);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(32,0.6301862);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(33,1.539581);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(38,-0.9704709);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(41,3.265698);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(8,1.339248);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(9,2.265106);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(10,3.047807);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(11,2.897018);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(12,3.060822);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(13,2.655684);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(14,2.108951);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(15,2.285915);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(16,2.340355);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(17,1.492954);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(18,1.618548);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(19,0.7301612);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(20,1.239016);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(21,1.022392);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(22,2.03136);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(23,1.385193);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(24,0.8392805);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(25,1.226281);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(27,0.911651);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(28,0.883755);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(31,0.0983273);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(32,0.5951632);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(33,1.577432);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(38,0.9704709);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(41,1.6395);
   Zee_2bjet_bX_pt_lep0_stack_5->SetEntries(165);

   ci = TColor::GetColor("#cc0000");
   Zee_2bjet_bX_pt_lep0_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bX_pt_lep0_stack_5->SetLineColor(ci);
   Zee_2bjet_bX_pt_lep0_stack_5->GetXaxis()->SetRange(1,200);
   Zee_2bjet_bX_pt_lep0_stack_5->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bX_pt_lep0_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_pt_lep0_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_pt_lep0_stack_5->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bX_pt_lep0_stack_5->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bX_pt_lep0_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_pt_lep0_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_pt_lep0_stack_5->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bX_pt_lep0_stack_5->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bX_pt_lep0_stack_5->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bX_pt_lep0_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bX_pt_lep0_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bX_pt_lep0_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bX_pt_lep0_stack_5,"");
   
   TH1D *Zee_2bjet_bb_pt_lep0_stack_6 = new TH1D("Zee_2bjet_bb_pt_lep0_stack_6","",40,0,200);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(8,74.50107);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(9,130.3859);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(10,196.4253);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(11,257.8544);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(12,239.1582);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(13,210.0498);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(14,194.8953);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(15,190.9893);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(16,134.2923);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(17,101.1715);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(18,106.2288);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(19,82.66751);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(20,52.82374);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(21,42.80758);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(22,40.31708);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(23,52.45818);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(24,34.0863);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(25,31.88128);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(26,28.42197);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(27,24.94894);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(28,20.96786);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(29,4.993371);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(30,7.639672);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(31,21.76259);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(32,15.10072);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(33,10.90963);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(34,10.13679);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(35,7.946388);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(36,3.04394);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(37,5.328183);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(38,3.772141);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(39,6.334763);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(40,4.587117);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(41,40.30443);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(8,11.59452);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(9,15.95239);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(10,21.77881);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(11,23.2624);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(12,23.09016);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(13,22.02436);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(14,19.89926);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(15,19.17575);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(16,17.88721);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(17,15.60117);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(18,14.17724);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(19,12.42396);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(20,11.01336);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(21,10.79595);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(22,9.691902);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(23,8.680327);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(24,8.50819);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(25,7.874501);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(26,7.5727);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(27,6.408574);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(28,5.607321);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(29,5.658162);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(30,4.86628);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(31,5.18005);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(32,4.914618);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(33,4.31745);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(34,4.327709);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(35,4.210445);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(36,3.341326);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(37,3.606596);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(38,3.247918);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(39,3.475104);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(40,2.404699);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(41,8.041522);
   Zee_2bjet_bb_pt_lep0_stack_6->SetEntries(9701);

   ci = TColor::GetColor("#00cc00");
   Zee_2bjet_bb_pt_lep0_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_bb_pt_lep0_stack_6->SetLineColor(ci);
   Zee_2bjet_bb_pt_lep0_stack_6->GetXaxis()->SetRange(1,200);
   Zee_2bjet_bb_pt_lep0_stack_6->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_bb_pt_lep0_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_pt_lep0_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_pt_lep0_stack_6->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_bb_pt_lep0_stack_6->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_bb_pt_lep0_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_pt_lep0_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_pt_lep0_stack_6->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_bb_pt_lep0_stack_6->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_bb_pt_lep0_stack_6->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_bb_pt_lep0_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_bb_pt_lep0_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_bb_pt_lep0_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zee_2bjet_bb_pt_lep0_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zee_2bjet_pt_lep0__339 = new TH1D("Zee_2bjet_pt_lep0__339","",40,0,200);
   Zee_2bjet_pt_lep0__339->SetBinContent(8,110);
   Zee_2bjet_pt_lep0__339->SetBinContent(9,191);
   Zee_2bjet_pt_lep0__339->SetBinContent(10,268);
   Zee_2bjet_pt_lep0__339->SetBinContent(11,348);
   Zee_2bjet_pt_lep0__339->SetBinContent(12,320);
   Zee_2bjet_pt_lep0__339->SetBinContent(13,271);
   Zee_2bjet_pt_lep0__339->SetBinContent(14,290);
   Zee_2bjet_pt_lep0__339->SetBinContent(15,217);
   Zee_2bjet_pt_lep0__339->SetBinContent(16,190);
   Zee_2bjet_pt_lep0__339->SetBinContent(17,135);
   Zee_2bjet_pt_lep0__339->SetBinContent(18,100);
   Zee_2bjet_pt_lep0__339->SetBinContent(19,102);
   Zee_2bjet_pt_lep0__339->SetBinContent(20,74);
   Zee_2bjet_pt_lep0__339->SetBinContent(21,86);
   Zee_2bjet_pt_lep0__339->SetBinContent(22,55);
   Zee_2bjet_pt_lep0__339->SetBinContent(23,40);
   Zee_2bjet_pt_lep0__339->SetBinContent(24,33);
   Zee_2bjet_pt_lep0__339->SetBinContent(25,36);
   Zee_2bjet_pt_lep0__339->SetBinContent(26,32);
   Zee_2bjet_pt_lep0__339->SetBinContent(27,17);
   Zee_2bjet_pt_lep0__339->SetBinContent(28,20);
   Zee_2bjet_pt_lep0__339->SetBinContent(29,14);
   Zee_2bjet_pt_lep0__339->SetBinContent(30,11);
   Zee_2bjet_pt_lep0__339->SetBinContent(31,12);
   Zee_2bjet_pt_lep0__339->SetBinContent(32,13);
   Zee_2bjet_pt_lep0__339->SetBinContent(33,9);
   Zee_2bjet_pt_lep0__339->SetBinContent(34,6);
   Zee_2bjet_pt_lep0__339->SetBinContent(35,6);
   Zee_2bjet_pt_lep0__339->SetBinContent(36,5);
   Zee_2bjet_pt_lep0__339->SetBinContent(37,7);
   Zee_2bjet_pt_lep0__339->SetBinContent(38,3);
   Zee_2bjet_pt_lep0__339->SetBinContent(39,6);
   Zee_2bjet_pt_lep0__339->SetBinContent(40,4);
   Zee_2bjet_pt_lep0__339->SetBinContent(41,39);
   Zee_2bjet_pt_lep0__339->SetBinError(8,10.48809);
   Zee_2bjet_pt_lep0__339->SetBinError(9,13.82027);
   Zee_2bjet_pt_lep0__339->SetBinError(10,16.37071);
   Zee_2bjet_pt_lep0__339->SetBinError(11,18.65476);
   Zee_2bjet_pt_lep0__339->SetBinError(12,17.88854);
   Zee_2bjet_pt_lep0__339->SetBinError(13,16.46208);
   Zee_2bjet_pt_lep0__339->SetBinError(14,17.02939);
   Zee_2bjet_pt_lep0__339->SetBinError(15,14.73092);
   Zee_2bjet_pt_lep0__339->SetBinError(16,13.78405);
   Zee_2bjet_pt_lep0__339->SetBinError(17,11.61895);
   Zee_2bjet_pt_lep0__339->SetBinError(18,10);
   Zee_2bjet_pt_lep0__339->SetBinError(19,10.0995);
   Zee_2bjet_pt_lep0__339->SetBinError(20,8.602325);
   Zee_2bjet_pt_lep0__339->SetBinError(21,9.273618);
   Zee_2bjet_pt_lep0__339->SetBinError(22,7.416198);
   Zee_2bjet_pt_lep0__339->SetBinError(23,6.324555);
   Zee_2bjet_pt_lep0__339->SetBinError(24,5.744563);
   Zee_2bjet_pt_lep0__339->SetBinError(25,6);
   Zee_2bjet_pt_lep0__339->SetBinError(26,5.656854);
   Zee_2bjet_pt_lep0__339->SetBinError(27,4.123106);
   Zee_2bjet_pt_lep0__339->SetBinError(28,4.472136);
   Zee_2bjet_pt_lep0__339->SetBinError(29,3.741657);
   Zee_2bjet_pt_lep0__339->SetBinError(30,3.316625);
   Zee_2bjet_pt_lep0__339->SetBinError(31,3.464102);
   Zee_2bjet_pt_lep0__339->SetBinError(32,3.605551);
   Zee_2bjet_pt_lep0__339->SetBinError(33,3);
   Zee_2bjet_pt_lep0__339->SetBinError(34,2.44949);
   Zee_2bjet_pt_lep0__339->SetBinError(35,2.44949);
   Zee_2bjet_pt_lep0__339->SetBinError(36,2.236068);
   Zee_2bjet_pt_lep0__339->SetBinError(37,2.645751);
   Zee_2bjet_pt_lep0__339->SetBinError(38,1.732051);
   Zee_2bjet_pt_lep0__339->SetBinError(39,2.44949);
   Zee_2bjet_pt_lep0__339->SetBinError(40,2);
   Zee_2bjet_pt_lep0__339->SetBinError(41,6.244998);
   Zee_2bjet_pt_lep0__339->SetEntries(3070);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep0__339->SetLineColor(ci);
   Zee_2bjet_pt_lep0__339->SetLineWidth(2);
   Zee_2bjet_pt_lep0__339->SetMarkerStyle(20);
   Zee_2bjet_pt_lep0__339->SetMarkerSize(1.2);
   Zee_2bjet_pt_lep0__339->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep0__339->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0__339->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0__339->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0__339->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0__339->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0__339->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0__339->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0__339->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep0__339->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0__339->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0__339->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0__339->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0__339->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0__339->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_pt_lep0_fx1339[40] = {
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
   Double_t Graph_from_Zee_2bjet_bb_pt_lep0_fy1339[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   124.2653,
   213.4943,
   319.6698,
   393.7082,
   381.8363,
   343.772,
   304.8704,
   279.73,
   211.0869,
   157.2822,
   154.5787,
   117.337,
   78.56286,
   68.75727,
   55.93977,
   70.13497,
   43.99251,
   42.55196,
   32.07261,
   30.78611,
   24.15111,
   7.60513,
   10.92929,
   22.66439,
   16.71062,
   14.11362,
   11.79104,
   8.346096,
   3.714746,
   5.970342,
   3.406686,
   6.334763,
   5.325581};
   Double_t Graph_from_Zee_2bjet_bb_pt_lep0_fex1339[40] = {
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
   Double_t Graph_from_Zee_2bjet_bb_pt_lep0_fey1339[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   12.32914,
   16.91532,
   22.87525,
   24.44838,
   24.34042,
   23.19118,
   20.93965,
   19.99647,
   18.784,
   16.33716,
   14.83244,
   12.89088,
   11.47759,
   11.27199,
   10.20596,
   9.118399,
   8.740961,
   8.197682,
   7.649874,
   6.60021,
   5.798636,
   5.728029,
   4.97953,
   5.208946,
   4.983105,
   4.660852,
   4.384778,
   4.229375,
   3.374827,
   3.635373,
   3.414333,
   3.475104,
   2.461082};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zee_2bjet_bb_pt_lep0_fx1339,Graph_from_Zee_2bjet_bb_pt_lep0_fy1339,Graph_from_Zee_2bjet_bb_pt_lep0_fex1339,Graph_from_Zee_2bjet_bb_pt_lep0_fey1339);
   gre->SetName("Graph_from_Zee_2bjet_bb_pt_lep0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_pt_lep01339 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_pt_lep01339","",100,0,220);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01339->SetMinimum(-41.82407);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01339->SetMaximum(459.9731);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01339->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01339->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01339->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01339->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01339->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01339->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01339->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01339->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01339->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01339->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01339->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01339->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01339->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01339->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01339->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01339->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_pt_lep01339);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zee_2bjet_pt_lep0","Data (Z(ee) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zee_2bjet_bb_pt_lep0_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zee_2bjet_bX_pt_lep0_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zee_2bjet_XX_pt_lep0_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep0_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep0_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zee_2bjet_pt_lep0_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zee_2bjet_bb_pt_lep0","MC unc. (stat.)","fl");

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
   pt_lep0_Z_2bjet_Zee_17_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__340 = new TH1D("data_mc_ratio__340","",40,0,200);
   data_mc_ratio__340->SetBinContent(8,0.8852031);
   data_mc_ratio__340->SetBinContent(9,0.8946374);
   data_mc_ratio__340->SetBinContent(10,0.8383651);
   data_mc_ratio__340->SetBinContent(11,0.8839033);
   data_mc_ratio__340->SetBinContent(12,0.8380555);
   data_mc_ratio__340->SetBinContent(13,0.7883132);
   data_mc_ratio__340->SetBinContent(14,0.951224);
   data_mc_ratio__340->SetBinContent(15,0.7757481);
   data_mc_ratio__340->SetBinContent(16,0.9001032);
   data_mc_ratio__340->SetBinContent(17,0.8583298);
   data_mc_ratio__340->SetBinContent(18,0.6469196);
   data_mc_ratio__340->SetBinContent(19,0.8692909);
   data_mc_ratio__340->SetBinContent(20,0.941921);
   data_mc_ratio__340->SetBinContent(21,1.250777);
   data_mc_ratio__340->SetBinContent(22,0.9832003);
   data_mc_ratio__340->SetBinContent(23,0.5703289);
   data_mc_ratio__340->SetBinContent(24,0.7501276);
   data_mc_ratio__340->SetBinContent(25,0.8460245);
   data_mc_ratio__340->SetBinContent(26,0.997736);
   data_mc_ratio__340->SetBinContent(27,0.5521971);
   data_mc_ratio__340->SetBinContent(28,0.8281194);
   data_mc_ratio__340->SetBinContent(29,1.840863);
   data_mc_ratio__340->SetBinContent(30,1.00647);
   data_mc_ratio__340->SetBinContent(31,0.5294649);
   data_mc_ratio__340->SetBinContent(32,0.7779486);
   data_mc_ratio__340->SetBinContent(33,0.6376821);
   data_mc_ratio__340->SetBinContent(34,0.5088609);
   data_mc_ratio__340->SetBinContent(35,0.718899);
   data_mc_ratio__340->SetBinContent(36,1.345987);
   data_mc_ratio__340->SetBinContent(37,1.172462);
   data_mc_ratio__340->SetBinContent(38,0.8806213);
   data_mc_ratio__340->SetBinContent(39,0.9471547);
   data_mc_ratio__340->SetBinContent(40,0.7510917);
   data_mc_ratio__340->SetBinContent(41,0.8633102);
   data_mc_ratio__340->SetBinError(8,0.0844008);
   data_mc_ratio__340->SetBinError(9,0.06473369);
   data_mc_ratio__340->SetBinError(10,0.0512113);
   data_mc_ratio__340->SetBinError(11,0.04738219);
   data_mc_ratio__340->SetBinError(12,0.04684873);
   data_mc_ratio__340->SetBinError(13,0.04788661);
   data_mc_ratio__340->SetBinError(14,0.05585779);
   data_mc_ratio__340->SetBinError(15,0.05266121);
   data_mc_ratio__340->SetBinError(16,0.06530035);
   data_mc_ratio__340->SetBinError(17,0.07387326);
   data_mc_ratio__340->SetBinError(18,0.06469196);
   data_mc_ratio__340->SetBinError(19,0.08607262);
   data_mc_ratio__340->SetBinError(20,0.1094961);
   data_mc_ratio__340->SetBinError(21,0.1348747);
   data_mc_ratio__340->SetBinError(22,0.1325747);
   data_mc_ratio__340->SetBinError(23,0.09017692);
   data_mc_ratio__340->SetBinError(24,0.1305805);
   data_mc_ratio__340->SetBinError(25,0.1410041);
   data_mc_ratio__340->SetBinError(26,0.1763765);
   data_mc_ratio__340->SetBinError(27,0.1339275);
   data_mc_ratio__340->SetBinError(28,0.1851731);
   data_mc_ratio__340->SetBinError(29,0.4919913);
   data_mc_ratio__340->SetBinError(30,0.3034621);
   data_mc_ratio__340->SetBinError(31,0.1528433);
   data_mc_ratio__340->SetBinError(32,0.2157641);
   data_mc_ratio__340->SetBinError(33,0.2125607);
   data_mc_ratio__340->SetBinError(34,0.2077416);
   data_mc_ratio__340->SetBinError(35,0.2934893);
   data_mc_ratio__340->SetBinError(36,0.6019436);
   data_mc_ratio__340->SetBinError(37,0.4431491);
   data_mc_ratio__340->SetBinError(38,0.508427);
   data_mc_ratio__340->SetBinError(39,0.3866743);
   data_mc_ratio__340->SetBinError(40,0.3755459);
   data_mc_ratio__340->SetBinError(41,0.2094771);
   data_mc_ratio__340->SetMinimum(0.4);
   data_mc_ratio__340->SetMaximum(1.6);
   data_mc_ratio__340->SetEntries(107.3596);
   data_mc_ratio__340->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__340->SetLineColor(ci);
   data_mc_ratio__340->SetLineWidth(2);
   data_mc_ratio__340->SetMarkerStyle(20);
   data_mc_ratio__340->SetMarkerSize(1.2);
   data_mc_ratio__340->GetXaxis()->SetTitle("Leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__340->GetXaxis()->SetRange(1,40);
   data_mc_ratio__340->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__340->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__340->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__340->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__340->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__340->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__340->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__340->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__340->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__340->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__340->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__340->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__340->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__340->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__340->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__340->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__340->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1340[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1340[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1340[40] = {
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
   Double_t Graph_from_mc_statistical_error_fey1340[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.09921629,
   0.07923077,
   0.07155901,
   0.06209772,
   0.0637457,
   0.06746094,
   0.06868378,
   0.07148491,
   0.08898707,
   0.1038716,
   0.09595395,
   0.109862,
   0.1460943,
   0.1639389,
   0.1824455,
   0.1300122,
   0.198692,
   0.1926511,
   0.2385173,
   0.2143892,
   0.2400982,
   0.7531796,
   0.4556135,
   0.2298295,
   0.2981999,
   0.330238,
   0.3718737,
   0.5067489,
   0.9084946,
   0.6089053,
   1.002245,
   0.5485768,
   0.4621246};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1340,Graph_from_mc_statistical_error_fy1340,Graph_from_mc_statistical_error_fex1340,Graph_from_mc_statistical_error_fey1340);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1340 = new TH1F("Graph_Graph_from_mc_statistical_error1340","",100,0,220);
   Graph_Graph_from_mc_statistical_error1340->SetMinimum(-0.2026936);
   Graph_Graph_from_mc_statistical_error1340->SetMaximum(2.202694);
   Graph_Graph_from_mc_statistical_error1340->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1340->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1340->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1340->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1340->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1340->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1340->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1340->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1340->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1340->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1340->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1340->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1340->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1340->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1340->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1340->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1340);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep0_Z_2bjet_Zee_17_amcnlo->cd();
   pt_lep0_Z_2bjet_Zee_17_amcnlo->Modified();
   pt_lep0_Z_2bjet_Zee_17_amcnlo->cd();
   pt_lep0_Z_2bjet_Zee_17_amcnlo->SetSelected(pt_lep0_Z_2bjet_Zee_17_amcnlo);
}

void dPhi_Zb_Z_2bjet_Zmm_17_amcnlo()
{
//=========Macro generated from canvas: dPhi_Zb_Z_2bjet_Zmm_17_amcnlo/dPhi_Zb_Z_2bjet_Zmm_17_amcnlo
//=========  (Thu Jan 14 10:43:06 2021) by ROOT version 6.14/09
   TCanvas *dPhi_Zb_Z_2bjet_Zmm_17_amcnlo = new TCanvas("dPhi_Zb_Z_2bjet_Zmm_17_amcnlo", "dPhi_Zb_Z_2bjet_Zmm_17_amcnlo",0,0,600,600);
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->SetHighLightColor(2);
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->Range(0,0,1,1);
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->SetFillColor(0);
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->SetFillStyle(4000);
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->SetBorderMode(0);
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->SetBorderSize(2);
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->SetFrameFillStyle(1000);
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-0.4974175,-1.392683,3.416482,1401.29);
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
   st->SetMaximum(1200.973);
   
   TH1F *st_stack_322 = new TH1F("st_stack_322","",30,0,3.141593);
   st_stack_322->SetMinimum(0.01);
   st_stack_322->SetMaximum(1261.022);
   st_stack_322->SetDirectory(0);
   st_stack_322->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_322->SetLineColor(ci);
   st_stack_322->GetXaxis()->SetRange(1,31);
   st_stack_322->GetXaxis()->SetLabelFont(42);
   st_stack_322->GetXaxis()->SetLabelSize(0.035);
   st_stack_322->GetXaxis()->SetTitleSize(0.035);
   st_stack_322->GetXaxis()->SetTitleFont(42);
   st_stack_322->GetYaxis()->SetTitle("Events/0.105");
   st_stack_322->GetYaxis()->SetLabelFont(42);
   st_stack_322->GetYaxis()->SetLabelSize(0.05);
   st_stack_322->GetYaxis()->SetTitleSize(0.057);
   st_stack_322->GetYaxis()->SetTitleOffset(1.2);
   st_stack_322->GetYaxis()->SetTitleFont(42);
   st_stack_322->GetZaxis()->SetLabelFont(42);
   st_stack_322->GetZaxis()->SetLabelSize(0.035);
   st_stack_322->GetZaxis()->SetTitleSize(0.035);
   st_stack_322->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_322);
   
   
   TH1D *Zmm_2bjet_dPhi_Zb_stack_1 = new TH1D("Zmm_2bjet_dPhi_Zb_stack_1","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(1,0.7800534);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(2,0.5821604);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(3,0.2328996);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(4,0.7839354);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(5,0.5631105);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(6,0.7466393);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(7,0.1671429);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(8,0.478837);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(9,0.7590171);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(10,0.4866092);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(11,0.3644212);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(12,0.5135445);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(13,1.29268);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(14,0.5271284);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(15,0.9073559);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(16,1.32252);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(17,1.753743);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(18,1.159239);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(19,2.401008);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(20,1.605333);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(21,1.528347);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(22,2.277975);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(23,4.098296);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(24,3.991611);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(25,3.21516);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(26,4.715606);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(27,4.042788);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(28,3.879777);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(29,7.905602);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinContent(30,6.319538);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(1,0.3893429);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(2,0.3477007);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(3,0.2013399);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(4,0.3980693);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(5,0.3316041);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(6,0.3972967);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(7,0.1671429);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(8,0.2785392);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(9,0.3832815);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(10,0.3449917);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(11,0.258303);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(12,0.2901461);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(13,0.4910304);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(14,0.3071157);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(15,0.4164902);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(16,0.4743528);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(17,0.5638015);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(18,0.4770222);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(19,0.8894934);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(20,0.5587306);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(21,0.5464581);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(22,0.6603745);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(23,0.888201);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(24,0.8641009);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(25,0.7872178);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(26,0.9470529);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(27,0.8796516);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(28,0.863274);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(29,1.552532);
   Zmm_2bjet_dPhi_Zb_stack_1->SetBinError(30,1.113029);
   Zmm_2bjet_dPhi_Zb_stack_1->SetEntries(345);

   ci = TColor::GetColor("#00cccc");
   Zmm_2bjet_dPhi_Zb_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_stack_1->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_stack_1->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_stack_1,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb_stack_2 = new TH1D("Zmm_2bjet_dPhi_Zb_stack_2","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(1,1.032772);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(2,1.821293);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(3,0.6504427);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(4,1.33703);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(5,1.67462);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(6,0.6703899);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(7,1.009823);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(8,0.2159114);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(9,0.4955757);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(10,0.7149511);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(11,1.516332);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(12,1.167446);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(13,2.882413);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(14,1.869757);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(15,1.471619);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(16,2.921555);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(17,2.603613);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(18,3.893168);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(19,3.738718);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(20,5.541768);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(21,7.227354);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(22,7.730206);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(23,7.192939);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(24,10.29411);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(25,12.36585);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(26,14.60301);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(27,9.537512);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(28,10.66835);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(29,11.57854);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinContent(30,8.271322);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(1,0.5895076);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(2,0.7577634);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(3,0.4935075);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(4,0.6800995);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(5,0.739649);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(6,0.4740667);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(7,0.5843835);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(8,0.2108209);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(9,0.368229);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(10,0.5068134);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(11,0.7162754);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(12,0.6117922);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(13,1.017337);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(14,0.7871046);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(15,0.7243882);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(16,1.036014);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(17,0.8873815);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(18,1.191553);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(19,1.140836);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(20,1.626884);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(21,1.663941);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(22,1.58228);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(23,1.629259);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(24,1.866825);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(25,2.071406);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(26,2.24);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(27,1.76643);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(28,1.87846);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(29,2.022059);
   Zmm_2bjet_dPhi_Zb_stack_2->SetBinError(30,1.822968);
   Zmm_2bjet_dPhi_Zb_stack_2->SetEntries(434);

   ci = TColor::GetColor("#ff6600");
   Zmm_2bjet_dPhi_Zb_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_stack_2->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_stack_2->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_stack_2,"");
   
   TH1D *Zmm_2bjet_dPhi_Zb_stack_3 = new TH1D("Zmm_2bjet_dPhi_Zb_stack_3","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(1,28.81962);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(2,33.30761);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(3,30.15601);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(4,29.27819);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(5,30.4462);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(6,27.37335);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(7,34.60986);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(8,29.45883);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(9,35.85756);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(10,41.62881);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(11,38.96188);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(12,40.27427);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(13,44.49997);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(14,56.58761);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(15,61.26951);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(16,67.21265);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(17,78.67189);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(18,81.35729);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(19,89.75703);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(20,100.2947);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(21,118.648);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(22,103.3552);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(23,137.3663);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(24,128.9323);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(25,144.547);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(26,134.34);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(27,149.0685);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(28,154.0014);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(29,162.2285);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinContent(30,153.2442);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(1,3.310221);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(2,3.552445);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(3,3.409824);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(4,3.388887);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(5,3.423729);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(6,3.220182);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(7,3.650785);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(8,3.335449);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(9,3.733609);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(10,3.957959);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(11,3.835742);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(12,3.931885);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(13,4.202361);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(14,4.684311);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(15,4.903365);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(16,5.108132);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(17,5.601721);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(18,5.58134);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(19,5.944534);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(20,6.267113);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(21,6.76063);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(22,6.402178);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(23,7.300242);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(24,7.068933);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(25,7.522394);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(26,7.231612);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(27,7.632796);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(28,7.766475);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(29,7.967832);
   Zmm_2bjet_dPhi_Zb_stack_3->SetBinError(30,7.694466);
   Zmm_2bjet_dPhi_Zb_stack_3->SetEntries(6946);

   ci = TColor::GetColor("#cccc00");
   Zmm_2bjet_dPhi_Zb_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb_stack_3->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb_stack_3->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb_stack_3->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_dPhi_Zb_stack_3,"");
   
   TH1D *Zmm_2bjet_XX_dPhi_Zb_stack_4 = new TH1D("Zmm_2bjet_XX_dPhi_Zb_stack_4","",30,0,3.141593);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(2,-0.6090493);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(3,0.1330832);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(4,0.8406909);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(6,1.592287);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(8,5.787496);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(9,-0.9226818);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(10,5.318863);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(12,-1.029558);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(13,7.959147);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(14,0.3906314);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(15,2.986927);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(16,-1.990383);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(17,-0.6203879);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(18,0.9284418);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(19,3.361333);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(20,3.081462);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(21,4.96321);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(22,-0.6569843);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(23,-1.33385);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(24,4.549865);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(25,3.271807);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(26,-1.364795);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(27,0.3979447);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(28,5.787415);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(29,4.485616);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinContent(30,8.638603);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(2,0.6090493);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(3,0.1330832);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(4,0.7315331);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(6,1.875029);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(8,3.38343);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(9,0.9226818);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(10,3.852709);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(12,1.029558);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(13,5.572901);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(14,1.117901);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(15,3.78994);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(16,2.398203);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(17,1.207291);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(18,0.9284418);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(19,4.40711);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(20,2.857003);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(21,4.044459);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(22,2.045202);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(23,1.687312);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(24,5.031905);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(25,3.52955);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(26,1.39519);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(27,2.38044);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(28,2.805211);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(29,2.024328);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetBinError(30,4.140893);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetEntries(108);

   ci = TColor::GetColor("#0000cc");
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_XX_dPhi_Zb_stack_4->SetLineColor(ci);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_XX_dPhi_Zb_stack_4->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_XX_dPhi_Zb_stack_4,"");
   
   TH1D *Zmm_2bjet_bX_dPhi_Zb_stack_5 = new TH1D("Zmm_2bjet_bX_dPhi_Zb_stack_5","",30,0,3.141593);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(1,1.138739);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(2,2.717973);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(3,2.631727);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(4,0.09388079);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(5,-0.4451056);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(6,2.474851);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(7,1.970852);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(8,1.034694);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(9,1.276034);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(10,1.660325);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(11,1.748416);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(12,1.88216);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(13,1.854611);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(14,0.1504345);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(15,2.221462);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(16,-0.6509232);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(17,1.929673);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(18,1.432071);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(19,2.807581);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(20,0.8921618);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(21,1.946114);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(22,2.397844);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(23,7.409215);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(24,2.287276);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(25,7.395854);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(26,5.226305);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(27,8.508145);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(28,12.59781);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(29,4.809542);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinContent(30,4.891515);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(1,0.8053127);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(2,1.608034);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(3,2.241608);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(4,0.95874);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(5,1.98465);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(6,1.435203);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(7,3.583993);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(8,1.034694);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(9,1.979263);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(10,1.174332);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(11,1.069942);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(12,1.27553);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(13,1.611769);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(14,0.1504345);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(15,3.2796);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(16,1.312136);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(17,2.575986);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(18,2.213092);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(19,2.355735);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(20,1.784796);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(21,2.394582);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(22,2.686939);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(23,2.995642);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(24,2.88343);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(25,3.594265);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(26,3.736282);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(27,3.974121);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(28,5.243813);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(29,4.485189);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetBinError(30,4.562568);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetEntries(333);

   ci = TColor::GetColor("#cc0000");
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bX_dPhi_Zb_stack_5->SetLineColor(ci);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bX_dPhi_Zb_stack_5->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bX_dPhi_Zb_stack_5,"");
   
   TH1D *Zmm_2bjet_bb_dPhi_Zb_stack_6 = new TH1D("Zmm_2bjet_bb_dPhi_Zb_stack_6","",30,0,3.141593);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(1,26.96841);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(2,51.40497);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(3,43.28844);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(4,51.67567);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(5,45.59854);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(6,31.33221);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(7,31.87633);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(8,49.27674);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(9,42.04433);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(10,39.38642);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(11,45.22462);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(12,58.95642);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(13,60.40569);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(14,56.29354);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(15,86.25469);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(16,88.27325);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(17,94.28458);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(18,106.2619);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(19,151.2858);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(20,157.1324);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(21,202.9274);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(22,256.6306);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(23,279.3972);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(24,338.7989);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(25,338.5143);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(26,359.2518);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(27,400.6752);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(28,462.8643);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(29,428.5771);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinContent(30,479.17);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(1,8.630829);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(2,9.917516);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(3,9.152796);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(4,9.424051);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(5,9.573063);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(6,10.71403);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(7,10.68119);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(8,10.44541);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(9,10.30688);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(10,10.57106);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(11,11.2163);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(12,12.3199);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(13,11.66788);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(14,13.39);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(15,13.66908);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(16,15.36364);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(17,15.9411);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(18,17.70803);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(19,18.73998);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(20,20.00202);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(21,22.25135);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(22,24.17903);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(23,25.91145);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(24,27.88962);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(25,30.10889);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(26,31.26531);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(27,33.17125);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(28,33.424);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(29,32.86802);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetBinError(30,33.29757);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetEntries(17994);

   ci = TColor::GetColor("#00cc00");
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_bb_dPhi_Zb_stack_6->SetLineColor(ci);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_bb_dPhi_Zb_stack_6->GetZaxis()->SetTitleFont(42);
   st->Add(Zmm_2bjet_bb_dPhi_Zb_stack_6,"");
   st->Draw("hist");
   
   TH1D *Zmm_2bjet_dPhi_Zb__643 = new TH1D("Zmm_2bjet_dPhi_Zb__643","",30,0,3.141593);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(1,70);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(2,70);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(3,67);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(4,48);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(5,79);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(6,75);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(7,85);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(8,81);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(9,88);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(10,100);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(11,106);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(12,114);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(13,107);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(14,113);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(15,125);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(16,140);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(17,143);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(18,191);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(19,247);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(20,240);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(21,263);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(22,284);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(23,329);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(24,409);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(25,420);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(26,461);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(27,509);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(28,554);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(29,533);
   Zmm_2bjet_dPhi_Zb__643->SetBinContent(30,496);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(1,8.3666);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(2,8.3666);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(3,8.185353);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(4,6.928203);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(5,8.888194);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(6,8.660254);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(7,9.219544);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(8,9);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(9,9.380832);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(10,10);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(11,10.29563);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(12,10.67708);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(13,10.34408);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(14,10.63015);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(15,11.18034);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(16,11.83216);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(17,11.95826);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(18,13.82027);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(19,15.71623);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(20,15.49193);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(21,16.21727);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(22,16.8523);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(23,18.13836);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(24,20.22375);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(25,20.4939);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(26,21.47091);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(27,22.56103);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(28,23.5372);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(29,23.08679);
   Zmm_2bjet_dPhi_Zb__643->SetBinError(30,22.27106);
   Zmm_2bjet_dPhi_Zb__643->SetEntries(6547);

   ci = TColor::GetColor("#000099");
   Zmm_2bjet_dPhi_Zb__643->SetLineColor(ci);
   Zmm_2bjet_dPhi_Zb__643->SetLineWidth(2);
   Zmm_2bjet_dPhi_Zb__643->SetMarkerStyle(20);
   Zmm_2bjet_dPhi_Zb__643->SetMarkerSize(1.2);
   Zmm_2bjet_dPhi_Zb__643->GetXaxis()->SetRange(1,60);
   Zmm_2bjet_dPhi_Zb__643->GetXaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb__643->GetXaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb__643->GetXaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb__643->GetXaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb__643->GetYaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb__643->GetYaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb__643->GetYaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb__643->GetYaxis()->SetTitleOffset(0);
   Zmm_2bjet_dPhi_Zb__643->GetYaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb__643->GetZaxis()->SetLabelFont(42);
   Zmm_2bjet_dPhi_Zb__643->GetZaxis()->SetLabelSize(0.035);
   Zmm_2bjet_dPhi_Zb__643->GetZaxis()->SetTitleSize(0.035);
   Zmm_2bjet_dPhi_Zb__643->GetZaxis()->SetTitleFont(42);
   Zmm_2bjet_dPhi_Zb__643->Draw("same E");
   
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb_fx1643[30] = {
   0.05235988,
   0.1570796,
   0.2617994,
   0.3665191,
   0.4712389,
   0.5759587,
   0.6806784,
   0.7853982,
   0.8901179,
   0.9948377,
   1.099557,
   1.204277,
   1.308997,
   1.413717,
   1.518436,
   1.623156,
   1.727876,
   1.832596,
   1.937315,
   2.042035,
   2.146755,
   2.251475,
   2.356194,
   2.460914,
   2.565634,
   2.670354,
   2.775074,
   2.879793,
   2.984513,
   3.089233};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb_fy1643[30] = {
   58.7396,
   89.22495,
   77.09261,
   84.0094,
   77.83736,
   64.18973,
   69.634,
   86.25252,
   79.50983,
   89.19598,
   87.81567,
   101.7643,
   118.8945,
   115.8191,
   155.1116,
   157.0887,
   178.6231,
   195.0321,
   253.3514,
   268.5478,
   337.2404,
   371.7349,
   434.13,
   488.8541,
   509.31,
   516.772,
   572.2301,
   649.799,
   619.5849,
   660.5352};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb_fex1643[30] = {
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988};
   Double_t Graph_from_Zmm_2bjet_bb_dPhi_Zb_fey1643[30] = {
   9.305719,
   10.70648,
   10.03629,
   10.11794,
   10.39044,
   11.45068,
   11.85877,
   11.52701,
   11.19031,
   12.00046,
   11.92656,
   13.05317,
   13.73792,
   14.25556,
   15.3852,
   16.45921,
   17.16673,
   18.7652,
   20.33689,
   21.2994,
   23.7905,
   25.29734,
   27.20222,
   29.42221,
   31.51855,
   32.42895,
   34.40851,
   34.88729,
   34.27108,
   34.79165};
   TGraphErrors *gre = new TGraphErrors(30,Graph_from_Zmm_2bjet_bb_dPhi_Zb_fx1643,Graph_from_Zmm_2bjet_bb_dPhi_Zb_fy1643,Graph_from_Zmm_2bjet_bb_dPhi_Zb_fex1643,Graph_from_Zmm_2bjet_bb_dPhi_Zb_fey1643);
   gre->SetName("Graph_from_Zmm_2bjet_bb_dPhi_Zb");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643 = new TH1F("Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643","",100,0,3.455752);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643->SetMinimum(44.49049);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643->SetMaximum(759.9162);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643->SetDirectory(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643->SetLineColor(ci);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zmm_2bjet_bb_dPhi_Zb1643);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.58,0.52,0.89,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb","Data (Z(#mu#mu) + 2 b jets)","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Zmm_2bjet_bb_dPhi_Zb_stack_6","Z+bb","F");

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
   entry=leg->AddEntry("Zmm_2bjet_bX_dPhi_Zb_stack_5","Z+bX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_XX_dPhi_Zb_stack_4","Z+XX","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_stack_3","t#bar{t}","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_stack_2","Diboson","F");

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
   entry=leg->AddEntry("Zmm_2bjet_dPhi_Zb_stack_1","Single top","F");

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
   entry=leg->AddEntry("Graph_from_Zmm_2bjet_bb_dPhi_Zb","MC unc. (stat.)","fl");

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
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->cd();
  
// ------------>Primitives in pad: bottomPad
   TPad *bottomPad = new TPad("bottomPad", "bottomPad",0,0,1,0.3);
   bottomPad->Draw();
   bottomPad->cd();
   bottomPad->Range(-0.4974175,-0.2774193,3.416482,1.658065);
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
   
   TH1D *data_mc_ratio__644 = new TH1D("data_mc_ratio__644","",30,0,3.141593);
   data_mc_ratio__644->SetBinContent(1,1.1917);
   data_mc_ratio__644->SetBinContent(2,0.7845339);
   data_mc_ratio__644->SetBinContent(3,0.8690847);
   data_mc_ratio__644->SetBinContent(4,0.5713646);
   data_mc_ratio__644->SetBinContent(5,1.014937);
   data_mc_ratio__644->SetBinContent(6,1.168411);
   data_mc_ratio__644->SetBinContent(7,1.220668);
   data_mc_ratio__644->SetBinContent(8,0.939103);
   data_mc_ratio__644->SetBinContent(9,1.106781);
   data_mc_ratio__644->SetBinContent(10,1.121127);
   data_mc_ratio__644->SetBinContent(11,1.207074);
   data_mc_ratio__644->SetBinContent(12,1.120236);
   data_mc_ratio__644->SetBinContent(13,0.8999574);
   data_mc_ratio__644->SetBinContent(14,0.9756595);
   data_mc_ratio__644->SetBinContent(15,0.8058715);
   data_mc_ratio__644->SetBinContent(16,0.8912164);
   data_mc_ratio__644->SetBinContent(17,0.8005683);
   data_mc_ratio__644->SetBinContent(18,0.9793259);
   data_mc_ratio__644->SetBinContent(19,0.9749303);
   data_mc_ratio__644->SetBinContent(20,0.8936955);
   data_mc_ratio__644->SetBinContent(21,0.779859);
   data_mc_ratio__644->SetBinContent(22,0.7639854);
   data_mc_ratio__644->SetBinContent(23,0.7578375);
   data_mc_ratio__644->SetBinContent(24,0.8366505);
   data_mc_ratio__644->SetBinContent(25,0.8246451);
   data_mc_ratio__644->SetBinContent(26,0.8920762);
   data_mc_ratio__644->SetBinContent(27,0.8895024);
   data_mc_ratio__644->SetBinContent(28,0.8525713);
   data_mc_ratio__644->SetBinContent(29,0.8602534);
   data_mc_ratio__644->SetBinContent(30,0.7509062);
   data_mc_ratio__644->SetBinError(1,0.1424354);
   data_mc_ratio__644->SetBinError(2,0.09376974);
   data_mc_ratio__644->SetBinError(3,0.1061756);
   data_mc_ratio__644->SetBinError(4,0.08246938);
   data_mc_ratio__644->SetBinError(5,0.1141893);
   data_mc_ratio__644->SetBinError(6,0.1349165);
   data_mc_ratio__644->SetBinError(7,0.1324);
   data_mc_ratio__644->SetBinError(8,0.1043448);
   data_mc_ratio__644->SetBinError(9,0.1179833);
   data_mc_ratio__644->SetBinError(10,0.1121127);
   data_mc_ratio__644->SetBinError(11,0.1172414);
   data_mc_ratio__644->SetBinError(12,0.1049197);
   data_mc_ratio__644->SetBinError(13,0.08700217);
   data_mc_ratio__644->SetBinError(14,0.09178232);
   data_mc_ratio__644->SetBinError(15,0.07207934);
   data_mc_ratio__644->SetBinError(16,0.07532154);
   data_mc_ratio__644->SetBinError(17,0.06694689);
   data_mc_ratio__644->SetBinError(18,0.07086153);
   data_mc_ratio__644->SetBinError(19,0.06203333);
   data_mc_ratio__644->SetBinError(20,0.0576878);
   data_mc_ratio__644->SetBinError(21,0.04808817);
   data_mc_ratio__644->SetBinError(22,0.04533419);
   data_mc_ratio__644->SetBinError(23,0.04178093);
   data_mc_ratio__644->SetBinError(24,0.04136971);
   data_mc_ratio__644->SetBinError(25,0.04023856);
   data_mc_ratio__644->SetBinError(26,0.04154813);
   data_mc_ratio__644->SetBinError(27,0.0394265);
   data_mc_ratio__644->SetBinError(28,0.03622229);
   data_mc_ratio__644->SetBinError(29,0.03726171);
   data_mc_ratio__644->SetBinError(30,0.03371668);
   data_mc_ratio__644->SetMinimum(0.4);
   data_mc_ratio__644->SetMaximum(1.6);
   data_mc_ratio__644->SetEntries(1311.704);
   data_mc_ratio__644->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__644->SetLineColor(ci);
   data_mc_ratio__644->SetLineWidth(2);
   data_mc_ratio__644->SetMarkerStyle(20);
   data_mc_ratio__644->SetMarkerSize(1.2);
   data_mc_ratio__644->GetXaxis()->SetTitle("dPhi_{Zb}");
   data_mc_ratio__644->GetXaxis()->SetRange(1,31);
   data_mc_ratio__644->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__644->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__644->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__644->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__644->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__644->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__644->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__644->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__644->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__644->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__644->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__644->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__644->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__644->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__644->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__644->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__644->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1644[30] = {
   0.05235988,
   0.1570796,
   0.2617994,
   0.3665191,
   0.4712389,
   0.5759587,
   0.6806784,
   0.7853982,
   0.8901179,
   0.9948377,
   1.099557,
   1.204277,
   1.308997,
   1.413717,
   1.518436,
   1.623156,
   1.727876,
   1.832596,
   1.937315,
   2.042035,
   2.146755,
   2.251475,
   2.356194,
   2.460914,
   2.565634,
   2.670354,
   2.775074,
   2.879793,
   2.984513,
   3.089233};
   Double_t Graph_from_mc_statistical_error_fy1644[30] = {
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
   Double_t Graph_from_mc_statistical_error_fex1644[30] = {
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988,
   0.05235988};
   Double_t Graph_from_mc_statistical_error_fey1644[30] = {
   0.1584233,
   0.1199943,
   0.1301849,
   0.1204381,
   0.1334892,
   0.1783881,
   0.1703015,
   0.1336426,
   0.1407412,
   0.1345403,
   0.1358136,
   0.1282686,
   0.1155471,
   0.1230847,
   0.09918794,
   0.1047766,
   0.09610587,
   0.09621596,
   0.08027146,
   0.07931325,
   0.07054462,
   0.06805211,
   0.06265916,
   0.06018609,
   0.0618848,
   0.06275292,
   0.06013056,
   0.05368935,
   0.05531298,
   0.05267191};
   gre = new TGraphErrors(30,Graph_from_mc_statistical_error_fx1644,Graph_from_mc_statistical_error_fy1644,Graph_from_mc_statistical_error_fex1644,Graph_from_mc_statistical_error_fey1644);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1644 = new TH1F("Graph_Graph_from_mc_statistical_error1644","",100,0,3.455752);
   Graph_Graph_from_mc_statistical_error1644->SetMinimum(0.7859343);
   Graph_Graph_from_mc_statistical_error1644->SetMaximum(1.214066);
   Graph_Graph_from_mc_statistical_error1644->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1644->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1644->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1644->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1644->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1644->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1644->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1644->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1644->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1644->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1644->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1644->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1644->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1644->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1644->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1644->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1644);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,3.2,1);
   line->Draw();
   bottomPad->Modified();
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->Modified();
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->cd();
   dPhi_Zb_Z_2bjet_Zmm_17_amcnlo->SetSelected(dPhi_Zb_Z_2bjet_Zmm_17_amcnlo);
}

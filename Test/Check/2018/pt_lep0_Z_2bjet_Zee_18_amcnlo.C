void pt_lep0_Z_2bjet_Zee_18_amcnlo()
{
//=========Macro generated from canvas: pt_lep0_Z_2bjet_Zee_18_amcnlo/pt_lep0_Z_2bjet_Zee_18_amcnlo
//=========  (Thu Jan 14 10:42:42 2021) by ROOT version 6.14/09
   TCanvas *pt_lep0_Z_2bjet_Zee_18_amcnlo = new TCanvas("pt_lep0_Z_2bjet_Zee_18_amcnlo", "pt_lep0_Z_2bjet_Zee_18_amcnlo",0,0,600,600);
   pt_lep0_Z_2bjet_Zee_18_amcnlo->SetHighLightColor(2);
   pt_lep0_Z_2bjet_Zee_18_amcnlo->Range(0,0,1,1);
   pt_lep0_Z_2bjet_Zee_18_amcnlo->SetFillColor(0);
   pt_lep0_Z_2bjet_Zee_18_amcnlo->SetFillStyle(4000);
   pt_lep0_Z_2bjet_Zee_18_amcnlo->SetBorderMode(0);
   pt_lep0_Z_2bjet_Zee_18_amcnlo->SetBorderSize(2);
   pt_lep0_Z_2bjet_Zee_18_amcnlo->SetFrameFillStyle(1000);
   pt_lep0_Z_2bjet_Zee_18_amcnlo->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: topPad
   TPad *topPad = new TPad("topPad", "topPad",0,0.3,1,1);
   topPad->Draw();
   topPad->cd();
   topPad->Range(-30.64508,-1.310064,210.4839,1318.753);
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
   st->SetMaximum(1130.235);
   
   TH1F *st_stack_171 = new TH1F("st_stack_171","",40,0,200);
   st_stack_171->SetMinimum(0.01);
   st_stack_171->SetMaximum(1186.747);
   st_stack_171->SetDirectory(0);
   st_stack_171->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_171->SetLineColor(ci);
   st_stack_171->GetXaxis()->SetRange(1,40);
   st_stack_171->GetXaxis()->SetLabelFont(42);
   st_stack_171->GetXaxis()->SetLabelSize(0.035);
   st_stack_171->GetXaxis()->SetTitleSize(0.035);
   st_stack_171->GetXaxis()->SetTitleFont(42);
   st_stack_171->GetYaxis()->SetTitle("Events/5.0");
   st_stack_171->GetYaxis()->SetLabelFont(42);
   st_stack_171->GetYaxis()->SetLabelSize(0.05);
   st_stack_171->GetYaxis()->SetTitleSize(0.057);
   st_stack_171->GetYaxis()->SetTitleOffset(1.2);
   st_stack_171->GetYaxis()->SetTitleFont(42);
   st_stack_171->GetZaxis()->SetLabelFont(42);
   st_stack_171->GetZaxis()->SetLabelSize(0.035);
   st_stack_171->GetZaxis()->SetTitleSize(0.035);
   st_stack_171->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_171);
   
   
   TH1D *Zee_2bjet_pt_lep0_stack_1 = new TH1D("Zee_2bjet_pt_lep0_stack_1","",40,0,200);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(8,0.7862904);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(9,2.047785);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(10,6.348752);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(11,4.849303);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(12,5.059109);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(13,5.303679);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(14,3.890733);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(15,3.234642);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(16,2.309307);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(17,2.941127);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(18,2.155353);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(19,1.427878);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(20,1.57529);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(21,1.619089);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(22,1.211031);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(23,0.7175846);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(24,0.9572953);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(25,0.3862205);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(29,0.2180109);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(30,0.6012853);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(32,0.2177014);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(33,0.1803414);
   Zee_2bjet_pt_lep0_stack_1->SetBinContent(34,0.1108617);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(8,0.4203071);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(9,0.6813736);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(10,1.382697);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(11,1.146249);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(12,1.121596);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(13,1.198095);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(14,1.042552);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(15,0.8937987);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(16,0.7911707);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(17,0.8819719);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(18,0.7095719);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(19,0.6160214);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(20,0.7058384);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(21,0.6652123);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(22,0.5712398);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(23,0.4174232);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(24,0.5028753);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(25,0.3862205);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(29,0.2180109);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(30,0.4423869);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(32,0.2177014);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(33,0.1803414);
   Zee_2bjet_pt_lep0_stack_1->SetBinError(34,0.1108617);
   Zee_2bjet_pt_lep0_stack_1->SetEntries(215);

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
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(8,3.36028);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(9,6.99054);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(10,10.99823);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(11,8.271852);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(12,11.36183);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(13,3.066183);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(14,5.392352);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(15,7.104202);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(16,8.742263);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(17,4.603542);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(18,3.610916);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(19,3.038102);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(20,3.287529);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(21,0.9966333);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(22,1.960128);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(23,1.687967);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(24,1.683381);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(25,0.6739066);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(26,0.6154476);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(28,0.4602465);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(29,1.25602);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(30,1.074122);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(31,0.5606411);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(32,0.4509368);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(33,0.3019908);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(36,1.338172);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(39,1.020988);
   Zee_2bjet_pt_lep0_stack_2->SetBinContent(41,3.923238);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(8,1.29447);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(9,1.878151);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(10,2.338107);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(11,1.960696);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(12,2.439305);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(13,1.266178);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(14,1.679368);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(15,1.913933);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(16,2.064784);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(17,1.497376);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(18,1.341437);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(19,1.209983);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(20,1.317506);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(21,0.7072784);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(22,0.9987143);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(23,0.8874577);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(24,0.9720414);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(25,0.4975197);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(26,0.4455579);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(28,0.4602465);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(29,0.7469512);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(30,0.6294497);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(31,0.5606411);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(32,0.4509368);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(33,0.3019908);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(36,0.7879216);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(39,1.020988);
   Zee_2bjet_pt_lep0_stack_2->SetBinError(41,1.371717);
   Zee_2bjet_pt_lep0_stack_2->SetEntries(218);

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
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(8,75.00975);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(9,136.0553);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(10,181.3478);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(11,207.4562);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(12,220.4219);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(13,193.0772);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(14,168.8058);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(15,138.562);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(16,116.9018);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(17,91.46707);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(18,69.84894);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(19,49.71058);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(20,41.29428);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(21,33.50212);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(22,23.16234);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(23,18.76384);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(24,13.18606);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(25,8.517625);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(26,7.885445);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(27,6.255882);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(28,4.57786);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(29,3.319779);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(30,2.292337);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(31,2.510246);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(32,2.170398);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(33,2.133652);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(34,0.739313);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(35,0.548718);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(36,0.3571537);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(37,0.4230153);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(38,0.569915);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(39,0.5048259);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(40,0.2641497);
   Zee_2bjet_pt_lep0_stack_3->SetBinContent(41,1.1953);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(8,2.496218);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(9,3.344609);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(10,3.839021);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(11,4.175239);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(12,4.297047);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(13,3.990921);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(14,3.7201);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(15,3.409189);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(16,3.132823);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(17,2.788121);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(18,2.43739);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(19,2.038162);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(20,1.850086);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(21,1.687085);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(22,1.390027);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(23,1.271892);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(24,1.058209);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(25,0.8177034);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(26,0.8242423);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(27,0.7109022);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(28,0.6174921);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(29,0.5220525);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(30,0.4295376);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(31,0.4656903);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(32,0.4333357);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(33,0.4228715);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(34,0.2338153);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(35,0.2237096);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(36,0.1601168);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(37,0.1911366);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(38,0.2055939);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(39,0.2101739);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(40,0.154718);
   Zee_2bjet_pt_lep0_stack_3->SetBinError(41,0.3056725);
   Zee_2bjet_pt_lep0_stack_3->SetEntries(24408);

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
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(8,1.109005);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(9,9.956481);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(10,12.28004);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(11,1.348496);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(12,3.996052);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(13,1.808446);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(14,3.001764);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(15,1.349068);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(16,2.140201);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(17,1.115153);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(18,1.327954);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(21,1.076355);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(23,0.8067674);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(25,0.5946078);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinContent(35,0.9485595);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(8,1.109005);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(9,6.865802);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(10,10.39624);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(11,1.348496);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(12,5.096891);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(13,2.322588);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(14,3.493888);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(15,1.034817);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(16,1.514881);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(17,1.115153);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(18,1.15218);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(21,1.076355);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(23,0.8067674);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(25,0.5946078);
   Zee_2bjet_XX_pt_lep0_stack_4->SetBinError(35,0.9485595);
   Zee_2bjet_XX_pt_lep0_stack_4->SetEntries(40);

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
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(8,-0.2456836);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(9,-0.08024412);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(10,13.05338);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(11,-0.6969194);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(12,8.787084);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(13,5.220685);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(14,8.15547);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(15,1.561899);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(16,6.387043);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(17,0.2722969);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(18,3.970551);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(19,-1.059937);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(20,3.128256);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(21,2.99617);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(22,1.951432);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(23,0.5241447);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(24,2.770557);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(25,1.037064);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(26,0.1775789);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(27,0.596922);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(28,0.6320202);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(29,1.698602);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(30,-2.801643);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(31,1.080796);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(33,3.268657);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(34,1.889707);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(35,-0.4617412);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(36,1.438355);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(40,2.253723);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinContent(41,0.5283777);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(8,2.035586);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(9,3.738441);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(10,5.169501);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(11,4.781006);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(12,4.429187);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(13,5.677414);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(14,4.534204);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(15,4.897458);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(16,3.723405);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(17,2.653328);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(18,2.850037);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(19,5.365806);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(20,3.723973);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(21,2.690652);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(22,2.65069);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(23,2.621966);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(24,1.83241);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(25,1.037064);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(26,1.584435);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(27,0.596922);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(28,0.6320202);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(29,1.698602);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(30,2.044899);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(31,1.080796);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(33,2.330778);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(34,1.772868);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(35,0.4617412);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(36,1.438355);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(40,2.253723);
   Zee_2bjet_bX_pt_lep0_stack_5->SetBinError(41,3.258702);
   Zee_2bjet_bX_pt_lep0_stack_5->SetEntries(197);

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
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(8,104.3878);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(9,228.5307);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(10,397.6013);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(11,379.2995);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(12,362.6583);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(13,387.7554);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(14,317.4434);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(15,282.6256);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(16,273.9654);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(17,215.0098);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(18,118.1538);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(19,108.4071);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(20,102.2526);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(21,99.22337);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(22,92.57835);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(23,60.51132);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(24,54.79877);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(25,65.31494);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(26,45.27379);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(27,29.74519);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(28,25.65407);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(29,16.55176);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(30,6.867345);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(31,21.28512);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(32,10.17475);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(33,18.10843);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(34,19.8242);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(35,8.42704);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(36,11.28038);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(37,10.57432);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(38,3.974901);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(39,8.458023);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(40,4.318822);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinContent(41,37.67977);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(8,17.72557);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(9,25.7212);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(10,33.62914);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(11,38.57604);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(12,35.41955);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(13,34.69122);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(14,32.01356);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(15,28.75868);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(16,27.62823);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(17,24.51815);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(18,21.43676);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(19,19.7134);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(20,18.26095);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(21,16.46);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(22,15.58476);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(23,13.54542);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(24,12.66076);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(25,17.43925);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(26,11.90076);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(27,10.48122);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(28,9.35692);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(29,9.074893);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(30,8.388227);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(31,7.764461);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(32,6.808416);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(33,6.442801);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(34,6.293072);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(35,5.672239);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(36,5.390249);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(37,4.528287);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(38,4.740601);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(39,3.502621);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(40,3.967585);
   Zee_2bjet_bb_pt_lep0_stack_6->SetBinError(41,12.69106);
   Zee_2bjet_bb_pt_lep0_stack_6->SetEntries(11144);

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
   
   TH1D *Zee_2bjet_pt_lep0__341 = new TH1D("Zee_2bjet_pt_lep0__341","",40,0,200);
   Zee_2bjet_pt_lep0__341->SetBinContent(8,147);
   Zee_2bjet_pt_lep0__341->SetBinContent(9,332);
   Zee_2bjet_pt_lep0__341->SetBinContent(10,470);
   Zee_2bjet_pt_lep0__341->SetBinContent(11,509);
   Zee_2bjet_pt_lep0__341->SetBinContent(12,607);
   Zee_2bjet_pt_lep0__341->SetBinContent(13,477);
   Zee_2bjet_pt_lep0__341->SetBinContent(14,426);
   Zee_2bjet_pt_lep0__341->SetBinContent(15,341);
   Zee_2bjet_pt_lep0__341->SetBinContent(16,270);
   Zee_2bjet_pt_lep0__341->SetBinContent(17,251);
   Zee_2bjet_pt_lep0__341->SetBinContent(18,188);
   Zee_2bjet_pt_lep0__341->SetBinContent(19,132);
   Zee_2bjet_pt_lep0__341->SetBinContent(20,129);
   Zee_2bjet_pt_lep0__341->SetBinContent(21,117);
   Zee_2bjet_pt_lep0__341->SetBinContent(22,82);
   Zee_2bjet_pt_lep0__341->SetBinContent(23,88);
   Zee_2bjet_pt_lep0__341->SetBinContent(24,63);
   Zee_2bjet_pt_lep0__341->SetBinContent(25,50);
   Zee_2bjet_pt_lep0__341->SetBinContent(26,48);
   Zee_2bjet_pt_lep0__341->SetBinContent(27,41);
   Zee_2bjet_pt_lep0__341->SetBinContent(28,46);
   Zee_2bjet_pt_lep0__341->SetBinContent(29,31);
   Zee_2bjet_pt_lep0__341->SetBinContent(30,24);
   Zee_2bjet_pt_lep0__341->SetBinContent(31,26);
   Zee_2bjet_pt_lep0__341->SetBinContent(32,20);
   Zee_2bjet_pt_lep0__341->SetBinContent(33,16);
   Zee_2bjet_pt_lep0__341->SetBinContent(34,17);
   Zee_2bjet_pt_lep0__341->SetBinContent(35,7);
   Zee_2bjet_pt_lep0__341->SetBinContent(36,14);
   Zee_2bjet_pt_lep0__341->SetBinContent(37,7);
   Zee_2bjet_pt_lep0__341->SetBinContent(38,7);
   Zee_2bjet_pt_lep0__341->SetBinContent(39,9);
   Zee_2bjet_pt_lep0__341->SetBinContent(40,4);
   Zee_2bjet_pt_lep0__341->SetBinContent(41,74);
   Zee_2bjet_pt_lep0__341->SetBinError(8,12.12436);
   Zee_2bjet_pt_lep0__341->SetBinError(9,18.22087);
   Zee_2bjet_pt_lep0__341->SetBinError(10,21.67948);
   Zee_2bjet_pt_lep0__341->SetBinError(11,22.56103);
   Zee_2bjet_pt_lep0__341->SetBinError(12,24.63737);
   Zee_2bjet_pt_lep0__341->SetBinError(13,21.84033);
   Zee_2bjet_pt_lep0__341->SetBinError(14,20.63977);
   Zee_2bjet_pt_lep0__341->SetBinError(15,18.46619);
   Zee_2bjet_pt_lep0__341->SetBinError(16,16.43168);
   Zee_2bjet_pt_lep0__341->SetBinError(17,15.84298);
   Zee_2bjet_pt_lep0__341->SetBinError(18,13.71131);
   Zee_2bjet_pt_lep0__341->SetBinError(19,11.48913);
   Zee_2bjet_pt_lep0__341->SetBinError(20,11.35782);
   Zee_2bjet_pt_lep0__341->SetBinError(21,10.81665);
   Zee_2bjet_pt_lep0__341->SetBinError(22,9.055385);
   Zee_2bjet_pt_lep0__341->SetBinError(23,9.380832);
   Zee_2bjet_pt_lep0__341->SetBinError(24,7.937254);
   Zee_2bjet_pt_lep0__341->SetBinError(25,7.071068);
   Zee_2bjet_pt_lep0__341->SetBinError(26,6.928203);
   Zee_2bjet_pt_lep0__341->SetBinError(27,6.403124);
   Zee_2bjet_pt_lep0__341->SetBinError(28,6.78233);
   Zee_2bjet_pt_lep0__341->SetBinError(29,5.567764);
   Zee_2bjet_pt_lep0__341->SetBinError(30,4.898979);
   Zee_2bjet_pt_lep0__341->SetBinError(31,5.09902);
   Zee_2bjet_pt_lep0__341->SetBinError(32,4.472136);
   Zee_2bjet_pt_lep0__341->SetBinError(33,4);
   Zee_2bjet_pt_lep0__341->SetBinError(34,4.123106);
   Zee_2bjet_pt_lep0__341->SetBinError(35,2.645751);
   Zee_2bjet_pt_lep0__341->SetBinError(36,3.741657);
   Zee_2bjet_pt_lep0__341->SetBinError(37,2.645751);
   Zee_2bjet_pt_lep0__341->SetBinError(38,2.645751);
   Zee_2bjet_pt_lep0__341->SetBinError(39,3);
   Zee_2bjet_pt_lep0__341->SetBinError(40,2);
   Zee_2bjet_pt_lep0__341->SetBinError(41,8.602325);
   Zee_2bjet_pt_lep0__341->SetEntries(5070);

   ci = TColor::GetColor("#000099");
   Zee_2bjet_pt_lep0__341->SetLineColor(ci);
   Zee_2bjet_pt_lep0__341->SetLineWidth(2);
   Zee_2bjet_pt_lep0__341->SetMarkerStyle(20);
   Zee_2bjet_pt_lep0__341->SetMarkerSize(1.2);
   Zee_2bjet_pt_lep0__341->GetXaxis()->SetRange(1,200);
   Zee_2bjet_pt_lep0__341->GetXaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0__341->GetXaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0__341->GetXaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0__341->GetXaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0__341->GetYaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0__341->GetYaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0__341->GetYaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0__341->GetYaxis()->SetTitleOffset(0);
   Zee_2bjet_pt_lep0__341->GetYaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0__341->GetZaxis()->SetLabelFont(42);
   Zee_2bjet_pt_lep0__341->GetZaxis()->SetLabelSize(0.035);
   Zee_2bjet_pt_lep0__341->GetZaxis()->SetTitleSize(0.035);
   Zee_2bjet_pt_lep0__341->GetZaxis()->SetTitleFont(42);
   Zee_2bjet_pt_lep0__341->Draw("same E");
   
   Double_t Graph_from_Zee_2bjet_bb_pt_lep0_fx1341[40] = {
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
   Double_t Graph_from_Zee_2bjet_bb_pt_lep0_fy1341[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   184.4074,
   383.5006,
   621.6294,
   600.5284,
   612.2843,
   596.2316,
   506.6895,
   434.4375,
   410.4461,
   315.409,
   199.0675,
   161.5238,
   151.538,
   139.4137,
   120.8633,
   83.01163,
   73.39606,
   76.52436,
   53.95227,
   36.598,
   31.3242,
   23.04417,
   8.033446,
   25.4368,
   13.01378,
   23.99307,
   22.56408,
   9.462576,
   14.41406,
   10.99733,
   4.544816,
   9.983837,
   6.836694};
   Double_t Graph_from_Zee_2bjet_bb_pt_lep0_fex1341[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t Graph_from_Zee_2bjet_bb_pt_lep0_fey1341[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   18.10118,
   27.16383,
   35.88651,
   39.1839,
   36.41172,
   35.49752,
   32.793,
   29.46527,
   28.18123,
   24.90416,
   21.84556,
   20.57687,
   18.78795,
   16.82613,
   15.91122,
   13.91343,
   12.88294,
   17.51062,
   12.04227,
   10.52225,
   9.40981,
   9.279921,
   8.678732,
   7.873129,
   6.840544,
   6.873482,
   6.543148,
   5.773847,
   5.636498,
   4.532319,
   4.745057,
   3.654442,
   4.565626};
   TGraphErrors *gre = new TGraphErrors(40,Graph_from_Zee_2bjet_bb_pt_lep0_fx1341,Graph_from_Zee_2bjet_bb_pt_lep0_fy1341,Graph_from_Zee_2bjet_bb_pt_lep0_fex1341,Graph_from_Zee_2bjet_bb_pt_lep0_fey1341);
   gre->SetName("Graph_from_Zee_2bjet_bb_pt_lep0");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_Zee_2bjet_bb_pt_lep01341 = new TH1F("Graph_Graph_from_Zee_2bjet_bb_pt_lep01341","",100,0,220);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01341->SetMinimum(-66.46141);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01341->SetMaximum(723.3321);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01341->SetDirectory(0);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01341->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01341->SetLineColor(ci);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01341->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01341->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01341->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01341->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01341->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01341->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01341->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01341->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01341->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01341->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01341->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01341->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_Zee_2bjet_bb_pt_lep01341->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_Zee_2bjet_bb_pt_lep01341);
   
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
   TLatex *   tex = new TLatex(0.5,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   topPad->Modified();
   pt_lep0_Z_2bjet_Zee_18_amcnlo->cd();
  
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
   
   TH1D *data_mc_ratio__342 = new TH1D("data_mc_ratio__342","",40,0,200);
   data_mc_ratio__342->SetBinContent(8,0.7971481);
   data_mc_ratio__342->SetBinContent(9,0.8657093);
   data_mc_ratio__342->SetBinContent(10,0.7560775);
   data_mc_ratio__342->SetBinContent(11,0.8475869);
   data_mc_ratio__342->SetBinContent(12,0.9913696);
   data_mc_ratio__342->SetBinContent(13,0.8000247);
   data_mc_ratio__342->SetBinContent(14,0.8407516);
   data_mc_ratio__342->SetBinContent(15,0.7849231);
   data_mc_ratio__342->SetBinContent(16,0.6578209);
   data_mc_ratio__342->SetBinContent(17,0.7957922);
   data_mc_ratio__342->SetBinContent(18,0.9444032);
   data_mc_ratio__342->SetBinContent(19,0.8172172);
   data_mc_ratio__342->SetBinContent(20,0.8512719);
   data_mc_ratio__342->SetBinContent(21,0.8392286);
   data_mc_ratio__342->SetBinContent(22,0.6784525);
   data_mc_ratio__342->SetBinContent(23,1.060092);
   data_mc_ratio__342->SetBinContent(24,0.8583567);
   data_mc_ratio__342->SetBinContent(25,0.6533867);
   data_mc_ratio__342->SetBinContent(26,0.8896753);
   data_mc_ratio__342->SetBinContent(27,1.12028);
   data_mc_ratio__342->SetBinContent(28,1.468513);
   data_mc_ratio__342->SetBinContent(29,1.345243);
   data_mc_ratio__342->SetBinContent(30,2.98751);
   data_mc_ratio__342->SetBinContent(31,1.022141);
   data_mc_ratio__342->SetBinContent(32,1.536832);
   data_mc_ratio__342->SetBinContent(33,0.6668593);
   data_mc_ratio__342->SetBinContent(34,0.7534097);
   data_mc_ratio__342->SetBinContent(35,0.7397563);
   data_mc_ratio__342->SetBinContent(36,0.9712739);
   data_mc_ratio__342->SetBinContent(37,0.6365179);
   data_mc_ratio__342->SetBinContent(38,1.540216);
   data_mc_ratio__342->SetBinContent(39,0.901457);
   data_mc_ratio__342->SetBinContent(40,0.5850781);
   data_mc_ratio__342->SetBinContent(41,1.707954);
   data_mc_ratio__342->SetBinError(8,0.06574766);
   data_mc_ratio__342->SetBinError(9,0.04751197);
   data_mc_ratio__342->SetBinError(10,0.03487525);
   data_mc_ratio__342->SetBinError(11,0.03756863);
   data_mc_ratio__342->SetBinError(12,0.04023845);
   data_mc_ratio__342->SetBinError(13,0.03663061);
   data_mc_ratio__342->SetBinError(14,0.04073455);
   data_mc_ratio__342->SetBinError(15,0.04250597);
   data_mc_ratio__342->SetBinError(16,0.0400337);
   data_mc_ratio__342->SetBinError(17,0.05022996);
   data_mc_ratio__342->SetBinError(18,0.06887769);
   data_mc_ratio__342->SetBinError(19,0.07112963);
   data_mc_ratio__342->SetBinError(20,0.07495031);
   data_mc_ratio__342->SetBinError(21,0.07758671);
   data_mc_ratio__342->SetBinError(22,0.07492255);
   data_mc_ratio__342->SetBinError(23,0.1130062);
   data_mc_ratio__342->SetBinError(24,0.1081428);
   data_mc_ratio__342->SetBinError(25,0.09240283);
   data_mc_ratio__342->SetBinError(26,0.1284136);
   data_mc_ratio__342->SetBinError(27,0.1749583);
   data_mc_ratio__342->SetBinError(28,0.2165204);
   data_mc_ratio__342->SetBinError(29,0.2416127);
   data_mc_ratio__342->SetBinError(30,0.6098229);
   data_mc_ratio__342->SetBinError(31,0.2004583);
   data_mc_ratio__342->SetBinError(32,0.3436461);
   data_mc_ratio__342->SetBinError(33,0.1667148);
   data_mc_ratio__342->SetBinError(34,0.1827287);
   data_mc_ratio__342->SetBinError(35,0.2796016);
   data_mc_ratio__342->SetBinError(36,0.2595839);
   data_mc_ratio__342->SetBinError(37,0.2405811);
   data_mc_ratio__342->SetBinError(38,0.5821471);
   data_mc_ratio__342->SetBinError(39,0.3004857);
   data_mc_ratio__342->SetBinError(40,0.292539);
   data_mc_ratio__342->SetBinError(41,0.5561275);
   data_mc_ratio__342->SetMinimum(0.4);
   data_mc_ratio__342->SetMaximum(1.6);
   data_mc_ratio__342->SetEntries(60.78552);
   data_mc_ratio__342->SetStats(0);

   ci = TColor::GetColor("#000099");
   data_mc_ratio__342->SetLineColor(ci);
   data_mc_ratio__342->SetLineWidth(2);
   data_mc_ratio__342->SetMarkerStyle(20);
   data_mc_ratio__342->SetMarkerSize(1.2);
   data_mc_ratio__342->GetXaxis()->SetTitle("Leading lepton p^{l}_{T} [GeV]");
   data_mc_ratio__342->GetXaxis()->SetRange(1,40);
   data_mc_ratio__342->GetXaxis()->SetLabelFont(42);
   data_mc_ratio__342->GetXaxis()->SetLabelSize(0.12);
   data_mc_ratio__342->GetXaxis()->SetTitleSize(0.12);
   data_mc_ratio__342->GetXaxis()->SetTitleOffset(1.1);
   data_mc_ratio__342->GetXaxis()->SetTitleFont(42);
   data_mc_ratio__342->GetYaxis()->SetTitle("Data/MC");
   data_mc_ratio__342->GetYaxis()->SetNdivisions(505);
   data_mc_ratio__342->GetYaxis()->SetLabelFont(42);
   data_mc_ratio__342->GetYaxis()->SetLabelSize(0.12);
   data_mc_ratio__342->GetYaxis()->SetTitleSize(0.12);
   data_mc_ratio__342->GetYaxis()->SetTitleOffset(0.5);
   data_mc_ratio__342->GetYaxis()->SetTitleFont(42);
   data_mc_ratio__342->GetZaxis()->SetLabelFont(42);
   data_mc_ratio__342->GetZaxis()->SetLabelSize(0.035);
   data_mc_ratio__342->GetZaxis()->SetTitleSize(0.035);
   data_mc_ratio__342->GetZaxis()->SetTitleFont(42);
   data_mc_ratio__342->Draw("E1");
   
   Double_t Graph_from_mc_statistical_error_fx1342[40] = {
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
   Double_t Graph_from_mc_statistical_error_fy1342[40] = {
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
   Double_t Graph_from_mc_statistical_error_fex1342[40] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
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
   Double_t Graph_from_mc_statistical_error_fey1342[40] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.09815866,
   0.07083126,
   0.05772975,
   0.06524903,
   0.05946865,
   0.05953647,
   0.06472011,
   0.06782397,
   0.06866001,
   0.0789583,
   0.1097395,
   0.1273922,
   0.1239818,
   0.120692,
   0.1316464,
   0.1676082,
   0.1755263,
   0.2288241,
   0.2232024,
   0.2875088,
   0.3004006,
   0.4027015,
   1.080325,
   0.3095172,
   0.5256384,
   0.2864778,
   0.2899806,
   0.6101771,
   0.3910417,
   0.4121289,
   1.044059,
   0.3660358,
   0.6678118};
   gre = new TGraphErrors(40,Graph_from_mc_statistical_error_fx1342,Graph_from_mc_statistical_error_fy1342,Graph_from_mc_statistical_error_fex1342,Graph_from_mc_statistical_error_fey1342);
   gre->SetName("Graph_from_mc_statistical_error");
   gre->SetTitle("");

   ci = TColor::GetColor("#333333");
   gre->SetFillColor(ci);
   gre->SetFillStyle(3013);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   
   TH1F *Graph_Graph_from_mc_statistical_error1342 = new TH1F("Graph_Graph_from_mc_statistical_error1342","",100,0,220);
   Graph_Graph_from_mc_statistical_error1342->SetMinimum(-0.2963899);
   Graph_Graph_from_mc_statistical_error1342->SetMaximum(2.29639);
   Graph_Graph_from_mc_statistical_error1342->SetDirectory(0);
   Graph_Graph_from_mc_statistical_error1342->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_from_mc_statistical_error1342->SetLineColor(ci);
   Graph_Graph_from_mc_statistical_error1342->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1342->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1342->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1342->GetXaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1342->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1342->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1342->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1342->GetYaxis()->SetTitleOffset(0);
   Graph_Graph_from_mc_statistical_error1342->GetYaxis()->SetTitleFont(42);
   Graph_Graph_from_mc_statistical_error1342->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_mc_statistical_error1342->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_from_mc_statistical_error1342->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_from_mc_statistical_error1342->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_from_mc_statistical_error1342);
   
   gre->Draw("e2");
   TLine *line = new TLine(0,1,200,1);
   line->Draw();
   bottomPad->Modified();
   pt_lep0_Z_2bjet_Zee_18_amcnlo->cd();
   pt_lep0_Z_2bjet_Zee_18_amcnlo->Modified();
   pt_lep0_Z_2bjet_Zee_18_amcnlo->cd();
   pt_lep0_Z_2bjet_Zee_18_amcnlo->SetSelected(pt_lep0_Z_2bjet_Zee_18_amcnlo);
}

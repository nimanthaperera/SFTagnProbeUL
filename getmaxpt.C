#include <iostream>

void getmaxpt(){

TFile *f1 = TFile::Open("TnPTreeJPsi_UL2017_SingleMuon_Run2017_GoldenJSON_NPALL_BA_BA.root");
TDirectory* dir1 = (TDirectory*)f1->Get("tpTree");
TTree* tree1 = (TTree*)dir1->Get("fitter_tree");
float max_data_2017 = tree1->GetMaximum("pt");
std::cout << "max_data_2017 = " << max_data_2017 << std::endl;

f1->Close();

TFile *f2 = TFile::Open("weightedNP_UL2017_SingleMuon_BA_BA.root");
TDirectory* dir2 = (TDirectory*)f2->Get("tpTree");
TTree* tree2 = (TTree*)dir2->Get("fitter_tree");
float max_mc_2017 = tree2->GetMaximum("pt");
std::cout << "max_mc_2017 = " << max_mc_2017  << std::endl;

f2->Close();

TFile *f3 = TFile::Open("TnPTreeJPsi_UL2018_SingleMuon_Run2018_GoldenJSON_NPALL_BA_BA.root");
TDirectory* dir3 = (TDirectory*)f3->Get("tpTree");
TTree* tree3 = (TTree*)dir3->Get("fitter_tree");
float max_data_2018 = tree3->GetMaximum("pt");
std::cout << "max_data_2018 = " << max_data_2018 << std::endl;

f3->Close();

TFile *f4 = TFile::Open("weightedNP_UL2018_SingleMuon_BA_BA.root");
TDirectory* dir4 = (TDirectory*)f4->Get("tpTree");
TTree* tree4 = (TTree*)dir4->Get("fitter_tree");
float max_mc_2018 = tree4->GetMaximum("pt");
std::cout << "max_mc_2018 = " << max_mc_2018 << std::endl;

f4->Close();

return 0;
} 

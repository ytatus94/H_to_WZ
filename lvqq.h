//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Apr  3 22:34:43 2013 by ROOT version 5.34/05
// from TTree HWWTree_lvqq/HWW lvqq Ntuple
// found on file: output.root
//////////////////////////////////////////////////////////

#ifndef lvqq_h
#define lvqq_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>

// Header file for the classes stored in the TTree if any.
#include <vector>
#include <vector>

#include <iostream>
using namespace std;

// Fixed size dimensions of array or collections stored in the TTree if any.

class lvqq : public TSelector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

   // Declaration of leaf types
   Float_t         METRel;
   Float_t         METRel_x;
   Float_t         METRel_y;
   Double_t        mcEventWeight;
   Float_t         truth_l_pt;
   Float_t         truth_nu_pt;
   Float_t         truth_j0_pt;
   Float_t         truth_j1_pt;
   Float_t         truth_W0_pt;
   Float_t         truth_W1_pt;
   Float_t         truth_H_pt;
   Float_t         truth_l_eta;
   Float_t         truth_nu_eta;
   Float_t         truth_j0_eta;
   Float_t         truth_j1_eta;
   Float_t         truth_W0_eta;
   Float_t         truth_W1_eta;
   Float_t         truth_H_eta;
   Float_t         truth_l_phi;
   Float_t         truth_nu_phi;
   Float_t         truth_j0_phi;
   Float_t         truth_j1_phi;
   Float_t         truth_W0_phi;
   Float_t         truth_W1_phi;
   Float_t         truth_H_phi;
   Float_t         truth_W0_m;
   Float_t         truth_W1_m;
   Int_t           truth_l_pdgId;
   Int_t           truth_j0_pdgId;
   Int_t           truth_j1_pdgId;
   Int_t           truth_W0_pdgId;
   Int_t           truth_W1_pdgId;
   Bool_t          truth_W0_leptonic;
   UInt_t          mc_channel_number;
   Float_t         MET_RefFinal_phi;
   Float_t         MET_RefFinal_et;
   Float_t         MET_Truth_NonInt_etx;
   Float_t         MET_Truth_NonInt_ety;
   Float_t         MET_Truth_NonInt_phi;
   Float_t         MET_Truth_NonInt_et;
   Float_t         MET_Truth_NonInt_sumet;
   Int_t           m_el_n;
   vector<float>   *m_el_E;
   vector<float>   *m_el_pt;
   vector<float>   *m_el_eta;
   vector<float>   *m_el_phi;
   vector<float>   *m_el_charge;
   Int_t           m_mu_n;
   vector<float>   *m_mu_E;
   vector<float>   *m_mu_pt;
   vector<float>   *m_mu_eta;
   vector<float>   *m_mu_phi;
   vector<float>   *m_mu_charge;
   vector<float>   *m_mu_matchchi2;
   Int_t           m_jetTruth_n;
   vector<float>   *m_jetTruth_pt;
   vector<float>   *m_jetTruth_eta;
   Int_t           m_jet_n;
   vector<float>   *m_jet_E;
   vector<float>   *m_jet_pt;
   vector<float>   *m_jet_eta;
   vector<float>   *m_jet_phi;
   vector<float>   *m_jet_flavor_weight_MV1;
   vector<int>     *m_jet_flavor_truth_label;
   Int_t           index1;
   Int_t           index2;
   Double_t        chiSq;
   Double_t        refittedMass;
   Double_t        refittedPt1;
   Double_t        refittedPt2;
   Bool_t          badChiSq;
   Double_t        kjet_w_mass;
   Double_t        maxpt_w_mass;
   Double_t        aprox_w_mass;

   // List of branches
   TBranch        *b_METRel;   //!
   TBranch        *b_METRel_x;   //!
   TBranch        *b_METRel_y;   //!
   TBranch        *b_mcEventWeight;   //!
   TBranch        *b_truth_l_pt;   //!
   TBranch        *b_truth_nu_pt;   //!
   TBranch        *b_truth_j0_pt;   //!
   TBranch        *b_truth_j1_pt;   //!
   TBranch        *b_truth_W0_pt;   //!
   TBranch        *b_truth_W1_pt;   //!
   TBranch        *b_truth_H_pt;   //!
   TBranch        *b_truth_l_eta;   //!
   TBranch        *b_truth_nu_eta;   //!
   TBranch        *b_truth_j0_eta;   //!
   TBranch        *b_truth_j1_eta;   //!
   TBranch        *b_truth_W0_eta;   //!
   TBranch        *b_truth_W1_eta;   //!
   TBranch        *b_truth_H_eta;   //!
   TBranch        *b_truth_l_phi;   //!
   TBranch        *b_truth_nu_phi;   //!
   TBranch        *b_truth_j0_phi;   //!
   TBranch        *b_truth_j1_phi;   //!
   TBranch        *b_truth_W0_phi;   //!
   TBranch        *b_truth_W1_phi;   //!
   TBranch        *b_truth_H_phi;   //!
   TBranch        *b_truth_W0_m;   //!
   TBranch        *b_truth_W1_m;   //!
   TBranch        *b_truth_l_pdgId;   //!
   TBranch        *b_truth_j0_pdgId;   //!
   TBranch        *b_truth_j1_pdgId;   //!
   TBranch        *b_truth_W0_pdgId;   //!
   TBranch        *b_truth_W1_pdgId;   //!
   TBranch        *b_truth_W0_leptonic;   //!
   TBranch        *b_mc_channel_number;   //!
   TBranch        *b_MET_RefFinal_phi;   //!
   TBranch        *b_MET_RefFinal_et;   //!
   TBranch        *b_MET_Truth_NonInt_etx;   //!
   TBranch        *b_MET_Truth_NonInt_ety;   //!
   TBranch        *b_MET_Truth_NonInt_phi;   //!
   TBranch        *b_MET_Truth_NonInt_et;   //!
   TBranch        *b_MET_Truth_NonInt_sumet;   //!
   TBranch        *b_m_el_n;   //!
   TBranch        *b_m_el_E;   //!
   TBranch        *b_m_el_pt;   //!
   TBranch        *b_m_el_eta;   //!
   TBranch        *b_m_el_phi;   //!
   TBranch        *b_m_el_charge;   //!
   TBranch        *b_m_mu_n;   //!
   TBranch        *b_m_mu_E;   //!
   TBranch        *b_m_mu_pt;   //!
   TBranch        *b_m_mu_eta;   //!
   TBranch        *b_m_mu_phi;   //!
   TBranch        *b_m_mu_charge;   //!
   TBranch        *b_m_mu_matchchi2;   //!
   TBranch        *b_m_jetTruth_n;   //!
   TBranch        *b_m_jetTruth_pt;   //!
   TBranch        *b_m_jetTruth_eta;   //!
   TBranch        *b_m_jet_n;   //!
   TBranch        *b_m_jet_E;   //!
   TBranch        *b_m_jet_pt;   //!
   TBranch        *b_m_jet_eta;   //!
   TBranch        *b_m_jet_phi;   //!
   TBranch        *b_m_jet_flavor_weight_MV1;   //!
   TBranch        *b_m_jet_flavor_truth_label;   //!
   TBranch        *b_index1;   //!
   TBranch        *b_index2;   //!
   TBranch        *b_chiSq;   //!
   TBranch        *b_refittedMass;   //!
   TBranch        *b_refittedPt1;   //!
   TBranch        *b_refittedPt2;   //!
   TBranch        *b_badChiSq;   //!
   TBranch        *b_kjet_w_mass;   //!
   TBranch        *b_maxpt_w_mass;   //!
   TBranch        *b_aprox_w_mass;   //!

   lvqq(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~lvqq() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(lvqq,0);
};

#endif

#ifdef lvqq_cxx
void lvqq::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   m_el_E = 0;
   m_el_pt = 0;
   m_el_eta = 0;
   m_el_phi = 0;
   m_el_charge = 0;
   m_mu_E = 0;
   m_mu_pt = 0;
   m_mu_eta = 0;
   m_mu_phi = 0;
   m_mu_charge = 0;
   m_mu_matchchi2 = 0;
   m_jetTruth_pt = 0;
   m_jetTruth_eta = 0;
   m_jet_E = 0;
   m_jet_pt = 0;
   m_jet_eta = 0;
   m_jet_phi = 0;
   m_jet_flavor_weight_MV1 = 0;
   m_jet_flavor_truth_label = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("METRel", &METRel, &b_METRel);
   fChain->SetBranchAddress("METRel_x", &METRel_x, &b_METRel_x);
   fChain->SetBranchAddress("METRel_y", &METRel_y, &b_METRel_y);
   fChain->SetBranchAddress("mcEventWeight", &mcEventWeight, &b_mcEventWeight);
   fChain->SetBranchAddress("truth_l_pt", &truth_l_pt, &b_truth_l_pt);
   fChain->SetBranchAddress("truth_nu_pt", &truth_nu_pt, &b_truth_nu_pt);
   fChain->SetBranchAddress("truth_j0_pt", &truth_j0_pt, &b_truth_j0_pt);
   fChain->SetBranchAddress("truth_j1_pt", &truth_j1_pt, &b_truth_j1_pt);
   fChain->SetBranchAddress("truth_W0_pt", &truth_W0_pt, &b_truth_W0_pt);
   fChain->SetBranchAddress("truth_W1_pt", &truth_W1_pt, &b_truth_W1_pt);
   fChain->SetBranchAddress("truth_H_pt", &truth_H_pt, &b_truth_H_pt);
   fChain->SetBranchAddress("truth_l_eta", &truth_l_eta, &b_truth_l_eta);
   fChain->SetBranchAddress("truth_nu_eta", &truth_nu_eta, &b_truth_nu_eta);
   fChain->SetBranchAddress("truth_j0_eta", &truth_j0_eta, &b_truth_j0_eta);
   fChain->SetBranchAddress("truth_j1_eta", &truth_j1_eta, &b_truth_j1_eta);
   fChain->SetBranchAddress("truth_W0_eta", &truth_W0_eta, &b_truth_W0_eta);
   fChain->SetBranchAddress("truth_W1_eta", &truth_W1_eta, &b_truth_W1_eta);
   fChain->SetBranchAddress("truth_H_eta", &truth_H_eta, &b_truth_H_eta);
   fChain->SetBranchAddress("truth_l_phi", &truth_l_phi, &b_truth_l_phi);
   fChain->SetBranchAddress("truth_nu_phi", &truth_nu_phi, &b_truth_nu_phi);
   fChain->SetBranchAddress("truth_j0_phi", &truth_j0_phi, &b_truth_j0_phi);
   fChain->SetBranchAddress("truth_j1_phi", &truth_j1_phi, &b_truth_j1_phi);
   fChain->SetBranchAddress("truth_W0_phi", &truth_W0_phi, &b_truth_W0_phi);
   fChain->SetBranchAddress("truth_W1_phi", &truth_W1_phi, &b_truth_W1_phi);
   fChain->SetBranchAddress("truth_H_phi", &truth_H_phi, &b_truth_H_phi);
   fChain->SetBranchAddress("truth_W0_m", &truth_W0_m, &b_truth_W0_m);
   fChain->SetBranchAddress("truth_W1_m", &truth_W1_m, &b_truth_W1_m);
   fChain->SetBranchAddress("truth_l_pdgId", &truth_l_pdgId, &b_truth_l_pdgId);
   fChain->SetBranchAddress("truth_j0_pdgId", &truth_j0_pdgId, &b_truth_j0_pdgId);
   fChain->SetBranchAddress("truth_j1_pdgId", &truth_j1_pdgId, &b_truth_j1_pdgId);
   fChain->SetBranchAddress("truth_W0_pdgId", &truth_W0_pdgId, &b_truth_W0_pdgId);
   fChain->SetBranchAddress("truth_W1_pdgId", &truth_W1_pdgId, &b_truth_W1_pdgId);
   fChain->SetBranchAddress("truth_W0_leptonic", &truth_W0_leptonic, &b_truth_W0_leptonic);
   fChain->SetBranchAddress("mc_channel_number", &mc_channel_number, &b_mc_channel_number);
   fChain->SetBranchAddress("MET_RefFinal_phi", &MET_RefFinal_phi, &b_MET_RefFinal_phi);
   fChain->SetBranchAddress("MET_RefFinal_et", &MET_RefFinal_et, &b_MET_RefFinal_et);
   fChain->SetBranchAddress("MET_Truth_NonInt_etx", &MET_Truth_NonInt_etx, &b_MET_Truth_NonInt_etx);
   fChain->SetBranchAddress("MET_Truth_NonInt_ety", &MET_Truth_NonInt_ety, &b_MET_Truth_NonInt_ety);
   fChain->SetBranchAddress("MET_Truth_NonInt_phi", &MET_Truth_NonInt_phi, &b_MET_Truth_NonInt_phi);
   fChain->SetBranchAddress("MET_Truth_NonInt_et", &MET_Truth_NonInt_et, &b_MET_Truth_NonInt_et);
   fChain->SetBranchAddress("MET_Truth_NonInt_sumet", &MET_Truth_NonInt_sumet, &b_MET_Truth_NonInt_sumet);
   fChain->SetBranchAddress("m_el_n", &m_el_n, &b_m_el_n);
   fChain->SetBranchAddress("m_el_E", &m_el_E, &b_m_el_E);
   fChain->SetBranchAddress("m_el_pt", &m_el_pt, &b_m_el_pt);
   fChain->SetBranchAddress("m_el_eta", &m_el_eta, &b_m_el_eta);
   fChain->SetBranchAddress("m_el_phi", &m_el_phi, &b_m_el_phi);
   fChain->SetBranchAddress("m_el_charge", &m_el_charge, &b_m_el_charge);
   fChain->SetBranchAddress("m_mu_n", &m_mu_n, &b_m_mu_n);
   fChain->SetBranchAddress("m_mu_E", &m_mu_E, &b_m_mu_E);
   fChain->SetBranchAddress("m_mu_pt", &m_mu_pt, &b_m_mu_pt);
   fChain->SetBranchAddress("m_mu_eta", &m_mu_eta, &b_m_mu_eta);
   fChain->SetBranchAddress("m_mu_phi", &m_mu_phi, &b_m_mu_phi);
   fChain->SetBranchAddress("m_mu_charge", &m_mu_charge, &b_m_mu_charge);
   fChain->SetBranchAddress("m_mu_matchchi2", &m_mu_matchchi2, &b_m_mu_matchchi2);
   fChain->SetBranchAddress("m_jetTruth_n", &m_jetTruth_n, &b_m_jetTruth_n);
   fChain->SetBranchAddress("m_jetTruth_pt", &m_jetTruth_pt, &b_m_jetTruth_pt);
   fChain->SetBranchAddress("m_jetTruth_eta", &m_jetTruth_eta, &b_m_jetTruth_eta);
   fChain->SetBranchAddress("m_jet_n", &m_jet_n, &b_m_jet_n);
   fChain->SetBranchAddress("m_jet_E", &m_jet_E, &b_m_jet_E);
   fChain->SetBranchAddress("m_jet_pt", &m_jet_pt, &b_m_jet_pt);
   fChain->SetBranchAddress("m_jet_eta", &m_jet_eta, &b_m_jet_eta);
   fChain->SetBranchAddress("m_jet_phi", &m_jet_phi, &b_m_jet_phi);
   fChain->SetBranchAddress("m_jet_flavor_weight_MV1", &m_jet_flavor_weight_MV1, &b_m_jet_flavor_weight_MV1);
   fChain->SetBranchAddress("m_jet_flavor_truth_label", &m_jet_flavor_truth_label, &b_m_jet_flavor_truth_label);
   fChain->SetBranchAddress("index1", &index1, &b_index1);
   fChain->SetBranchAddress("index2", &index2, &b_index2);
   fChain->SetBranchAddress("chiSq", &chiSq, &b_chiSq);
   fChain->SetBranchAddress("refittedMass", &refittedMass, &b_refittedMass);
   fChain->SetBranchAddress("refittedPt1", &refittedPt1, &b_refittedPt1);
   fChain->SetBranchAddress("refittedPt2", &refittedPt2, &b_refittedPt2);
   fChain->SetBranchAddress("badChiSq", &badChiSq, &b_badChiSq);
   fChain->SetBranchAddress("kjet_w_mass", &kjet_w_mass, &b_kjet_w_mass);
   fChain->SetBranchAddress("maxpt_w_mass", &maxpt_w_mass, &b_maxpt_w_mass);
   fChain->SetBranchAddress("aprox_w_mass", &aprox_w_mass, &b_aprox_w_mass);
}

Bool_t lvqq::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef lvqq_cxx

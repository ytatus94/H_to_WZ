//////////////////////////////////////////////////////////
// This class inherit from lvqq
// 
// 
// 
//////////////////////////////////////////////////////////

#ifndef mySelector_h
#define mySelector_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TLorentzVector.h>
#include <TH1F.h>

#include "lvqq.h"

// Header file for the classes stored in the TTree if any.
#include <vector>

#include <iostream>
using namespace std;

// Fixed size dimensions of array or collections stored in the TTree if any.

class mySelector : public lvqq {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain


    Int_t leptonic_count, leptonic_count_e, leptonic_count_mu;

    // Tree
    TTree *myTree;

    // Monte Carlo
    TLorentzVector truth_electron;
    TLorentzVector truth_electronNeutrino;
    TLorentzVector truth_muon;
    TLorentzVector truth_muonNeutrino;
    TLorentzVector truth_lepton;
    TLorentzVector truth_neutrino;
    TLorentzVector truth_jet0;
    TLorentzVector truth_jet1;
    TLorentzVector truth_W0;
    TLorentzVector truth_W1;
    TLorentzVector truth_Higgs;

    TLorentzVector truth_electron_and_electronNeutrino;
    TLorentzVector truth_muon_and_muonNeutrino;
    TLorentzVector truth_lepton_and_neutrino;

    TLorentzVector truth_electron_LepFlagOn;
    TLorentzVector truth_electronNeutrino_LepFlagOn;
    TLorentzVector truth_muon_LepFlagOn;
    TLorentzVector truth_muonNeutrino_LepFlagOn;
    TLorentzVector truth_lepton_LepFlagOn;
    TLorentzVector truth_neutrino_LepFlagOn;
    TLorentzVector truth_W0_LepFlagOn;
    TLorentzVector truth_electron_and_electronNeutrino_LepFlagOn;
    TLorentzVector truth_muon_and_muonNeutrino_LepFlagOn;
    TLorentzVector truth_lepton_and_neutrino_LepFlagOn;

    // Define of Histograms
    // electron
    TH1F *hTruthElectronPt;
    TH1F *hTruthElectronEta;
    TH1F *hTruthElectronPhi;
    TH1F *hTruthElectronE;
    TH1F *hTruthElectronM;

    // electron neutrino
    TH1F *hTruthElNuPt;
    TH1F *hTruthElNuEta;
    TH1F *hTruthElNuPhi;
    TH1F *hTruthElNuE;
    TH1F *hTruthElNuM;
    TH1F *hTruthElNuMET;

    // muon
    TH1F *hTruthMuonPt;
    TH1F *hTruthMuonEta;
    TH1F *hTruthMuonPhi;
    TH1F *hTruthMuonE;
    TH1F *hTruthMuonM;

    // muno neutrino
    TH1F *hTruthMuNuPt;
    TH1F *hTruthMuNuEta;
    TH1F *hTruthMuNuPhi;
    TH1F *hTruthMuNuE;
    TH1F *hTruthMuNuM;
    TH1F *hTruthMuNuMET;

    // lepton
    TH1F *hTruthLeptonPt;
    TH1F *hTruthLeptonEta;
    TH1F *hTruthLeptonPhi;
    TH1F *hTruthLeptonE;
    TH1F *hTruthLeptonM;

    // neutrino
    TH1F *hTruthNuPt;
    TH1F *hTruthNuEta;
    TH1F *hTruthNuPhi;
    TH1F *hTruthNuE;
    TH1F *hTruthNuM;
    TH1F *hTruthNuMET;

    // jet0
    TH1F *hTruthJet0Pt;
    TH1F *hTruthJet0Eta;
    TH1F *hTruthJet0Phi;
    TH1F *hTruthJet0E;
    TH1F *hTruthJet0M;

    // jet1
    TH1F *hTruthJet1Pt;
    TH1F *hTruthJet1Eta;
    TH1F *hTruthJet1Phi;
    TH1F *hTruthJet1E;
    TH1F *hTruthJet1M;

    // W0
    TH1F *hTruthW0Pt;
    TH1F *hTruthW0Eta;
    TH1F *hTruthW0Phi;
    TH1F *hTruthW0E;
    TH1F *hTruthW0M;

    // W1
    TH1F *hTruthW1Pt;
    TH1F *hTruthW1Eta;
    TH1F *hTruthW1Phi;
    TH1F *hTruthW1E;
    TH1F *hTruthW1M;

    // Higgs
    TH1F *hTruthHiggsPt;
    TH1F *hTruthHiggsEta;
    TH1F *hTruthHiggsPhi;
    TH1F *hTruthHiggsE;
    TH1F *hTruthHiggsM;

    // electron and electronNeutrino
    TH1F *hTruthElElNuPt;
    TH1F *hTruthElElNuEta;
    TH1F *hTruthElElNuPhi;
    TH1F *hTruthElElNuE;
    TH1F *hTruthElElNuM;

    // muon and muonNeutrino
    TH1F *hTruthMuMuNuPt;
    TH1F *hTruthMuMuNuEta;
    TH1F *hTruthMuMuNuPhi;
    TH1F *hTruthMuMuNuE;
    TH1F *hTruthMuMuNuM;

    // lepton and neutrino
    TH1F *hTruthLepNuPt;
    TH1F *hTruthLepNuEta;
    TH1F *hTruthLepNuPhi;
    TH1F *hTruthLepNuE;
    TH1F *hTruthLepNuM;

    // lepton flag on
    TH1F *hTruthElectronLepFlagOnPt;
    TH1F *hTruthElectronLepFlagOnEta;
    TH1F *hTruthElectronLepFlagOnPhi;
    TH1F *hTruthElectronLepFlagOnE;
    TH1F *hTruthElectronLepFlagOnM;

    TH1F *hTruthElNuLepFlagOnPt;
    TH1F *hTruthElNuLepFlagOnEta;
    TH1F *hTruthElNuLepFlagOnPhi;
    TH1F *hTruthElNuLepFlagOnE;
    TH1F *hTruthElNuLepFlagOnM;
    TH1F *hTruthElNuLepFlagOnMET;

    TH1F *hTruthMuonLepFlagOnPt;
    TH1F *hTruthMuonLepFlagOnEta;
    TH1F *hTruthMuonLepFlagOnPhi;
    TH1F *hTruthMuonLepFlagOnE;
    TH1F *hTruthMuonLepFlagOnM;

    TH1F *hTruthMuNuLepFlagOnPt;
    TH1F *hTruthMuNuLepFlagOnEta;
    TH1F *hTruthMuNuLepFlagOnPhi;
    TH1F *hTruthMuNuLepFlagOnE;
    TH1F *hTruthMuNuLepFlagOnM;
    TH1F *hTruthMuNuLepFlagOnMET;

    TH1F *hTruthLeptonLepFlagOnPt;
    TH1F *hTruthLeptonLepFlagOnEta;
    TH1F *hTruthLeptonLepFlagOnPhi;
    TH1F *hTruthLeptonLepFlagOnE;
    TH1F *hTruthLeptonLepFlagOnM;

    TH1F *hTruthNuLepFlagOnPt;
    TH1F *hTruthNuLepFlagOnEta;
    TH1F *hTruthNuLepFlagOnPhi;
    TH1F *hTruthNuLepFlagOnE;
    TH1F *hTruthNuLepFlagOnM;
    TH1F *hTruthNuLepFlagOnMET;

    TH1F *hTruthW0LepFlagOnPt;
    TH1F *hTruthW0LepFlagOnEta;
    TH1F *hTruthW0LepFlagOnPhi;
    TH1F *hTruthW0LepFlagOnE;
    TH1F *hTruthW0LepFlagOnM;

    TH1F *hTruthElElNuLepFlagOnPt;
    TH1F *hTruthElElNuLepFlagOnEta;
    TH1F *hTruthElElNuLepFlagOnPhi;
    TH1F *hTruthElElNuLepFlagOnE;
    TH1F *hTruthElElNuLepFlagOnM;

    TH1F *hTruthMuMuNuLepFlagOnPt;
    TH1F *hTruthMuMuNuLepFlagOnEta;
    TH1F *hTruthMuMuNuLepFlagOnPhi;
    TH1F *hTruthMuMuNuLepFlagOnE;
    TH1F *hTruthMuMuNuLepFlagOnM;

    TH1F *hTruthLepNuLepFlagOnPt;
    TH1F *hTruthLepNuLepFlagOnEta;
    TH1F *hTruthLepNuLepFlagOnPhi;
    TH1F *hTruthLepNuLepFlagOnE;
    TH1F *hTruthLepNuLepFlagOnM;

   mySelector(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~mySelector() { }
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

   ClassDef(mySelector,0);
};

#endif

#ifdef mySelector_cxx
void mySelector::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

    // Set branch addresses and branch pointers
    //if (!tree) return;
    //fChain = tree;
    //fChain->SetMakeClass(1);

    lvqq::Init(tree);
/*
    truth_electron = TLorentzVector();
    truth_electronNeutrino = TLorentzVector();
    truth_muon = TLorentzVector();
    truth_muonNeutrino = TLorentzVector();
    truth_lepton = TLorentzVector();
    truth_neutrino = TLorentzVector();
    truth_jet0 = TLorentzVector();
    truth_jet1 = TLorentzVector();
    truth_W0 = TLorentzVector();
    truth_W1 = TLorentzVector();
    truth_Higgs = TLorentzVector();

    truth_electron_and_electronNeutrino = TLorentzVector();
    truth_muon_and_muonNeutrino = TLorentzVector();
    truth_lepton_and_neutrino = TLorentzVector();

    truth_electron_LepFlagOn = TLorentzVector();
    truth_electronNeutrino_LepFlagOn = TLorentzVector();
    truth_muon_LepFlagOn = TLorentzVector();
    truth_muonNeutrino_LepFlagOn = TLorentzVector();
    truth_lepton_LepFlagOn = TLorentzVector();
    truth_neutrino_LepFlagOn = TLorentzVector();
    truth_W0_LepFlagOn = TLorentzVector();
    truth_electron_and_electronNeutrino_LepFlagOn = TLorentzVector();
    truth_muon_and_muonNeutrino_LepFlagOn = TLorentzVector();
*/
}

Bool_t mySelector::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef mySelector_cxx

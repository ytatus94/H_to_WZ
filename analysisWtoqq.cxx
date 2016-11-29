#define mySelector_cxx
// The class definition in mySelector.h has been generated automatically
// by the ROOT utility TTree::MakeSelector(). This class is derived
// from the ROOT class TSelector. For more information on the TSelector
// framework see $ROOTSYS/README/README.SELECTOR or the ROOT User Manual.

// The following methods are defined in this file:
//    Begin():        called every time a loop on the tree starts,
//                    a convenient place to create your histograms.
//    SlaveBegin():   called after Begin(), when on PROOF called only on the
//                    slave servers.
//    Process():      called for each event, in this function you decide what
//                    to read and fill your histograms.
//    SlaveTerminate: called at the end of the loop on the tree, when on PROOF
//                    called only on the slave servers.
//    Terminate():    called at the end of the loop on the tree,
//                    a convenient place to draw/fit your histograms.
//
// To use this file, try the following session on your Tree T:
//
// Root > T->Process("mySelector.C")
// Root > T->Process("mySelector.C","some options")
// Root > T->Process("mySelector.C+")
//

#include "mySelector.h"
#include <TH2.h>
#include <TStyle.h>


void mySelector::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

void mySelector::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

    myTree = new TTree("myTree", "This is my TTree.");

    leptonic_count = 0;
    leptonic_count_e = 0;
    leptonic_count_mu = 0;

    myTree->Branch("truth_electron", "TLorentzVector", &truth_electron);
    myTree->Branch("truth_electronNeutrino", "TLorentzVector", &truth_electronNeutrino);
    myTree->Branch("truth_muon", "TLorentzVector", &truth_muon);
    myTree->Branch("truth_muonNeutrino", "TLorentzVector", &truth_muonNeutrino);
    myTree->Branch("truth_lepton", "TLorentzVector", &truth_lepton);
    myTree->Branch("truth_neutrino", "TLorentzVector", &truth_neutrino);
    myTree->Branch("truth_jet0", "TLorentzVector", &truth_jet0);
    myTree->Branch("truth_jet1", "TLorentzVector", &truth_jet1);
    myTree->Branch("truth_W0", "TLorentzVector", &truth_W0);
    myTree->Branch("truth_W1", "TLorentzVector", &truth_W1);
    myTree->Branch("truth_Higgs", "TLorentzVector", &truth_Higgs); 
    myTree->Branch("truth_electron_and_electronNeutrino", "TLorentzVector", &truth_electron_and_electronNeutrino);
    myTree->Branch("truth_muon_and_muonNeutrino", "TLorentzVector", &truth_muon_and_muonNeutrino);
    myTree->Branch("truth_lepton_and_neutrino", "TLorentzVector", &truth_lepton_and_neutrino);
    myTree->Branch("truth_electron_LepFlagOn", "TLorentzVector", &truth_electron_LepFlagOn);
    myTree->Branch("truth_electronNeutrino_LepFlagOn", "TLorentzVector", &truth_electronNeutrino_LepFlagOn);
    myTree->Branch("truth_muon_LepFlagOn", "TLorentzVector", &truth_muon_LepFlagOn);
    myTree->Branch("truth_muonNeutrino_LepFlagOn", "TLorentzVector", &truth_muonNeutrino_LepFlagOn);
    myTree->Branch("truth_lepton_LepFlagOn", "TLorentzVector", &truth_lepton_LepFlagOn);
    myTree->Branch("truth_neutrino_LepFlagOn", "TLorentzVector", &truth_neutrino_LepFlagOn);
    myTree->Branch("truth_W0_LepFlagOn", "TLorentzVector", &truth_W0_LepFlagOn);
    myTree->Branch("truth_electron_and_electronNeutrino_LepFlagOn", "TLorentzVector", &truth_electron_and_electronNeutrino_LepFlagOn);
    myTree->Branch("truth_muon_and_muonNeutrino_LepFlagOn", "TLorentzVector", &truth_muon_and_muonNeutrino_LepFlagOn);

    fOutput->Add(myTree);

    hTruthElectronPt = new TH1F("hTruthElectronPt", "Truth Electron P_{t}", 1000, 0, 500);
    hTruthElectronEta = new TH1F("hTruthElectronEta", "Truth Electron #eta", 1000, -10, 10);
    hTruthElectronPhi = new TH1F("hTruthElectronPhi", "Truth Electron #phi", 1000, -5, 5);
    hTruthElectronE = new TH1F("hTruthElectronE", "Truth Electron Energy", 1000, 0, 1000);
    hTruthElectronM = new TH1F("hTruthElectronM", "Truth Electron Mass", 1000, 0, 1);

    hTruthElNuPt = new TH1F("hTruthElNuPt", "Truth #nu_{e} P_{t}", 1000, 0, 500);
    hTruthElNuEta = new TH1F("hTruthElNuEta", "Truth #nu_{e} #eta", 1000, -10, 10);
    hTruthElNuPhi = new TH1F("hTruthElNuPhi", "Truth #nu_{e} #phi", 1000, -5, 5);
    hTruthElNuE = new TH1F("hTruthElNuE", "Truth #nu_{e} Energy", 1000, 0, 1000);
    hTruthElNuM = new TH1F("hTruthElNuM", "Truth #nu_{e} Mass", 1000, -1, 1);
    hTruthElNuMET = new TH1F("hTruthElNuMET", "Truth #nu_{e} ME_{T}", 1000, 0, 1000);

    hTruthMuonPt = new TH1F("hTruthMuonPt", "Truth Muon P_{t}", 1000, 0, 500);
    hTruthMuonEta = new TH1F("hTruthMuonEta", "Truth Muon #eta", 1000, -10, 10);
    hTruthMuonPhi = new TH1F("hTruthMuonPhi", "Truth Muon #phi", 1000, -5, 5);
    hTruthMuonE = new TH1F("hTruthMuonE", "Truth Muon Energy", 1000, 0, 1000);
    hTruthMuonM = new TH1F("hTruthMuonM", "Truth Muon Mass", 1000, 0, 200);

    hTruthMuNuPt = new TH1F("hTruthMuNuPt", "Truth #nu_{#mu} P_{t}", 1000, 0, 500);
    hTruthMuNuEta = new TH1F("hTruthMuNuEta", "Truth #nu_{#mu} #eta", 1000, -10, 10);
    hTruthMuNuPhi = new TH1F("hTruthMuNuPhi", "Truth #nu_{#mu} #phi", 1000, -5, 5);
    hTruthMuNuE = new TH1F("hTruthMuNuE", "Truth #nu_{#mu} Energy", 1000, 0, 1000);
    hTruthMuNuM = new TH1F("hTruthMuNuM", "Truth #nu_{#mu} Mass", 1000, 1, -1);
    hTruthMuNuMET = new TH1F("hTruthMuNuMET", "Truth #nu_{#mu} ME_{T}", 1000, 0, 1000);

    hTruthLeptonPt = new TH1F("hTruthLepPt", "Truth #ell P_{t}", 1000, 0, 500);
    hTruthLeptonEta = new TH1F("hTruthLepEta", "Truth #ell #eta", 1000, -10, 10);
    hTruthLeptonPhi = new TH1F("hTruthLepPhi", "Truth #ell #phi", 1000, -5, 5);
    hTruthLeptonE = new TH1F("hTruthLepE", "Truth #ell Energy", 1000, 0, 1000);
    hTruthLeptonM = new TH1F("hTruthLepM", "Truth #ell Mass", 1000, 1, -1);

    hTruthNuPt = new TH1F("hTruthNuPt", "Truth #nu P_{t}", 1000, 0, 500);
    hTruthNuEta = new TH1F("hTruthNuEta", "Truth #nu #eta", 1000, -10, 10);
    hTruthNuPhi = new TH1F("hTruthNuPhi", "Truth #nu #phi", 1000, -5, 5);
    hTruthNuE = new TH1F("hTruthNuE", "Truth #nu Energy", 1000, 0, 1000);
    hTruthNuM = new TH1F("hTruthNuM", "Truth #nu Mass", 1000, 1, -1);
    hTruthNuMET = new TH1F("hTruthNuMET", "Truth #nu ME_{T}", 1000, 0, 1000);

    hTruthJet0Pt = new TH1F("hTruthJet0Pt", "Truth Jet0 P_{t}", 1000, 0, 500);
    hTruthJet0Eta = new TH1F("hTruthJet0Eta", "Truth Jet0 #eta", 1000, -10, 10);
    hTruthJet0Phi = new TH1F("hTruthJet0Phi", "Truth Jet0 #phi", 1000, -5, 5);
    hTruthJet0E = new TH1F("hTruthJet0E", "Truth Jet0 E", 1000, 0, 1000);
    hTruthJet0M = new TH1F("hTruthJet0M", "Truth Jet0 Mass", 1000, 0, 1000);

    hTruthJet1Pt = new TH1F("hTruthJet1Pt", "Truth Jet1 P_{t}", 1000, 0, 500);
    hTruthJet1Eta = new TH1F("hTruthJet1Eta", "Truth Jet1 #eta", 1000, -10, 10);
    hTruthJet1Phi = new TH1F("hTruthJet1Phi", "Truth Jet1 #phi", 1000, -5, 5);
    hTruthJet1E = new TH1F("hTruthJet1E", "Truth Jet1 E", 1000, 0, 1000);
    hTruthJet1M = new TH1F("hTruthJet1M", "Truth Jet1 Mass", 1000, 0, 1000);
    
    hTruthW0Pt = new TH1F("hTruthW0Pt", "Truth W0 P_{t}", 1000, 0, 500);
    hTruthW0Eta = new TH1F("hTruthW0Eta", "Truth W0 #eta", 1000, -10, 10);
    hTruthW0Phi = new TH1F("hTruthW0Phi", "Truth W0 #phi", 1000, -5, 5);
    hTruthW0E = new TH1F("hTruthW0E", "Truth W0 E", 1000, 0, 1000);
    hTruthW0M = new TH1F("hTruthW0M", "Truth W0 Mass", 1000, 0, 1000);

    hTruthW1Pt = new TH1F("hTruthW1Pt", "Truth W1 P_{t}", 1000, 0, 500);
    hTruthW1Eta = new TH1F("hTruthW1Eta", "Truth W1 #eta", 1000, -10, 10);
    hTruthW1Phi = new TH1F("hTruthW1Phi", "Truth W1 #phi", 1000, -5, 5);
    hTruthW1E = new TH1F("hTruthW1E", "Truth W1 E", 1000, 0, 1000);
    hTruthW1M = new TH1F("hTruthW1M", "Truth W1 Mass", 1000, 0, 1000);
 
    hTruthHiggsPt = new TH1F("hTruthHiggsPt", "Truth Higgs P_{t}", 1000, 0, 500);
    hTruthHiggsEta = new TH1F("hTruthHiggsEta", "Truth Higgs #eta", 1000, -10, 10);
    hTruthHiggsPhi = new TH1F("hTruthHiggsPhi", "Truth Higgs #phi", 1000, -5, 5);
    hTruthHiggsE = new TH1F("hTruthHiggsE", "Truth Higgs E", 1000, 0, 1000);
    hTruthHiggsM = new TH1F("hTruthHiggsM", "Truth Higgs Mass", 1000, 0, 1000);

    hTruthElElNuPt = new TH1F("hTruthElElNuPt", "Truth e + #nu_{e} P_{t}", 1000, 0, 500);
    hTruthElElNuEta = new TH1F("hTruthElElNuEta", "Truth e + #nu_{e} #eta", 1000, -10, 10);
    hTruthElElNuPhi = new TH1F("hTruthElElNuPhi", "Truth e + #nu_{e} #phi", 1000, -5, 5);
    hTruthElElNuE = new TH1F("hTruthElElNuE", "Truth e + #nu_{e} E", 1000, 0, 1000);
    hTruthElElNuM = new TH1F("hTruthElElNuM", "Truth e + #nu_{e} Mass", 1000, 0, 1000);

    hTruthMuMuNuPt = new TH1F("hTruthMuMuNuPt", "Truth #mu + #nu_{#mu} P_{t}", 1000, 0, 500);
    hTruthMuMuNuEta = new TH1F("hTruthMuMuNuEta", "Truth #mu + #nu_{#mu} #eta", 1000, -10, 10);
    hTruthMuMuNuPhi = new TH1F("hTruthMuMuNuPhi", "Truth #mu + #nu_{#mu} #phi", 1000, -5, 5);
    hTruthMuMuNuE = new TH1F("hTruthMuMuNuE", "Truth #mu + #nu_{#mu} E", 1000, 0, 1000);
    hTruthMuMuNuM = new TH1F("hTruthMuMuNuM", "Truth #mu + #nu_{#mu} Mass", 1000, 0, 1000);

    hTruthLepNuPt = new TH1F("hTruthLepNuPt", "Truth #ell + #nu P_{t}", 1000, 0, 1000);
    hTruthLepNuEta = new TH1F("hTruthLepNuEta", "Truth #ell + #nu #eta", 1000, -10, 10);
    hTruthLepNuPhi = new TH1F("hTruthLepNuPhi", "Truth #ell + #nu #phi", 1000, -5, 5);
    hTruthLepNuE = new TH1F("hTruthLepNuE", "Truth #ell + #nu E", 1000, 0, 1000);
    hTruthLepNuM = new TH1F("hTruthLepNuM", "Truth #ell + #nu Mass", 1000, 0, 1000);

    hTruthElectronLepFlagOnPt = new TH1F("hTruthElectronLepFlagOnPt", "Truth Electron P_{t}", 1000, 0, 500);
    hTruthElectronLepFlagOnEta = new TH1F("hTruthElectronLepFlagOnEta", "Truth Electron #eta", 1000, -10, 10);
    hTruthElectronLepFlagOnPhi = new TH1F("hTruthElectronLepFlagOnPhi", "Truth Electron #phi", 1000, -5, 5);
    hTruthElectronLepFlagOnE = new TH1F("hTruthElectronLepFlagOnE", "Truth Electron Energy", 1000, 0, 1000);
    hTruthElectronLepFlagOnM = new TH1F("hTruthElectronLepFlagOnM", "Truth Electron Mass", 1000, 0, 1);

    hTruthElNuLepFlagOnPt = new TH1F("hTruthElNuLepFlagOnPt", "Truth #nu_{e} P_{t}", 1000, 0, 500);
    hTruthElNuLepFlagOnEta = new TH1F("hTruthElNuLepFlagOnEta", "Truth #nu_{e} #eta", 1000, -10, 10);
    hTruthElNuLepFlagOnPhi = new TH1F("hTruthElNuLepFlagOnPhi", "Truth #nu_{e} #phi", 1000, -5, 5);
    hTruthElNuLepFlagOnE = new TH1F("hTruthElNuLepFlagOnE", "Truth #nu_{e} Energy", 1000, 0, 1000);
    hTruthElNuLepFlagOnM = new TH1F("hTruthElNuLepFlagOnM", "Truth #nu_{e} Mass", 1000, -1, 1);
    hTruthElNuLepFlagOnMET = new TH1F("hTruthElNuLepFlagOnMET", "Truth #nu_{e} ME_{T}", 1000, 0, 1000);

    hTruthMuonLepFlagOnPt = new TH1F("hTruthMuonLepFlagOnPt", "Truth Muon P_{t}", 1000, 0, 500);
    hTruthMuonLepFlagOnEta = new TH1F("hTruthMuonLepFlagOnEta", "Truth Muon #eta", 1000, -10, 10);
    hTruthMuonLepFlagOnPhi = new TH1F("hTruthMuonLepFlagOnPhi", "Truth Muon #phi", 1000, -5, 5);
    hTruthMuonLepFlagOnE = new TH1F("hTruthMuonLepFlagOnE", "Truth Muon Energy", 1000, 0, 1000);
    hTruthMuonLepFlagOnM = new TH1F("hTruthMuonLepFlagOnM", "Truth Muon Mass", 1000, 0, 200);

    hTruthMuNuLepFlagOnPt = new TH1F("hTruthMuNuLepFlagOnPt", "Truth #nu_{#mu} P_{t}", 1000, 0, 500);
    hTruthMuNuLepFlagOnEta = new TH1F("hTruthMuNuLepFlagOnEta", "Truth #nu_{#mu} #eta", 1000, -10, 10);
    hTruthMuNuLepFlagOnPhi = new TH1F("hTruthMuNuLepFlagOnPhi", "Truth #nu_{#mu} #phi", 1000, -5, 5);
    hTruthMuNuLepFlagOnE = new TH1F("hTruthMuNuLepFlagOnE", "Truth #nu_{#mu} Energy", 1000, 0, 1000);
    hTruthMuNuLepFlagOnM = new TH1F("hTruthMuNuLepFlagOnM", "Truth #nu_{#mu} Mass", 1000, 1, -1);
    hTruthMuNuLepFlagOnMET = new TH1F("hTruthMuNuLepFlagOnMET", "Truth #nu_{#mu} ME_{T}", 1000, 0, 1000);

    hTruthLeptonLepFlagOnPt = new TH1F("hTruthLeptonLepFlagOnPt", "Truth #ell P_{t}", 1000, 0, 500);
    hTruthLeptonLepFlagOnEta = new TH1F("hTruthLeptonLepFlagOnEta", "Truth #ell #eta", 1000, -10, 10);
    hTruthLeptonLepFlagOnPhi = new TH1F("hTruthLeptonLepFlagOnPhi", "Truth #ell #phi", 1000, -5, 5);
    hTruthLeptonLepFlagOnE = new TH1F("hTruthLeptonLepFlagOnE", "Truth #ell Energy", 1000, 0, 1000);
    hTruthLeptonLepFlagOnM = new TH1F("hTruthLeptonLepFlagOnM", "Truth #ell Mass", 1000, 1, -1);

    hTruthNuLepFlagOnPt = new TH1F("hTruthNuLepFlagOnPt", "Truth #nu P_{t}", 1000, 0, 500);
    hTruthNuLepFlagOnEta = new TH1F("hTruthNuLepFlagOnEta", "Truth #nu #eta", 1000, -10, 10);
    hTruthNuLepFlagOnPhi = new TH1F("hTruthNuLepFlagOnPhi", "Truth #nu #phi", 1000, -5, 5);
    hTruthNuLepFlagOnE = new TH1F("hTruthNuLepFlagOnE", "Truth #nu Energy", 1000, 0, 1000);
    hTruthNuLepFlagOnM = new TH1F("hTruthNuLepFlagOnM", "Truth #nu Mass", 1000, 1, -1);
    hTruthNuLepFlagOnMET = new TH1F("hTruthNuLepFlagOnMET", "Truth #nu ME_{T}", 1000, 0, 1000);

    hTruthW0LepFlagOnPt = new TH1F("hTruthW0LepFlagOnPt", "Truth W0_{leptonic} P_{t}", 1000, 0, 500);
    hTruthW0LepFlagOnEta = new TH1F("hTruthW0LepFlagOnEta", "Truth W0_{leptonic} #eta", 1000, -10, 10);
    hTruthW0LepFlagOnPhi = new TH1F("hTruthW0LepFlagOnPhi", "Truth W0_{leptonic} #phi", 1000, -5, 5);
    hTruthW0LepFlagOnE = new TH1F("hTruthW0LepFlagOnE", "Truth W0_{leptonic} E", 1000, 0, 1000);
    hTruthW0LepFlagOnM = new TH1F("hTruthW0LepFlagOnM", "Truth W0_{leptonic} Mass", 1000, 0, 1000);

    hTruthElElNuLepFlagOnPt = new TH1F("hTruthElElNuLepFlagOnPt", "Truth e + #nu_{e} P_{t}", 1000, 0, 500);
    hTruthElElNuLepFlagOnEta = new TH1F("hTruthElElNuLepFlagOnEta", "Truth e + #nu_{e} #eta", 1000, -10, 10);
    hTruthElElNuLepFlagOnPhi = new TH1F("hTruthElElNuLepFlagOnPhi", "Truth e + #nu_{e} #phi", 1000, -5, 5);
    hTruthElElNuLepFlagOnE = new TH1F("hTruthElElNuLepFlagOnE", "Truth e + #nu_{e} E", 1000, 0, 1000);
    hTruthElElNuLepFlagOnM = new TH1F("hTruthElElNuLepFlagOnM", "Truth e + #nu_{e} Mass", 1000, 0, 1000);

    hTruthMuMuNuLepFlagOnPt = new TH1F("hTruthMuMuNuLepFlagOnPt", "Truth #mu + #nu_{#mu} P_{t}", 1000, 0, 500);
    hTruthMuMuNuLepFlagOnEta = new TH1F("hTruthMuMuNuLepFlagOnEta", "Truth #mu + #nu_{#mu} #eta", 1000, -10, 10);
    hTruthMuMuNuLepFlagOnPhi = new TH1F("hTruthMuMuNuLepFlagOnPhi", "Truth #mu + #nu_{#mu} #phi", 1000, -5, 5);
    hTruthMuMuNuLepFlagOnE = new TH1F("hTruthMuMuNuLepFlagOnE", "Truth #mu + #nu_{#mu} E", 1000, 0, 1000);
    hTruthMuMuNuLepFlagOnM = new TH1F("hTruthMuMuNuLepFlagOnM", "Truth #mu + #nu_{#mu} Mass", 1000, 0, 1000);

    hTruthLepNuLepFlagOnPt = new TH1F("hTruthLepNuLepFlagOnPt", "Truth #ell + #nu P_{t}", 1000, 0, 1000);
    hTruthLepNuLepFlagOnEta = new TH1F("hTruthLepNuLepFlagOnEta", "Truth #ell + #nu #eta", 1000, -10, 10);
    hTruthLepNuLepFlagOnPhi = new TH1F("hTruthLepNuLepFlagOnPhi", "Truth #ell + #nu #phi", 1000, -5, 5);
    hTruthLepNuLepFlagOnE = new TH1F("hTruthLepNuLepFlagOnE", "Truth #ell + #nu E", 1000, 0, 1000);
    hTruthLepNuLepFlagOnM = new TH1F("hTruthLepNuLepFlagOnM", "Truth #ell + #nu Mass", 1000, 0, 1000);

    fOutput->Add(hTruthElectronPt);
    fOutput->Add(hTruthElectronEta);
    fOutput->Add(hTruthElectronPhi);
    fOutput->Add(hTruthElectronE);
    fOutput->Add(hTruthElectronM);
    
    fOutput->Add(hTruthElNuPt);
    fOutput->Add(hTruthElNuEta);
    fOutput->Add(hTruthElNuPhi);
    fOutput->Add(hTruthElNuE);
    fOutput->Add(hTruthElNuM);
    fOutput->Add(hTruthElNuMET);

    fOutput->Add(hTruthMuonPt);
    fOutput->Add(hTruthMuonEta);
    fOutput->Add(hTruthMuonPhi);
    fOutput->Add(hTruthMuonE);
    fOutput->Add(hTruthMuonM);

    fOutput->Add(hTruthMuNuPt);
    fOutput->Add(hTruthMuNuEta);
    fOutput->Add(hTruthMuNuPhi);
    fOutput->Add(hTruthMuNuE);
    fOutput->Add(hTruthMuNuM);
    fOutput->Add(hTruthMuNuMET);

    fOutput->Add(hTruthLeptonPt);
    fOutput->Add(hTruthLeptonEta);
    fOutput->Add(hTruthLeptonPhi);
    fOutput->Add(hTruthLeptonE);
    fOutput->Add(hTruthLeptonM);

    fOutput->Add(hTruthNuPt);
    fOutput->Add(hTruthNuEta);
    fOutput->Add(hTruthNuPhi);
    fOutput->Add(hTruthNuE);
    fOutput->Add(hTruthNuM);
    fOutput->Add(hTruthNuMET);

    fOutput->Add(hTruthJet0Pt);
    fOutput->Add(hTruthJet0Eta);
    fOutput->Add(hTruthJet0Phi);
    fOutput->Add(hTruthJet0E);
    fOutput->Add(hTruthJet0M);

    fOutput->Add(hTruthJet1Pt);
    fOutput->Add(hTruthJet1Eta);
    fOutput->Add(hTruthJet1Phi);
    fOutput->Add(hTruthJet1E);
    fOutput->Add(hTruthJet1M);

    fOutput->Add(hTruthW0Pt);
    fOutput->Add(hTruthW0Eta);
    fOutput->Add(hTruthW0Phi);
    fOutput->Add(hTruthW0E);
    fOutput->Add(hTruthW0M);

    fOutput->Add(hTruthW1Pt);
    fOutput->Add(hTruthW1Eta);
    fOutput->Add(hTruthW1Phi);
    fOutput->Add(hTruthW1E);
    fOutput->Add(hTruthW1M);

    fOutput->Add(hTruthHiggsPt);
    fOutput->Add(hTruthHiggsEta);
    fOutput->Add(hTruthHiggsPhi);
    fOutput->Add(hTruthHiggsE);
    fOutput->Add(hTruthHiggsM);

    fOutput->Add(hTruthElElNuPt);
    fOutput->Add(hTruthElElNuEta);
    fOutput->Add(hTruthElElNuPhi);
    fOutput->Add(hTruthElElNuE);
    fOutput->Add(hTruthElElNuM);

    fOutput->Add(hTruthMuMuNuPt);
    fOutput->Add(hTruthMuMuNuEta);
    fOutput->Add(hTruthMuMuNuPhi);
    fOutput->Add(hTruthMuMuNuE);
    fOutput->Add(hTruthMuMuNuM);

    fOutput->Add(hTruthLepNuPt);
    fOutput->Add(hTruthLepNuEta);
    fOutput->Add(hTruthLepNuPhi);
    fOutput->Add(hTruthLepNuE);
    fOutput->Add(hTruthLepNuM);

    fOutput->Add(hTruthElectronLepFlagOnPt);
    fOutput->Add(hTruthElectronLepFlagOnEta);
    fOutput->Add(hTruthElectronLepFlagOnPhi);
    fOutput->Add(hTruthElectronLepFlagOnE);
    fOutput->Add(hTruthElectronLepFlagOnM);
    
    fOutput->Add(hTruthElNuLepFlagOnPt);
    fOutput->Add(hTruthElNuLepFlagOnEta);
    fOutput->Add(hTruthElNuLepFlagOnPhi);
    fOutput->Add(hTruthElNuLepFlagOnE);
    fOutput->Add(hTruthElNuLepFlagOnM);
    fOutput->Add(hTruthElNuLepFlagOnMET);

    fOutput->Add(hTruthMuonLepFlagOnPt);
    fOutput->Add(hTruthMuonLepFlagOnEta);
    fOutput->Add(hTruthMuonLepFlagOnPhi);
    fOutput->Add(hTruthMuonLepFlagOnE);
    fOutput->Add(hTruthMuonLepFlagOnM);

    fOutput->Add(hTruthMuNuLepFlagOnPt);
    fOutput->Add(hTruthMuNuLepFlagOnEta);
    fOutput->Add(hTruthMuNuLepFlagOnPhi);
    fOutput->Add(hTruthMuNuLepFlagOnE);
    fOutput->Add(hTruthMuNuLepFlagOnM);
    fOutput->Add(hTruthMuNuLepFlagOnMET);

    fOutput->Add(hTruthLeptonLepFlagOnPt);
    fOutput->Add(hTruthLeptonLepFlagOnEta);
    fOutput->Add(hTruthLeptonLepFlagOnPhi);
    fOutput->Add(hTruthLeptonLepFlagOnE);
    fOutput->Add(hTruthLeptonLepFlagOnM);

    fOutput->Add(hTruthNuLepFlagOnPt);
    fOutput->Add(hTruthNuLepFlagOnEta);
    fOutput->Add(hTruthNuLepFlagOnPhi);
    fOutput->Add(hTruthNuLepFlagOnE);
    fOutput->Add(hTruthNuLepFlagOnM);
    fOutput->Add(hTruthNuLepFlagOnMET);

    fOutput->Add(hTruthW0LepFlagOnPt);
    fOutput->Add(hTruthW0LepFlagOnEta);
    fOutput->Add(hTruthW0LepFlagOnPhi);
    fOutput->Add(hTruthW0LepFlagOnE);
    fOutput->Add(hTruthW0LepFlagOnM);

    fOutput->Add(hTruthElElNuLepFlagOnPt);
    fOutput->Add(hTruthElElNuLepFlagOnEta);
    fOutput->Add(hTruthElElNuLepFlagOnPhi);
    fOutput->Add(hTruthElElNuLepFlagOnE);
    fOutput->Add(hTruthElElNuLepFlagOnM);

    fOutput->Add(hTruthMuMuNuLepFlagOnPt);
    hTruthNuLepFlagOnPt->Fill(truth_neutrino_LepFlagOn.Pt());
    hTruthNuLepFlagOnEta->Fill(truth_neutrino_LepFlagOn.Eta());
    hTruthNuLepFlagOnPhi->Fill(truth_neutrino_LepFlagOn.Phi());
    hTruthNuLepFlagOnE->Fill(truth_neutrino_LepFlagOn.E());
    hTruthNuLepFlagOnM->Fill(truth_neutrino_LepFlagOn.M());
    hTruthNuLepFlagOnMET->Fill(truth_neutrino_LepFlagOn.Et());

    fOutput->Add(hTruthMuMuNuLepFlagOnEta);
    fOutput->Add(hTruthMuMuNuLepFlagOnPhi);
    fOutput->Add(hTruthMuMuNuLepFlagOnE);
    fOutput->Add(hTruthMuMuNuLepFlagOnM);

    fOutput->Add(hTruthLepNuLepFlagOnPt);
    fOutput->Add(hTruthLepNuLepFlagOnEta);
    fOutput->Add(hTruthLepNuLepFlagOnPhi);
    fOutput->Add(hTruthLepNuLepFlagOnE);
    fOutput->Add(hTruthLepNuLepFlagOnM);

}

Bool_t mySelector::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // It can be passed to either mySelector::GetEntry() or TBranch::GetEntry()
   // to read either all or the required parts of the data. When processing
   // keyed objects with PROOF, the object is already loaded and is available
   // via the fObject pointer.
   //
   // This function should contain the "body" of the analysis. It can contain
   // simple or elaborate selection criteria, run algorithms on the data
   // of the event and typically fill histograms.
   //
   // The processing can be stopped by calling Abort().
   //
   // Use fStatus to set the return value of TTree::Process().
   //
   // The return value is currently not used.

    lvqq::GetEntry(entry);

    // Monte Carlo
    if (truth_l_pdgId == 11 || truth_l_pdgId == -11) {
        truth_electron.SetPtEtaPhiM(truth_l_pt, truth_l_eta, truth_l_phi, 0.000511);
        truth_electronNeutrino.SetPtEtaPhiM(truth_nu_pt, truth_nu_eta, truth_nu_phi, 0.0);
        truth_lepton.SetPtEtaPhiM(truth_l_pt, truth_l_eta, truth_l_phi, 0.000511);
    }
    if (truth_l_pdgId == 13 || truth_l_pdgId == -13) {
        truth_muon.SetPtEtaPhiM(truth_l_pt, truth_l_eta, truth_l_phi, 0.105658);
        truth_muonNeutrino.SetPtEtaPhiM(truth_nu_pt, truth_nu_eta, truth_nu_phi, 0.0);
        truth_lepton.SetPtEtaPhiM(truth_l_pt, truth_l_eta, truth_l_phi, 0.105658);
    }
    truth_neutrino.SetPtEtaPhiM(truth_nu_pt, truth_nu_eta, truth_nu_phi, 0.0);
    truth_jet0.SetPtEtaPhiE(truth_j0_pt, truth_j0_eta, truth_j0_phi, 0.);
    truth_jet1.SetPtEtaPhiE(truth_j1_pt, truth_j1_eta, truth_j1_phi, 0.);
    truth_W0.SetPtEtaPhiM(truth_W0_pt, truth_W0_eta, truth_W0_phi, truth_W0_m);
    truth_W1.SetPtEtaPhiM(truth_W1_pt, truth_W1_eta, truth_W1_phi, truth_W1_m);
    truth_Higgs.SetPtEtaPhiE(truth_H_pt, truth_H_eta, truth_H_phi, 0.);

    truth_electron_and_electronNeutrino = truth_electron + truth_electronNeutrino;
    truth_muon_and_muonNeutrino = truth_muon + truth_muonNeutrino;
    truth_lepton_and_neutrino = truth_electron_and_electronNeutrino + truth_muon_and_muonNeutrino;

    // Turn on leptonic flag
    if (truth_W0_leptonic == 1) {
        if (truth_l_pdgId == 11 || truth_l_pdgId == -11) {
            // SetPtEtaPhiM should use mass in MeV/c^2, but truth information are saved in unit GeV/c^2
            // e mass = 0.511 MeV/c^2 = 0.000511 GeV/c^2
            truth_electron_LepFlagOn.SetPtEtaPhiM(truth_l_pt, truth_l_eta, truth_l_phi, 0.000511);
            truth_electronNeutrino_LepFlagOn.SetPtEtaPhiM(truth_nu_pt, truth_nu_eta, truth_nu_phi, 0.0);
            truth_lepton_LepFlagOn.SetPtEtaPhiM(truth_l_pt, truth_l_eta, truth_l_phi, 0.000511);

            leptonic_count++;
            leptonic_count_e++;
        }
        if (truth_l_pdgId == 13 || truth_l_pdgId == -13) {
            // muon mass = 105.658 MeV/c^2 = 0.105658 GeV/c^2
            truth_muon_LepFlagOn.SetPtEtaPhiM(truth_l_pt, truth_l_eta, truth_l_phi, 0.105658);
            truth_muonNeutrino_LepFlagOn.SetPtEtaPhiM(truth_nu_pt, truth_nu_eta, truth_nu_phi, 0.0);
            truth_lepton_LepFlagOn.SetPtEtaPhiM(truth_l_pt, truth_l_eta, truth_l_phi, 0.105658);

            leptonic_count++;
            leptonic_count_mu++;
        }
        truth_neutrino_LepFlagOn.SetPtEtaPhiM(truth_nu_pt, truth_nu_eta, truth_nu_phi, 0.0);
        truth_W0_LepFlagOn.SetPtEtaPhiM(truth_W0_pt, truth_W0_eta, truth_W0_phi, truth_W0_m);
        truth_electron_and_electronNeutrino_LepFlagOn = truth_electron_LepFlagOn + truth_electronNeutrino_LepFlagOn;
        truth_muon_and_muonNeutrino_LepFlagOn = truth_muon_LepFlagOn + truth_muonNeutrino_LepFlagOn;
        truth_lepton_and_neutrino_LepFlagOn = truth_lepton_LepFlagOn + truth_neutrino_LepFlagOn;
    }

    myTree->Fill();

    hTruthElectronPt->Fill(truth_electron.Pt());
    hTruthElectronEta->Fill(truth_electron.Eta());
    hTruthElectronPhi->Fill(truth_electron.Phi());
    hTruthElectronE->Fill(truth_electron.E());
    hTruthElectronM->Fill(truth_electron.M());

    hTruthElNuPt->Fill(truth_electronNeutrino.Pt());
    hTruthElNuEta->Fill(truth_electronNeutrino.Eta());
    hTruthElNuPhi->Fill(truth_electronNeutrino.Phi());
    hTruthElNuE->Fill(truth_electronNeutrino.E());
    hTruthElNuM->Fill(truth_electronNeutrino.M());
    hTruthElNuMET->Fill(truth_electronNeutrino.Et());

    hTruthMuonPt->Fill(truth_muon.Pt());
    hTruthMuonEta->Fill(truth_muon.Eta());
    hTruthMuonPhi->Fill(truth_muon.Phi());
    hTruthMuonE->Fill(truth_muon.E());
    hTruthMuonM->Fill(truth_muon.M());

    hTruthMuNuPt->Fill(truth_muonNeutrino.Pt());
    hTruthMuNuEta->Fill(truth_muonNeutrino.Eta());
    hTruthMuNuPhi->Fill(truth_muonNeutrino.Phi());
    hTruthMuNuE->Fill(truth_muonNeutrino.E());
    hTruthMuNuM->Fill(truth_muonNeutrino.M());
    hTruthMuNuMET->Fill(truth_muonNeutrino.Et());

    hTruthNuPt->Fill(truth_neutrino.Pt());
    hTruthNuEta->Fill(truth_neutrino.Eta());
    hTruthNuPhi->Fill(truth_neutrino.Phi());
    hTruthNuE->Fill(truth_neutrino.E());
    hTruthNuM->Fill(truth_neutrino.M());
    hTruthNuMET->Fill(truth_neutrino.Et());

    hTruthJet0Pt->Fill(truth_jet0.Pt());
    hTruthJet0Eta->Fill(truth_jet0.Eta());
    hTruthJet0Phi->Fill(truth_jet0.Phi());
    hTruthJet0E->Fill(truth_jet0.E());
    hTruthJet0M->Fill(truth_jet0.M());

    hTruthJet1Pt->Fill(truth_jet1.Pt());
    hTruthJet1Eta->Fill(truth_jet1.Eta());
    hTruthJet1Phi->Fill(truth_jet1.Phi());
    hTruthJet1E->Fill(truth_jet1.E());
    hTruthJet1M->Fill(truth_jet1.M());
    
    hTruthW0Pt->Fill(truth_W0.Pt());
    hTruthW0Eta->Fill(truth_W0.Eta());
    hTruthW0Phi->Fill(truth_W0.Phi());
    hTruthW0E->Fill(truth_W0.E());
    hTruthW0M->Fill(truth_W0.M());

    hTruthW1Pt->Fill(truth_W1.Pt());
    hTruthW1Eta->Fill(truth_W1.Eta());
    hTruthW1Phi->Fill(truth_W1.Phi());
    hTruthW1E->Fill(truth_W1.E());
    hTruthW1M->Fill(truth_W1.M());
    
    hTruthHiggsPt->Fill(truth_Higgs.Pt());
    hTruthHiggsEta->Fill(truth_Higgs.Eta());
    hTruthHiggsPhi->Fill(truth_Higgs.Phi());
    hTruthHiggsE->Fill(truth_Higgs.E());
    hTruthHiggsM->Fill(truth_Higgs.M());

    hTruthElElNuPt->Fill(truth_electron_and_electronNeutrino.E());
    hTruthElElNuEta->Fill(truth_electron_and_electronNeutrino.Eta());
    hTruthElElNuPhi->Fill(truth_electron_and_electronNeutrino.Phi());
    hTruthElElNuE->Fill(truth_electron_and_electronNeutrino.E());
    hTruthElElNuM->Fill(truth_electron_and_electronNeutrino.M());

    hTruthMuMuNuPt->Fill(truth_muon_and_muonNeutrino.Pt());
    hTruthMuMuNuEta->Fill(truth_muon_and_muonNeutrino.Eta());
    hTruthMuMuNuPhi->Fill(truth_muon_and_muonNeutrino.Phi());
    hTruthMuMuNuE->Fill(truth_muon_and_muonNeutrino.E());
    hTruthMuMuNuM->Fill(truth_muon_and_muonNeutrino.M());

    hTruthLepNuPt->Fill(truth_lepton_and_neutrino.Pt());
    hTruthLepNuEta->Fill(truth_lepton_and_neutrino.Eta());
    hTruthLepNuPhi->Fill(truth_lepton_and_neutrino.Phi());
    hTruthLepNuE->Fill(truth_lepton_and_neutrino.E());
    hTruthLepNuM->Fill(truth_lepton_and_neutrino.M());

    hTruthElectronLepFlagOnPt->Fill(truth_electron_LepFlagOn.Pt());
    hTruthElectronLepFlagOnEta->Fill(truth_electron_LepFlagOn.Eta());
    hTruthElectronLepFlagOnPhi->Fill(truth_electron_LepFlagOn.Phi());
    hTruthElectronLepFlagOnE->Fill(truth_electron_LepFlagOn.E());
    hTruthElectronLepFlagOnM->Fill(truth_electron_LepFlagOn.M());

    hTruthElNuLepFlagOnPt->Fill(truth_electronNeutrino_LepFlagOn.Pt());
    hTruthElNuLepFlagOnEta->Fill(truth_electronNeutrino_LepFlagOn.Eta());
    hTruthElNuLepFlagOnPhi->Fill(truth_electronNeutrino_LepFlagOn.Phi());
    hTruthElNuLepFlagOnE->Fill(truth_electronNeutrino_LepFlagOn.E());
    hTruthElNuLepFlagOnM->Fill(truth_electronNeutrino_LepFlagOn.M());
    hTruthElNuLepFlagOnMET->Fill(truth_electronNeutrino_LepFlagOn.Et());

    hTruthMuonLepFlagOnPt->Fill(truth_muon_LepFlagOn.Pt());
    hTruthMuonLepFlagOnEta->Fill(truth_muon_LepFlagOn.Eta());
    hTruthMuonLepFlagOnPhi->Fill(truth_muon_LepFlagOn.Phi());
    hTruthMuonLepFlagOnE->Fill(truth_muon_LepFlagOn.E());
    hTruthMuonLepFlagOnM->Fill(truth_muon_LepFlagOn.M());

    hTruthMuNuLepFlagOnPt->Fill(truth_muonNeutrino_LepFlagOn.Pt());
    hTruthMuNuLepFlagOnEta->Fill(truth_muonNeutrino_LepFlagOn.Eta());
    hTruthMuNuLepFlagOnPhi->Fill(truth_muonNeutrino_LepFlagOn.Phi());
    hTruthMuNuLepFlagOnE->Fill(truth_muonNeutrino_LepFlagOn.E());
    hTruthMuNuLepFlagOnM->Fill(truth_muonNeutrino_LepFlagOn.M());
    hTruthMuNuLepFlagOnMET->Fill(truth_muonNeutrino_LepFlagOn.Et());

    hTruthLeptonLepFlagOnPt->Fill(truth_lepton_LepFlagOn.Pt());
    hTruthLeptonLepFlagOnEta->Fill(truth_lepton_LepFlagOn.Eta());
    hTruthLeptonLepFlagOnPhi->Fill(truth_lepton_LepFlagOn.Phi());
    hTruthLeptonLepFlagOnE->Fill(truth_lepton_LepFlagOn.E());
    hTruthLeptonLepFlagOnM->Fill(truth_lepton_LepFlagOn.M());

    hTruthNuLepFlagOnPt->Fill(truth_neutrino_LepFlagOn.Pt());
    hTruthNuLepFlagOnEta->Fill(truth_neutrino_LepFlagOn.Eta());
    hTruthNuLepFlagOnPhi->Fill(truth_neutrino_LepFlagOn.Phi());
    hTruthNuLepFlagOnE->Fill(truth_neutrino_LepFlagOn.E());
    hTruthNuLepFlagOnM->Fill(truth_neutrino_LepFlagOn.M());
    hTruthNuLepFlagOnMET->Fill(truth_neutrino_LepFlagOn.Et());

    hTruthW0LepFlagOnPt->Fill(truth_W0_LepFlagOn.Pt());
    hTruthW0LepFlagOnEta->Fill(truth_W0_LepFlagOn.Eta());
    hTruthW0LepFlagOnPhi->Fill(truth_W0_LepFlagOn.Phi());
    hTruthW0LepFlagOnE->Fill(truth_W0_LepFlagOn.E());
    hTruthW0LepFlagOnM->Fill(truth_W0_LepFlagOn.M());

    hTruthElElNuLepFlagOnPt->Fill(truth_electron_and_electronNeutrino_LepFlagOn.E());
    hTruthElElNuLepFlagOnEta->Fill(truth_electron_and_electronNeutrino_LepFlagOn.Eta());
    hTruthElElNuLepFlagOnPhi->Fill(truth_electron_and_electronNeutrino_LepFlagOn.Phi());
    hTruthElElNuLepFlagOnE->Fill(truth_electron_and_electronNeutrino_LepFlagOn.E());
    hTruthElElNuLepFlagOnM->Fill(truth_electron_and_electronNeutrino_LepFlagOn.M());

    hTruthMuMuNuLepFlagOnPt->Fill(truth_muon_and_muonNeutrino_LepFlagOn.Pt());
    hTruthMuMuNuLepFlagOnEta->Fill(truth_muon_and_muonNeutrino_LepFlagOn.Eta());
    hTruthMuMuNuLepFlagOnPhi->Fill(truth_muon_and_muonNeutrino_LepFlagOn.Phi());
    hTruthMuMuNuLepFlagOnE->Fill(truth_muon_and_muonNeutrino_LepFlagOn.E());
    hTruthMuMuNuLepFlagOnM->Fill(truth_muon_and_muonNeutrino_LepFlagOn.M());

    hTruthLepNuLepFlagOnPt->Fill(truth_lepton_and_neutrino_LepFlagOn.Pt());
    hTruthLepNuLepFlagOnEta->Fill(truth_lepton_and_neutrino_LepFlagOn.Eta());
    hTruthLepNuLepFlagOnPhi->Fill(truth_lepton_and_neutrino_LepFlagOn.Phi());
    hTruthLepNuLepFlagOnE->Fill(truth_lepton_and_neutrino_LepFlagOn.E());
    hTruthLepNuLepFlagOnM->Fill(truth_lepton_and_neutrino_LepFlagOn.M());


   return kTRUE;
}

void mySelector::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void mySelector::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.

    cout << "leptonic_count = " << leptonic_count << endl;
    cout << "leptonic_count_e = " << leptonic_count_e << endl;
    cout << "leptonic_count_mu = " << leptonic_count_mu << endl;

    TFile *myResultFile = new TFile("myResult.root", "recreate");
    fOutput->Write();
    myResultFile->Close();

}

ClassImp(mySelector);

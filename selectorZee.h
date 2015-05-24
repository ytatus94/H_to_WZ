//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue May 21 21:27:16 2013 by ROOT version 5.34/05
// from TTree HWWTree_lvqq/HWW lvqq Ntuple
// found on file: ZeeNp0/group.phys-higgs.299642_025262._00001.HWWSkimmedNTUP_lvqq.root
//////////////////////////////////////////////////////////

#ifndef selectorZee_h
#define selectorZee_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>

// Header file for the classes stored in the TTree if any.
#include <vector>
#include <vector>
#include <vector>
#include <vector>

// Fixed size dimensions of array or collections stored in the TTree if any.

class selectorZee : public TSelector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

   // Declaration of leaf types
   Bool_t          isE;
   Bool_t          isM;
   Bool_t          isJ;
   Float_t         higgsPt;
   Float_t         MT;
   Float_t         MTrans;
   Float_t         Pttot;
   Float_t         Mjj;
   Float_t         Ptjj;
   Float_t         DPhijj;
   Float_t         DRjj;
   Float_t         DEtajj;
   Float_t         DYjj;
   Float_t         smt_muon_pt;
   Float_t         smt_muon_sf;
   Float_t         smt_muon_mistag_sf_up;
   Float_t         smt_muon_mistag_sf_dw;
   Float_t         smt_muon_chi2_sf_up;
   Float_t         smt_muon_chi2_sf_dw;
   Float_t         smt_muon_id_sf_up;
   Float_t         smt_muon_id_sf_dw;
   Int_t           kf_idx1;
   Int_t           kf_idx2;
   Float_t         kf_chiSquared;
   Float_t         kf_refitMass;
   Float_t         kf_refitPt1;
   Float_t         kf_refitPt2;
   Float_t         BLayer_hit0;
   Float_t         conv0;
   Int_t           RandomRunNumber;
   Float_t         MinDPhi;
   Float_t         MinDPhi_noJVF;
   Float_t         MET;
   Float_t         MET_x;
   Float_t         MET_y;
   Float_t         MET_phi;
   Float_t         METRel;
   Float_t         METRel_x;
   Float_t         METRel_y;
   Float_t         METRel_noJets;
   Float_t         MET_default;
   Float_t         MET_default_x;
   Float_t         MET_default_y;
   Float_t         MinDPhi_STVF;
   Float_t         MinDPhi_noJVF_STVF;
   Float_t         MT_STVF;
   Float_t         MTrans_STVF;
   Float_t         Pttot_STVF;
   Float_t         MET_STVF;
   Float_t         MET_x_STVF;
   Float_t         MET_y_STVF;
   Float_t         MET_phi_STVF;
   Float_t         METRel_STVF;
   Float_t         METRel_x_STVF;
   Float_t         METRel_y_STVF;
   Float_t         METRel_noJets_STVF;
   Float_t         MET_default_STVF;
   Float_t         MET_default_x_STVF;
   Float_t         MET_default_y_STVF;
   Float_t         MET_TrackHWW;
   Float_t         MET_x_TrackHWW;
   Float_t         MET_y_TrackHWW;
   Float_t         MET_phi_TrackHWW;
   Float_t         MinDPhi_TrackHWW;
   Float_t         MinDPhi_noJVF_TrackHWW;
   Float_t         METRel_TrackHWW;
   Float_t         METRel_x_TrackHWW;
   Float_t         METRel_y_TrackHWW;
   Float_t         DPhi_CaloTrackHWW;
   Float_t         MT_TrackHWW;
   Float_t         PtTrack_TrackHWW;
   Float_t         MTrans_TrackHWW;
   Float_t         Pttot_TrackHWW;
   Float_t         METRel_noJets_TrackHWW;
   Float_t         MET_TrackHWW_Cl;
   Float_t         MET_x_TrackHWW_Cl;
   Float_t         MET_y_TrackHWW_Cl;
   Float_t         MET_phi_TrackHWW_Cl;
   Float_t         MinDPhi_TrackHWW_Cl;
   Float_t         MinDPhi_noJVF_TrackHWW_Cl;
   Float_t         METRel_TrackHWW_Cl;
   Float_t         METRel_x_TrackHWW_Cl;
   Float_t         METRel_y_TrackHWW_Cl;
   Float_t         DPhi_CaloTrackHWW_Cl;
   Float_t         MT_TrackHWW_Cl;
   Float_t         PtTrack_TrackHWW_Cl;
   Float_t         MTrans_TrackHWW_Cl;
   Float_t         Pttot_TrackHWW_Cl;
   Float_t         METRel_noJets_TrackHWW_Cl;
   Float_t         lepID;
   vector<bool>    *isMPP_ele;
   vector<bool>    *isTPP_ele;
   vector<bool>    *isIso_ele;
   vector<bool>    *isD0_muon;
   vector<bool>    *isIso_muon;
   vector<bool>    *isIsoJet_muon;
   Bool_t          lepMatch_EF_mu24i_tight_0;
   Bool_t          lepMatch_EF_mu36_tight_0;
   Bool_t          lepMatch_EF_e24vhi_medium1_0;
   Bool_t          lepMatch_EF_e60_medium1_0;
   vector<bool>    *lepMatch_EF_mu24i_tight;
   vector<bool>    *lepMatch_EF_mu36_tight;
   vector<bool>    *lepMatch_EF_e24vhi_medium1;
   vector<bool>    *lepMatch_EF_e60_medium1;
   Double_t        vertexEventWeight;
   Double_t        vertexEventWeight_Pu1;
   Double_t        vertexEventWeight_Pu088;
   Double_t        pileupEventWeight;
   Double_t        pileupEventWeight_094;
   Double_t        pileupEventWeight_080;
   Double_t        pileupEventWeight_090;
   Double_t        pileupEventWeight_088;
   Double_t        pileupEventWeight_075;
   Double_t        pileupEventWeight_103;
   Double_t        higgsPtEventWeight;
   Double_t        higgsMEventWeight;
   Double_t        higgsPtError;
   Double_t        didEJoverlap;
   Double_t        didMJoverlap;
   Double_t        mcEventWeight;
   Double_t        mcEventWeightUp;
   Double_t        mcEventWeightDown;
   Double_t        tauPolWeight;
   Double_t        mcWeightOrg;
   Double_t        trigEventWeight;
   Double_t        lepTrigSFEventWeight;
   Double_t        lepTrigSFEventWeightUp;
   Double_t        lepTrigSFEventWeightDown;
   Double_t        lepTrigSF0EventWeight;
   Double_t        lepTrigSF0Error;
   Double_t        lepSF0EventWeight;
   Double_t        lepSF0Error;
   Double_t        lepSF0ErrorIso;
   Double_t        lepSF0ErrorSys;
   vector<double>  *MV1_value;
   vector<double>  *MV1_EventWeight;
   vector<double>  *MV1_EventWeightUp;
   vector<double>  *MV1_EventWeightDown;
   vector<double>  *MV1_VetoEventWeight;
   vector<double>  *MV1_VetoEventWeightUp;
   vector<double>  *MV1_VetoEventWeightDown;
   Int_t           Nvxp;
   Int_t           bpos;
   Int_t           blen;
   Int_t           bgap;
   Float_t         truth_sherpa_Wpt;
   UInt_t          RunNumber;
   UInt_t          EventNumber;
   UInt_t          lbn;
   UInt_t          bcid;
   Float_t         actualIntPerXing;
   Float_t         averageIntPerXing;
   UInt_t          mc_channel_number;
   UInt_t          larError;
   Int_t           m_el_n;
   vector<float>   *m_el_E;
   vector<float>   *m_el_pt;
   vector<float>   *m_el_eta;
   vector<float>   *m_el_phi;
   vector<float>   *m_el_charge;
   vector<float>   *m_el_trackd0pv;
   vector<float>   *m_el_tracksigd0pv;
   Int_t           m_mu_n;
   vector<float>   *m_mu_E;
   vector<float>   *m_mu_pt;
   vector<float>   *m_mu_eta;
   vector<float>   *m_mu_phi;
   vector<float>   *m_mu_charge;
   vector<float>   *m_mu_matchchi2;
   vector<int>     *m_mu_matchndof;
   vector<float>   *m_mu_energyLossPar;
   vector<float>   *m_mu_etCore;
   vector<float>   *m_mu_id_d0_exPV;
   vector<float>   *m_mu_id_theta_exPV;
   vector<float>   *m_mu_id_qoverp_exPV;
   vector<float>   *m_mu_me_theta_exPV;
   vector<float>   *m_mu_me_qoverp_exPV;
   vector<float>   *m_mu_id_cov_d0_exPV;
   Int_t           m_jet_n;
   vector<float>   *m_jet_E;
   vector<float>   *m_jet_pt;
   vector<float>   *m_jet_eta;
   vector<float>   *m_jet_phi;
   vector<float>   *m_jet_LArQuality;
   vector<float>   *m_jet_sumPtTrk;
   vector<float>   *m_jet_jvtxf;
   vector<float>   *m_jet_flavor_weight_MV1;
   vector<int>     *m_jet_flavor_truth_label;
   Int_t           m_vxp_n;
   vector<int>     *m_vxp_nTracks;
   vector<int>     *m_mcevt_pdf_id1;
   vector<int>     *m_mcevt_pdf_id2;
   vector<double>  *m_mcevt_pdf_x1;
   vector<double>  *m_mcevt_pdf_x2;
   vector<double>  *m_mcevt_pdf_scale;

   // List of branches
   TBranch        *b_isE;   //!
   TBranch        *b_isM;   //!
   TBranch        *b_isJ;   //!
   TBranch        *b_higgsPt;   //!
   TBranch        *b_MT;   //!
   TBranch        *b_MTrans;   //!
   TBranch        *b_Pttot;   //!
   TBranch        *b_Mjj;   //!
   TBranch        *b_Ptjj;   //!
   TBranch        *b_DPhijj;   //!
   TBranch        *b_DRjj;   //!
   TBranch        *b_DEtajj;   //!
   TBranch        *b_DYjj;   //!
   TBranch        *b_smt_muon_pt;   //!
   TBranch        *b_smt_muon_sf;   //!
   TBranch        *b_smt_muon_mistag_sf_up;   //!
   TBranch        *b_smt_muon_mistag_sf_dw;   //!
   TBranch        *b_smt_muon_chi2_sf_up;   //!
   TBranch        *b_smt_muon_chi2_sf_dw;   //!
   TBranch        *b_smt_muon_id_sf_up;   //!
   TBranch        *b_smt_muon_id_sf_dw;   //!
   TBranch        *b_kf_idx1;   //!
   TBranch        *b_kf_idx2;   //!
   TBranch        *b_kf_chiSquared;   //!
   TBranch        *b_kf_refitMass;   //!
   TBranch        *b_kf_refitPt1;   //!
   TBranch        *b_kf_refitPt2;   //!
   TBranch        *b_BLayer_hit0;   //!
   TBranch        *b_conv0;   //!
   TBranch        *b_RandomRunNumber;   //!
   TBranch        *b_MinDPhi;   //!
   TBranch        *b_MinDPhi_noJVF;   //!
   TBranch        *b_MET;   //!
   TBranch        *b_MET_x;   //!
   TBranch        *b_MET_y;   //!
   TBranch        *b_MET_phi;   //!
   TBranch        *b_METRel;   //!
   TBranch        *b_METRel_x;   //!
   TBranch        *b_METRel_y;   //!
   TBranch        *b_METRel_noJets;   //!
   TBranch        *b_MET_default;   //!
   TBranch        *b_MET_default_x;   //!
   TBranch        *b_MET_default_y;   //!
   TBranch        *b_MinDPhi_STVF;   //!
   TBranch        *b_MinDPhi_noJVF_STVF;   //!
   TBranch        *b_MT_STVF;   //!
   TBranch        *b_MTrans_STVF;   //!
   TBranch        *b_Pttot_STVF;   //!
   TBranch        *b_MET_STVF;   //!
   TBranch        *b_MET_x_STVF;   //!
   TBranch        *b_MET_y_STVF;   //!
   TBranch        *b_MET_phi_STVF;   //!
   TBranch        *b_METRel_STVF;   //!
   TBranch        *b_METRel_x_STVF;   //!
   TBranch        *b_METRel_y_STVF;   //!
   TBranch        *b_METRel_noJets_STVF;   //!
   TBranch        *b_MET_default_STVF;   //!
   TBranch        *b_MET_default_x_STVF;   //!
   TBranch        *b_MET_default_y_STVF;   //!
   TBranch        *b_MET_TrackHWW;   //!
   TBranch        *b_MET_x_TrackHWW;   //!
   TBranch        *b_MET_y_TrackHWW;   //!
   TBranch        *b_MET_phi_TrackHWW;   //!
   TBranch        *b_MinDPhi_TrackHWW;   //!
   TBranch        *b_MinDPhi_noJVF_TrackHWW;   //!
   TBranch        *b_METRel_Track_HWW;   //!
   TBranch        *b_METRel_x_TrackHWW;   //!
   TBranch        *b_METRel_y_TrackHWW;   //!
   TBranch        *b_DPhi_CaloTrackHWW;   //!
   TBranch        *b_MT_TrackHWW;   //!
   TBranch        *b_PtTrack_TrackHWW;   //!
   TBranch        *b_MTrans_TrackHWW;   //!
   TBranch        *b_Pttot_TrackHWW;   //!
   TBranch        *b_METRel_noJets_TrackHWW;   //!
   TBranch        *b_MET_TrackHWW_Cl;   //!
   TBranch        *b_MET_x_TrackHWW_Cl;   //!
   TBranch        *b_MET_y_TrackHWW_Cl;   //!
   TBranch        *b_MET_phi_TrackHWW_Cl;   //!
   TBranch        *b_MinDPhi_TrackHWW_Cl;   //!
   TBranch        *b_MinDPhi_noJVF_TrackHWW_Cl;   //!
   TBranch        *b_METRel_Track_HWW_Cl;   //!
   TBranch        *b_METRel_x_TrackHWW_Cl;   //!
   TBranch        *b_METRel_y_TrackHWW_Cl;   //!
   TBranch        *b_DPhi_CaloTrackHWW_Cl;   //!
   TBranch        *b_MT_TrackHWW_Cl;   //!
   TBranch        *b_PtTrack_TrackHWW_Cl;   //!
   TBranch        *b_MTrans_TrackHWW_Cl;   //!
   TBranch        *b_Pttot_TrackHWW_Cl;   //!
   TBranch        *b_METRel_noJets_TrackHWW_Cl;   //!
   TBranch        *b_lepID0;   //!
   TBranch        *b_isMPP_ele;   //!
   TBranch        *b_isTPP_ele;   //!
   TBranch        *b_isIso_ele;   //!
   TBranch        *b_isD0_muon;   //!
   TBranch        *b_isIso_muon;   //!
   TBranch        *b_isIsoJet_muon;   //!
   TBranch        *b_lepMatch_EF_mu24i_tight_0;   //!
   TBranch        *b_lepMatch_EF_mu36_tight_0;   //!
   TBranch        *b_lepMatch_EF_e24vhi_medium1_0;   //!
   TBranch        *b_lepMatch_EF_e60_medium1_0;   //!
   TBranch        *b_lepMatch_EF_mu24i_tight;   //!
   TBranch        *b_lepMatch_EF_mu36_tight;   //!
   TBranch        *b_lepMatch_EF_e24vhi_medium1;   //!
   TBranch        *b_lepMatch_EF_e60_medium1;   //!
   TBranch        *b_vertexEventWeight;   //!
   TBranch        *b_vertexEventWeight_Pu1;   //!
   TBranch        *b_vertexEventWeight_Pu088;   //!
   TBranch        *b_pileupEventWeight;   //!
   TBranch        *b_pileupEventWeight_094;   //!
   TBranch        *b_pileupEventWeight_080;   //!
   TBranch        *b_pileupEventWeight_090;   //!
   TBranch        *b_pileupEventWeight_088;   //!
   TBranch        *b_pileupEventWeight_075;   //!
   TBranch        *b_pileupEventWeight_103;   //!
   TBranch        *b_higgsPtEventWeight;   //!
   TBranch        *b_higgsMEventWeight;   //!
   TBranch        *b_higgsPtError;   //!
   TBranch        *b_didEJOverlap;   //!
   TBranch        *b_didMJOverlap;   //!
   TBranch        *b_mcEventWeight;   //!
   TBranch        *b_mcEventWeightUp;   //!
   TBranch        *b_mcEventWeightDown;   //!
   TBranch        *b_tauPolWeight;   //!
   TBranch        *b_mcWeightOrg;   //!
   TBranch        *b_trigEventWeight;   //!
   TBranch        *b_lepTrigSFEventWeight;   //!
   TBranch        *b_lepTrigSFEventWeightUp;   //!
   TBranch        *b_lepTrigSFEventWeightDown;   //!
   TBranch        *b_lepTrigSF0EventWeight;   //!
   TBranch        *b_lepTrigSF0Error;   //!
   TBranch        *b_lepSF0EventWeight;   //!
   TBranch        *b_lepSF0Error;   //!
   TBranch        *b_lepSF0ErrorIso;   //!
   TBranch        *b_lepSF0ErrorSys;   //!
   TBranch        *b_MV1_value;   //!
   TBranch        *b_MV1_EventWeight;   //!
   TBranch        *b_MV1_EventWeightUp;   //!
   TBranch        *b_MV1_EventWeightDown;   //!
   TBranch        *b_MV1_VetoEventWeight;   //!
   TBranch        *b_MV1_VetoEventWeightUp;   //!
   TBranch        *b_MV1_VetoEventWeightDown;   //!
   TBranch        *b_Nvxp;   //!
   TBranch        *b_bpos;   //!
   TBranch        *b_blen;   //!
   TBranch        *b_bgap;   //!
   TBranch        *b_truth_sherpa_Wpt;   //!
   TBranch        *b_RunNumber;   //!
   TBranch        *b_EventNumber;   //!
   TBranch        *b_lbn;   //!
   TBranch        *b_bcid;   //!
   TBranch        *b_actualIntPerXing;   //!
   TBranch        *b_averageIntPerXing;   //!
   TBranch        *b_mc_channel_number;   //!
   TBranch        *b_larError;   //!
   TBranch        *b_m_el_n;   //!
   TBranch        *b_m_el_E;   //!
   TBranch        *b_m_el_pt;   //!
   TBranch        *b_m_el_eta;   //!
   TBranch        *b_m_el_phi;   //!
   TBranch        *b_m_el_charge;   //!
   TBranch        *b_m_el_trackd0pv;   //!
   TBranch        *b_m_el_tracksigd0pv;   //!
   TBranch        *b_m_mu_n;   //!
   TBranch        *b_m_mu_E;   //!
   TBranch        *b_m_mu_pt;   //!
   TBranch        *b_m_mu_eta;   //!
   TBranch        *b_m_mu_phi;   //!
   TBranch        *b_m_mu_charge;   //!
   TBranch        *b_m_mu_matchchi2;   //!
   TBranch        *b_m_mu_matchndof;   //!
   TBranch        *b_m_mu_energyLossPar;   //!
   TBranch        *b_m_mu_etCore;   //!
   TBranch        *b_m_mu_id_d0_exPV;   //!
   TBranch        *b_m_mu_id_theta_exPV;   //!
   TBranch        *b_m_mu_id_qoverp_exPV;   //!
   TBranch        *b_m_mu_me_theta_exPV;   //!
   TBranch        *b_m_mu_me_qoverp_exPV;   //!
   TBranch        *b_m_mu_id_cov_d0_exPV;   //!
   TBranch        *b_m_jet_n;   //!
   TBranch        *b_m_jet_E;   //!
   TBranch        *b_m_jet_pt;   //!
   TBranch        *b_m_jet_eta;   //!
   TBranch        *b_m_jet_phi;   //!
   TBranch        *b_m_jet_LArQuality;   //!
   TBranch        *b_m_jet_sumPtTrk;   //!
   TBranch        *b_m_jet_jvtxf;   //!
   TBranch        *b_m_jet_flavor_weight_MV1;   //!
   TBranch        *b_m_jet_flavor_truth_label;   //!
   TBranch        *b_m_vxp_n;   //!
   TBranch        *b_m_vxp_nTracks;   //!
   TBranch        *b_m_mcevt_pdf_id1;   //!
   TBranch        *b_m_mcevt_pdf_id2;   //!
   TBranch        *b_m_mcevt_pdf_x1;   //!
   TBranch        *b_m_mcevt_pdf_x2;   //!
   TBranch        *b_m_mcevt_pdf_scale;   //!

   selectorZee(TTree * /*tree*/ =0) : fChain(0) { }
   virtual ~selectorZee() { }
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

   ClassDef(selectorZee,0);
};

#endif

#ifdef selectorZee_cxx
void selectorZee::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   isMPP_ele = 0;
   isTPP_ele = 0;
   isIso_ele = 0;
   isD0_muon = 0;
   isIso_muon = 0;
   isIsoJet_muon = 0;
   lepMatch_EF_mu24i_tight = 0;
   lepMatch_EF_mu36_tight = 0;
   lepMatch_EF_e24vhi_medium1 = 0;
   lepMatch_EF_e60_medium1 = 0;
   MV1_value = 0;
   MV1_EventWeight = 0;
   MV1_EventWeightUp = 0;
   MV1_EventWeightDown = 0;
   MV1_VetoEventWeight = 0;
   MV1_VetoEventWeightUp = 0;
   MV1_VetoEventWeightDown = 0;
   m_el_E = 0;
   m_el_pt = 0;
   m_el_eta = 0;
   m_el_phi = 0;
   m_el_charge = 0;
   m_el_trackd0pv = 0;
   m_el_tracksigd0pv = 0;
   m_mu_E = 0;
   m_mu_pt = 0;
   m_mu_eta = 0;
   m_mu_phi = 0;
   m_mu_charge = 0;
   m_mu_matchchi2 = 0;
   m_mu_matchndof = 0;
   m_mu_energyLossPar = 0;
   m_mu_etCore = 0;
   m_mu_id_d0_exPV = 0;
   m_mu_id_theta_exPV = 0;
   m_mu_id_qoverp_exPV = 0;
   m_mu_me_theta_exPV = 0;
   m_mu_me_qoverp_exPV = 0;
   m_mu_id_cov_d0_exPV = 0;
   m_jet_E = 0;
   m_jet_pt = 0;
   m_jet_eta = 0;
   m_jet_phi = 0;
   m_jet_LArQuality = 0;
   m_jet_sumPtTrk = 0;
   m_jet_jvtxf = 0;
   m_jet_flavor_weight_MV1 = 0;
   m_jet_flavor_truth_label = 0;
   m_vxp_nTracks = 0;
   m_mcevt_pdf_id1 = 0;
   m_mcevt_pdf_id2 = 0;
   m_mcevt_pdf_x1 = 0;
   m_mcevt_pdf_x2 = 0;
   m_mcevt_pdf_scale = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("isE", &isE, &b_isE);
   fChain->SetBranchAddress("isM", &isM, &b_isM);
   fChain->SetBranchAddress("isJ", &isJ, &b_isJ);
   fChain->SetBranchAddress("higgsPt", &higgsPt, &b_higgsPt);
   fChain->SetBranchAddress("MT", &MT, &b_MT);
   fChain->SetBranchAddress("MTrans", &MTrans, &b_MTrans);
   fChain->SetBranchAddress("Pttot", &Pttot, &b_Pttot);
   fChain->SetBranchAddress("Mjj", &Mjj, &b_Mjj);
   fChain->SetBranchAddress("Ptjj", &Ptjj, &b_Ptjj);
   fChain->SetBranchAddress("DPhijj", &DPhijj, &b_DPhijj);
   fChain->SetBranchAddress("DRjj", &DRjj, &b_DRjj);
   fChain->SetBranchAddress("DEtajj", &DEtajj, &b_DEtajj);
   fChain->SetBranchAddress("DYjj", &DYjj, &b_DYjj);
   fChain->SetBranchAddress("smt_muon_pt", &smt_muon_pt, &b_smt_muon_pt);
   fChain->SetBranchAddress("smt_muon_sf", &smt_muon_sf, &b_smt_muon_sf);
   fChain->SetBranchAddress("smt_muon_mistag_sf_up", &smt_muon_mistag_sf_up, &b_smt_muon_mistag_sf_up);
   fChain->SetBranchAddress("smt_muon_mistag_sf_dw", &smt_muon_mistag_sf_dw, &b_smt_muon_mistag_sf_dw);
   fChain->SetBranchAddress("smt_muon_chi2_sf_up", &smt_muon_chi2_sf_up, &b_smt_muon_chi2_sf_up);
   fChain->SetBranchAddress("smt_muon_chi2_sf_dw", &smt_muon_chi2_sf_dw, &b_smt_muon_chi2_sf_dw);
   fChain->SetBranchAddress("smt_muon_id_sf_up", &smt_muon_id_sf_up, &b_smt_muon_id_sf_up);
   fChain->SetBranchAddress("smt_muon_id_sf_dw", &smt_muon_id_sf_dw, &b_smt_muon_id_sf_dw);
   fChain->SetBranchAddress("kf_idx1", &kf_idx1, &b_kf_idx1);
   fChain->SetBranchAddress("kf_idx2", &kf_idx2, &b_kf_idx2);
   fChain->SetBranchAddress("kf_chiSquared", &kf_chiSquared, &b_kf_chiSquared);
   fChain->SetBranchAddress("kf_refitMass", &kf_refitMass, &b_kf_refitMass);
   fChain->SetBranchAddress("kf_refitPt1", &kf_refitPt1, &b_kf_refitPt1);
   fChain->SetBranchAddress("kf_refitPt2", &kf_refitPt2, &b_kf_refitPt2);
   fChain->SetBranchAddress("BLayer_hit0", &BLayer_hit0, &b_BLayer_hit0);
   fChain->SetBranchAddress("conv0", &conv0, &b_conv0);
   fChain->SetBranchAddress("RandomRunNumber", &RandomRunNumber, &b_RandomRunNumber);
   fChain->SetBranchAddress("MinDPhi", &MinDPhi, &b_MinDPhi);
   fChain->SetBranchAddress("MinDPhi_noJVF", &MinDPhi_noJVF, &b_MinDPhi_noJVF);
   fChain->SetBranchAddress("MET", &MET, &b_MET);
   fChain->SetBranchAddress("MET_x", &MET_x, &b_MET_x);
   fChain->SetBranchAddress("MET_y", &MET_y, &b_MET_y);
   fChain->SetBranchAddress("MET_phi", &MET_phi, &b_MET_phi);
   fChain->SetBranchAddress("METRel", &METRel, &b_METRel);
   fChain->SetBranchAddress("METRel_x", &METRel_x, &b_METRel_x);
   fChain->SetBranchAddress("METRel_y", &METRel_y, &b_METRel_y);
   fChain->SetBranchAddress("METRel_noJets", &METRel_noJets, &b_METRel_noJets);
   fChain->SetBranchAddress("MET_default", &MET_default, &b_MET_default);
   fChain->SetBranchAddress("MET_default_x", &MET_default_x, &b_MET_default_x);
   fChain->SetBranchAddress("MET_default_y", &MET_default_y, &b_MET_default_y);
   fChain->SetBranchAddress("MinDPhi_STVF", &MinDPhi_STVF, &b_MinDPhi_STVF);
   fChain->SetBranchAddress("MinDPhi_noJVF_STVF", &MinDPhi_noJVF_STVF, &b_MinDPhi_noJVF_STVF);
   fChain->SetBranchAddress("MT_STVF", &MT_STVF, &b_MT_STVF);
   fChain->SetBranchAddress("MTrans_STVF", &MTrans_STVF, &b_MTrans_STVF);
   fChain->SetBranchAddress("Pttot_STVF", &Pttot_STVF, &b_Pttot_STVF);
   fChain->SetBranchAddress("MET_STVF", &MET_STVF, &b_MET_STVF);
   fChain->SetBranchAddress("MET_x_STVF", &MET_x_STVF, &b_MET_x_STVF);
   fChain->SetBranchAddress("MET_y_STVF", &MET_y_STVF, &b_MET_y_STVF);
   fChain->SetBranchAddress("MET_phi_STVF", &MET_phi_STVF, &b_MET_phi_STVF);
   fChain->SetBranchAddress("METRel_STVF", &METRel_STVF, &b_METRel_STVF);
   fChain->SetBranchAddress("METRel_x_STVF", &METRel_x_STVF, &b_METRel_x_STVF);
   fChain->SetBranchAddress("METRel_y_STVF", &METRel_y_STVF, &b_METRel_y_STVF);
   fChain->SetBranchAddress("METRel_noJets_STVF", &METRel_noJets_STVF, &b_METRel_noJets_STVF);
   fChain->SetBranchAddress("MET_default_STVF", &MET_default_STVF, &b_MET_default_STVF);
   fChain->SetBranchAddress("MET_default_x_STVF", &MET_default_x_STVF, &b_MET_default_x_STVF);
   fChain->SetBranchAddress("MET_default_y_STVF", &MET_default_y_STVF, &b_MET_default_y_STVF);
   fChain->SetBranchAddress("MET_TrackHWW", &MET_TrackHWW, &b_MET_TrackHWW);
   fChain->SetBranchAddress("MET_x_TrackHWW", &MET_x_TrackHWW, &b_MET_x_TrackHWW);
   fChain->SetBranchAddress("MET_y_TrackHWW", &MET_y_TrackHWW, &b_MET_y_TrackHWW);
   fChain->SetBranchAddress("MET_phi_TrackHWW", &MET_phi_TrackHWW, &b_MET_phi_TrackHWW);
   fChain->SetBranchAddress("MinDPhi_TrackHWW", &MinDPhi_TrackHWW, &b_MinDPhi_TrackHWW);
   fChain->SetBranchAddress("MinDPhi_noJVF_TrackHWW", &MinDPhi_noJVF_TrackHWW, &b_MinDPhi_noJVF_TrackHWW);
   fChain->SetBranchAddress("METRel_TrackHWW", &METRel_TrackHWW, &b_METRel_Track_HWW);
   fChain->SetBranchAddress("METRel_x_TrackHWW", &METRel_x_TrackHWW, &b_METRel_x_TrackHWW);
   fChain->SetBranchAddress("METRel_y_TrackHWW", &METRel_y_TrackHWW, &b_METRel_y_TrackHWW);
   fChain->SetBranchAddress("DPhi_CaloTrackHWW", &DPhi_CaloTrackHWW, &b_DPhi_CaloTrackHWW);
   fChain->SetBranchAddress("MT_TrackHWW", &MT_TrackHWW, &b_MT_TrackHWW);
   fChain->SetBranchAddress("PtTrack_TrackHWW", &PtTrack_TrackHWW, &b_PtTrack_TrackHWW);
   fChain->SetBranchAddress("MTrans_TrackHWW", &MTrans_TrackHWW, &b_MTrans_TrackHWW);
   fChain->SetBranchAddress("Pttot_TrackHWW", &Pttot_TrackHWW, &b_Pttot_TrackHWW);
   fChain->SetBranchAddress("METRel_noJets_TrackHWW", &METRel_noJets_TrackHWW, &b_METRel_noJets_TrackHWW);
   fChain->SetBranchAddress("MET_TrackHWW_Cl", &MET_TrackHWW_Cl, &b_MET_TrackHWW_Cl);
   fChain->SetBranchAddress("MET_x_TrackHWW_Cl", &MET_x_TrackHWW_Cl, &b_MET_x_TrackHWW_Cl);
   fChain->SetBranchAddress("MET_y_TrackHWW_Cl", &MET_y_TrackHWW_Cl, &b_MET_y_TrackHWW_Cl);
   fChain->SetBranchAddress("MET_phi_TrackHWW_Cl", &MET_phi_TrackHWW_Cl, &b_MET_phi_TrackHWW_Cl);
   fChain->SetBranchAddress("MinDPhi_TrackHWW_Cl", &MinDPhi_TrackHWW_Cl, &b_MinDPhi_TrackHWW_Cl);
   fChain->SetBranchAddress("MinDPhi_noJVF_TrackHWW_Cl", &MinDPhi_noJVF_TrackHWW_Cl, &b_MinDPhi_noJVF_TrackHWW_Cl);
   fChain->SetBranchAddress("METRel_TrackHWW_Cl", &METRel_TrackHWW_Cl, &b_METRel_Track_HWW_Cl);
   fChain->SetBranchAddress("METRel_x_TrackHWW_Cl", &METRel_x_TrackHWW_Cl, &b_METRel_x_TrackHWW_Cl);
   fChain->SetBranchAddress("METRel_y_TrackHWW_Cl", &METRel_y_TrackHWW_Cl, &b_METRel_y_TrackHWW_Cl);
   fChain->SetBranchAddress("DPhi_CaloTrackHWW_Cl", &DPhi_CaloTrackHWW_Cl, &b_DPhi_CaloTrackHWW_Cl);
   fChain->SetBranchAddress("MT_TrackHWW_Cl", &MT_TrackHWW_Cl, &b_MT_TrackHWW_Cl);
   fChain->SetBranchAddress("PtTrack_TrackHWW_Cl", &PtTrack_TrackHWW_Cl, &b_PtTrack_TrackHWW_Cl);
   fChain->SetBranchAddress("MTrans_TrackHWW_Cl", &MTrans_TrackHWW_Cl, &b_MTrans_TrackHWW_Cl);
   fChain->SetBranchAddress("Pttot_TrackHWW_Cl", &Pttot_TrackHWW_Cl, &b_Pttot_TrackHWW_Cl);
   fChain->SetBranchAddress("METRel_noJets_TrackHWW_Cl", &METRel_noJets_TrackHWW_Cl, &b_METRel_noJets_TrackHWW_Cl);
   fChain->SetBranchAddress("lepID", &lepID, &b_lepID0);
   fChain->SetBranchAddress("isMPP_ele", &isMPP_ele, &b_isMPP_ele);
   fChain->SetBranchAddress("isTPP_ele", &isTPP_ele, &b_isTPP_ele);
   fChain->SetBranchAddress("isIso_ele", &isIso_ele, &b_isIso_ele);
   fChain->SetBranchAddress("isD0_muon", &isD0_muon, &b_isD0_muon);
   fChain->SetBranchAddress("isIso_muon", &isIso_muon, &b_isIso_muon);
   fChain->SetBranchAddress("isIsoJet_muon", &isIsoJet_muon, &b_isIsoJet_muon);
   fChain->SetBranchAddress("lepMatch_EF_mu24i_tight_0", &lepMatch_EF_mu24i_tight_0, &b_lepMatch_EF_mu24i_tight_0);
   fChain->SetBranchAddress("lepMatch_EF_mu36_tight_0", &lepMatch_EF_mu36_tight_0, &b_lepMatch_EF_mu36_tight_0);
   fChain->SetBranchAddress("lepMatch_EF_e24vhi_medium1_0", &lepMatch_EF_e24vhi_medium1_0, &b_lepMatch_EF_e24vhi_medium1_0);
   fChain->SetBranchAddress("lepMatch_EF_e60_medium1_0", &lepMatch_EF_e60_medium1_0, &b_lepMatch_EF_e60_medium1_0);
   fChain->SetBranchAddress("lepMatch_EF_mu24i_tight", &lepMatch_EF_mu24i_tight, &b_lepMatch_EF_mu24i_tight);
   fChain->SetBranchAddress("lepMatch_EF_mu36_tight", &lepMatch_EF_mu36_tight, &b_lepMatch_EF_mu36_tight);
   fChain->SetBranchAddress("lepMatch_EF_e24vhi_medium1", &lepMatch_EF_e24vhi_medium1, &b_lepMatch_EF_e24vhi_medium1);
   fChain->SetBranchAddress("lepMatch_EF_e60_medium1", &lepMatch_EF_e60_medium1, &b_lepMatch_EF_e60_medium1);
   fChain->SetBranchAddress("vertexEventWeight", &vertexEventWeight, &b_vertexEventWeight);
   fChain->SetBranchAddress("vertexEventWeight_Pu1", &vertexEventWeight_Pu1, &b_vertexEventWeight_Pu1);
   fChain->SetBranchAddress("vertexEventWeight_Pu088", &vertexEventWeight_Pu088, &b_vertexEventWeight_Pu088);
   fChain->SetBranchAddress("pileupEventWeight", &pileupEventWeight, &b_pileupEventWeight);
   fChain->SetBranchAddress("pileupEventWeight_094", &pileupEventWeight_094, &b_pileupEventWeight_094);
   fChain->SetBranchAddress("pileupEventWeight_080", &pileupEventWeight_080, &b_pileupEventWeight_080);
   fChain->SetBranchAddress("pileupEventWeight_090", &pileupEventWeight_090, &b_pileupEventWeight_090);
   fChain->SetBranchAddress("pileupEventWeight_088", &pileupEventWeight_088, &b_pileupEventWeight_088);
   fChain->SetBranchAddress("pileupEventWeight_075", &pileupEventWeight_075, &b_pileupEventWeight_075);
   fChain->SetBranchAddress("pileupEventWeight_103", &pileupEventWeight_103, &b_pileupEventWeight_103);
   fChain->SetBranchAddress("higgsPtEventWeight", &higgsPtEventWeight, &b_higgsPtEventWeight);
   fChain->SetBranchAddress("higgsMEventWeight", &higgsMEventWeight, &b_higgsMEventWeight);
   fChain->SetBranchAddress("higgsPtError", &higgsPtError, &b_higgsPtError);
   fChain->SetBranchAddress("didEJoverlap", &didEJoverlap, &b_didEJOverlap);
   fChain->SetBranchAddress("didMJoverlap", &didMJoverlap, &b_didMJOverlap);
   fChain->SetBranchAddress("mcEventWeight", &mcEventWeight, &b_mcEventWeight);
   fChain->SetBranchAddress("mcEventWeightUp", &mcEventWeightUp, &b_mcEventWeightUp);
   fChain->SetBranchAddress("mcEventWeightDown", &mcEventWeightDown, &b_mcEventWeightDown);
   fChain->SetBranchAddress("tauPolWeight", &tauPolWeight, &b_tauPolWeight);
   fChain->SetBranchAddress("mcWeightOrg", &mcWeightOrg, &b_mcWeightOrg);
   fChain->SetBranchAddress("trigEventWeight", &trigEventWeight, &b_trigEventWeight);
   fChain->SetBranchAddress("lepTrigSFEventWeight", &lepTrigSFEventWeight, &b_lepTrigSFEventWeight);
   fChain->SetBranchAddress("lepTrigSFEventWeightUp", &lepTrigSFEventWeightUp, &b_lepTrigSFEventWeightUp);
   fChain->SetBranchAddress("lepTrigSFEventWeightDown", &lepTrigSFEventWeightDown, &b_lepTrigSFEventWeightDown);
   fChain->SetBranchAddress("lepTrigSF0EventWeight", &lepTrigSF0EventWeight, &b_lepTrigSF0EventWeight);
   fChain->SetBranchAddress("lepTrigSF0Error", &lepTrigSF0Error, &b_lepTrigSF0Error);
   fChain->SetBranchAddress("lepSF0EventWeight", &lepSF0EventWeight, &b_lepSF0EventWeight);
   fChain->SetBranchAddress("lepSF0Error", &lepSF0Error, &b_lepSF0Error);
   fChain->SetBranchAddress("lepSF0ErrorIso", &lepSF0ErrorIso, &b_lepSF0ErrorIso);
   fChain->SetBranchAddress("lepSF0ErrorSys", &lepSF0ErrorSys, &b_lepSF0ErrorSys);
   fChain->SetBranchAddress("MV1_value", &MV1_value, &b_MV1_value);
   fChain->SetBranchAddress("MV1_EventWeight", &MV1_EventWeight, &b_MV1_EventWeight);
   fChain->SetBranchAddress("MV1_EventWeightUp", &MV1_EventWeightUp, &b_MV1_EventWeightUp);
   fChain->SetBranchAddress("MV1_EventWeightDown", &MV1_EventWeightDown, &b_MV1_EventWeightDown);
   fChain->SetBranchAddress("MV1_VetoEventWeight", &MV1_VetoEventWeight, &b_MV1_VetoEventWeight);
   fChain->SetBranchAddress("MV1_VetoEventWeightUp", &MV1_VetoEventWeightUp, &b_MV1_VetoEventWeightUp);
   fChain->SetBranchAddress("MV1_VetoEventWeightDown", &MV1_VetoEventWeightDown, &b_MV1_VetoEventWeightDown);
   fChain->SetBranchAddress("Nvxp", &Nvxp, &b_Nvxp);
   fChain->SetBranchAddress("bpos", &bpos, &b_bpos);
   fChain->SetBranchAddress("blen", &blen, &b_blen);
   fChain->SetBranchAddress("bgap", &bgap, &b_bgap);
   fChain->SetBranchAddress("truth_sherpa_Wpt", &truth_sherpa_Wpt, &b_truth_sherpa_Wpt);
   fChain->SetBranchAddress("RunNumber", &RunNumber, &b_RunNumber);
   fChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);
   fChain->SetBranchAddress("lbn", &lbn, &b_lbn);
   fChain->SetBranchAddress("bcid", &bcid, &b_bcid);
   fChain->SetBranchAddress("actualIntPerXing", &actualIntPerXing, &b_actualIntPerXing);
   fChain->SetBranchAddress("averageIntPerXing", &averageIntPerXing, &b_averageIntPerXing);
   fChain->SetBranchAddress("mc_channel_number", &mc_channel_number, &b_mc_channel_number);
   fChain->SetBranchAddress("larError", &larError, &b_larError);
   fChain->SetBranchAddress("m_el_n", &m_el_n, &b_m_el_n);
   fChain->SetBranchAddress("m_el_E", &m_el_E, &b_m_el_E);
   fChain->SetBranchAddress("m_el_pt", &m_el_pt, &b_m_el_pt);
   fChain->SetBranchAddress("m_el_eta", &m_el_eta, &b_m_el_eta);
   fChain->SetBranchAddress("m_el_phi", &m_el_phi, &b_m_el_phi);
   fChain->SetBranchAddress("m_el_charge", &m_el_charge, &b_m_el_charge);
   fChain->SetBranchAddress("m_el_trackd0pv", &m_el_trackd0pv, &b_m_el_trackd0pv);
   fChain->SetBranchAddress("m_el_tracksigd0pv", &m_el_tracksigd0pv, &b_m_el_tracksigd0pv);
   fChain->SetBranchAddress("m_mu_n", &m_mu_n, &b_m_mu_n);
   fChain->SetBranchAddress("m_mu_E", &m_mu_E, &b_m_mu_E);
   fChain->SetBranchAddress("m_mu_pt", &m_mu_pt, &b_m_mu_pt);
   fChain->SetBranchAddress("m_mu_eta", &m_mu_eta, &b_m_mu_eta);
   fChain->SetBranchAddress("m_mu_phi", &m_mu_phi, &b_m_mu_phi);
   fChain->SetBranchAddress("m_mu_charge", &m_mu_charge, &b_m_mu_charge);
   fChain->SetBranchAddress("m_mu_matchchi2", &m_mu_matchchi2, &b_m_mu_matchchi2);
   fChain->SetBranchAddress("m_mu_matchndof", &m_mu_matchndof, &b_m_mu_matchndof);
   fChain->SetBranchAddress("m_mu_energyLossPar", &m_mu_energyLossPar, &b_m_mu_energyLossPar);
   fChain->SetBranchAddress("m_mu_etCore", &m_mu_etCore, &b_m_mu_etCore);
   fChain->SetBranchAddress("m_mu_id_d0_exPV", &m_mu_id_d0_exPV, &b_m_mu_id_d0_exPV);
   fChain->SetBranchAddress("m_mu_id_theta_exPV", &m_mu_id_theta_exPV, &b_m_mu_id_theta_exPV);
   fChain->SetBranchAddress("m_mu_id_qoverp_exPV", &m_mu_id_qoverp_exPV, &b_m_mu_id_qoverp_exPV);
   fChain->SetBranchAddress("m_mu_me_theta_exPV", &m_mu_me_theta_exPV, &b_m_mu_me_theta_exPV);
   fChain->SetBranchAddress("m_mu_me_qoverp_exPV", &m_mu_me_qoverp_exPV, &b_m_mu_me_qoverp_exPV);
   fChain->SetBranchAddress("m_mu_id_cov_d0_exPV", &m_mu_id_cov_d0_exPV, &b_m_mu_id_cov_d0_exPV);
   fChain->SetBranchAddress("m_jet_n", &m_jet_n, &b_m_jet_n);
   fChain->SetBranchAddress("m_jet_E", &m_jet_E, &b_m_jet_E);
   fChain->SetBranchAddress("m_jet_pt", &m_jet_pt, &b_m_jet_pt);
   fChain->SetBranchAddress("m_jet_eta", &m_jet_eta, &b_m_jet_eta);
   fChain->SetBranchAddress("m_jet_phi", &m_jet_phi, &b_m_jet_phi);
   fChain->SetBranchAddress("m_jet_LArQuality", &m_jet_LArQuality, &b_m_jet_LArQuality);
   fChain->SetBranchAddress("m_jet_sumPtTrk", &m_jet_sumPtTrk, &b_m_jet_sumPtTrk);
   fChain->SetBranchAddress("m_jet_jvtxf", &m_jet_jvtxf, &b_m_jet_jvtxf);
   fChain->SetBranchAddress("m_jet_flavor_weight_MV1", &m_jet_flavor_weight_MV1, &b_m_jet_flavor_weight_MV1);
   fChain->SetBranchAddress("m_jet_flavor_truth_label", &m_jet_flavor_truth_label, &b_m_jet_flavor_truth_label);
   fChain->SetBranchAddress("m_vxp_n", &m_vxp_n, &b_m_vxp_n);
   fChain->SetBranchAddress("m_vxp_nTracks", &m_vxp_nTracks, &b_m_vxp_nTracks);
   fChain->SetBranchAddress("m_mcevt_pdf_id1", &m_mcevt_pdf_id1, &b_m_mcevt_pdf_id1);
   fChain->SetBranchAddress("m_mcevt_pdf_id2", &m_mcevt_pdf_id2, &b_m_mcevt_pdf_id2);
   fChain->SetBranchAddress("m_mcevt_pdf_x1", &m_mcevt_pdf_x1, &b_m_mcevt_pdf_x1);
   fChain->SetBranchAddress("m_mcevt_pdf_x2", &m_mcevt_pdf_x2, &b_m_mcevt_pdf_x2);
   fChain->SetBranchAddress("m_mcevt_pdf_scale", &m_mcevt_pdf_scale, &b_m_mcevt_pdf_scale);
}

Bool_t selectorZee::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef selectorZee_cxx

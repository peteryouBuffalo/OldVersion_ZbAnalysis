#ifndef Obj_cxx
#define Obj_cxx

//The objects are wrapper so that the analysis is independent on variable name on the ntuple, only when the objects are created such dependences occur 

#include "TLorentzVector.h"

//-------------------------------objs------------------------------
class LepObj {

  public:
    
    LepObj(float pt, float eta, float phi, float mass, 
           float iso) : m_iso(iso) { 
             m_lvec.SetPtEtaPhiM(pt, eta, phi, mass) ; 
    } ;

    virtual ~LepObj() {} ;

    TLorentzVector m_lvec ; 
    
    float m_iso ;
    
} ;

class JetObj {
  
  public:
    
    JetObj(float pt, float eta, float phi, float mass, 
           float deepCSV) : m_deepCSV(deepCSV) {
              m_lvec.SetPtEtaPhiM(pt, eta, phi, mass) ; 
    } ;

    virtual ~JetObj() {} ;
    
    TLorentzVector m_lvec ;
    float m_deepCSV ;
} ;

class ZObj {
  
  public:
    
    ZObj(LepObj lep0, LepObj lep1) : m_lep0(lep0), m_lep1(lep1) {
      m_lvec = m_lep0.m_lvec + m_lep1.m_lvec ;
    } ;

    virtual ~ZObj() {} ;
    
    TLorentzVector m_lvec ;
    LepObj m_lep0 ;
    LepObj m_lep1 ;

} ;

#endif

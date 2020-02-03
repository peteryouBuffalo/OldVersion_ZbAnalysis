#ifndef Selector_h
#define Selector_h

#include "Reader.h"

//Base class for all selectors
class Selector
{
  public:
    //const member needs to be initialized in intialisation list meaning m_isData(isData)
    Selector(bool isData=false) : m_isData(isData) {} ;
    virtual ~Selector() {} ;
    // These methods are called at the corresponding stage of processing of TSelector
  virtual void SlaveBegin(Reader* r) {} ;
  virtual void Process(Reader* r) ;
  virtual void SlaveTerminate(Reader* r) {} ;
  virtual void Terminate(TList* mergedList, std::string outFileName) {} ; //outFileName is used to write parameter, like cuts, to output file
  const bool m_isData ;
};
#endif

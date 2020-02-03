#ifndef Global_h
#define Global_h

#include <iostream>
#include <algorithm>
#include <vector>

namespace glob {
  const float M_ElE(0.000511) ; //GeV
  const float M_MUON(0.105658) ; //GeV
  
  class Parameters {
    
    public:
      
      Parameters() {
        parameterNames.push_back("lep_pt") ;
        parameterNames.push_back("lep_eta") ;
      } ;
      
      //passing a constant string https://stackoverflow.com/questions/4475634/c-pass-a-string
      //template<class T> T Get(const std::string& name) ;
      //template<class T> void Set(const std::string& name, T val) ;
      template<class T> T Get(const std::string& name) {
        if (std::count(parameterNames.begin(),parameterNames.end(),name)) {
          if (name == "lep_pt") return lep_pt ;
          if (name == "lep_eta") return lep_eta ;
        }
        else {
          std::cout << "\n There is no parameter " << name << ". Will terminate" << std::endl ;
          exit(1) ; 
        }
        return 0 ;
      } ;

      template<class T> void Set(const std::string& name, T val) {
        if (std::count(parameterNames.begin(),parameterNames.end(),name)) {
          if (name == "lep_pt") lep_pt = val;
          if (name == "lep_eta") lep_eta = val;
        }
        else std::cout << "\n Can not set value for parameter named: " << name << ". Not exist in list of parameters " << std::endl; 
      } ;


    private:
      float lep_pt ;
      float lep_eta ;
      std::vector<std::string> initializedVars ;
      std::vector<std::string> parameterNames ;

  } ;
  
  /*
  template<class T> T Parameters<T>::Get(const std::string& name) {
        T  returnVal ;
        if (std::count(parameterNames.begin(),parameterNames.end(),name)) {
          if (name == "lep_pt") returnVal = lep_pt ;
          if (name == "lep_eta") returnVal = lep_eta ;
        }
        else {
          std::cout << "\nThere is no parameter " << name << std::endl ;
          returnVal = name ;
        }
        return returnVal ;
  }
  */



}

//http://www.cplusplus.com/forum/unices/5784/
extern glob::Parameters CUTS ;

#endif

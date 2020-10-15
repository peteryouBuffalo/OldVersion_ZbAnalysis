void getHistList(std::string filename)
{
  //--- Get the file --------------------------------------------------------//

  TFile *f = new TFile(filename.c_str(), "UPDATE");

  //--- Get the list of histograms ------------------------------------------//

  TIter next(f->GetListOfKeys());
  TKey* key;
  int nhist = 0;
  
  while (key=(TKey*)next())
  {
    nhist++;
    std::cout << "Key " << nhist << std::endl;
    std::cout << "Classname " << key->GetClassName() << std::endl; 
    std::cout << "Name " << key->GetName() << std::endl;
  }
}

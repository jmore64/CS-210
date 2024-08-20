#ifndef BANKAPP_H
#define BANKAPP_H

#include <string>
using namespace std;

class Banking {
   
public:
  Banking::Banking(); //Constructor
  
  //Getters and Setters
  
  void SetInitialinvest(string Initialinvest); 
  double GetInitialinvest() const; 
  
  void SetmonthDeposit(int monthDeposit); 
  double GetmonthDeposit() const; 
  
  void SetAnnualInt(int AnnualInt); 
  double GetAnnualInt() const;

  void SetYears(int Years); 
  int GetYears() const; 

private:
  double Initialinvest;
  double monthDeposit;
  double AnnualInt;
  int Years;
};

#endif
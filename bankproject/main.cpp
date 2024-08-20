#include <iostream>
using namespace std;

#include "bankapp.h"

int main() {
   
Banking
   float initialinvest, monthDeposit, AnnualInt, Years, Months;
   float totalAmount, initialAmount, yearTotalInvest;

  //display
  cout << "******************************" << endl;
  cout << "**********Data Input**********" << endl;
  cout << "Initial Investment Amount: " << endl;
  cout << "Monthly Deposit: " << endl;
  cout << "Annual Interest: " << endl;
  cout << "Number of years: " << endl;
  
  getline(cin, Initialinvest);
  menu.SetInitialinvest(Initialinvest);
  cout << "Enter the Initial Investment Amount: $" << endl;
  
  cin >> monthDeposit;
  menu.SetmonthDeposit(monthDeposit);
  cout << "Enter the Monthly Deposit: $" << endl
  
  
  cin >> AnnualInt;
  menu.SetAnnualInt(AnnualInt);
  cout << "Enter the Annual Interest: %" << endl;

  cin >> Years;
  menu.SetYears(Years);
  cout << "Enter the Number of Years: "; << endl;
  Months = Years * 12;
  totalAmount = Initialinvest //total amount from initial investment that will update

  cout << "Balance and Interest without Additional Monthly Deposits" << endl;
  cout << "========================================================" << endl;
  cout << "Year | Year End Balance |  Year End Earned Interest" << endl;

  //calculations
  for (int a = 0; a < years; a++) {
    totalyearInterest = 0; // set to start at zero

    for (int b = 0; b < 12; b++) {
        initialAmount = (totalAmount + monthDeposit) * ((AnnualInt / 100) / 12); //this is monthly interest
        totalyearInterest = totalyearInterest + initialAmount; //this is end of the month interest
        totalAmount = totalAmount + monthDeposit + initialAmount; //this is the end of the month total
}
        cout << (a + 1) << " $" << fixed << setprecision(2) << totalAmount << " $" << Totalyearinvest << endl; 
  }
  return 0;
}
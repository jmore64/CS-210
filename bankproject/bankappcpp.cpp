#include <iostream>
using namespace std;

#include "bankapp.h"

Banking::Banking() {
  Initialinvest = 0.0;
  monthDeposit = 0.0;
  AnnualInt = 0.0;
  Years = 0;
}

void Banking::SetInitialinvest(string Initialinvest) {
  Initialinvest = Initialinvest;
}

double Banking::GetInitialinvest() const {
  return Initalinvest;
}

void Banking::SetmonthDeposit(int monthDeposit) {
  monthDeposit = monthDeposit;
}

double Banking::GetmonthDeposit() const {
  return monthDeposit;
}

void Banking::SetAnnualInt(int AnnualInt) {
  AnnualInt = AnnualInt;
}

double Banking::GetAnnualInt() const {
  return AnnualInt;
}

void Banking::SetYears(int Years) {
  Years = Years;
}

int Banking::GetYears() const {
  return Years;
}


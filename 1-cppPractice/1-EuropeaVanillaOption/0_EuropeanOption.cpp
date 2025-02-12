#ifndef VANILLA_OPTION_CPP_
#define VANILLA_OPTION_CPP_

#include "0_EuropeanOption.h"
#include <cmath>

void VanillaOption::init() {
  k = 100; /
  r = 0.05; //interest rate
  T = 1.0; //one year until maturity
  S = 100.0; //spot equal strike
  sigma = 0.2; //volatility 20%
}


#endif
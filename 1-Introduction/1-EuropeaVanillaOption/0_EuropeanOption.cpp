#include "0_EuropeanOption.h"
#include <cmath>

void VanillaOption::init() {
  k = 100; 
  r = 0.05; //interest rate
  T = 1.0; //one year until maturity
  S = 100.0; //spot equal strike
  sigma = 0.2; //volatility 20%
}
void VanillaOption::copy(const VanillaOption &other) {
  k = other.getK();
  r = other.getR();
  T = other.getT();
  S = other.getS();
  sigma = other.getSigma();
}

VanillaOption::VanillaOption(const double & _K, const double & _R, const double & _T,
                             const double & _S, const double & _sigma) {
  k = _K;
  r=_R;
  T=_T;
  S=_S;
  sigma=_sigma;
}

VanillaOption::VanillaOption(const VanillaOption & other){
  copy(other);
}

VanillaOption & VanillaOption::operator=(const VanillaOption &other) {
  if (&other == this) {
    return *this;
  }
  copy(other);
  return *this;
}
VanillaOption::~VanillaOption() {
  //No deallocation needed
}
double VanillaOption::getK ( ) const { return k; }
double VanillaOption::getR ( ) const { return r; }
double VanillaOption::getT ( ) const { return T; }
double VanillaOption::getS ( ) const { return S; }
double VanillaOption::getSigma ( ) const { return sigma; }


double VanillaOption::calculate_call_price() const {

  double sigma_sqrt_T = sigma * sqrt(T);

  double d1 = ( log(S/k) + (r + sigma*sigma*0.5)*T);

  double d2 = d1 - sigma_sqrt_T;

  return S*N(d1)-k*exp(-r*T)*N(d2);

  return 0.0;

}

double VanillaOption::calculate_put_price() const {

  double sigma_sqrt_T = sigma * sqrt(T);

  double d1 = ( log(S/k) + (r + sigma*sigma*0.5)*T);

  double d2 = d1 - sigma_sqrt_T;

  return k*exp(-r*T)*N(-d2)-S*N(-d1);

  return 0.0;

}

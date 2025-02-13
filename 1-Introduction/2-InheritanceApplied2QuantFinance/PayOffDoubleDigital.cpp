#include "PayOffDoubleDigital.h"

PayOffCallDigital::PayOffCallDigital(const double U_,const double D_):UpperBarrier(U_),DownBarrier(D_){}


double PayOffCallDigital::operator()(const double S) const{
  if (S >= DownBarrier && S <= UpperBarrier) {
    return 1.0;
  } else {
    return 0.0;
  }
}
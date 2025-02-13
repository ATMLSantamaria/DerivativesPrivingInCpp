#pragma once

#include "PayOff.h"


// Remeber -> Digital Call Options are Calls with a fix pay out.
// If call price exceeds strike price -> you receive a fix payout.
class PayOffCallDigital : PayOff {

private:
  double UpperBarrier;
  double DownBarrier;

public:

  PayOffCallDigital(const double U_,const double D_);
  virtual ~PayOffCallDigital();

  //PayOff is 1 if  spot within strike barriers, 0 otherwise
  virtual double  operator()(const double S) const;
};
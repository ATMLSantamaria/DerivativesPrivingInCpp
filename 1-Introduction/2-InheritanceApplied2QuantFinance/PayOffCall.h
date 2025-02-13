#pragma once
#include "PayOff.h"

class PayOffCall : public PayOff {
private:

  //strike price
  double k;

public:
  // No default constructor
  PayOffCall(const double K_);

  // Destructor Virtual for further inheritance
  ~PayOffCall() override;

  double operator()(const double S) const override;

};
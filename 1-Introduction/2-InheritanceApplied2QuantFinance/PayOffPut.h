#pragma once
#include "PayOff.h"

class PayOffPut : public PayOff {
private:

  //strike price
  double k;

public:
  // No default constructor
  PayOffPut(const double K_);

  // Destructor Virtual for further inheritance
  ~PayOffPut() override;

  double operator()(const double S) const override;

};
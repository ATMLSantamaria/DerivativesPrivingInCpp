#pragma once

#include <algorithm>

class PayOff {
public:
  virtual ~PayOff() = default;

  //Now we overload the () operator, making this class a functor
  virtual double operator() (const double S) const = 0;
private:
};
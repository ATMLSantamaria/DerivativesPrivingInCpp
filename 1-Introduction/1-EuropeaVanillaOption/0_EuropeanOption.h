#pragma once

#include <cmath>

class VanillaOption {
  
private:
  void init();

  void copy(const VanillaOption &rhs);

  //strike price
  double k;

  //Interest Rate ("risk free rate")
  double r;

  //Expiry time of the option, T
  double T;

  //Underlying asset price, S
  double S;

  //Volatility of the underlying
  double sigma;


public:

  //Default constructor
  VanillaOption();

  //Parameter constructor
  VanillaOption(const double & _K, const double & _R, const double & _T,
                const double & _S, const double & _sigma);

  //Copy Constructor
  VanillaOption(const VanillaOption & target);

  //Assigment Operator
  VanillaOption& operator=(const VanillaOption & target);

  //Destructor
  virtual ~VanillaOption();

  double getK() const;

  double getR() const;

  double getT() const;

  double getS() const;

  double getSigma() const;

  // Option price calculation method

  double calculate_call_price() const;

  double calculate_put_price() const;


};



//standard normal CDF using the C++ Standard Library's erf function
double N(double a) {
    return 0.5 * (1 + std::erf(a / std::sqrt(2.0)));
}







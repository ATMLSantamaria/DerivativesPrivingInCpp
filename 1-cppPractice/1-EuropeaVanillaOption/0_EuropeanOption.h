#ifndef VANILLA_OPTION_H
#define VANILLA_OPTION_H



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
                const double & _S, const double & _Sigma);

  //Copy Constructor
  VanillaOption(const VanillaOption & target);

  //Assigment Operator
  VanillaOption& operator=(const VanillaOption & target);

  //Destructor
  virtual ~VanillaOption();

  double getK();

  double getR();

  double getT();

  double getS();

  double getSigma();

  // Option price calculation method

  double calculate_call_price();

  double calculate_put_price();


};








#endif
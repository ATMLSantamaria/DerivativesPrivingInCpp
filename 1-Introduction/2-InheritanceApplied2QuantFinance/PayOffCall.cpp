#include "PayOffCall.h"


PayOffCall::PayOffCall(const double K_){
    k = K_;
  };

PayOffCall::~PayOffCall(){

}

double PayOffCall::operator()(const double S) const {
  //Pay Off is the Strike price - price. Standard European Pay Off
  return std::max(S-k,0.0);
  }

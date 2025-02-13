#include "PayOffPut.h"


PayOffPut::PayOffPut(const double K_){
    k = K_;
  };

PayOffPut::~PayOffPut(){

}

double PayOffPut::operator()(const double S) const {
  return std::max(k-S,0.0);
  }

#pragma once


#include <vector>

template<typename Type = double>
class SimpleMatrix {
private:
  std::vector<std::vector<Type>> mat;
  int rows;
  int cols;

public:
  SimpleMatrix();

  SimpleMatrix(const int &rows, const int &cols, const Type& val){
    for(int i = 0;i<rows;++i){
      std::vector<Type> col_vec(cols,val);
      mat.push_back(col_vec);
    }
  }

  SimpleMatrix(const SimpleMatrix<Type> &other):mat(other.mat),rows(other.mat),cols(other.cols) {}

  SimpleMatrix<Type>& operator=(const SimpleMatrix<Type>&other) {
    //We dont have any pointer or internal resource so we can keep it simple
    if (*this == other) return *this;
    mat = other.get_mat();
    return *this;
  }

  //no memory allocations so no need of any special implementation of th destructor
  virtual ~SimpleMatrix()=default ;

  //get the content of the Matrix
  std::vector<std::vector<Type>>get_mat() const {return mat;};

  //Get a i,j value (row,col)
  Type & value (const int &row, const int& col) {
    return mat[row][col];
  }
};


template<typename Type>
SimpleMatrix<Type>::SimpleMatrix() {

}













//default value double
template<typename T = double> 
class Matrix {

};
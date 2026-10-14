#include<iostream>
using namespace std;

class Complex{
public :
    double re, im;
public:
    Complex(double r=0, double i=0): re(r), im(i) {}
    Complex operator+(const Complex &o){
        return Complex(re + o.re, im + o.im);
    }
    bool operator==(const Complex &o){
        return re == o.re && im == o.im;
    }
  friend ostream& operator<<(ostream &os, const Complex &c){
        os << c.re << (c.im >= 0 ? "+" : "") << c.im << "i";
        return os;

    }
};

int main(){
  Complex a(2,3) , b(1,-4);
  cout <<"a = " << a << ", b = "  << b << endl;  
  cout <<"a + b = " << (a + b) << endl;
  cout <<"a == b ? " << (a == b ? "true" : "false") << endl;
  return 0;
}
/*Create a class Complex having two int type variable named real & img denoting real and imaginary part respectively of a complex number. Overload +, - , == operator to add, to subtract and to compare two complex numbers being denoted by the two complex type objects*/
#include<iostream>
using namespace std;
class Complex
{
  int real;
  int img;
  public:
  Complex()
  {

  }
  Complex(int real,int img)
  {
    this->real=real;
    this->img=img;
  }
  Complex operator+(Complex C)
  {
    Complex C4;
    C4.real=real+C.real;
    C4.img=img+C.img;
    return C4;
  }
  Complex operator-(Complex C)
  {
    Complex C4;
    C4.real=real-C.real;
    C4.img=img-C.img;
    return C4;
  }
  Complex operator==(Complex C)
  {
    Complex C4;
    C4.real=real==C.real;
    C4.img=img==C.img;
    return C4;
  }
  void display()
  {
    cout<<real<<'+'<<img<<'i'<<endl;
  }
};
int main()
{
  Complex C1(6,8),C2(5,6),C3;
  C3=C1+C2;
  C3.display();
  C3=C1-C2;
  C3.display();
  C1==C2;
  return 0;
}

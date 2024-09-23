/*Using the concept of operator overloading. Implement a program to overload the following:
a. Unary –
b. Unary ++ preincrement, postincrement
c. Unary -- predecrement, postdecrement*/
#include<iostream>
using namespace std;
class Unary{
 int num=5;
 public:
  Unary operator++()
  {
    num++;
  }
  Unary operator++(int val)
  {
    num++;
  }
  Unary operator--()
  {
    num--;
  }
  Unary operator--(int val)
  {
    num--;
  }
  Unary operator-()
  {
    if(num<0)
    {
      num=-1*num;
    }
    else
    {
      num=-num;
    }
  }
};
int main()
{
   Unary U;
   U++;
   ++U;
   U--;
   --U;
  return 0;
}
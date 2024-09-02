#include<iostream>
using namespace std;
namespace pri{
int sum(int x,int y)
 {return x+y;}
int sub(int x,int y)
 {return x-y;}
}
namespace myspace{
  int x=10;
  void show()
   {
    cout<<"show "<<x;
   }
}
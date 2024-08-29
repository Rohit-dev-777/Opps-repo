#include<iostream>
using namespace std;
class Hotel
{
  int Rno;
  string Name;
  float Tariff;
  int NOD;
  float CALC()
  {
    if((NOD*Tariff)>10000)
     {
       return (1.05)*(NOD*Tariff);
     }
    else
      {
        return NOD*Tariff;
      }
  }
  public:
  void Checkin(int Rno,string Name,float Tariff,int NOD)
  {
    this-> Rno=Rno;
    this-> Name=Name;
    this-> Tariff=Tariff;
    this-> NOD=NOD;
  }
  void Checkout()
  {
    cout<<"Room no.       :"<<Rno<<endl;
    cout<<"Customer Name  :"<<Name<<endl;
    cout<<"Per day charge :"<<Tariff<<endl;
    cout<<"Number of days :"<<NOD<<endl;
    cout<<"Amount         :"<<CALC()<<endl;
  }
};
int main()
{
  int Rno;
  string Name;
  float Tariff;
  int NOD;
  cout<<"Enter Room no.       :";cin>>Rno;
  cout<<"Enter Customer Name  :";cin>>Name;
  cout<<"Enter Per day charge :";cin>>Tariff;
  cout<<"Enter Number of days :";cin>>NOD;
  Hotel C;
  C.Checkin(Rno,Name,Tariff,NOD);
  C.Checkout();
  return 0;
}
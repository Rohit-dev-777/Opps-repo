#include<iostream>
using namespace std;
class BanckAcc
{
  string Name;
  long long int AccNo;
  string Type;
  double Balance;
  public:
  void detail(string Name,long long int AccNo,string Type,float Balance)
  {
    this->Name=Name;
    this->AccNo=AccNo;
    this->Type=Type;
    this->Balance=Balance;
  }
  void deposit(int amount)
  {
    Balance+=amount;
  }
  void withdraw(int amount)
  {
    if(amount<Balance)
     {
       Balance-=amount;
     }
    else
     cout<<"Your balance is too low.."<<endl;
  }
  void display()
  {
    cout<<"Name   : "<<Name<<endl;
    cout<<"Balance: "<<Balance<<endl;
  }
 long long int  getAccNo()
  {
    return AccNo;
  }
};
int main()
{
  int num, flag=0;
  string Name;
  long long int AccNo;
  string Type;
  cout<<"Enter number of customer: ";cin>>num;
  BanckAcc C[num];
  for(int i=0;i<num;i++)
  {
  cout<<"Enter Name: ";cin>>Name;
  cout<<"Enter Account number: ";cin>>AccNo;
  cout<<"Enter Type of Account(Saving or Current): ";cin>>Type;
  C[i].detail(Name,AccNo,Type,0.00);
  }
  int n;
  long long int acc;
  cout<<"Enter Account number to grab your detail:";cin>>acc;
  for(int i=0;i<num;i++)
  {
    if(acc==C[i].getAccNo())
    {
      flag=1;
  cout<<"Enter your choice(For Deposite(1), For Withdraw(2)):";cin>>n;
  switch(n)
  {
     case 1: int damount;
         cout<<"Enter the amount :";cin>>damount;
         C[i].deposit(damount);
         C[i].display();
        break;
     case 2:int wamount;
         cout<<"Enter the amount :";cin>>wamount;
         C[i].withdraw(wamount);  
         C[i].display();
        break;
     default: cout<<"Invalid choice";
  }
  break;
    }
  }
  if(flag=0)
  {
    cout<<"Invalid Account number..";
  }
}

/*Imagine a tollbooth with a class called TollBooth. The two data items are of type
unsigned int and double to hold the total number of cars and total amount of money
collected. A constructor initializes both of these data members to 0. A member
function called payingCar( )increments the car total and adds 0.5 to the cash total.
Another function called nonPayCar( ) increments the car total but adds nothing to
the cash total. Finally a member function called display( )shows the two totals.
Include a program to test this class. This program should allow the user to push one
key to count a paying car and another to count a non paying car. Pushing the ESC
key should cause the program to print out the total number of cars and total cash
and then exit.*/
#include<iostream>
using namespace std;
class TollBooth{
  unsigned int numcar;
  double money;
  public:
  TollBooth ()
  {
    numcar=0;
    money=0;
  }
  void payingCar()
  {
    numcar++;
    money+=0.5;
  }
  void nonPayCar()
  {
    numcar++;
  }
  void display()
  {
    cout<<"\nTotal number of cars :"<<numcar;
    cout<<"\nTotal money :"<<money;
  }
};
int main()
{
  int key;
  TollBooth Obj;
  while(1)
  {
    cout<<"Enter your key (1:Paying, 0:nonpaying ,2:print):";cin>>key;
  switch(key)
  {
    case 0:Obj.nonPayCar();
    break;
    case 1:Obj.payingCar();
    break;
    case 2:Obj.display();
    return 0;
    break;
    default :cout<<"Invalid choice:";
      
  }
  }
  return 0;
}
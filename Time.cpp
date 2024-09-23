/*Create a class called Time that has separate int member data for hours, minutes and
seconds. One constructor should initialize this data to 0, and another should
initialize it to fixed values. A member function should display it in 11:59:59 format.
A member function named add() should add two objects of type time passed as
arguments. A main ( ) program should create two initialized values together, leaving
the result in the third time variable. Finally it should display the value of this third
variable.*/
#include<iostream>
using namespace std;
class Time {
 int hours;
 int minutes;
 int seconds;
 public:
  Time()
  {
    hours=0;
    minutes=0;
    seconds=0;
  }
  Time(int hours,int minutes,int seconds)
  {
    this->hours=hours;
    this->minutes=minutes;
    this->seconds=seconds;
  }
  Time operator+ (Time t)
  {
    Time t2;
    t2.seconds=seconds+t.seconds;
    while(t2.seconds>59)
    {
      t2.seconds=t2.seconds-60;
      minutes=minutes+1;
      if(t2.seconds<60)
      {
        break;
      }
    }
    t2.minutes=minutes+t.minutes;
    while(t2.minutes>59)
    {
      t2.minutes=t2.minutes-60;
      hours=hours+1;
      if(t2.minutes<60)
      {
        break;
      }
    }
    t2.hours=hours+t.hours;
    return t2;
  }
  void display()
  {
    cout<<hours<<":"<<minutes<<":"<<seconds;
  }
};
int main()
{ Time Obj1(12,43,62),Obj2(13,46,63),Obj3;
   Obj3=Obj1+Obj2;
   Obj3.display();
  return 0;
}
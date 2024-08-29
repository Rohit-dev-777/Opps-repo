/*An electricity board charges the following rates to domestic users discourage large consumption of energy. For the first 100 units: 60 P per unit

For the next 200 units: -80 P per unit

Beyond 300 units: -90 P per unit

All users are charged a minimum of Rs 50 if the total amount is more thar Rs 300 then an additional surcharge of 15% is added.

Implement a C++ program to read the names of users and number of unit consumed and display the charges with names
*/
#include<iostream>
using namespace std;
class EBoard
{
 string name;
 int unit;
 float charges=56.78;
  public:
  void setname(string name)
  {
    this-> name=name;
  }
  void setunit(int unit)
  {
    this-> unit=unit;
  }
 int display()
  {
    cout<<"Name    : "<<name<<endl;
    cout<<"Unit    : "<<unit<<endl;
    cout<<"Charges : "<<charges<<endl;
  }
float cost()
{ 
  if(unit==50)
  {
    charges=50;
  }
  else if(unit<=100)
  {
    charges=50+unit*60;
  }
  else if(unit<=300 && unit>100)
  {
    charges=50+(unit-100)*80 + (100*60);
  }
  else
  {
    charges=(50+(unit-300)*90 +(100*60)+ (200*80)) + ((0.15)*(50+(unit-300)*90 +(100*60)+ (200*80)));
  }
}
};

int main()
{
  int unit;
  string name;
   EBoard C;
     cout<<"Enter name : ";cin>>name;
     cout<<"Enter unit : ";cin>>unit;
      C.setname(name);
      C.setunit(unit);
     C.cost();
     C.display();
  
  return 0;
}
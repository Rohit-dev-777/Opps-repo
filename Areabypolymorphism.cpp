/*Construct a Program in C++ to show the working of function overloading(compile
time polymorphism) by using a function named calculate Area () to calculate area
of square, rectangle and triangle using different signatures as required.*/
#include<iostream>
#include<cmath>
using namespace std;
class Shape{
  float area;
 public:
 void calculatearea(int size)
 {
   area=size*size;
 }
 void calculatearea(int len,int width)
 {
   area=(len*width);
 }
 void calculatearea(int a,int b,int c)
 {
  int s=(a+b+c)/2.0;
   area=sqrt(s*(s-a)*(s-b)*(s-c));
 }
 void display ()
 {
  cout<<"Area: "<<area;
 }
};
int main()
{
  int num;
  int i=0;
  Shape shape;
  cout<<"Enter your choice for area(1:square, 2:rectangle , 3:triangel): ";
  cin>>num;
  switch(num)
  {
    case 1:int size;
        cout<<"Enter the side :";
        cin>>size;
       shape.calculatearea(size);
       break;
    case 2:int length,width;
        cout<<"Enter the sides :";
        cin>>length,width;
       shape.calculatearea(length,width);
       break;
    case 3:int a,b,c;
     cout<<"Enter the sides :";
        cin>>a>>b>>c;
        shape.calculatearea(a,b,c);
       break;
      default : cout<<"Invalid choice.. ";
  }
  shape.display();
  return 0;
}
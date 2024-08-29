#include<iostream>
using namespace std;
class Employee
 {
   int id;
   string name;
   float salary;
   string Companyname;
  public:
   void setid(int x)
   {
     id=x;
   }
   void setname(string x)
   {
    name=x;
   }
   void setsalary(float x)
   {
    salary=x;
   }
   void setcompanyname(string x)
   {
    Companyname=x;
   }
   int getid()
   {
    return id;
   }
   string getname()
   {
    return name;
   }
   float getsalary()
   {
    return salary;
   }
   string getcompanyname()
   {
    return Companyname;
   }

   void display_detail()
   {
    cout<<"ID: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Salary: "<<salary<<endl;
    cout<<"Company name: "<<Companyname<<endl;
   }   
 };
int main()
{
   int id;
   string name;
   float salary;
   string Companyname;
   Employee E1;
   cout<<"Enter the ID:";
   cin>>id;
   E1.setid(id);
   cout<<"Enter the Name:";
   cin>>name;
   E1.setname(name);
   cout<<"Enter the Salary:";
   cin>>salary;
   E1.setsalary(salary);
   cout<<"Enter the Company name:";
   cin>>Companyname;
   E1.setcompanyname(Companyname);

   cout<<E1.getid()<<endl;
   cout<<E1.getname()<<endl;
   cout<<E1.getsalary()<<endl;
   cout<<E1.getcompanyname()<<endl;
   E1.display_detail();
  return 0;
}
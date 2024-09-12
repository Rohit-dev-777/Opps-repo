/*Create a class called Invoice that a hardware store might use to represent an invoice
for an item sold at the store. An Invoice should include four pieces of information
as instance.
Data Members ‐
• partNumber (type String)
• partDescription (type String)
• quantity of the item being purchased (type int)
• price_per_item (type double)
Your class should have a constructor that initializes the four instance variables.
Provide a set and a get method for each instance variable. In addition, provide a
method named getInvoiceAmount() that calculates the invoice amount (i.e.,
multiplies the quantity by the price per item), then returns the amount as a double
value. If the quantity is not positive, it should be set to 0. If the price per item is not
positive,it should be set to0.0. Write a test application named invoiceTest that
demonstrates class Invoice’s capabilities.*/
#include<iostream>
using namespace std;
class Invoice{
 string partNumber;
 string partDiscription;
 int Quantity;
 double price;
 double InvoiceAmount;
 public:
 Invoice()
 {

 }
 Invoice(string partNumber,string partDiscription,int Quantity,double price)
 {
   this->partNumber=partNumber;
   this->partDiscription=partDiscription;
   if(Quantity>0)
  this->Quantity=Quantity;
  else 
   this->Quantity=0;
   if(price>0)
  this->price=price;
  else
  this->price=0.0;
 }
void setpartNumber(string partNumber)
{
  this->partNumber=partNumber;
}
void setpartDiscription(string partDiscription)
{
  this->partDiscription=partDiscription;
}
void setQuantity(int Quantity)
{
  this->Quantity=Quantity;
}
void setprice(double price)
{
  this->price=price;
}
string getpartNumber()
{
  return partNumber;
}
string getpartDiscription()
{
  return partDiscription;
}
int getQuantity()
{
  return Quantity;
}
double getprice()
{
  return price;
}
double getInvoiceAmount()
{
  InvoiceAmount=Quantity*price;
  cout<<"\nInvoice Amount is : "<<InvoiceAmount;
}

};
int main()
{
  string partNumber;
 string partDiscription;
 int Quantity;
 double price;
 Invoice Obj;
  cout<<"Enter Part Number :";
  cin>>partNumber;
  cout<<"Enter part Discription :";
  cin>>partDiscription;
  cout<<"Enter Quantity :";
  cin>>Quantity;
  cout<<"Enter price :"; 
  cin>>price;
  Obj.setpartNumber(partNumber);
  Obj.setpartDiscription(partDiscription);
  Obj.setQuantity(Quantity);
  Obj.setprice(price);
  cout<<"\nPart Number :"<<Obj.getpartNumber();
  cout<<"\nPart Discription :"<<Obj.getpartDiscription();
  cout<<"\nQuantity :"<<Obj.getQuantity();
  cout<<"\nPrice :"<<Obj.getprice();
  Obj.getInvoiceAmount();
  return 0;
}
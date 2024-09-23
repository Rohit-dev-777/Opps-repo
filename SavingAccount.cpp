/*Create class SavingsAccount. Use a static variable annualInterestRate to store the annual interest rate for all account holders. Each object of the class contains a private instance variable savingsBalance indicating the amount the saver currently has on deposit. Provide method calculateMonthlyInterest() to calculate the monthly interest by multiplying the savingsBalance by annualInterestRate divided by 12.This interest should be added to savingsBalance.Provide a static method modifyInterestRate() that sets the annualInterestRate to a new value. Write a program to test class SavingsAccount. Instantiate two savingsAccount objects, saver1 and saver2, with balances of Rs2000.00 and Rs3000.00, respectively. Set annualInterestRate to 4%, then calculate the monthly interest and print the new balances for both savers. Then set the annualInterestRate to 5%, calculate the next month’s interest and print the new balances for both savers*/
#include<iostream>
using namespace std;
class SavingsAccount{
 float savingsBalance;
 public:
 static float annualInterestRate;
 SavingsAccount(float savingsBalance)
 {
   this->savingsBalance = savingsBalance;
 }
 static void modifyInterestRate(float annualrate)
 {
    annualInterestRate=annualrate/100;
 }
 void calculateMonthlyInterest()
 {
   savingsBalance=savingsBalance+(savingsBalance*annualInterestRate)/12;
 }
 void show()
 {
  cout<<"Balance :"<<savingsBalance<<endl;
 }
};
float SavingsAccount::annualInterestRate=0.04;
   
int main ()
{ 
  SavingsAccount Saver1(2000.00),Saver2(3000.00);
  Saver1.calculateMonthlyInterest();
  Saver2.calculateMonthlyInterest();
  Saver1.show();
  Saver2.show();
  Saver1.modifyInterestRate(5);
  Saver2.modifyInterestRate(5);
  Saver1.calculateMonthlyInterest();
  Saver2.calculateMonthlyInterest();
  Saver1.show();
  Saver2.show();


}
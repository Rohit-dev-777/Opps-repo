/*Anna is a contender for valedictorian of her high school. She wants to know how
many students (if any) have scored higher than her in the exams given during this
semester.
Create a class named Student with the following specifications:
➢ An instance variable named scores holds a student's 5 exam scores.
➢ A void input () function reads 5 integers and saves them to scores.
➢ An int calculateTotalScore() function that returns the sum of the student's
scores.
Input Format
In the void Student::input() function, you must read 5 scores from standard input
and save them to your scores instance variable.
Output Format
In the int Student::calculateTotalScore() function, you must return the student's total
grade (the sum of the values in scores).
The code in the editor will determine how many scores are larger than Anna’s and
print that number to the console.*/
#include<iostream>
using namespace std;
class Student{
 int scores[5];
 int i=0;
 int sum=0;
 public:
 void input(int a)
  { 
     scores[i]=a; 
     i++;
  }
 int Totalscore()
  { int i=0;
    while(i<5)
    {
    sum+=scores[i];
    i++;
    }
    return sum;
  }
};
int main()
{
  int n;
  cout<<"Enter number of students: ";
  cin>>n;
  Student stud[n];
  int arr[5];
  for(int i=0;i<n;i++)
  {int j=0;
    cout<<"Enter the score of 5 subjects .";
    while(j<5)
    {cin>>arr[j];
    stud[i].input(arr[j]);
    j++;
    }
  }
  int count=0;
  for(int i=1;i<n;i++)
  {
    if(stud[0].Totalscore()<stud[i].Totalscore())
     {
      count++;
     }
  }
 cout<<count<<endl;
  return 0;
}
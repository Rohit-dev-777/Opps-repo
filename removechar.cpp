/*Construct a C++ program that removes a specific character from a given string and
return the updated string.
Typical Input: computer science is the future
Typical Output: compuer science is he fuure*/
#include<iostream>
using namespace std;
int main()
{
  string s;
  cout<<"Enter your string: ";getline(cin,s);
  char ch;
  cout<<"Enter character to remove:";cin>>ch;
  for(int i=0;i<s.size();i++)
  {
    if(ch==s[i])
     {
       for(int j=i;j<s.size();j++)
        {
          s[j]=s[j+1];
        }
     }
  }
  cout<<"Result: "<<s<<endl;
  return 0;
}
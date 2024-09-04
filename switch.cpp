#include<iostream>
using namespace std;
void insertion(int arr[],int n)
 {
  int i,key,j;
  for(int i=1;i<n;i++)
  {
    key= arr[i];
    j=i-1;
    while(j>=0 && arr[j]>key)
     {
      arr[j+1]=arr[j];
      j=j-1;
     }
     arr[j+1]=key;
  }
 }
void traversing(int arr[],int n)
 {
    for (int i = 0; i < n; ++i) {
      cout<<"Element at index " << i << ": " << arr[i] <<endl;
    }
 }
void searching(int arr[],int n)
{
 int x, found = 0;
    cout << "Enter element to search: ";
    cin >> x;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << "Element found at index: " << i << endl;
            found = 1;
            break;
        }
    }
    if (!found)
        cout << "Element not found in the array." << endl;
}
void deletion(int arr[],int n)
{
  int pos;
    cout << "Enter the position of the element to delete: ";
    cin >> pos;
    if (pos >= n || pos < 0) {
        cout << "Invalid position!" << endl;
    } else {
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 
        cout << "Element deleted." << endl;
    }
}
void sorting(int arr[],int n)
{
   for (int i=0; i<n-1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}
void printarray(int arr[],int n)
 {
  for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";
  cout<<"\n";
 }
int main()
{ 
  int n,choice;
  cout<<"Enter the size for a array: "; cin>>n;
  int arr[n];
  cout<<"Enter the value for an array: ";
  for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
  jump:
  cout<<"Enter your choice (1:Insertion, 2:Traversing, 3:Searching, 4:Deletion, 5:Sorting):";
  cin>>choice;
  switch(choice)
   {
    case 1: insertion(arr,n);
           printarray(arr,n);
      break;
    case 2: traversing(arr,n); 
            printarray(arr,n);
      break;
    case 3: searching(arr,n);
            printarray(arr,n);
      break;
    case 4: deletion(arr,n);
            printarray(arr,n); 
      break;
    case 5: sorting(arr,n);
            printarray(arr,n); 
      break;
    default: cout<<"Invalid choice....";
   }
  int ch;
  cout<<"Your choice is successfully implemented"<<endl;
  cout<<"is their any other choice(yes:1,no:0)"<<endl;
  cin>>ch;
  if(ch==1)
   {
     goto jump;
   }
  else
   return 0;
  return 0;
}
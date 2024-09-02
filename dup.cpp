#include<iostream>
using namespace std;

int findDuplicate(int arr[], int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if ((arr[i] ^ arr[j]) == 0) {  
                cout << arr[j];
                return arr[j]; 
            }
        }
    }

    cout << "no duplicate";
    return -1;  
}
int main()
{
  int arr[]={1,2,3,4,5,6,7,11,16,5,8,10};
  findDuplicate(arr,sizeof(arr)/sizeof(arr[0]));
  return 0;
}
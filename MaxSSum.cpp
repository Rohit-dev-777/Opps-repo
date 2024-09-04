//You are given an array of element.Now you have need to choose the best index of this array.An index of the array is called best if the special sum of this index is maximum across the special sum of all the other indices. To calculate the special sum for any index you pick the first element that is and add it to your sum. Now you pick the next to element and add both of them to your sum. Now you pick the next element and this continuous till the index for which it is possible to pick the elements. Find the best index and in the output print its corresponding special sum. Note that there may be more than one best index , but you need to only print the maximum special sum.
#include<iostream>
using namespace std;
int Max(int arr[], int n) {
    int maxsum=arr[0];
    for (int i = 0; i < n; ++i) {
        int sum=0;
        int step=1;
        int start=i;
        while (step+start<=n) {
            for (int j=start; j<start+step; ++j) {
            sum+=arr[j];
            }
            start += step;
            ++step;
        }
        if (sum>maxsum) {
            maxsum=sum;
        }
    }
    return maxsum;
}

int main() {
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter values in the matrix:";
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    cout<<"Maximum special sum: "<<Max(arr,n)<<endl;
    return 0;
}

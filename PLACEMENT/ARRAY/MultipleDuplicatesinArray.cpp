//Find Multiple duplicate in Sorted Contigous  array.
//Optimised approch 
// TC =O(n) ,SC=O(1)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,i=0;
    cout<<"\nEnter the size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the Elements : ";
    while(i<n && cin>>arr[i++]);
    for(int i=1;i<n;i++)
    {
        if(arr[i]-arr[i-1]==0)
        {
            count++;
            cout<<"\n"<<count<<"Duplicate Element is : "<<arr[i]<<" ";
            while(arr[i]==arr[i-1])i++;
        }
    }
    return 0;
}
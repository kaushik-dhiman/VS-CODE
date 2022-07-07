// Top two max elements in integer array.
//Optimised approch
// TC=O(n) SC=O(1)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,max=INT_MIN,max2=INT_MIN,i=0;
    cout<<"\nEnter the size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the Elements : ";
    while(i<n && cin>>arr[i++]);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max2 && arr[i]!=max)
            max2=arr[i];
    }
    cout<<"\nTop two max Elements are : "<<max<<" and "<<max2;
    return 0;
}
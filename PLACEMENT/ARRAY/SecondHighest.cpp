// Second Highest in integer array.
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
    cout<<"\nSecond Highest Element is : "<<max2;
    return 0;
    // for(int i=0; i<n; i++)
    // {
    //     if(arr[i]>max || arr[i]>max2)
    //     {
    //         if((arr[i]>max2 && arr[i]<max))
    //         {
    //             max2=arr[i];
    //         }
    //         else
    //         {
    //             max2=max;
    //             max=arr[i];
    //         }
    //     }
    // }
}
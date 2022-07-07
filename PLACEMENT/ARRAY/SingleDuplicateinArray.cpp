//Find Single duplicate in Sorted Contigous  array.
//Optimised approch 
// TC =O(n) ,SC=O(1)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=0;
    cout<<"\nEnter the size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the Elements : ";
    while(i<n && cin>>arr[i++]);
    for(int i=1;i<n;i++)
    {
        if(arr[i]-arr[i-1]==0)
        {
            cout<<"Duplicate Element is : "<<arr[i];
            break;
        }
    }
    return 0;
}
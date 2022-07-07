// Find pair with given sum
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=0;
    cout<<"\nEnter the size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the Elements of Array : ";
    while(i<n && cin>>arr[i++]);
    cout<<"\nEnter the Sum you want : ";
    int sum;
    cin>>sum;
    cout<<"\nPairs are : ";
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                cout<<"( "<<arr[i]<<","<<arr[j]<<" )";
            }
        }
    }
    return 0;
}
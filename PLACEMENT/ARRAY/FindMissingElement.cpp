// Find Missing number in array of n element.
//Optimised Approch
//TC= O(1)  , SC=O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"\nEnter the size of Array : ";
    cin>>n;
    int arr[n-1];
    cout<<"\nEnter the elements of array :";
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Missing Element is : "<<((n)*(n+1)/2)-sum;
    return 0;
}
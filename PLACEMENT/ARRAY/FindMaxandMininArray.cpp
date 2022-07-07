// Find Max and Min in Array.
//Optimised Approch
//TC= O(N)  , SC=O(1)
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max=INT_MIN,min=INT_MAX;
    cout<<"\nEnter the size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements of array :";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>max)max=arr[i];
        if(arr[i]<min)min=arr[i];
    }
    cout<<"Maximum and minimum Elements in Array are : "<<max<<" , "<<min;
    return 0;
}
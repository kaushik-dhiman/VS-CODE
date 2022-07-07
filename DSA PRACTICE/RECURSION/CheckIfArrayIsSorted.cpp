//TC both best and worst   O(n^2)
// USEW case :: small array size 

#include <bits/stdc++.h>
using namespace std;

void swap(int arr[],int n,int m)
{
    int temp=arr[n];
    arr[n]=arr[m];
    arr[m]=temp;
}

bool isSorted(int arr[],int sz)
{
    if(sz <= 1)return true;
    if(arr[0] >arr[1])return false;
    else return isSorted(arr+1,sz-1);
}

void display(int arr[],int n)
{   
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<"\n";
}

int main()
{
    int n,i=0;
    cout<<"\nEnter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the Element : ";
    while(i<n && cin>>arr[i++]);
    
    if(isSorted(arr,n))cout<<" Array is Sorted.";
    else cout<<"Array is not sorted";
    
    return 0;
}
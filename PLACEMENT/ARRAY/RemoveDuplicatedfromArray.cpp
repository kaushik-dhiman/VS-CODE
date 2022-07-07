//Remove duplicate in  array.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0,i=0;
    cout<<"\nEnter the size of Array : ";
    cin>>n;
    int arr[n],b[n]={-1},j=0;
    cout<<"\nEnter the Elements : ";
    while(i<n && cin>>arr[i++]);
    cout<<"\nCurrent Array : ";
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    for(int i=1;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            b[j++]=arr[i];
        }
    }
    b[j++]=arr[n-1];
    for(int i=0;i<j;i++)arr[i]=b[i];
    
    cout<<"\nArray after removing duplicates : ";
    for(int i=0;i<j;i++)cout<<arr[i]<<" ";
    return 0;
}
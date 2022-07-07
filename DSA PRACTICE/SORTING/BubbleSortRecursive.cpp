#include <bits/stdc++.h>
using namespace std;

// void swap(int arr[],int n,int m)
// {
//     int temp=arr[n];
//     arr[n]=arr[m];
//     arr[m]=temp;
// }

void BubbleSort(int arr[],int sz)
{
    if(sz == 0 || sz == 1)
    {
        return;
    }
    
    for(int i = 0 ; i < sz - 1; i++)
    {
        if(arr[i] > arr[i + 1])
            swap(arr[i],arr[i + 1]);
    }

    BubbleSort(arr,sz-1);
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
    cout<<"Array Before Sort : ";
    display(arr,n);
    BubbleSort(arr, n);
    cout<<"Array After Sort : ";
    display(arr,n);
    return 0;
}
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

void InsertionSort(int arr[],int sz)
{
    for(int i = 1; i < sz ; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }  
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
    InsertionSort(arr,n);
    cout<<"Array After Sort : ";
    display(arr,n);
    return 0;
}
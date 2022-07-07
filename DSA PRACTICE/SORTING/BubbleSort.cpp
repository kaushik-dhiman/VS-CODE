#include <bits/stdc++.h>
using namespace std;

void swap(int arr[],int n,int m)
{
    int temp=arr[n];
    arr[n]=arr[m];
    arr[m]=temp;
}

void BubbleSort(int arr[],int sz)
{
    for(int i=0;i<sz;i++)
    {
        bool swapped=false;
        for(int j=0;j<sz-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                swap(arr,j,j+1);
                swapped=true;
            }
        }
        if(swapped == false)break;
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
    BubbleSort(arr,n);
    cout<<"Array After Sort : ";
    display(arr,n);
    return 0;
}
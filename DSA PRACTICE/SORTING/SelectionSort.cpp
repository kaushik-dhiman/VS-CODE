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

void SelectionSort(int arr[],int sz)
{
    // OPTIMIZED
    for(int i=0;i<sz-1;i++)
    {
        int min_ind=i;
        for(int j=i+1;j<sz;j++)
        {
            if(arr[j]<arr[min_ind])
            {
                min_ind=j;
            }
        }
        swap(arr,min_ind,i);
    }  

    //SELF
    // for(int i=0;i<sz;i++)
    // {
    //     int min=arr[i];
    //     for(int j=i+1;j<sz;j++)
    //     {
    //         if(arr[j]<min)
    //         {
    //             swap(arr,i,j);
    //         }
    //     }
    // }    
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
    SelectionSort(arr,n);
    cout<<"Array After Sort : ";
    display(arr,n);
    return 0;
}
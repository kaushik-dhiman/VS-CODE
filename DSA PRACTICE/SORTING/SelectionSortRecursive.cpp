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

void SelectionSort(int *arr,int sz)
{
    if(sz == 0 || sz == 1)
        return;
    int minn = arr[0];
    int min_ind = 0;
    for(int j =1; j < sz ; j++)
    {
        if(minn > arr[j])
        {
            min_ind = j;
        }
    }
    swap(arr[0],arr[min_ind]);   

    SelectionSort(arr+1,sz-1);   
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
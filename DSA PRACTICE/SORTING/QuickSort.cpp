//TC both best and worst   O(n^2)
// USEW case :: small array size 

#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for(int i = s + 1; i <= e; i++)
    {
        if(arr[i] <= pivot)count++;
    }
    int pivotIndex =  s + count;
    swap(arr[s],arr[pivotIndex]);
    int i = 0, j = e;
    while(i<pivotIndex && j > pivotIndex)
    {
        if(arr[i]<pivot)i++;
        else if(arr[j]>pivot)j--;
        else 
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    if(s >= e) return;

    int p = partition(arr,s,e);
    
    quickSort(arr,s, p - 1);

    quickSort(arr,p + 1, e);
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
    quickSort(arr, 0, n - 1);
    cout<<"Array After Sort : ";
    display(arr,n);
    return 0;
}
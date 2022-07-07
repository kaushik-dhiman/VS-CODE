//TC both best and worst   O(n^2)
// USEW case :: small array size 

#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int k = s;
    for(int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }

    k = mid + 1;
    for(int i = 0; i < len1; i++)
    {
        second[i] = arr[k++];
    }


    int index1 = 0;
    int index2 = 0;
    k = s;
    while(index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else 
            arr[k++] = second[index2++];
    }
    
    while(index1 < len1)arr[k++] = first[index1++];
    while(index2 < len2)arr[k++] = second[index2++];

    delete(first);
    delete(second);

}

void mergeSort(int *arr, int s, int e)
{
    if(s >= e) return;

    int mid = (s + e)/2;
    
    mergeSort(arr,s, mid);

    mergeSort(arr,mid + 1, e);

    merge(arr, s, e);
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
    mergeSort(arr, 0, n - 1);
    cout<<"Array After Sort : ";
    display(arr,n);
    return 0;
}
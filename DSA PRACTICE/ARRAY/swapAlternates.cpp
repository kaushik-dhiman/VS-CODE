#include<bits/stdc++.h>
using namespace std;

void swapalt(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)swap(arr[i],arr[i+1]);
    }
    return;
}

void printarr(int arr[],int size)
{
    cout<<"\nArray elements are :";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[6]={1,2,3,4,5,6};
    printarr(arr1,5);
    printarr(arr2,6);
    swapalt(arr1,5);
    swapalt(arr2,6);
    printarr(arr1,5);
    printarr(arr2,6);
    return 0;
}
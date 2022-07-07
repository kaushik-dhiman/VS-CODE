#include <bits/stdc++.h>
using namespace std;

bool LSearch(int arr[], int sz, int k)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == k)
            return true;
    }
    return false;
}

int main()
{
    int n, i = 0;
    cout << "\nEnter the size of array : ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the Element : ";
    while (i < n && cin >> arr[i++])
        ;
    cout << "Enter the key to search : ";
    int key;
    cin >> key;
    if (LSearch(arr, n, key))
        cout << "Key Found";
    else
        cout << "Key Not Found";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool BSearch(int arr[], int sz, int k)
{
    int low = 0, high = sz - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == k)
        {
            return true;
        }
        else if (arr[mid] > k)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
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
    if (BSearch(arr, n, key))
        cout << "Key Found";
    else
        cout << "Key Not Found";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int getPivot(int arr[],int n)
{
    int low = 0;
    int high = n - 1;

    while(low < high)
    {
        int mid = low + (high - low) / 2;
        if(arr[mid] >= arr[0])
            low = mid + 1;
        else
            high = mid;
    }
    return low;
}

int main()
{
    int arr[5] = {8,10,17,1,3};
    cout << "Pivot is " << arr[getPivot(arr, 5)] <<endl;
    return 0;
}

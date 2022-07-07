#include <bits/stdc++.h>
using namespace std;
template <typename T>
T mmax(T a, T b)
{
    return (a > b) ? a : b;
}
int main()
{
    cout << mmax<int>(10, 20) << "\n";
    cout << mmax<char>('d', 'c') << "\n";
    cout << mmax<string>("abc", "xyz") << "\n";
    return 0;
}
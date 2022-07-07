#include<bits/stdc++.h>
using namespace std;


int cSet(int n)
{
    int cnt =  0;
    while(n > 0)
    {
        cnt += (n & 1);
        n >>= 1;
    }
    return cnt;
}

int cSet1(int n)
{
    int cnt =  0;
    while(n > 0)
    {
        n = n & (n - 1);
        cnt++;
    }
    return cnt;
}

int main()
{
    int n = 7;
    cout<<"\nSet Bits "<<cSet(n);
    cout<<"\nSet Bits "<<cSet1(n);
    cout<<"\nSet Bits "<<__builtin_popcount(n);
    return 0;
}
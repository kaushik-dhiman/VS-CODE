#include<bits/stdc++.h>
using namespace std;

void dTob(int n)
{
    int ans=0,i=0;
    while(n != 0)
    {
        int bit = n & 1;
        ans = bit * pow(10,i) + ans;
        i++;
        n>>=1;
    }
    cout<<ans;
}

int main()
{
    int n=10;
    cout<<"Binary of "<<n<<" is ";
    dTob(n);
    return 0;
}
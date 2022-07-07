#include<bits/stdc++.h>
using namespace std;

void dTob(int n)
{
    int ans=0,i=0;
    while(n != 0)
    {
        int digit = n % 10;
        if(digit == 1)
            ans += pow(2,i);
        i++;
        n/=10;
    }
    cout<<ans;
}

int main()
{
    int n=101;
    cout<<"Decimal of "<<n<<" is ";
    dTob(n);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=3,b=3;
    int setBits_a=log2(a)+1;
    int setBits_b=log2(b)+1;
    cout<<setBits_a+setBits_b<<"\n";


    int setbits=0;
    while(a>0)
    {
        if(a&1)setbits++;
        a>>=1;
    }

    while(b>0)
    {
        if(b&1)setbits++;
        b>>=1;
    }

    cout<<setbits;

    return 0;
}
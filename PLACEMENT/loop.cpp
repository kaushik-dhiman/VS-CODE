#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            while(j<=i)cout<<i<<" ";
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
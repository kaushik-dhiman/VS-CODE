#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cin>>r>>c;
    while(r--)
    {
        int ar[c]={0};
        for(int i=0;i<c;i++)cin>>ar[i];
        sort(ar,ar+c);
        for(int i=0;i<c;i++)cout<<ar[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
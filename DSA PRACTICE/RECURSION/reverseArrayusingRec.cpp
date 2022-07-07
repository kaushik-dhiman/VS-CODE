#include<bits/stdc++.h>
using namespace std;


void rev(vector<int>& v,int i,int j)
{
    if(i>=j)
        return;
    swap(v[i],v[j]);
    rev(v,i+1,j-1);
}

void rev1(vector<int>& v,int i)
{
    if(i>=v.size()/2)
        return;
    swap(v[i],v[v.size()-i-1]);
    rev1(v,i+1);
}


int main()
{
    vector<int> v(5);
    for(int i=0;i<5;i++)
    {
        v[i]=i+1;
    }
    for(auto x:v)
        cout<<x;
    cout<<"\n";
    rev(v,0,v.size()-1);
    for(auto x:v)
        cout<<x;
    rev1(v,0);
    cout<<"\n";
    for(auto x:v)
        cout<<x;
    return 0;
}
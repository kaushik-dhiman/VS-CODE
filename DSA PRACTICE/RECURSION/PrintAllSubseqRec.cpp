#include<bits/stdc++.h>
using namespace std;


void printSubseq(int index,vector<char>& s,string& t)
{
    if(index==t.length())
    {
        for(auto x:s)
            cout<<x;
        cout<<" ";
        return;
    }
    printSubseq(index+1,s,t);
    s.push_back(t[index]);
    printSubseq(index+1,s,t);
    s.pop_back();
    
}

int main()
{
    string t="abc";
    vector<char> s;
    printSubseq(0,s,t);
    return 0;
}
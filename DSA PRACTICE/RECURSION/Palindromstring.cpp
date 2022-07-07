#include<bits/stdc++.h>
using namespace std;

void isPalindrom(string s,int i)
{
    if(i>=s.length()/2)
    {
        cout<<"\nString "<<s<<" is Palindrom\n";
        return;
    }
    if(s[i]!=s[s.length()-i-1])
    {
        cout<<"\nString "<<s<<" is not Palindrom\n";
        return;
    }

    isPalindrom(s,i+1);
    
}



int main()
{
    string s="abcddcba";
    string t="abc";
    string r="aba";
    isPalindrom(s,0);
    isPalindrom(t,0);
    isPalindrom(r,0);
    return 0;
}
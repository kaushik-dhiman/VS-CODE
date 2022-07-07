#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    
    vector<int> v1{10,20,30,40}; //if elements are known
    
    int n=3,x=10;
    vector <int> v2(n,x);//create vector of size 3 with all value 10

    int ch;
    cout<<"\nEnter element or -1 to stop .";
    while(1)
    {
        cin>>ch;
        if(ch==-1)break;
        v.push_back(ch);
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";            //Does not check for array index out of bound.
    cout<<"\n";
    for(int i=0;i<v.size();i++)
        cout<<v.at(i)<<" ";         //check for array index out of bound.
    cout<<"\n";
    for(int x:v)    //we can not change value in this loop
        cout<<x<<" ";
    cout<<"\n";
    for(int x:v1)    
        cout<<x<<" ";
    cout<<"\n";
    for(int x:v2)    
        cout<<x<<" ";
    return 0;
}
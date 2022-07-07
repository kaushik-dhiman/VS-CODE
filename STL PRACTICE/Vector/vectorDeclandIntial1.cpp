#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n=5,x=15;
    vector<int> v(n,x);
    for(auto it=v.begin();it!=v.end();it++)
        cout<<(*it)<<" ";
    
    int arr[]={10,20,30};
    int sz=sizeof(arr)/sizeof(arr[0]);
    vector <int> v1(arr,arr+sz);
    vector<int>::reverse_iterator it1;
    
    for(it1=v1.rbegin();it1!=v1.rend();it1++)
    {
            cout<<(*it1)<<" ";
            *it1+=1;
    }

    for(auto it2=v1.cbegin();it2!=v1.cend();it2++)
    {
            cout<<(*it2)<<" ";
           // *it2+=1;      //we can not change value with constant iterator.
    }

    for(it1=v1.rbegin();it1!=v1.rend();it1++)
        cout<<(*it1)<<" ";

    for(auto it2=v1.rbegin();it2!=v1.rend();it2++)
        cout<<(*it2)<<" ";
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    q.push(1);
    q.push(2);
    q.pop();
    cout << q.size() <<endl;
    cout << q.front() <<endl;
    q.push(3);
    cout << q.back()<<"\n";
    q.push(5);
    if(q.empty())cout<<"empty";
    else cout<<"not empty";
    q.front();

    return 0;
}
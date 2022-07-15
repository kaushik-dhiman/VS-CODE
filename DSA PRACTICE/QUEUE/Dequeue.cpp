#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> q;

    q.push_front(1);
    q.push_front(2);
    cout << q.size() <<endl;
    cout << q.front() <<endl;
    q.push_back(3);
    cout << q.back()<<"\n";
    q.push_back(5);
    cout << q.front() <<endl;
    cout << q.back() <<endl;
    if(q.empty())cout<<"empty";
    else cout<<"not empty";
    return 0;
}
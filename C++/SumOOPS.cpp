#include<bits/stdc++.h>
#include <conio.h>
using namespace std;
class Sum{
    int a;
    int b;
    int result;
    public:
        void getData();
        void add();
        void showResult();
};
void Sum :: getData()
{
    cout<<"Enter two Numbers : ";
    cin>>a>>b;
}
void Sum :: add(){
    result = a+b;
}
void Sum :: showResult(){
    cout<<"Sum of Number "<<a<<" and "<<b<<" is : "<<result;
}

int main()
{
    Sum S;
    S.getData();
    S.add();
    S.showResult();
    return 0;
}
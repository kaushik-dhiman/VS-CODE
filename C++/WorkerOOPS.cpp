#include <bits/stdc++.h>
#include<conio.h>
using namespace std;

class Worker{
    int hrsworked;
    float rph;
    float sal;
    public:
        void getData();
        void calcSal();
        void show();
};

void Worker :: getData()
{
    cout<<"Enter the hours worked and rate per hour respectively : ";
    cin>>hrsworked>>rph;
}

void Worker :: calcSal()
{
    if(hrsworked<=40)
        sal=rph*hrsworked;
    else
        sal=40*rph+(hrsworked-40)*(2*rph);
}

void Worker :: show()
{
    cout<<"The salary of employee for working for "<<hrsworked<<"hrs is : "<<sal;   
}

int main()
{
    Worker  W;
    W.getData();
    W.calcSal();
    W.show();
    getch();
    return 0;
}
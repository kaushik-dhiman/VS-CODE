// combination of 2 or more type of inheritance

#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        void fun1()
        {
            cout << "Inside Function 1" << endl;
        }
};

class B{
    public:
        void fun2()
        {
            cout << "Inside Function 2" << endl;
        }
};

class C: public A{
    public:
        void fun3()
        {
            cout << "Inside Function 3" << endl;
        }
};

class D: public C, public B{
    public:
        void fun4()
        {
            cout << "Inside Function 4" << endl;
        }
};

int main()
{
    A obj1;
    obj1.fun1();

    B obj2;
    obj2.fun2();

    C obj3;
    obj3.fun1();
    obj3.fun3();

    D obj4;
    obj4.fun1();
    obj4.fun2();
    obj4.fun3();
    obj4.fun4();
    
    return 0;
}
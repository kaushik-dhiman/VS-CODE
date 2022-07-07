/*
    Rules :- function name, funtion args,inheritance.
    1:  method of parent class and child class must have same name
    2:  method of parent class and child class must have same parameters
    3:  possible through inheritance only
*/
#include<bits/stdc++.h>
using namespace std;

class  Animal{
    public:
        void speak()
        {
            cout << "Speaking" << endl;
        }
};

class Dog: public Animal{
    public:
        void speak()
        {
            cout << "Barking" << endl;
        }
};

int main()
{
    Dog obj;
    obj.speak();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

/*
a = current object , b = input argument
a + b

Syntax to overload


return_type operator  which_operator_eg + (input)
{

}

*/

class B{
    public:
        int a;
        int b;
    
    public:
        int add(){
            return a + b;
        }
    
        void operator+ (B &obj)
        {
            int value1 = this -> a;
            int value2 = obj.a;

            cout << "output : " << value2 - value1 << endl;
            cout << "Iela ye plus kese change hogya" << endl;
        }

        void operator() ()
        {
            cout << "Main Bracket Hu " << this->a << endl;
        }
};


int main()
{

    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;
    obj1();
    return 0;
}
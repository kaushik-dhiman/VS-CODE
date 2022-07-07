#include<bits/stdc++.h>
using namespace std;


// Function overloading example
class A{
    public:
        void sayHello()
        {
            cout << "Hello Himanshu" << endl;
        }

        void sayHello(string name)
        {
            cout << "Hello himanshu" << endl;
        }
        /*
        funtion with only diff return type cant me overloaded
        or we can say that funtion signature does not include return type.
        we have to change input argument.

        int sayHello()
        {
            cout << "Hello Himanshu" << endl;
        }
        
        this will also not work
        either we can only use this method
        void sayHello(string name = "himanshu")
        {
            cout << "Hello himanshu" << endl;
        }

        */
};

int main()
{
    A obj;
    obj.sayHello();
    return 0;
}
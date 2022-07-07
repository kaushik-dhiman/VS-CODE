#include<bits/stdc++.h>
#include "Demo1.h"
using namespace std;

// For empty class it will have 1 byte with it.
class Demo{
    private:
        int x;
        char *ch;
        int y;
        
    public:
        //Default Constructor
        Demo()
        {
            x = 0;
            y = 0;

            ch = new ch[100];
        }

        //Parametrised Constructor
        Demo(int x, int y)
        {
            this -> x = x;
            this -> y = y;
        }

        // Copy Constructor  by default is already created
        Demo(Demo& temp)
        {
            this -> x = temp.x;
            this -> y = temp.y;
        }

        void print()
        {
            cout << "Value of x is : " << x << endl;
            cout << "Value of y is : " << y << endl;
        }

        int getX()
        {
            return x;
        }

        int getY()
        {
            return y;
        }

        void setX(int x)
        {
            this -> x = x;
        }

        void setY(int y)
        {
            this -> y = y;
        }


};


int main()
{
    //staic allocation
    Demo d;
    d.setX(10);
    d.setY(20);
    cout << "x : " << d.getX() << endl;
    cout << "y : " << d.getY() << endl;
    cout << sizeof(d) << endl;
    
    Demo1 d1;
    cout << sizeof(d1) << endl;
    // Cant access Private members
    // d1.x = 10;
    // cout << "Value of x is : " << d1.x;
    
    // Dynamically allocated
    Demo *d2 = new Demo;
    d2 -> print();
    (*d2).print();

    Demo d3(1, 2);
    d3.print();


    // Copy Constructor Called
    Demo d4(d3);
    
    // Default copy constructor perform shallow copy

    d4.print();


    return 0;
}
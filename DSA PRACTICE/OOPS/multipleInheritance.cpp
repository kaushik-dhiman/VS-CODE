#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        int age;
        int weight;
    public:
        void bark()
        {
            cout << "Barking" << endl ;
        }
        /*
            This will cause ambiguty problem result to error
            we can not use same name functions in both classes 
            which are going to be inherited from same child.

            to solve this we use scope resolution operator
        */
        void speak()
        {
            cout << "Speaking Animal" << endl;
        }
        
};

class Human{
    public:
        void speak()
        {
            cout << "Speaking Human" << endl ;
        }
};

class Hybrid: public Animal, public Human{

};

int main()
{
    Hybrid obj;
    obj.Animal::speak();
    obj.bark();
    obj.Human::speak();
    return 0;
}
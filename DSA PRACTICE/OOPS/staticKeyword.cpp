#include<bits/stdc++.h>
using namespace std;

class Hero
{
    private:
        int health;
        char level;
    
    public:
        char *name;
        
        //static data memeber belongs to class.
        // no need of object to use.
        static int timeToComplete; 
        
        static int sMethod()
        {
            //can't use this keyword and non staic members inside static method
            // cout << this->health;
            // cout << health;
            cout << timeToComplete;
        }

        Hero()
        {
            name = new char[100];
        }

        Hero(int health,char level,char *name)
        {
            this->name = name;
            this->health = health;
            this->level = level;
        }


        int getHealth()
        {
            return health;
        }

        char getLevel()
        {
            return level;
        }

        void setHealth(int h)
        {
            health = h;
        }

        void setLevel(char ch)
        {
            level = ch;
        }
};  

// Initialization of static data member
int Hero::timeToComplete = 10;

int main()
{
    cout << Hero::timeToComplete << endl;

    //Not Recommended to use static member with object.
    Hero a;
    cout << a.timeToComplete << endl;
    Hero b;
    b.timeToComplete = 20;
    cout << a.timeToComplete << endl;
    cout << b.timeToComplete << endl;


    Hero::sMethod();

    return 0;
}
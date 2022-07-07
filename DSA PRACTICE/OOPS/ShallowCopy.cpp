#include<bits/stdc++.h>
using namespace std;

class Hero
{
    private:
        int health;
        char level;
    
    public:
        char *name;
        Hero()
        {
            name = new char[100];
        }
        Hero(int health,char level)
        {
            this->name = name;
            this->health = health;
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

        void setName(char name[])
        {
            strcpy(this->name, name);
        }

        void print()
        {
            cout << "[ Name: " << name 
                 << " ,Level: " << level 
                 << ", Health: " << health << " ] ";
            cout<<endl;
        }
};  

int main()
{
    Hero hero; 
    hero.setHealth(12);
    hero.setLevel('A');
    char name[9] = "Himanshu";
    hero.setName(name);

    hero.print();

    //Use Default copy constructor

    Hero hero1(hero);
    // Hero hero1 = hero;   //also valid
    hero1.print();

    /*
        changing name in hero but it will also reflect in hero1
        we are creating hero1 by default copy constructor 
        and it uses shallow copy for creation 
        that acctualy use same memory but use two names 
        we can improve it with deep copy 
        i.e by creating copy construct by our own.
    */
    hero.name[0] = 'C';

    hero.print();

    hero1.print();

    return 0;
}
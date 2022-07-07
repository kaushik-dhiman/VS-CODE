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

        Hero(Hero& temp)
        {
            char *ch = new char[strlen(temp.name) + 1];
            strcpy(ch, temp.name);

            this->name = ch;
            this->level = temp.level;
            this->health = temp.health;
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

    //Using self made  copy constructor

    /*In this we are performing deep copy 
        by use of which change in one object data memeber 
        well not effect other. */

    Hero hero1(hero);
    
    // Hero hero1 = hero;   //also valid
    hero1.print();

    hero.name[0] = 'C';

    hero.print();

    hero1.print();

    return 0;
}
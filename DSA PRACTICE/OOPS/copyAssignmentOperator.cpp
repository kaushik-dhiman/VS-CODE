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
        Hero(int health,char level,char *name)
        {
            this->name = name;
            this->health = health;
            this->level = level;
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
    char ch[9] = "Himanshu";
    Hero hero(12, 'A', ch); 
    hero.print();

    Hero hero1(24, 'B', ch);
    hero1.print();

    // COPY ASSIGNMENT OPERATOR
    hero = hero1;

    hero.print();
    hero1.print();
    return 0;
}
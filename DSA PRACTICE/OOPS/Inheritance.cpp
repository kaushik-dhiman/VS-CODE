// Inheritance
// Private  data memeber of super class can't be inherited


/*
|------------------------------------------------------------
|Super Class AS      mode of inhert AS        result AS     |
|public              public             --->    public      |
|public              protected          --->    protected   |
|public              private            --->    private     |
|                                                           |
|protected           public             --->    protected   |
|protected           protected          --->    protected   |
|protected           private            --->    private     |
|                                                           |
|private             public             --->    NA          |
|private             protected          --->    NA          |
|private             private            --->    NA          |
|------------------------------------------------------------
*/

/* Types of inheritance
    single, multilevel, multiple, hybrid, hiracichal;
*/


#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
        int height;
        int weight;
        int age;
    public:
    int getAge()
    {
        return this->age;
    }
    void settWeight(int weight)
    {
        this->weight =weight;
    }
};

class Male: public Human{
    public:
    string color;

    void sleep()
    {
        cout << "Male Sleeping" << endl;
    }
};

int main()
{
    Male obj;
    cout << obj.age << endl;
    cout << obj.weight << endl;
    cout << obj.height << endl;
    cout << obj.color << endl;
    obj.sleep();
    obj.settWeight(10);
    cout << obj.weight << endl;
    return 0;
}
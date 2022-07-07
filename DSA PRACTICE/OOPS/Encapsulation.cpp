//Encapsulation (Information Hiding / Data Hiding)
//Encapsulation : wrapping up of data members and methods/fuction
//Fully encapuslated class -> all the data members are private.

/* Advantages 
--> Data Hiding -> security
--> we can make class read only
--> code reusability
--> unit testing
*/

#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
        string name;
        int rollno;
        int age;
    public:
        Student()
        {
            name = "Himanshu";
            rollno = 52010002;
            age = 24;
        }
        int getAge()
        {
            return this->age;
        }

        void print()
        {
            cout <<  name << " " << age << " " << rollno << endl;

        }
};

int main()
{
    Student s;
    cout << s.getAge();
c   
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Circle{
    private:
        int radius;
        float area;
        float circumfrence;
    public:
        void getRadius();
        void calcArea();
        void calcCirmf();
        void show();
};

void Circle :: getRadius(){
    cout<<"Enter the Radius of Circle : ";
    cin>>radius;
}

void Circle :: calcArea()
{
    area = 3.14 * radius * radius;
}

void Circle :: calcCirmf ()
{
    circumfrence = 2 * 3.14 * radius; 
}

void Circle :: show()
{
    cout<<"The area and Circumfrence of the circle with raidus "<<radius<<" is : "<<area<<" and "
    <<circumfrence<<" respectively. ";
}

int main()
{
    Circle C;
    C.getRadius();
    C.calcArea();
    C.calcCirmf();
    C.show();
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public :
        int data;
        Node *next;
        Node(int x)
        {
            data=x;
            next=NULL;
        }
};

class QUS{
    Node *top1,*top2;
    public :
        QUS()
        {
            top1=NULL;
            top2=NULL;
        }
        void push1(int);
        void push2(int);
        int pop1();
        int pop2();
        void enque(int);
        void deque();
};

void QUS::push1(int x)
{

}

void QUS::push2(int x)
{

}

int  QUS::pop1()
{

}

int QUS::pop2()
{

}

void QUS::enque(int)
{


}

void QUS::deque()
{
    
}

int main()
{
    QUS q;
    q.enque(1);
    q.enque(2);
    //q.display();
    q.deque();
    return 0;
}

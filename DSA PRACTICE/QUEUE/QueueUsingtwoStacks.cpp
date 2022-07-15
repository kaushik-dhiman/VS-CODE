#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node *next;
        node(int x)
        {
            data=x;
            next=NULL;
        }
};

class queuee
{
    node *top1;
    node *top2;
    public:
        queuee()
        {
            top1=NULL;
            top2=NULL;
        }
        void push1(int);
        void push2(int);
        void pop1();
        void pop2();
        void enqueue(int);
        void dequeuee();
        void display();
};

void queuee::push1(int x)
{
    node *t=new node(x);
    if(top1==NULL)
    {
        top1=t;
    }
    else{
        t->next=top1;
        top1=t;
    }
}
void queuee::pop1()
{
    node *t=NULL;
    if(top1)
    {
        t=top1;
        top1=top1->next;
    }
}
void queuee::push2(int x)
{
    node *t=new node(x);
    if(top2==NULL)
    {
        top2=t;
    }
    else{
        t->next=top2;
        top2=t;
    }
}
void queuee::pop2()
{
    node *t=NULL;
    if(top2)
    {
        t=top2;
        top2=top2->next;
    }
}
void queuee::enqueue(int x)
{
    while(top2)
    {
        push1(top2->data);
        pop2();
    }
    push1(x);
}
void queuee::dequeuee()
{
    while(top1)
    {
        push2(top1->data);
        pop1();
    }
    pop2();
}

void queuee::display()
{
    cout<<"ELEMENTS ARE : ";
    while(top1)
    {
        push2(top1->data);
        pop1();
    }
    node *t=top2;
    while(t)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
}

int main()
{
    queuee q;
    int ch,x;
    int n;
    do
    {
        cout<<"1. PUSH \n2. POP \n3. DISPLAY \n";
        cout<<"ENTER YOUR CHOICE : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"ENTER ELEMENT : ";
                cin>>n;
                q.enqueue(n);
                q.display();
                break;
            case 2:
                //cout<<"DELETED ELEMENTS : ";
                q.dequeuee();
                //cout<<x<<"\n";
                q.display();
                break;
            case 3:
                q.display();
                break;
        }
        cout<<"ENTER 0 to exit ";
        cin>>ch;
    }while(ch!=0);  
    return 0;
}

QUEUE USING STACK
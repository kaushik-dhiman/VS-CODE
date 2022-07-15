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

class stackk
{
    node *rear1;
    node *front1;
    node *rear2;
    node *front2;
    public:
        stackk()
        {
            rear1=rear2=NULL;
            front1=front2=NULL;
        }
        void enqueue1(int);
        void dequeue1();
        void enqueue2(int);
        void dequeue2();
        void display();
        void push(int);
        void pop();
};

void stackk::enqueue1(int x)
{
    node *t=new node(x);
    if(front1==NULL)
    {
        front1=t;
        rear1=t;
    }
    else{
        rear1->next=t;
        rear1=t;
    }
}
void stackk::dequeue1()
{
    node *t=NULL;
    if(front1)
    {
        t=front1;
        front1=front1->next;
        delete t;
    }
}

void stackk::enqueue2(int x)
{
    node *t=new node(x);
    if(front2==NULL)
    {
        front2=t;
        rear2=t;
    }
    else{
        rear2->next=t;
        rear2=t;
    }
}
void stackk::dequeue2()
{
    node *t=NULL;
    if(front2)
    {
        t=front2;
        front2=front2->next;
        delete t;
    }
}

void stackk::push(int x)
{
    while(front2)
    {
        enqueue1(front2->data);
        dequeue2();
    }
    enqueue1(x);
}
void stackk::pop()
{
    if(front1)
    {
        while(front1->next)
        {
            enqueue2(front1->data);
            dequeue1();
        }
        dequeue1();
        return;
    }
    if(front2)
    {
        while(front2->next)
        {
            enqueue2(front1->data);
            dequeue1();
        }
        dequeue2();
    }
}
void stackk::display()
{
    while(front2)
    {
        enqueue1(front2->data);
        dequeue2();
    }
    node *t=front1;
    cout<<"ELEMENTS ARE : ";
    while(t)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
}

int main()
{
    stackk st;
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
                st.push(n);
                st.display();
                break;
            case 2:
                //cout<<"DELETED ELEMENTS : ";
                st.pop();
                //cout<<x<<"\n";
                st.display();
                break;
            case 3:
                st.display();
                break;
        }
        cout<<"ENTER 0 to exit ";
        cin>>ch;
    }while(ch!=0);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int x)
        {
            data=x;
            next=NULL;
        }
};

class Stack1{
    Node *top;
    int count; 
    public:
    Stack1()
    {
        top=NULL;
        count=0;
    }
    Node* getTop(){return top;}
    void push(int);
    void pop();
    void peek();
    void stackTop();
    void isFull();
    void isEmpty();
    void displayStack();
};

void Stack1::push(int x)
{
    Node *t=new Node(x);
    if(t==NULL)
    {
        cout<<"\nStack is Full can not insert item.";
    }
    else
    {
        t->next=top;
        top=t;
        count++;
        cout<<"\nValue "<<x<<" Pushed Successfully to stack.";
    }
}

void Stack1::pop()
{
    Node *t;
    if(top==NULL)
    {
        cout<<"\nStack is Empty Nothing present to pop.";
    }
    else
    {
        t=top;
        top=t->next;
        cout<<"\nValue "<<t->data<<" Poped Successfully from the stack.";
        delete(t);
        count--;
    }
}

void Stack1::peek()
{
    Node *t=top;
    // int p=pos;
    // pos--;
    // while(pos-- && t)
    // {
    //     t=t->next;
    // }
    if(t==NULL)
    {
        cout<<"\nEnter Valid Postion.";
    }
    else
    {
        cout<<"Value  is : "<<t->data; 
    }
}


void Stack1::stackTop()
{
    if(top==NULL)
    {
        cout<<"\nStack is Empty.";
    }
    else
    {
        cout<<"\nTop Element of the stack is : "<<top->data;
    }
}

void Stack1::isFull()
{
    Node *t=new Node(1);
    if(t==NULL)
    {
        cout<<"\nStack is Full.";
    }
    else
    {
        cout<<"\nStack is not Full.";
    }
}

void Stack1::isEmpty()
{
    if(top==NULL)
    {
        cout<<"\nStack is Empty.";
    }
    else
    {
        cout<<"\nStack is Not Empty.";
    }
}

void Stack1::displayStack()
{
    Node *t=top;
    while(t)
    {
        cout<<t->data<<" ";
        t=t->next;
    }
}


int main()
{
    Stack1 stk;
    int cho,ch;
    do
    {
        cout<<"Current Stack Elements :";
        stk.displayStack();
        cout<<"\n1. Push.\n2. Pop.\n3. Peek.\n4. StackTop.\n5 isEmpty.\n6 isFULL.";
        cout<<"\nEnter your choice : ";cin>>cho;
        switch(cho)
        {
            case 1:
                cout<<"Enter the element to push.";
                cin>>cho;
                stk.push(cho);
                break;
            case 2:
                stk.pop();
                break;
            case 3:
                // cout<<"Enter position you want to peek.";
                // cin>>cho;
                //stk.peek(cho);
                stk.peek();
                break;
            case 4:
                stk.stackTop();
                break;
            case 5:
                stk.isEmpty();
                break;
            case 6:
                stk.isFull();
                break;
            default:
                cout<<"\n Enter valid choice.";
        }
        cout<<"\n Enter 0 to exit.";
        cin>>ch; 
    }while(ch!=0);
    return 0;
}
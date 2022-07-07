#include<bits/stdc++.h>
using namespace std;

class Stack1
{
    int size;
    int top;
    int *S;
    public:
    Stack1(int s)
    {
        size=s;
        top=-1;
        S=new int[s];
    }
    void push(int);
    void pop();
    void peek(int);
    void stackTop();
    void isEmpty();
    void isFull();
    void displayStack();
};

void Stack1::push(int x)
{
    if(top==size-1)
    {
        cout<<"\nStack is Full Cannot insert value.";
    }
    else
    {
        S[++top]=x;
        cout<<"\nValue "<<x<<" Pushed Successfully.";
    }
}

void Stack1::pop()
{
    if(top==-1)
    {
        cout<<"\nStack is Empty no value present to pop.";
    }
    else
    {
        int x=S[top--];
        cout<<"\nValue "<<x<<" Poped Successfully.";
    }
}

void Stack1::peek(int ind)
{ 
    if(ind<=0 || top-ind+1<0)
    {
        cout<<"\nNot valid postion to peek.";
    }
    else
    {
        cout<<"Value at position "<<ind<<" is "<<S[top-ind+1];
    }
}

void Stack1::stackTop()
{
    if(top==-1)
    {
        cout<<"\nStack is Empty.";
    }
    else
    {
        cout<<"Value at top of stack is "<<S[top];
    }
}

void Stack1::isEmpty()
{
    if(top==-1)
    {
        cout<<"\nStack is Empty.";
    }
    else
    {
        cout<<"\nStack is not Empty.";
    }
}

void Stack1::isFull()
{
    if(top==size-1)
    {
        cout<<"\nStack is Full.";
    }
    else
    {
        cout<<"\nStack is not Full.";
    }
}

void Stack1::displayStack()
{
    if(top==-1)
        cout<<"Empty";
    else
        for(int i=0;i<=top;i++)cout<<S[i]<<" ";
}

int main()
{
    cout<<"\nEnter the size of the Stack : ";
    int sz,cho,ch;
    cin>>sz;
    Stack1 stk(sz);
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
                cout<<"Enter position you want to peek.";
                cin>>cho;
                stk.peek(cho);
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

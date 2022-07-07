#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        char data;
        Node *next;
        Node(char d)
        {
            data=d;
            next=NULL;
        }
};

class Stack1
{
    Node *top;
    public:
        Stack1()
        {
            top=NULL;
        }
        bool checkBalance(string);
};

bool Stack1::checkBalance(string e)
{
    for(int i=0;i<e.length();i++)
    {
        if(e[i]=='(')
        {
            Node *t=new Node('(');
            t->next=top;
            top=t;       
        }
        if(e[i]==')')
        {
            if(top==NULL)return false;
            else
            {
                Node *t;
                t=top;
                top=top->next;
                delete(t);
            }
        }
    }
    if(top)return false;
    return true;  
}

int main()
{
    Stack1 stk;
    cout<<"\nEnter the Expression to check if it has Balanced Paranthesis or not\n: ";
    string exp;
    cin>>exp;
    if(stk.checkBalance(exp))
    {
        cout<<"\nGiven exp has balance paranthesis.";
    }
    else
    {
        cout<<"\nParanthesis are not Balanced.";
    }
}
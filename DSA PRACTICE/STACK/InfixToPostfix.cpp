#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        char data;
        Node *next;
        Node(char x)
        {
            data=x;
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
    void push(char);
    char pop();
    string InfixToPostfix(string);
    bool isOperand(char);
    int pre(char);
};

bool Stack1::isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return false;
    else    
        return true;
}

int Stack1::pre(char x)
{
    if(x=='+' || x=='-')
        return 1;
    else if(x=='*' || x=='/')
        return 2;
    else
        return 0;
}

void Stack1::push(char c)
{
    Node *n=new Node(c);
    if(top==NULL)
        top=n;
    else
    {
        n->next=top;
        top=n;
    }
}

char Stack1::pop()
{
        char c=top->data;
        top=top->next;
        return c;
}

string Stack1::InfixToPostfix(string ix)
{
    string px;
    int i=0;
    while(i<ix.length())
    {
        if(isOperand(ix[i]))
        {
            px+=ix[i];
            i++;
        }
        else
        {
            if(top==NULL || pre(ix[i])>pre(top->data))
            {
                push(ix[i]);
                i++;
            }
            else
            {
                px+=pop();
            }
        }
    }
    while(top)
    {
        px+=top->data;
        top=top->next;
    }
    return px;
}


int main()
{
    Stack1 st;
    string inf;
    cout<<"\nEnter the Infix Expression : ";
    cin>>inf;
    string pfix=st.InfixToPostfix(inf);
    cout<<"\nPostFix Expression of ( "<<inf<<" ) Expression is : "<<pfix;
    return 0;
}
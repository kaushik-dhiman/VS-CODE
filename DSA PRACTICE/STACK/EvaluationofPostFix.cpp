#include <bits/stdc++.h>
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

class Stack1
{
    Node *top;
    public:
    Stack1()
    {
        top=NULL;
    }
    void push(int);
    int pop();
    bool isOperand(char);
    int EvaluationofPostfix(string);
};

bool Stack1::isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return false;
    else    
        return true;
}

void Stack1::push(int c)
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

int Stack1::pop()
{
        int c=top->data;
        top=top->next;
        return c;
}

int Stack1::EvaluationofPostfix(string px)
{
    int res=0,i=0;
    while(i<px.length())
    {
        if(isOperand(px[i]))
        {
            int c=px[i]-48;
            push(c);
        }
        else
        {
            int b=pop();
            int a=pop();
            switch(px[i])
            {
                case '+':
                    a+=b;
                    break;
                case '-':
                    a-=b;
                    break;
                case '*':
                    a*=b;
                    break;
                case '/':
                    a/=b;
                    break;
            }
            push(a);
           
        }
         i++;
    }
    return top->data;
}

int main()
{
    Stack1 st;
    string postfix;
    cout<<"\nEnter the PostFix Expression : ";
    cin>>postfix;
    int  result=st.EvaluationofPostfix(postfix);
    cout<<"\nResult of PostFix Expression "<<postfix<<" is : "<<result;
    return 0;
}
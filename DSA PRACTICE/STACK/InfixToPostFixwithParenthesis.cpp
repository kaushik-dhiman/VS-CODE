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
    string InfixToPostfixwithParenthesis(string);
    bool isOperand(char);
    int INpre(char);
    int OUTpre(char);
};

bool Stack1::isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/' || x=='^' || x=='(' || x==')')
        return false;
    else    
        return true;
}

int Stack1::INpre(char x)
{
    if(x=='+' || x=='-')
        return 2;
    else if(x=='*' || x=='/')
        return 4;
    else if(x=='^')
        return 5;
    else if(x=='(')
        return 0;
    else    
        return INT_MIN;
}
int Stack1::OUTpre(char x)
{
    if(x=='+' || x=='-')
        return 1;
    else if(x=='*' || x=='/')
        return 3;
    else if(x=='^')
        return 6;
    else if(x=='(')
        return 7;
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

string Stack1::InfixToPostfixwithParenthesis(string ix)
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
            if(top==NULL || OUTpre(ix[i])>INpre(top->data))
            {
                if(ix[i]!=')')
                    push(ix[i]);
                i++;
            }
            else
            {
                char c=pop();
                if(c!='(')
                {
                    px+=c;
                }
                else 
                    i++;
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
    string pfix=st.InfixToPostfixwithParenthesis(inf);
    cout<<"\nPostFix Expression of  "<<inf<<"  Expression is : "<<pfix;
    return 0;
}
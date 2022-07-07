#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

class LinkList{
    Node *head,*tail;
    public:
        LinkList()
        {
            head=NULL;
            tail=NULL;
        }
        void create();
        void Display(Node*);
        int Max();
        int rMax(Node *);
        Node* gethead(){return head;}
        Node* gettail(){return tail;}
};
void LinkList::create()
{
    int size;
    cout<<"Enter the size of LinkList : ";
    cin>>size;
    while(size--)
    {
        Node *temp=new Node();
        cout<<"Enter data of Node : ";
        cin>>temp->data;
        temp->next=NULL;
        if(head==NULL && tail==NULL)
        {
            head=tail=temp;
        }else
        {
            tail->next=temp;
            tail=temp;
        }
    }
}
void LinkList::Display(Node* p)
{
    if(p)
    {
        cout<<p->data<<" ";
        Display(p->next);
    }
}

int LinkList::Max()
{
    Node *p=head;
    int max=INT_MIN;
    while(p)
    {
        if(p->data>max)
            max=p->data;
        p=p->next;
    }
    return max;
}

int LinkList::rMax(Node *p)
{
    if(p==NULL)return INT_MIN;
    else{
        int x=rMax(p->next);
        if(x>p->data)
            return x;
        else
            return p->data;
        //reutrn x>p->data ? x:p->data;
    }
}

int main()
{
    LinkList L;
    L.create();
    L.Display(L.gethead());
    cout<<"\nMax Element is : "<<L.Max();
    cout<<"\nMax Element is : "<<L.rMax(L.gethead());
    return 0;
}
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
        void reverse();
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

void LinkList::reverse()
{
    if(head==NULL || head->next==NULL)return;
    Node *p=NULL,*c=head,*n=NULL;
    while(c)
    {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    head=p;
}

void LinkList::Display(Node* p)
{
    if(p)
    {
        cout<<p->data<<" ";
        Display(p->next);
    }
}

int main()
{
    LinkList L;
    L.create();
    L.Display(L.gethead());
    L.reverse();
    cout<<"\nLinkList after Reverse : ";
    L.Display(L.gethead());
    return 0;
}
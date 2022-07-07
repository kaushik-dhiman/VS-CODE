#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node *prev;
        Node(int x)
        {
            data=x;
            prev=NULL;
            next=NULL;
        }
};

class LinkList{
    Node *head,*tail;
    public:
        LinkList()
        {
            head=NULL;
            tail=NULL;
        }
        void createDLL();
        void reverseDLL();
        void Display(Node*);
        Node* gethead(){return head;}
        Node* gettail(){return tail;}
};
void LinkList::createDLL()
{
    int sz;
    cout<<"\nEnter the size of LinkList : ";
    cin>>sz;
    while(sz--)
    {
        int x;
        cout<<"Enter Node data : ";
        cin>>x;
        if(head==NULL && tail==NULL)
        {
            Node *temp=new Node(x);
            head=tail=temp;
        }
        else
        {
           Node *temp=new Node(x);
           tail->next=temp;
           tail=temp;     
        }
    }    
}

void LinkList::reverseDLL()
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
    L.createDLL();
    L.Display(L.gethead());
    L.reverseDLL();
    cout<<"\n";
    L.Display(L.gethead());
    return 0;
}
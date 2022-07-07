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
        void insertinDLL(int,int);
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

void LinkList::insertinDLL(int pos,int d)
{
    Node *temp=new Node(d);
    if(pos==0)
    {
        if(head==NULL && tail==NULL)
        {
            head=tail=temp;
            return;
        }
        else
        {
            temp->next=head;
            head=temp;
        }
    }
    else
    {
        Node *p=head;
        pos=pos-1;
        while(pos--)
        {
            p=p->next;
            if(pos!=0 && p==NULL) return;
        }
        temp->next=p->next;
        if(p->next)
            p->next->prev=temp;
        p->next=temp;
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


int main()
{
    LinkList L;
    L.createDLL();
    L.Display(L.gethead());
    int p,d;
    cout<<"\nEnter the position where you want to insert node and data of node : ";
    cin>>p>>d;
    L.insertinDLL(p,d);
    L.Display(L.gethead());
    return 0;
}
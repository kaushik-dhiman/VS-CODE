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
        void deletefromDLL(int);
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

void LinkList::deletefromDLL(int pos)
{
    Node *temp,*p;
    if(head==NULL)return;
    if(pos==1)
    {
            temp=head;
            head=head->next;
            delete(temp);
    }
    else
    {
        p=head;
        pos=pos-2;
        while(pos--)
        {
            if(pos!=0 && p==NULL)return;
            p=p->next;
        }
        temp=p->next;
        if(temp->next)
            temp->next->prev=p;
        p->next=temp->next;
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
    cout<<"\nEnter the position of node you want to : ";
    cin>>p;
    L.deletefromDLL(p);
    L.Display(L.gethead());
    return 0;
}
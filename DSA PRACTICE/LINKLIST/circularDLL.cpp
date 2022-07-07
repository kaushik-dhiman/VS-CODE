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
        void createcircularDLL();
        void Display();
        Node* gethead(){return head;}
        Node* gettail(){return tail;}
};
void LinkList::createcircularDLL()
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
    if(head)
        head->prev=tail;    
    if(tail)
        tail->next=head;
}

void LinkList::Display()
{
    Node *p=head;
    if(p)
    {
        while(p)
        {
            cout<<p->data<<" ";
            if(p->next==head)return;
            p=p->next;
        }
    }
}


int main()
{
    LinkList L;
    L.createcircularDLL();
    L.Display();
    return 0;
}
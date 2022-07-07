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
        void createLoop(int);
        bool detectLoop();
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

void LinkList::createLoop(int pos)
{
    Node *p=head;
    while(pos-- && p->next)
        p=p->next;
    if(p)
        tail->next=p;
}

bool LinkList::detectLoop()
{
    Node *slow=head,*fast=head->next;
    while(fast && fast->next)
    {
        if(slow==fast)return true;
        slow=slow->next;
        fast=fast->next->next;
    }
    return false;
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
    if(L.detectLoop())cout<<"\nLoop Detected";
    else cout<<"\nNo Loop Detected";
    cout<<"\nEnter Postion to create loop : ";
    int p;
    cin>>p;
    L.createLoop(p);
    if(L.detectLoop())cout<<"\nLoop Detected";
    else cout<<"\nNo Loop Detected";
    return 0;
}
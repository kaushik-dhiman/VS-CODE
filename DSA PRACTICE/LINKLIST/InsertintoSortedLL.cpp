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
        void insert(int);
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

void LinkList::insert(int d){
    Node *c=head,*p=head;
    Node *temp=new Node();
    temp->data=d;
    temp->next=NULL;
    if(d<head->data){
        temp->next=head;
        head=temp;
    }else{
        while(c)
        {
            if(d<c->data){
                temp->next=c;
                p->next=temp;
                return;
            }
            p=c;
            c=c->next;
        }
        p->next=temp;
    }
}

int main()
{
    LinkList L;
    L.create();
    L.Display(L.gethead());
    int x;
    cout<<"\nEnter the element to insert : ";
    cin>>x;
    L.insert(x);
    L.Display(L.gethead());
    return 0;
}
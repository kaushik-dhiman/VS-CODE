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
        void findMiddle();
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

void LinkList::findMiddle()
{
    int c=0;
    Node *p=head;
    while(p)
    {
        c++;
        p=p->next;
    }
    p=head;
    if(c%2==0)c--;
    c=c/2;
    while(c--)
    {
        p=p->next;
    }
    cout<<"\nMiddle Element is : "<<p->data;
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
    L.findMiddle();
    return 0;
}
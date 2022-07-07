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
        int Min();
        int rMin(Node *);
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

int LinkList::Min()
{
    Node *p=head;
    int min=INT_MAX;
    while(p)
    {
        if(p->data<min)
            min=p->data;
        p=p->next;
    }
    return min;
}

int LinkList::rMin(Node *p)
{
   if(p==NULL)return INT_MAX;
   else{
    int x=rMin(p->next);
   if(x<p->data)
        return x;
    else    
        return p->data;
   }
}

int main()
{
    LinkList L;
    L.create();
    L.Display(L.gethead());
    cout<<"\nMin Element is : "<<L.Min();
    cout<<"\nMin Element is : "<<L.rMin(L.gethead());
    return 0;
}
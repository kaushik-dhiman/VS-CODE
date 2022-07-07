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
        void insertNode(int,int);
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

void LinkList::insertNode(int pos,int val){
    Node *temp=new Node;
    temp->data=val;
    if(pos==0)
    {   
        if(head==NULL)
        {
            temp->next=NULL;
        }else{
            
            temp->next=head;
        }
        head = temp;
        return;
    }
    Node *p=head;
    pos--;
    while(pos-- && p)
    {
        p=p->next;
    }
    if(p)
    {
            temp->next=p->next;
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
    L.create();
    L.Display(L.gethead());
    int p,d;
    cout<<"\nEnter the postion where you want to insert and value to be inserted : ";
    cin>>p>>d;
    L.insertNode(p,d);
    L.Display(L.gethead());
    return 0;
}
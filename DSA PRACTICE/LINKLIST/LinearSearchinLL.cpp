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
        int Search(int);
        int rSearch(Node*,int);
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

int LinkList::Search(int k)
{
    Node *p=head;
    while(p)
    {
        if(p->data==k)
            return 1;
        p=p->next;
    }
    return 0;
}

int LinkList::rSearch(Node *p,int k)
{
    if(p==NULL)return 0;
    if(p->data==k)return 1;
    return rSearch(p->next,k);
}

int main()
{
    LinkList L;
    L.create();
    L.Display(L.gethead());
    int key;
    cout<<"\nEnter Element to search : ";
    cin>>key;
    if(L.Search(key) && L.rSearch(L.gethead(),key))
    {
        cout<<"Element found.";
    }
    else
        cout<<"Element Not Found.";
    return 0;
}
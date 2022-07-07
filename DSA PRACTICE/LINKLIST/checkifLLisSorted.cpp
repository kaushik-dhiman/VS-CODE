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
        bool isSortedinASC();
        bool isSortedinDSC();
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

bool LinkList::isSortedinASC()
{
    Node *p=head;
    while(p->next)
    {
        if(p->data<p->next->data)
        {
            p=p->next;
            continue;
        }else   return false;
    }
    return true;
}

bool LinkList::isSortedinDSC()
{
    if(head==NULL)return false;
    Node *p=head;
    while(p->next)
    {
        if(p->data>p->next->data)
        {
            p=p->next;
            continue;
        }else   return false;
    }
    return true;
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
    if(L.isSortedinASC())cout<<"\nLinkList is Sorted in ASC.";
    else    cout<<"\nLinkList is Not sorted in ASC.";
    if(L.isSortedinDSC())cout<<"\nLinkList is Sorted in DSC. ";
    else    cout<<"\nLinkList is Not sorted in DSC.";
    return 0;
}
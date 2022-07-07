#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

class LinkList{
    Node *head1,*tail1,*head2,*tail2,*mergehead;
    public:
        LinkList()
        {
            head1=NULL;
            tail1=NULL;
            head2=NULL;
            tail2=NULL;
        }
        void create1();
        void create2();
        void concatinate();
        void Display(Node*);
        Node* gethead1(){return head1;}
        Node* gettail1(){return tail1;}
        Node* gethead2(){return head2;}
        Node* gettail2(){return tail2;}
};
void LinkList::create1()
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
        if(head1==NULL && tail1==NULL)
        {
            head1=tail1=temp;
        }else
        {
            tail1->next=temp;
            tail1=temp;
        }
    }
}


void LinkList::create2()
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
        if(head2==NULL && tail2==NULL)
        {
            head2=tail2=temp;
        }else
        {
            tail2->next=temp;
            tail2=temp;
        }
    }
}


void LinkList::concatinate()
{
    Node *p=head1;
    if(p==NULL)return;
    
    while(p->next)
    {
        p=p->next;
    }
    p->next=head2;
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
    L.create1();
    L.create2();
    cout<<"\n";
    L.Display(L.gethead1());
    cout<<"\n";
    L.Display(L.gethead2());
    L.concatinate();
    cout<<"\n";
    L.Display(L.gethead1());
    return 0;
}
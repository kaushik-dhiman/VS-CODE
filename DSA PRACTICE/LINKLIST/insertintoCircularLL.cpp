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
        void createCircularLL();
        void DisplayCLL();
        void insertNodeCLL(int,int);
        Node* gethead(){return head;}
        Node* gettail(){return tail;}
};

void LinkList::createCircularLL()
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
    if(tail)
        tail->next=head;
}

void LinkList::insertNodeCLL(int pos,int d)
{
    Node *p;
    Node *temp=new Node;
    temp->data=d;
    temp->next=NULL;
    if(pos==0)
    {
        p=head;
        if(p==NULL){
            head=temp;
            head->next=head;
        }
        else{
            temp->next=head;
            while(p->next!=head)
                p=p->next;
            p->next=temp;
            head=temp;
        }
    }
    else
    {
        p=head;
        if(p==NULL){
            head=temp;
            head->next=head;
        }
        else{
            pos--;
            while(pos--)
            {
                p=p->next;
                if(pos!=0 && p==head)return;
            }
            temp->next=p->next;
            p->next=temp;
        }

    }
}

void LinkList::DisplayCLL()
{
    Node *p=head;
    if(p)
    {
        do
        {
            cout<<p->data<<" ";
            p=p->next;
        }while(p!=head);
    }
}

int main()
{
    LinkList L;
    L.createCircularLL();
    L.DisplayCLL();
    int p,d;
    cout<<"\nEnter the postion and data of node you want to insert : ";
    cin>>p>>d;
    L.insertNodeCLL(p,d);
    L.DisplayCLL();
    return 0;
} 
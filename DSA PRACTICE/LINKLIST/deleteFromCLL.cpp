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
        void deleteNodeCLL(int);
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

void LinkList::deleteNodeCLL(int pos)
{
    if(head==NULL)return;
    Node *p,*temp;
    if(pos==1)
    {
        if(head->next==head)
        {
            temp=head;
            head=NULL;
            delete(temp);
        }
        else
        {
            p=head;
            do
            {
                p=p->next;
            }while(p->next!=head);
            temp=head;
            p->next=head->next;
            head=head->next;
            delete(temp);
        }                
    }
    else
    {
        p=head;
        pos=pos-1;
        while(pos--)
        {
            p=p->next;
            if(pos!=0 && p==head)return;
        }
        temp=p->next;
        p->next=p->next->next;
        delete(temp);
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
    int p;
    cout<<"\nEnter the postion node you want to delete : ";
    cin>>p;
    L.deleteNodeCLL(p);
    L.DisplayCLL();
    return 0;
} 
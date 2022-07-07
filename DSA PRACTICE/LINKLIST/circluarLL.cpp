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
        void DisplayCLL(Node*);
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
void LinkList::DisplayCLL()
{
    Node *p=head;
    if(p==NULL)return;
    do
    {
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

int main()
{
    LinkList L;
    L.createCircularLL();
    L.DisplayCLL();
    return 0;
} 
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
        void deleteNode(int);
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

void LinkList::deleteNode(int pos)
{   Node *p=head;
    Node *temp=new Node;
    if(head==NULL)  return;
    if(pos==1){
        temp=head;
        head=head->next;
        delete(temp);
        return ;
    }
    pos=pos-2;
    while(pos-- && p)
    {
        p=p->next;
    }
    if(p){
        temp=p->next;
        if(p->next)
            p->next=p->next->next;
        else
            p->next=NULL;
        delete(temp);
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
    cout<<"\n Enter the postion of node you want to delete : ";
    int p;
    cin>>p;
    L.deleteNode(p);
    L.Display(L.gethead());
    return 0;
}
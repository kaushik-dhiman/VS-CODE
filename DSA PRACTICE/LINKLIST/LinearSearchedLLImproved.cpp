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
        int Searchimp(int);
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

int LinkList::Searchimp(int k)
{
    int flag=0;
    Node *p=NULL,*c=head;
    if(head==NULL)return 0;

    while(c)
    {
        if(c->data==k)
        {

            flag=1;
            break;
        }
        p=c;
        c=c->next;
    }
    if(flag==1){
        if(head->next!=NULL){
        p->next=c->next;
        c->next=head;
        head=c;}
        return 1;
    }
    return 0;
}


int main()
{
    LinkList L;
    L.create();
    L.Display(L.gethead());
    int key;
    cout<<"\nEnter Element to search : ";
    cin>>key;
    if(L.Searchimp(key))
    {
        cout<<"Element found.\n";
    }
    else
        cout<<"Element Not Found.\n";
    L.Display(L.gethead());
    return 0;
}
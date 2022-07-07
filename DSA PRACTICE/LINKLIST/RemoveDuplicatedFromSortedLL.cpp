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
        void removeDup();
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
//Self Delete
void LinkList::removeDup()
{
    Node *p=head,*n=head;
    int f=0;
    while(p && n)
    {
        if(p->data==n->data)
        {
            f==0;
            n=n->next;
            continue;
        }
        f==1;
        p->next=n;
        n=n->next;
        p=p->next;
    }
    if(f==0)p->next=NULL;
}
//bari procedure
// void LinkList::removeDup()
// {
//     Node *p=head,*n=head->next;
//     while(n!=NULL)
//     {
//         if(p->data!=n->data)
//         {
//             p=n;
//             n=n->next;
//         }
//         else{
//             p->next=n->next;
//             delete(n);
//             n=p->next;
//         }
//     }
// }


int main()
{
    LinkList L;
    L.create();
    L.Display(L.gethead());
    L.removeDup();
    cout<<"\n";
    L.Display(L.gethead());
    return 0;
}
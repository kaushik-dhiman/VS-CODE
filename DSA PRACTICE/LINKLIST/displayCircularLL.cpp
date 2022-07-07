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
        void DisplayCLLrec(Node*);
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
    if(p){
    do
    {
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
    }
}

void LinkList::DisplayCLLrec(Node *p)
{
    static int flag=0;
    if(p!=head || flag==0 && head!=NULL)
    {
        flag=1;
        cout<<p->data<<" ";
        DisplayCLLrec(p->next);
    }
    flag=0;
}

int main()
{
    LinkList L;
    L.createCircularLL();
    L.DisplayCLL();
    cout<<"\n";
    L.DisplayCLLrec(L.gethead());
    return 0;
}  
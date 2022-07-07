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
        void insertLast(int);
        Node* gethead(){return head;}
        Node* gettail(){return tail;}
};

void LinkList::insertLast(int d){
    Node *temp=new Node;
    temp->data=d;
    temp->next=NULL;
    if(head==NULL && tail==NULL)
    {
        head=tail=temp;
    }
    else{
        tail->next=temp;
        tail=tail->next;
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
    int ch;
    do{
        int x;
        cout<<"Enter value to insert : ";
        cin>>x;
        L.insertLast(x);
        cout<<"\nIf you want to continue  enter 0 else any other value : ";
        cin>>ch; 
    }while(ch==0);
    cout<<"LinkList is : ";
    L.Display(L.gethead());
    return 0;
}
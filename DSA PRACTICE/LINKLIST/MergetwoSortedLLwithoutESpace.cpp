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
        void mergewithoutESpace();
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

//self
// void LinkList::mergewithoutESpace()
// {
//     if(head1==NULL || head2==NULL)
//     {   if(head2!=NULL)
//         {    
//             head1=head2;
//         }
//         return;
//     }
//     Node *l1=head1,*l2=head2,*first=NULL,*last=NULL;    
//     while(l1 && l2)
//     {
//         if(l1->data<l2->data)
//         {
//             if(l1==head1 && l2==head2)
//             {
//                 first=l1;
//                 last=l1;
//                 l1=l1->next;
//                 first->next=NULL;
//             }
//             else
//             {
//                 last->next=l1;
//                 last=l1;
//                 l1=l1->next;
//             }
//             last->next=NULL;
//         }
//         else if(l1->data>l2->data)
//         {
//             if(l1==head1 && l2==head2)
//             {
//                 first=l2;
//                 last=l2;
//                 l2=l2->next;
//                 first->next=NULL;
//             }
//             else
//             {
//                 last->next=l2;
//                 last=l2;
//                 l2=l2->next;
//             }
            
//             last->next=NULL;
//         }
//         else
//         {
//                 if(l1==head1 && l2==head2)
//                 {
//                     first=l1;
//                     l1=l1->next;
//                     first->next=l2;
//                     last=l2;
//                     l2=l2->next;
//                 }
//                 else
//                 {
//                     last->next=l1;
//                     last=l1;
//                     l1=l1->next;
//                     last->next=l2;
//                     last=l2;
//                     l2=l2->next;
//                 }
//                 last->next=NULL;
//             }
//         }
//         if(l1)last->next=l1;
//         else last->next=l2;
//         // while(l1){
//         //     last->next=l1;
//         //     last=l1;
//         //     l1=l1->next;
//         //     last->next=NULL;
//         // }
//         // while(l2)
//         // {
//         //     last->next=l2;
//         //     last=l2;
//         //     l2=l2->next;
//         //     last->next=NULL;
//         // }
//         head1=first;    
// }

//bari will not handle case for first same characters
void LinkList::mergewithoutESpace()
{
    if(head1==NULL || head2==NULL)
    {   if(head2!=NULL)
        {    
            head1=head2;
        }
        return;
    }
    Node *l1=head1,*l2=head2,*first=NULL,*last=NULL;    
    if(l1->data<l2->data)
    {
        first=last=l1;
        l1=l1->next;
        last->next=NULL;
    }
    else
    {
        first=last=l2;
        l2=l2->next;
        last->next=NULL;
    }
    while(l1 && l2)
    {
        if(l1->data<l2->data)
        {
            last->next=l1;
            last=l1;
            l1=l1->next;
            last->next=NULL;
        }
        else if(l1->data>l2->data)
        {
            last->next=l2;
            last=l2;
            l2=l2->next;
            last->next=NULL;
        }
        else{
            last->next=l1;
            last=l1;
            l1=l1->next;
            last->next=l2;
            last=l2;
            l2=l2->next;
            last->next=NULL;          
        }
    }  
        if(l1)last->next=l1;
        if(l2) last->next=l2; 
}
//EASY WAY
/*
Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node *third=NULL,*end=NULL;
    while(head1 && head2)
    {
        if(head1->data<head2->data)
        {
            if(third==NULL && end==NULL)
            {
                third=head1;
                end=head1;
                head1=head1->next;
                third->next=NULL;
                end->next=NULL;
            }
            else
            {
                end->next=head1;
                head1=head1->next;
                end=end->next;
                end->next=NULL;
            }
        }
        else
        {
            if(third==NULL && end==NULL)
            {
                third=head2;
                end=head2;
                head2=head2->next;
                third->next=NULL;
                end->next=NULL;
            }
            else
            {
                end->next=head2;
                head2=head2->next;
                end=end->next;
                end->next=NULL;
            }
        }
    }
    if(head1){
        end->next=head1;
    }
    if(head2)
    {
        end->next=head2;
    }
    return third;
}
*/
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
    L.mergewithoutESpace();
    cout<<"\n";
    L.Display(L.gethead1());
    return 0;
}
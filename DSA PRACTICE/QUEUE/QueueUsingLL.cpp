#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node(int x)
        {
            data=x;
            next=NULL;
        }
};

class Queue1
{
    Node *front,*rear;
    public:
    Queue1()
    {
        front=rear=NULL;
    }
    void Enque(int);
    void Deque();
    void isEmpty();
    void isFull();
    void First();
    void Last();
    void displayQueue();
};

void Queue1::Enque(int x)
{
    Node *n=new Node(x);
    if(front==NULL)
    {
        front=rear=n;
    }
    else
    {
        rear->next=n;
        rear=rear->next;
    }

}

void Queue1::Deque()
{
    if(front==NULL)
    {
        cout<<"\nQueue is Empty no Item to Deque.";
    }
    else
    {
        Node *t=front;
        front=front->next;
        cout<<"\nItem "<<t->data<<" Dequed Successfully.";
        delete(t);
    }
}

void Queue1::First()
{
    if(front==NULL)
        cout<<"\nQueue is Empty.";
    else
        cout<<"\nFirst Element in the Queue is : "<<front->data;
}

void Queue1::Last()
{
    if(rear==NULL)
        cout<<"\nQueue is Empty.";
    else
        cout<<"\nLast Element in the Queue is : "<<rear->data;
}

void Queue1::isEmpty()
{
    if(front==NULL)
        cout<<"\nQueue is Empty.";
    else
        cout<<"\nQueue is Not Empty.";      
}

void Queue1::isFull()
{
    Node *n=new Node(1);
     if(n==NULL)
        cout<<"\nQueue is Full.";
    else
        cout<<"\nQueue is Not Full.";    
}

void Queue1::displayQueue()
{
    Node *n=front;
    while(n)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}

int main()
{
    Queue1 q;
    int cho,ch;
    do
    {
        cout<<"Current queue Elements :";
        q.displayQueue();
        cout<<"\n1. Enque.\n2. Deque.\n3. First Element.\n4. Last Element.\n5 isEmpty.\n6 isFULL.";
        cout<<"\nEnter your choice : ";
        cin>>cho;
        switch(cho)
        {
            case 1:
                cout<<"Enter the element to Enque.";
                cin>>cho;
                q.Enque(cho);
                break;
            case 2:
                q.Deque();
                break;
            case 3:
                q.First();
                break; 
            case 4:
                q.Last();
                break;
            case 5:
                q.isEmpty();
                break;
            case 6:
                q.isFull();
                break;
            default:
                cout<<"\n Enter valid choice.";
        }
        cout<<"\n Enter 0 to exit.";
        cin>>ch; 
    }while(ch!=0);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class CQueue
{
    int front,rear,size,*Q;
    public:
        CQueue(int sz)
        {
            front=rear=0;
            size=sz;
            Q=new int[size];
        }
        void enque(int);
        void deque();
        void isFull();
        void isEmpty();
        void displayQueue();
};

void CQueue::enque(int x)
{
    if((rear+1)%size==front)
    {
        cout<<"\nQueue is Full.";
    }         
    else
    {
        rear=(rear+1)%size;
        Q[rear]=x;
    }
}

void CQueue::deque()
{
    if(front==rear)
    {
        cout<<"\nQueue is Empty.";
    }
    else
    {
        front=(front+1)%size;
        cout<<"\nItem "<<Q[front]<<" Dequeued Successfully.";
    }
}

void CQueue::isFull()
{
   if((rear+1)%size==front)
    {
        cout<<"\nQueue is Full.";
    }         
    else
    {
        cout<<"\nQueue is not Full.";
    } 
}

void CQueue::isEmpty()
{
    if(front==rear)
    {
        cout<<"\nQueue is Empty."; 
    }
    else
    {
        cout<<"\nQueue is not Empty.";
    }
}

void CQueue::displayQueue()
{
    if(front==rear)
        return;
    int i=(front+1)%size;
    do
    {
        cout<<Q[i]<<" ";
        i=(i+1)%size;
    }while(i!=(rear+1)%size);
}

int main()
{
    int n,ch,cho;
    cout<<"\nEnter the size of the queue : ";
    cin>>n;
    CQueue q(n);
    do 
    {
        cout<<"\nCurrent Queue Content : ";
        q.displayQueue();
        cout<<"\n1. Enque\n2. Deque\n3. isFull\n4. isEmpty\n";
        cout<<"\nEnter your choice : ";
        cin>>cho;
        switch(cho)
        {
            case 1:
                cout<<"\nEnter the element to Enque : ";
                cin>>cho;
                q.enque(cho);
                break;
            case 2:
                q.deque();
                break;
            case 3:
                q.isFull();
                break;
            case 4:
                q.isEmpty();
                break;
            default :
                cout<<"\nEnter a valid Choice.";
        }
        cout<<"\nEnter 0 to Exit.";
        cin>>ch;
    }while(ch!=0);
    return 0;
}
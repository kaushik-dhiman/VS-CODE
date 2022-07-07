#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left,*right;
    Node(int x)
    {
        data=x;
        left=right=NULL;
    }
};

class Tree
{
    Node *root;
    public:
    Tree()
    {
        root=NULL;
    }
    Node * getRoot(){return root;}
    void createTree(Node *);
    void preOrder(Node *);
};

void Tree::createTree(Node *t)
{
    cout<<"-------------------------\nEnter data or enter -1 as no child\n-------------------------\n";
    cout<<"Enter the Root Node data : ";
    queue<Node *> q;
    int d;
    cin>>d;
    if(d!=-1)
    {
        root=new Node(d);  
        q.emplace(root);
    }
    while(!q.empty())
    {
        if(q.front()){
        Node *temp;
        Node *t=q.front(); 
        cout<<"Enter the Left child of ( "<<t->data<<" ) : ";
        cin>>d;
        if(d!=-1)
        {
            temp=new Node(d);
            t->left=temp;
            q.emplace(temp);
        }
        cout<<"Enter the right child of ( "<<t->data<<" ) : ";
        cin>>d;
        if(d!=-1)
        {
            temp=new Node(d);
            t->right=temp;
            q.emplace(temp);
        }
        q.pop();
        }
    }
}

void Tree::preOrder(Node *t)
{
    if(t)
    {
        cout<<t->data<<" ";
        preOrder(t->left);
        preOrder(t->right);
    }
}

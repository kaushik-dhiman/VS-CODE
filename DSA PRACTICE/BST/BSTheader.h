#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *left;
        Node *right;
        Node (int d)
        {
            data=d;
            left=right=NULL;
        }
};

class BST
{
    Node * root;
    public:
    BST()
    {
        root=NULL;
    }
    void createBST();
    void inOrder(Node *);
    Node *getroot(){return root;}
};

void BST::createBST()
{
    cout<<"ENTER -1 AS NODE DATA TO FINISH CREATING TREE\nDO NOT ENTER DUPULICATE ELEMENTS\n";
    int ch;
    while(1)
    {
        cout<<"Enter Node data : ";
        cin>>ch;
        if(ch==-1)break;
        Node *t=new Node(ch);
        if(root==NULL)
        {
            root=t;
        }
        else
        {
            Node *p=root,*r;
            while(p)
            {
                r=p;
                if(ch>p->data)
                    p=p->right;
                else
                    p=p->left;
            }
            if(ch>r->data)r->right=t;
            else r->left=t;
        }
    }
    
}

void BST::inOrder(Node * t)
{
    if(t)
    {
        inOrder(t->left);
        cout<<t->data<<" ";
        inOrder(t->right);
    }
}
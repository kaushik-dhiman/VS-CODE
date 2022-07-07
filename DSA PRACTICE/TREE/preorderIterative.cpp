#include "basicheader.h"
#include <bits/stdc++.h>
using namespace std;

class BTree
{
    public:
    void preorderIterative(Node *);
};

void BTree::preorderIterative(Node *t)
{
    stack<Node *> s;
    while(t!=NULL || !s.empty())
    {
        if(t)
        {
            cout<<t->data<<" ";
            s.push(t);
            t=t->left;
        }
        else
        {
            t=s.top();
            s.pop();
            t=t->right;
        }
    }
    // if(t)
    // {
    //     stack<Node *> s;
    //     s.push(t);
    //     while(!s.empty())
    //     {
    //         Node *temp=s.top();
    //         s.pop();
    //         cout<<temp->data<<" ";
    //         if(temp->right)
    //             s.push(temp->right);
    //         if(temp->left)
    //             s.push(temp->left);
    //     }
    // }
}

int main()
{
    Tree t;
    BTree l;
    t.createTree(t.getRoot());
    cout<<"\nGiven Tree Preorder : ";
    t.preOrder(t.getRoot());
    cout<<"\nPre Order Traversal by iterative of Tree is : ";
    l.preorderIterative(t.getRoot());
    return 0;
}
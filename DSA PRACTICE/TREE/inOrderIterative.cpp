#include "basicheader.h"
#include <bits/stdc++.h>
using namespace std;

class BTree
{
    public:
    void inOrderIterative(Node *);
};

void BTree::inOrderIterative(Node *t)
{
    stack<Node *> s;
    while(t!=NULL || !s.empty())
    {
        if(t)
        {
            s.push(t);
            t=t->left;
        }
        else
        {
            t=s.top();
            cout<<t->data<<" ";
            s.pop();
            t=t->right;
        }
    }
}

int main()
{
    Tree t;
    BTree l;
    t.createTree(t.getRoot());
    cout<<"\nGiven Tree Preorder : ";
    t.preOrder(t.getRoot());
    cout<<"\nPre Order Traversal by iterative of Tree is : ";
    l.inOrderIterative(t.getRoot());
    return 0;
}
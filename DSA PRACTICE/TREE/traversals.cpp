#include "basicheader.h"
#include <bits/stdc++.h>
using namespace std;

class BTree
{
    public:
    void preOrder(Node *);
    void inOrder(Node *);
    void postOrder(Node *);
};

void BTree::preOrder(Node *t)
{
    if(t)
    {
        cout<<t->data<<" ";
        preOrder(t->left);
        preOrder(t->right);
    }
}

void BTree::inOrder(Node *t)
{
    if(t)
    {
        inOrder(t->left);
        cout<<t->data<<" ";
        inOrder(t->right);
    }
}

void BTree::postOrder(Node *t)
{
    if(t)
    {
        postOrder(t->left);
        postOrder(t->right);
        cout<<t->data<<" ";
    }
}

int main()
{
    Tree t;
    BTree t1;
    t.createTree(t.getRoot());
    cout<<"\nGiven Tree Preorder : ";
    t.preOrder(t.getRoot());
    cout<<"\nGiven Tree Preorder : ";
    t1.preOrder(t.getRoot());
    cout<<"\nGiven Tree inorder : ";
    t1.inOrder(t.getRoot());
    cout<<"\nGiven Tree Postorder : ";
    t1.postOrder(t.getRoot());
    return 0;
}
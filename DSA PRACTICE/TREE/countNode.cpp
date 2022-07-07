#include "basicheader.h"
#include <bits/stdc++.h>
using namespace std;

class BTree
{
    public:
    int totalNodes(Node *);
    int internalNodes(Node *);
    int leafNodes(Node *);
    int twochildNodes(Node *);
};

int BTree::totalNodes(Node *t)
{
    if(t)
    {
        return 1+totalNodes(t->left)+totalNodes(t->right);
    }
    return 0;
}

int BTree::internalNodes(Node *t)
{
    if(t)
    {
        if(t->left || t->right)
            return 1+internalNodes(t->left)+internalNodes(t->right);
        else
            return internalNodes(t->left)+internalNodes(t->right);
    }
    return 0;
}

int BTree::leafNodes(Node *t)
{
    if(t)
    {
        if(t->left==NULL && t->right==NULL)
            return 1+leafNodes(t->left)+leafNodes(t->right);
        else
            return leafNodes(t->left)+leafNodes(t->right);
    }
    return 0;
}

int BTree::twochildNodes(Node *t)
{
    if(t)
    {
        if(t->left && t->right)
            return 1+twochildNodes(t->left)+twochildNodes(t->right);
        else
            return twochildNodes(t->left)+twochildNodes(t->right);
    }
    return 0;
}

int main()
{
    Tree t;
    BTree h;
    t.createTree(t.getRoot());
    cout<<"\nGiven Tree Preorder : ";
    t.preOrder(t.getRoot());
    int c;
    c=h.totalNodes(t.getRoot());
    cout<<"\nTotal Nodes in given tree is : "<<c;
    c=h.leafNodes(t.getRoot());
    cout<<"\nLeaf Nodes in given tree is : "<<c;
    c=h.internalNodes(t.getRoot());
    cout<<"\nInternal Nodes in given tree is : "<<c;
    c=h.twochildNodes(t.getRoot());
    cout<<"\nNodes with two child in given tree is : "<<c;
    return 0;
}
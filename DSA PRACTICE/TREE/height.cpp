#include "basicheader.h"
#include <bits/stdc++.h>
using namespace std;

class BTree
{
    public:
    int height(Node *);
};

int BTree::height(Node *t)
{
    // if(!t)return 0;
    // else return 1+max(height(t->left),height(t->right));
    if(!t)return 0;
    else
    {
        int l=height(t->left);
        int r=height(t->right);
        return 1+max(l,r);
    }
}

int main()
{
    Tree t;
    BTree h;
    t.createTree(t.getRoot());
    cout<<"\nGiven Tree Preorder : ";
    t.preOrder(t.getRoot());
    int ht=h.height(t.getRoot());
    cout<<"\nHeight of given tree is : "<<ht;
    return 0;
}
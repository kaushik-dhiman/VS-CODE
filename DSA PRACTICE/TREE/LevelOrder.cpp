#include "basicheader.h"
#include <bits/stdc++.h>
using namespace std;

class BTree
{
    public:
    void lOrder(Node *);
};

void BTree::lOrder(Node *t)
{
    if(t)
    {
        queue<Node *> q;
        q.emplace(t);
        while(!q.empty())
        {
            Node *temp=q.front();
            cout<<temp->data<<" ";
            if(temp->left)
                q.emplace(temp->left);
            if(temp->right)
                q.emplace(temp->right);
            q.pop();
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
    cout<<"\nLevel Order Traversal of Tree is : ";
    l.lOrder(t.getRoot());
    return 0;
}
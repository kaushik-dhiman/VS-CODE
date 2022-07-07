#include "basicheader.h"
#include <bits/stdc++.h>
using namespace std;

class BTree
{
    public:
    void lOrderLBL(Node *);
    void lOrderLBL1(Node *);
};

//isme ham dekhre he jab hame null milra to us se next level pura queue me present he
void BTree::lOrderLBL(Node *t)
{
    if(!t)return;
    queue<Node *> q;
    q.push(t);
    q.push(NULL);       //q.emplace() NULL ni lera
    while(q.size()>1)
    {  
        Node *temp=q.front();
        q.pop();
        if(!temp)
        {
            cout<<"\n";
            q.push(NULL);
            continue;
        }
        cout<<temp->data<<" ";
        if(temp->left)q.emplace(temp->left);
        if(temp->right)q.emplace(temp->right);
    }
}

void BTree::lOrderLBL1(Node *t)
{
    if(!t)return;
    queue<Node *> q;
    q.push(t);
    while(!q.empty())
    {
        int sz=q.size();
        while(sz--)
        {
            Node *temp=q.front();
            q.pop();
            cout<<temp->data<<" ";
            if(temp->left)q.emplace(temp->left);
            if(temp->right)q.emplace(temp->right);
        }
        cout<<"\n";
    }
}

int main()
{
    Tree t;
    BTree l;
    t.createTree(t.getRoot());
    cout<<"\nGiven Tree Preorder : ";
    t.preOrder(t.getRoot());
    cout<<"\nLevel Order Traversal of Tree is :\n";
    l.lOrderLBL(t.getRoot());
    cout<<"\nLevel Order Traversal of Tree is :\n";
    l.lOrderLBL1(t.getRoot());
    return 0;
}
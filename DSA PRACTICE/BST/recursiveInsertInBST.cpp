#include "BSTheader.h"

class BSTree
{
    public:
    void insert(Node *,int);
};

void BSTree::insert(Node *t,int d)
{
    Node *t1=new Node(d);
    if(t->data==d)return;
    if(d<t->data)
    {
        if(t->left)insert(t->left,d);
        else
        {
            t->left=t1;
            return;
        }
    }
    else
    {
        if(t->right)insert(t->right,d);
        else
        {
            t->right=t1;
            return;
        }
    }
}

int main()
{
    BST b;
    BSTree b1;
    b.createBST();
    cout<<"\nInOrder of BST is : ";
    b.inOrder(b.getroot());
    cout<<"\nEnter Node data to insert : ";
    int d;
    cin>>d;
    b1.insert(b.getroot(),d);
    cout<<"\nInOrder of BST after inserting Node  is : ";
    b.inOrder(b.getroot());
}
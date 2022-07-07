#include "BSTheader.h"

class BSTSearch{
    public:
    bool rSearch(Node *,int key);
    bool iSearch(Node *,int key);
};

bool BSTSearch::iSearch(Node *t,int key)
{
    while(t)
    {
        if(t->data==key)return true;
        if(t->data>key)t=t->left;
        else    t=t->right;
    }
    return false;
}

bool BSTSearch::rSearch(Node *t,int key)
{
    if(t)
    {
        if(t->data==key)return true;
        if(t->data>key)return rSearch(t->left,key);
        else return rSearch(t->right,key);
    }
    return false;    
}

int main()
{
    BST b;
    BSTSearch b1;
    b.createBST();
    cout<<"\nInOrder of Given BST is : ";
    b.inOrder(b.getroot());
    cout<<"\nEnter the key to Search : ";
    int key;
    cin>>key;
    if(b1.iSearch(b.getroot(),key) && b1.rSearch(b.getroot(),key))
    {
        cout<<"\nKey Found in Tree.";
    }  
    else
        cout<<"\nKey Not Found in Tree.";
}
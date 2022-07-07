#include<bits/stdc++.h>
using namespace std;

class Node
{
	public:
		int data;
		Node *next;
};

class LinkList{
	private:
		Node *head , *tail ;
	public:
		LinkList(){
			head = NULL ;
			tail = NULL ;
		}	
		void create();
		void display();
		Node* gethead(){return head;}
		Node* gettail(){return tail;}
		void rdisplay(Node *);
};
void LinkList :: create()
	{
		int size;
		cout << "Enter the size of the Link List : " ;
		cin >> size ;
		while ( size-- )
		{
			int x ;
			cout << "Enter data : " ;
			cin >> x ;
			Node *temp = new Node();
			temp -> data = x ;
			temp -> next = NULL ;
			if(head == NULL && tail == NULL)
			{
				head =temp;
				tail = head ;
			}else{
				tail -> next = temp;
				tail = temp ;
			}
		}
	}

void LinkList::display()
{
	Node *t=head;
	while(t)
	{
		cout<<t->data;
		t=t->next;
		cout<<" ";
	}
	cout<<"\n";
}
void LinkList::rdisplay(Node *p)
{
	if(p)
	{
		cout<<p->data<<" ";
		rdisplay(p->next);
	}
}

int main()
{
	LinkList ll;
	ll.create();
	ll.display();
	ll.rdisplay(ll.gethead());
	return 0;
}


/*
#include<bits/stdc++.h>
using   namespace std;
class Node
{
	public:
		int data;
		Node *next;
};

Node* create ( Node *h)
{
	int x;
	Node *head,*last,*t;
	cout<<"Enter the no of Nodes : ";
	cin>>x;
	cout<<"Enter the Data of First Node : ";
	int d;
	cin>>d;
	head=new Node();
	head->data=d;
	head->next=NULL;
	last=head;
	for(int i=2;i<=x;i++)
	{
		cout<<"Enter the data of "<<i<<"th Node :";
		cin>>d;
		t=new Node();
		t->data=d;
		t->next=NULL;
		last->next=t;
		last=t;
	}
	return head;
} 

void display(Node * h)
{
	while(h)
	{
		cout<<h->data<<" - > ";
		h=h->next;
	} 
}

int main()
{
	Node *HEAD;
	HEAD=NULL;
	HEAD=create(HEAD);
	display(HEAD);
	return 0;
}
*/
//LinkList codingninja
class Node
{
	public:
		int data;
		Node *next;
		
	Node(int data)
	{
		this->data=data;
		next=NULL;
	}
};

//LinkList creation statically and dynamiicaly

#include<iostream>
#include "Node.cpp"
using namespace std;

void print(Node *head)
{
	Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main()
{
	//statically
	Node n1(10);
	Node *head=&n1;
	
	Node n2(20);
	Node n3(30);
	Node n4(40);
	Node n5(50);
	n1.next=&n2;
	n2.next=&n3;
	n3.next=&n4;
	n4.next=&n5;
	
	
	print(head);
	//cout<<n1.data<<" "<<n2.data<<endl;
	
	//dynamicaaly
	
//	Node *n3=new Node(10);
//	Node *head=n3;
//	
//	Node *n4=new Node(20);
//	n3->next=n4;
}

//Take input from user in linklist
#include<iostream>
using namespace std;
#include "Node.cpp"

// first code Node* takeInput()
Node* takeInput_Better()
{
	int data;
	cin>>data;
	Node *head=NULL;
	// second
	while(data!=-1)
	{
		Node *newNode= new Node(data);
		if(head==NULL)
		{
			head=newNode;
		}
		else
		{
			Node *temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next= newNode;
			
		}
		cin>>data;
		
	 } 
	 return head;
}

void print(Node *head)
{
	while(head!=NULL){
		
		cout<<head->data<<" ";
		head= head->next;
			
		
	}
}
int main()
{
	Node *head=takeInput();
	print(head);
}


//take input with bettor omplexities with Tail
#include<iostream>
using namespace std;
#include "Node.cpp"

// first code Node* takeInput()
Node* takeInput_Better()
{
	int data;
	cin>>data;
	Node *head=NULL;
	Node *tail=NULL;
	while(data!=-1)
	{
		Node *newNode= new Node(data);
		
		if(head==NULL)
		{
			head=newNode;
			tail=newNode;
		}
		else
		{
			tail->next= newNode;
			tail=tail->next;
			//Or
			//tail=newNode;
		}
		cin>>data;
		
	 } 
	 return head;
}
Node*  insertNode(Node *head, int i, int data){

	    	Node *newNode=new Node(data);
			int count=0;
			Node *temp=head;
		if(i==0)
		{
			newNode->next=head;
			head=newNode;
			return head;
		}
		while(temp!=NULL && count<i-1)
			{
				temp=temp->next;
				count++;
			}
		if(temp!=NULL)
			{
			Node *a=temp->next;
			temp->next=newNode;
			newNode->next=a;
			}
			return head;
		
		}

void print(Node *head)
{
	while(head!=NULL){
		
		cout<<head->data<<" ";
		head= head->next;
	}
}
int main()
{
	Node *head=takeInput_Better();
	print(head);
	int i,data;
	cin>>i>>data;
	head=insertNode(head,i,data);
	print(head);
}

//Insert node at the ith position
#include<iostream>
using namespace std;
#include "Node.cpp"

// first code Node* takeInput()
Node* takeInput_Better()
{
	int data;
	cin>>data;
	Node *head=NULL;
	Node *tail=NULL;
	while(data!=-1)
	{
		Node *newNode= new Node(data);
		
		if(head==NULL)
		{
			head=newNode;
			tail=newNode;
		}
		else
		{
			tail->next= newNode;
			tail=tail->next;
			//Or
			//tail=newNode;
		}
		cin>>data;
		
	 } 
	 return head;
}
Node*  insertNode(Node *head, int i, int data){

	    	Node *newNode=new Node(data);
			int count=0;
			Node *temp=head;
		if(i==0)
		{
			newNode->next=head;
			head=newNode;
			return head;
		}
		while(temp!=NULL && count<i-1)
			{
				temp=temp->next;
				count++;
			}
		if(temp!=NULL)
			{
			Node *a=temp->next;
			temp->next=newNode;
			newNode->next=a;
			}
			return head;
		
		}

void print(Node *head)
{
	while(head!=NULL){
		
		cout<<head->data<<" ";
		head= head->next;
	}
}
int main()
{
	Node *head=takeInput_Better();
	print(head);
	int i,data;
	cin>>i>>data;
	head=insertNode(head,i,data);
	print(head);
}


 //Merging of two sorted linked list using iterative approach
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

SinglyLinkedListNode *newNode=NULL;
SinglyLinkedListNode *Sorting=NULL;
if(head1==NULL )
{
    return head2;
}
if(head2==NULL)
{
    return head1;
}
if(head1 && head2)
{
    if(head1->data<head2->data){
        
        Sorting=head1;
        head1=Sorting->next;
    }
    else
    {
        Sorting=head2;
        head2=Sorting->next;
    }
}
newNode=Sorting;
while(head1 && head2)
{
    if(head1->data<head2->data)
    {
        Sorting->next=head1;
        Sorting=head1;
        head1=Sorting->next;
    }else
    {
        Sorting->next=head2;
        Sorting=head2;
        head2=Sorting->next;
    }
}
if(head1==NULL)
   Sorting->next=head2;
if(head2==NULL)
   Sorting->next=head1;

return newNode;
}


//Merging of two sorted linked list using recursion


SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
if(head1==NULL){
    return head2;
}else if(head2==NULL)
{
    return head1;
}
SinglyLinkedListNode *c;
if(head1->data<head2->data)
{
    c=head1;
    c->next=mergeLists(head1->next,head2);
}
else {
    c=head2;
    c->next=mergeLists(head1, head2->next);
}
return c;
}

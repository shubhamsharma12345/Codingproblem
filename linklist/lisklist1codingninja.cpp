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

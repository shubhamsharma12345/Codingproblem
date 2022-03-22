#include<iostream>
#include"Node.cpp"
using namespace std;

/* Node *takeInput()
{
	int data;
	cin>>data;
	Node *head=NULL;
	while(data!=-1)
	{
		Node *newNode=new Node(data);
		if(head==NULL)
		{
		    head= newNode;
	    }
	    else
	    {
	    	Node *temp=head;
	    	while(temp->next!=NULL)
	    	{
	    		temp=temp->next;
			}
			temp->next=newNode;
		}
		cin>>data;
	}
	return head;
	
}
*/

 Node *takeInput_Better()
{
	int data;
	cin>>data;
	Node *head=NULL;
	Node *tail=NULL;
	while(data!=-1)
	{
		Node *newNode=new Node(data);
		if(head==NULL)
		{
		    head= newNode;
		    tail= newNode;
		    
	    }
	    else
	    {
	    	tail->next=newNode;
	    	tail=tail->next;
		}
		cin>>data;
	}
	return head;
	
}

Node* insertNode(Node *head, int i, int data)
{
	Node *newNode= new Node(data);
	int count=0;
	Node *temp=head;
	if(i==0)
	{
		newNode->next=head;
		head=newNode;
		return head;
	}
	while(temp->next!=NULL && count <i-1)
	{
		temp=temp->next;
		count++;
	}
	if(temp->next!=NULL)
	{
		Node *a=temp->next;
	temp->next=newNode;
	newNode->next=a; 
		
	}
	return head;
	
	
}

Node *deleteithNode(Node* head, int i)
{
	if(i<0)
	{
		
		return head;
	}
	if(i==0 && head)
	{
		return head->next;
	}
	Node *curr=head;
	int count=1;
	while(count<=i-1 && curr!=NULL)
	{
		curr=curr->next;
		count++;
	}
	if(curr && curr->next)
	{
		curr->next=curr->next->next;
		return head;
	}
	return head;
	
}

int length(Node *head)
{
	if(head==NULL) return 0;
	
	int smallAns= length(head->next);
	return 1+smallAns;
}

bool isPresent(Node *head, int data)
{
	Node *curr=head;
	while(curr!=NULL)
	{
	
	if(curr->data== data)
	{
	
	 return true;
	}
	curr=curr->next; 
   }
   return false;
}

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
	//Statically
	
//	Node n1(1);
//	Node *head=&n1;
//	Node n2(2);
//	Node n3(3);
//	Node n4(4);
//	Node n5(5);
//	n1.next=&n2;
//	n2.next=&n3;
//	n3.next=&n4;
//	n4.next=&n5;
	
//    Node *head=takeInput(); 
    Node *head=takeInput_Better(); 
//    int i,data;
//    cin>>i>>data;
//    head=insertNode(head,i,data);
//    head=deleteithNode(head, i);
//    cout<<length(head)<<endl;

     int data;
    cin>>data;
    if(isPresent(head, data))
    {
    	cout<<"found"<<endl;
	}
	else{
		cout<<"not found"<<endl;
	}

    print(head);

	
}


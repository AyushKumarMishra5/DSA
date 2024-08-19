#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};
void traverse(struct Node*head)
{
	struct Node*ptr=head;
	do{
		cout<<"The list is:"<<ptr->data<<endl;
		ptr=ptr->next;
	}
	while(ptr!=head);
}
struct Node* insertAtCll(struct Node*head, int data)
{
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;
	
	struct Node*p=head->next;
	while(p->next!=head)
	{
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	head=ptr;
	return head;
}
int main()
{
	struct Node*head;
	struct Node* second;
	struct Node* third;
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	cout<<"Enter the data for the first node:"<<endl;
	cin>>head->data;
	head->next=second;
	cout<<"Enter the data for the second node:"<<endl;
	cin>>second->data;
	second->next=third;
	cout<<"Enter the data for the third node:"<<endl;
	cin>>third->data;
	third->next=head;
	cout<<"Traversing the circular linked list before insertion is: "<<endl;
	traverse(head);
	int data;
	cout<<"Enter the node to be inserted at the begin of the circular linked list: "<<endl;
	cin>>data;
	head=insertAtCll(head,data);
	traverse(head);
	return 0;
}

#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};
void traverse(struct Node*ptr)
{
	while(ptr!=NULL)
	{
		cout<<"The elements in the list is: "<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
struct Node* insertAtEnd(struct Node*head, int data)
{
	struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;
	struct Node*p=head;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=ptr;
	ptr->next=NULL;
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
	third->next=NULL;
	cout<<"The linked list before insertion at the end:"<<endl;
	traverse(head);
	int data;
	cout<<"Enter the node to be inserted at the end of the linked list: "<<endl;
	cin>>data;
	head=insertAtEnd(head,data);
	cout<<"The list after inserting the element at the end is:"<<endl;
	traverse(head);
	return 0;
}

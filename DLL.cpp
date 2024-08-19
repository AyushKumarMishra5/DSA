#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
	int data;
	struct Node* prev;
	struct Node* next;
};
void traverse(struct Node* ptr)
{
	while(ptr->next!=NULL)
	{
		cout<<"Elements: "<<ptr->data<<endl;
		ptr=ptr->prev;
		ptr=ptr->next;
	}
}
int main()
{
	struct Node* head;
	struct Node* second;
	struct Node* third;
	
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	
	head->data=23;
	head->prev=NULL;
	head->next=second;
	
	second->data=24;
	second->prev=head;
	second->next=third;
	
	third->data=25;
	third->prev=second;
	third->next=NULL;
	
	cout<<"Doubly Linked list is shown below:"<<endl;
	traverse(head);
	return 0;
}

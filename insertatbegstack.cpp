#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};
void traverse(struct Node* ptr)
{
	while(ptr!=NULL)
	{
		cout<<"The elements are:"<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
struct Node* insertAtBeginStack(struct Node* first, int data)
{
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->next=first;
	ptr->data=data;
	return ptr;
}
int main()
{
	struct Node* first;
	struct Node* second;
	struct Node* third;
	
	first=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	
	first->data=23;
	first->next=second;
	
	second->data=45;
	second->next=third;
	
	third->data=33;
	third->next=first;
	
	traverse(first);
	first=insertAtBeginStack(first,100);
	cout<<"Insertion done at the end of the stack: "<<endl;
	traverse(first);
	return 0;
}

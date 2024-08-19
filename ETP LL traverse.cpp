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
		cout<<"The linked list is as follows:"<<ptr->data<<endl;
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
	cout<<"Enter the data for the first node:"<<endl;
	cin>>head->data;
	head->next=second;
	cout<<"Enter the data for the second node:"<<endl;
	cin>>second->data;
	second->next=third;
	cout<<"Enter the data for the third node:"<<endl;
	cin>>third->data;
	third->next=NULL;
	traverse(head);
	return 0;
}

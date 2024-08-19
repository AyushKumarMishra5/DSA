#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};
void traverseCLL(struct Node*second)
{
	struct Node*ptr=second;
	do{
		cout<<"Elements are:"<<ptr->data<<endl;
		ptr=ptr->next;
	}
	while(ptr!=second);
}
int main()
{
	struct Node* head;
	struct Node* second;
	struct Node* third;
	
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	
	head->data=1;
	head->next=second;
	
	second->data=2;
	second->next=third;
	
	third->data=3;
	third->next=head;
	
	cout<<"The Circular list is traversed and is hown below:"<<endl;
	traverseCLL(second);
	
	return 0;
}

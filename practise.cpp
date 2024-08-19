#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
	int data;
	struct Node*next;
};
void traverseInCircular(struct Node*head){
	struct Node* ptr=head;
		cout<<"The list is:"<<ptr->data<<endl;
		ptr=ptr->next;
	while(ptr->next!=head)
	{
		cout<<"Elements:"<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
int main()
{
	struct Node*head;
	struct Node*second;
	struct Node*third;
	
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	
	head->data=2;
	head->next=second;
	
	second->data=5;
	second->next=third;
	
	third->data=7;
	third->next=NULL;
	traverseInCircular(head);
	return 0;
}


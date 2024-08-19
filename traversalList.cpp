#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};
void traverse(struct Node* ptr)
{
	while(ptr!=NULL)
	{
		cout<<"The elements is:"<<ptr->data<<endl;
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
    head->data=22;
    head->next=second;
    second->data=33;
    second->next=third;
    third->data=21;
    third->next=NULL;
    traverse(head);
	return 0;
}

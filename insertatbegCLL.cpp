#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};
void traverseCLL(struct Node* head)
{
    struct Node* ptr = head;
    do
    {
        cout << "Elements in the list are: " << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node* insertAtBegCLL(struct Node*head,int data)
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
	struct Node* head;
	struct Node* second;
	struct Node* third;
	
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	
	head->data=21;
	head->next=second;
	
	second->data=22;
	second->next=third;
	
	third->data=24;
	third->next=head;
	
	cout<<"Circular Linked list before insertion is:"<<endl;
	traverseCLL(head);
	cout<<" Circular Linked list after insertion is:"<<endl;
	head=insertAtBegCLL(head,26);
	traverseCLL(head);
	
	return 0;
}

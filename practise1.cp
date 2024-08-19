#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};
void traverse(struct Node* ptr){
	while(ptr!=NULL){
		cout<<"The elements are:"<<ptr->data<<endl;
		ptr=ptr->next;
	}
}
int main()
{
	
	return 0;
}

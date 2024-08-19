#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};
struct Node* createNode(int data)
{
	struct Node*n;
	n=(struct Node*)malloc(sizeof(struct Node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}
void preorder(struct Node*root)
{
	if(root!=NULL)
	{
		cout<<"The nodes are: "<<root->data<<endl;
		preorder(root->left);
		preorder(root->right);
	}
}
int main()
{
	struct Node*p=createNode(6);
	struct Node*p1=createNode(5);
	struct Node*p2=createNode(4);
	struct Node*p3=createNode(3);
	struct Node*p4=createNode(2);
	
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	
	preorder(p);
	return 0;
}

#include<iostream>
#include<cstdlib>
using namespace std;
struct Node{
	int data;
	struct Node*left;
	struct Node*right;
};
struct Node* createNode(int data)
{
	struct Node*p;
	p=(struct Node*)malloc(sizeof(struct Node));
	p->data=data;
	p->right=NULL;
	p->left=NULL;
	return p;
}
void inorder(struct Node*root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<"The roots are: "<<root->data<<endl;
		inorder(root->right);
	}
}
int main()
{
	struct Node*p=createNode(6);
	struct Node*p1=createNode(5);
	struct Node*p2=createNode(4);
	struct Node*p3=createNode(3);
	struct Node*p4=createNode(2);
	
//	      6
//	     / \
//	    5   4
//	   / \
//	  3   2
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    inorder(p);
    
	return 0;
}

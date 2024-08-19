#include<iostream>
#include<cstdlib>
using namespace std;
struct stack{
	int size;
	int top;
	int *arr;
};
bool isEmpty(struct stack*ptr)
{
	if(ptr->top==-1)
	{
		return 1;
	}
	else{
		return 0;
	}
}
bool isFull(struct stack*ptr)
{
	if(ptr->top==ptr->size-1)
	{
		return 1;
	}
	else{
		return 0;
	}
}
int push(struct stack*ptr, int value)
{
	if(isFull(ptr))
	{
		cout<<"Stack overflow."<<endl;
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]=value;
	}
}
int pop(struct stack*ptr)
{
	if(isEmpty(ptr))
	{
		cout<<"Stack underflow."<<endl;
	}
	else{
		int value=ptr->arr[ptr->top];
		ptr->top--;
		cout<<"The element popped out is: "<<value<<endl;
	}
}
int peek(struct stack*sp, int i)
{
	int arrfind=sp->top-i+1;
	if(arrfind<0)
	{
		cout<<"Invalid data, kindly enter the new data."<<endl;
		return -1;
	}
	else{
		return sp->arr[arrfind];
	}
}
int main()
{
	struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
	cout<<"Enter the size of the stack:"<<endl;
	cin>>sp->size;
	sp->top=-1;
	sp->arr=(int*)malloc(sp->size*sizeof(int));
	cout<<"The stack is created successfully: "<<endl;
	push(sp,23);
	push(sp,22);
	push(sp,28);
	push(sp,30);
	push(sp,43);
	for(int i=0;i<=sp->top;i++)
	{
		cout<<"The elements are: "<<sp->arr[i]<<" "<<endl;
	}
	pop(sp);
	pop(sp);
	for(int j=0;j<sp->top+1;j++)
	{
		cout<<"The position of the element"<<j<<" is "<<peek(sp,j)<<endl;
	}
	return 0;
}

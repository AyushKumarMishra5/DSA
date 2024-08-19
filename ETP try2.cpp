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
void push(struct stack*ptr, int value)
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
void pop(struct stack*ptr)
{
	if(isEmpty(ptr))
	{
		cout<<"Stack Underflow."<<endl;
	}
	else{
		int value=ptr->arr[ptr->top];
		ptr->top--;
		cout<<"The popped element is: "<<value<<endl;
	}
}
int peek(struct stack*sp, int i)
{
	int arrlist=sp->top-i+1;
	if(arrlist<0)
	{
		cout<<"Kindly enter valuable data."<<endl;
		return -1;
	}
	else{
		return sp->arr[arrlist];
	}
}
int main()
{
	struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
	sp->size=5;
	sp->top=-1;
	sp->arr=(int*)malloc(sp->size*sizeof(int));
	cout<<"Stack created successfully: "<<endl;
	push(sp,23);
	push(sp,24);
	push(sp,25);
	push(sp,26);
	push(sp,27);
	for(int i=0;i<=sp->top;i++)
	{
		cout<<"The value pushed is: "<<sp->arr[i]<<" "<<endl;
	}
	for(int j=0;j<sp->top+1;j++)
	{
		cout<<"The position of the elements"<<j<<"is:"<<peek(sp,j)<<endl;
	}
	return 0;
}


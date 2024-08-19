#include<iostream>
#include<cstdlib>
using namespace std;
struct stack{
	int size;
	int top;
	int *arr;
};
bool isEmpty(struct stack* ptr)
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
void push(struct stack* ptr, int value)
{
	if(isFull(ptr))
	{
		cout<<"Stack overflow"<<endl;
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
		cout<<"Stack underflow."<<endl;
	}else{
		int value=ptr->arr[ptr->top];
		ptr->top--;
		cout<<"The popped element of the stack is: "<<value<<endl;
	}
}
int main()
{
	struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
	sp->size=5;
	sp->top=-1;
	sp->arr=(int*)malloc(sp->size*sizeof(int));
	cout<<"Stack has been created successfully."<<endl;
	push(sp,34);
	push(sp,45);
	push(sp,56);
	push(sp,23);
	push(sp,47);
	push(sp,26);
	for(int i=0;i<=sp->top;i++)
	{
		cout<<"The elemets pushed in the stack are as follows: "<<sp->arr[i]<<" "<<endl;
	}
	pop(sp);
	pop(sp);
	return 0;
}

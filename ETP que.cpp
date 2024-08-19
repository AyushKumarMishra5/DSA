#include<iostream>
#include<cstdlib>
using namespace std;
struct que{
	int size;
	int front;
	int rear;
	int *arr;
};
bool isEmpty(struct que*q)
{
	if(q->rear==q->front)
	{
		return 1;
	}
	return 0;
}
bool isFull(struct que*q)
{
	if(q->rear==q->size-1)
	{
		return 1;
	}
	return 0;
}
int enque(struct que*q, int value)
{
	if(isFull(q))
	{
		cout<<"The que is full."<<endl;
	}
	else{
		q->rear++;
		q->arr[q->rear]=value;
		cout<<"The value inserted is: "<<value<<endl;
	}
}
int deque(struct que*q)
{
	if(isEmpty(q))
	{
		cout<<"The que is empty."<<endl;
	}else{
		int value=q->arr[q->rear];
		q->rear--;
		cout<<"The value deleted is: "<<value<<endl;
	}
}
int main()
{
	struct que q;
	q.size=6;
	q.rear=q.front=-1;
	q.arr=(int*)malloc(q.size*sizeof(int));
	cout<<"Que create successfully: "<<endl;
	enque(&q,22);
	enque(&q,23);
	enque(&q,24);
	enque(&q,26);
	deque(&q);
	deque(&q);
	return 0;
}

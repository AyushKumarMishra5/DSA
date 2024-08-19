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
	}
}
int deque(struct que*q)
{
	int a=-1;
	if(isEmpty(q))
	{
		cout<<"The que is empty."<<endl;
	}
	else{
		q->front++;
		a=q->arr[q->front];
	}
	return a;
}
int main()
{
	struct que q;
	cout<<"Enter the size of the que: "<<endl;
	cin>>q.size;
	q.front=q.rear=-1;
	q.arr=(int*)malloc(q.size*sizeof(int));
	cout<<"Que successfully created."<<endl;
	enque(&q,12);
	enque(&q,15);
	enque(&q,22);
	deque(&q);
	deque(&q);
	if(isEmpty(&q))
	{
		cout<<"Que is empty."<<endl;
	}
	else if(isFull(&q))
	{
		cout<<"Que is full."<<endl;
	}
	return 0;
}

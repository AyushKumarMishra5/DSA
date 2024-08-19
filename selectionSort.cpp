#include<iostream>
using namespace std;
void printArr(int *A, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<endl;
	}
}
void selectionSort(int *A, int n)
{
	int min,temp;
	for(int i=0; i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(A[j]<A[min])
			{
				min=j;
			}
		}
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;
	}
}
int main()
{
	int A[100]={77,56,3,35,21,0,11};
	int n=7;
	cout<<"The list of elements in the array are shown as follows:"<<endl;
	printArr(A,n);
	selectionSort(A,n);
	cout<<"The unsorted array which is finally sorted as follows:"<<endl;
	printArr(A,n);
	return 0;
}

#include<iostream>
using namespace std;
void printarr(int *A, int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<A[i]<<endl;;
	}
}
void insertSort(int *A, int n)
{
	int key,j;
	for(int i=1;i<=n-1;i++)
	{
		key=A[i];
		j=i-1;
		while(j>=0 && A[j] > key)
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=key;
	}
}
int main()
{
	int n=6;
	int A[]={23,34,56,76,24,2};
	cout<<"The unsorted array is as follows:"<<endl;
	printarr(A,n);
	insertSort(A,n);
	cout<<"The insetion sort alogorithm is  used to sort the array and now the array is sorted:"<<endl;
	printarr(A,n);
	return 0;
}

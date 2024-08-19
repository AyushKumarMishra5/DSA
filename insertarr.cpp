#include<iostream>
using namespace std;
	void display(int arr[], int n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<"Elemnts are:"<<arr[i]<<endl;
		}
	}
	int insertarr(int arr[],int size, int index)
	{
		for(int i=index;i<size-1;i++)
		{
			arr[i]=arr[i+1];
		}
		size--;
		return size;
	}
int main()
{
	int arr[100]={1,2,3,4,5};
	int element=4,size=5,index=3;
	display(arr,5);
	insertarr(arr,size,index);
	size -=1;
	display(arr,size);
	return 0;
}

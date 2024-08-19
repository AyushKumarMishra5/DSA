#include<iostream>
using namespace std;
void display(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Elements are:"<<arr[i]<<endl;
	}
}
	int delarr(int arr[],int size,int index)
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
	int size=5,index=3;
	display(arr,size);
	int delet=delarr(arr,size,index);
	cout<<"Performing the process of deleting an element from the array is shown below:"<<delet<<endl;
	size -=1;
	display(arr,size);
	return 0;
}

#include<iostream>
using namespace std;
void display(int arr[], int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"Elements are: "<<arr[i]<<endl;
	}
}
int insertarr(int arr[], int index, int size)
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
	int arr[100],size,index,insert;
	cout<<"Enter the size of the array: "<<endl;
	cin>>size;
	cout<<"Enter the elements: "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the index where u want ot delete this element: "<<endl;
	cin>>index;
	insert=insertarr(arr,index,size);
	size -=1;
	cout<<"Array after deletion of elements done successfully as shown below: "<<insert<<endl;
	display(arr,size);
	return 0;
}

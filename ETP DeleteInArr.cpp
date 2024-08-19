#include<iostream>
using namespace std;
void traverse(int arr[], int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"The elements in the array are: "<<arr[i]<<endl;
	}
}
int deleteArr(int arr[], int size, int index)
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
	int arr[50], size, index, del;
	cout<<"ENter the size of the element: "<<endl;
	cin>>size;
	cout<<"User give the input of the elements please:"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	traverse(arr,size);
	cout<<"Enter any index of the array to delete the element: "<<endl;
	cin>>index;
	del=deleteArr(arr,size,index);
	cout<<"The elements on the index selected is successfully deleted."<<del<<endl;
	size -=1;
	traverse(arr,size);
	return 0;
}

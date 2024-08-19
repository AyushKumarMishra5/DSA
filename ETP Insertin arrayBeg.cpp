#include<iostream>
using namespace std;
void traverse(int arr[], int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<"The elements in the array are as follows: "<<arr[i]<<endl;
	}
}
int insertAtBeg(int arr[], int size, int element, int capacity, int index)
{
	if(size>=capacity)
	{
		return -1;
	}
	for(int i=size-1;i>=index;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[index]=element;
	return 1;
}
int main()
{
	int arr[100],size,element,index;
	cout<<"Enter the size of the array: "<<endl;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
    }
    traverse(arr,size);
    cout<<"Enter the element to be inserted:"<<endl;
    cin>>element;
    cout<<"Enter the index where the element need to be added: "<<endl;
    cin>>index;
    int insert=insertAtBeg(arr,size,element,100,index);
    cout<<"The element finaaly insert in the array and shown as follows: "<<insert<<endl;
    size +=1;
    traverse(arr,size);
	return 0;
}

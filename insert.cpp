#include<iostream>
using namespace std;
	void display(int arr[],int n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<"Elemnts are:"<<arr[i]<<endl;
		}
	}
	int insertarr(int arr[], int size, int element, int capacity, int index)
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
		int arr[100]={1,2,3,4,5,6};
		int size=6, element=33, index=3;
		display(arr,6);
		int insert;
		insert=insertarr(arr,size,element,100,index);
		cout<<"Array after inserting the required elemenets is:"<<endl;
		size +=1;
		display(arr,6);
	return 0;
}

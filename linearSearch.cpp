#include<iostream>
using namespace std;
int liser(int arr[], int size, int element)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==element)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[100]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(int);
	int element;
	cout<<"Enter the element to be searched:"<<endl;
	cin>>element;
	int search=liser(arr,size,element);
	cout<<"The"<<element<< "found on the :"<<search<<endl;
	return 0;
}

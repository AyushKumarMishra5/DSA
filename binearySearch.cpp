#include<iostream>
using namespace std;
int biser(int arr[], int size, int element)
{
	int high,mid,low;
	while(low<=high)
	{
		mid=(high+low)/2;
		if(arr[mid]==element)
		{
			return mid;
		}
		if(arr[mid]<element)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return -1;
}
int main()
{
	int arr[100]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(int);
	int element,search;
	cout<<"Enter the element to be searched:"<<endl;
	cin>>element;
	search=biser(arr,size,element);
	if(search!=-1)
	{
		cout<<"The element is present in the array."<<endl;
	}
	else
	{
		cout<<"The element is not present in the array."<<endl;
	}
	return 0;
}

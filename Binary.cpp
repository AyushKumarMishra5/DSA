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
		else{
			high=mid-1;
		}
	}
	return -1;
}
int main()
{
	int arr[10],size,element,search;
	cout<<"Enter the elements in the array: "<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	size=sizeof(arr)/sizeof(int);
	cout<<"Enter the elemnt to be found: "<<endl;
	cin>>element;
	search=biser(arr,size,element);
	if(search!=0){
		cout<<"The element is present in the array."<<endl;
	}
	else{
		cout<<"The element is not present in the array."<<endl;
	}
	return 0;
}

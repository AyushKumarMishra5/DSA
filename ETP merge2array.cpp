#include<iostream>
using namespace std;
int main()
{
	int arr[10],arr2[10],mergeArr[20],i,j;
	cout<<"Enter 10 elements in the array: "<<endl;
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
		mergeArr[i]=arr[i];
	}
	cout<<"Enter 10 elements in the second array:"<<endl;
	for(j=0;j<10;j++)
	{
		cin>>arr2[j];
		mergeArr[i]=arr2[j];
		i++;
	}
	cout<<"The merging of two arrays are shown below: "<<endl;
	for(j=0;j<20;j++)
	{
		cout<<"The elemnets are: "<<mergeArr[j]<<endl;
	}
	return 0;
}

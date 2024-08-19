#include<iostream>
using namespace std;
void traverse(int arr[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;;
	}
}
int main()
{
	int arr[40],n;
	cout<<"Enter the elements in the array"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"The traversal of elemts are done and shown below in the array."<<endl;
	traverse(arr,n);
	return 0;
}

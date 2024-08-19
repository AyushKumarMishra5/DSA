#include<iostream>
using namespace std;
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"The elements are:"<<arr[i]<<endl;
	}
	cout<<endl;
}
int main()
{
	int arr[100]={1,2,3,4,5};
	cout<<"The following elements are traversed in the following array:"<<endl;
	display(arr,5);
	return 0;
}

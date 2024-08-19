#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the positive elements to be described in the number of elements:"<<endl;
	cin>>n;
	if(n<=0)
	{
		cout<<"Enter the positive element."<<endl;
		return 1;
	}
	cout<<"Fiabonicca series for the number of terms"<<n<<"is: "<<endl;
	int first=0, second=1, next;
	for(int i=0;i<n;i++)
	{
		if(i<=1)
		{
			next=i;
		}
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
		cout<<next<<" "<<endl;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of terms: "<<endl;
	cin>>n;
	if(n<=0)
	{
		cout<<"Enter positive integer. "<<endl;
		return 1;
	}
	cout<<"Thus the terms are"<<endl;
	int first=0,second=1,next;
	for(int i=0;i<n;i++)
	{
		if(i<=1)
		{
			next=i;
		}
		else{
		next=first+second;
		first=second;
		second=next;
	}
	cout<<next<<" "<<endl;
}
	return 0;
}

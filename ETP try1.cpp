#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of terms to be made in the fiabonicca series: "<<endl;
	cin>>n;
	if(n<=0)
	{
		cout<<"Enter positive element."<<endl;
	}
	cout<<"The series for the selected number of terms is :"<<n<<endl;
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

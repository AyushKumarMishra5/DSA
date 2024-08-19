#include<iostream>
using namespace std;
int main()
{
	int i, fact=1,n;
	cout<<"Enter the number whose factorial is needed to find: "<<endl;
	cin>>n;
	for(i=1; i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"The factorial of the given number"<<"is: "<<fact<<endl;
	return 0;
}

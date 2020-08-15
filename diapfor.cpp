#include <iostream>
using namespace std;

int a,b,i,j;

int main()
{
	cout<<"Enter two numbers. "<<endl<<"1st: ";
	cin>>a;
	cout<<"2nd: ";
	cin>>b;

	if (a<b)
	{
		i=a;
		j=b;
	}
	else if (a>b)
	{
		i=b;
		j=a;
	}
	else if (a==b)
	{
		i=a;
		j=a;
	}

	for (i=i; i<=j; i++)
	{
		cout<<i<<' ';
	}
	cout<<endl;
}

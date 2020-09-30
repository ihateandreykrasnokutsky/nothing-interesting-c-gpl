#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	cout<<"Enter 10 numbers."<<endl;
	int a[9];
	for (int i=0;i<10;i++)
	{
		cout<<"Enter "<<i+1<<" number: ";
		cin>>a[i];
	}
	cout<<"Enter the number to count: ";
	int c;
	cin>>c;
	int r=count(a, a+10, c);
	cout<<c<<" repeats "<<r<<" times."<<endl;
	return 0;
}


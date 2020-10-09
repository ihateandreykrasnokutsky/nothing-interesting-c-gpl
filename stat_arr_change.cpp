#include <iostream>
using namespace std;
int main()
{
	srand(time(0));
	int a[5],i;
	for (i=0;i<5;i++)
	{
		a[i]=rand()%10;
		cout<<a[i]<<' ';
	}
	cout<<endl;
	a[20];
	for (i=0;i<20;i++)
	{
		a[i]=rand()%30;
		cout<<a[i]<<' ';
	}
	cout<<endl;
}

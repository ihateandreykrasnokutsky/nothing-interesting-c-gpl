#include<iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	int i,a[10];
	for(i=0;i<10;i++)
	{
		a[i]=rand()%10;
		cout<<a[i]<<' ';
	}
	cout<<endl;
	a[4];
	for(i=0;i<20;i++) cout<<a[i]<<' ';
	cout<<endl;
}

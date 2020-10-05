#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter array's size: ";
	int i,size;
	cin>>size;
	int *darr=new int[size];
	for (i=0; i<size; i++)
	{
		cout<<"Enter "<<i+1<<" number: ";
		cin>>darr[i];
	}
	cout<<"Your array is: ";
	for (i=0; i<size; i++) cout<<darr[i]<<' ';
	cout<<endl;
}

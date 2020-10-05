#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter string array's size: ";
	int i,size;
	cin>>size;
	string *sarr=new string[size];
	for (i=0;i<size;i++)
	{
		cout<<"Enter "<<i+1<<" element of the array: ";
		cin>>sarr[i];
	}
	cout<<"Your array is: ";
	for (i=0;i<size;i++)
		cout<<sarr[i]<<' ';
	delete[]sarr;
	cout<<endl;
}

#include <iostream>
using namespace std;
int main()
{
	cout<<"enter number: ";
	int a,i;
	cin>>a;
	int arr[a];
	srand(time(0));
	for (i=0;i<a;i++)
	{
		arr[i]=rand()&100;
		cout<<arr[i]<<' ';
	}
	cout<<endl;
}

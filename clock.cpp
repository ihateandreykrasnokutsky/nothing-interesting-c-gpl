#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter the task difficulty: ";
	int diff;
	cin>>diff;
	int x;
	for (int i=0; i<diff; i++) x++;
	cout<<clock()<<endl;
}

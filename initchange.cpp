#include <iostream>
using namespace std;
int main()
{
	int i=1;
	cout<<"i="<<i<<endl;
	int *pi=&i;
	*pi=0;
	cout<<"i="<<*pi<<endl;
}

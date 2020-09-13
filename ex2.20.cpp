#include <iostream>
using namespace std;
int main()
{
	int i=42;
	int *p=&i;
	cout<<"*p="<<*p<<endl;
	*p=*p**p;
	cout<<"*p="<<*p<<endl;
}

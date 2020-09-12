#include <iostream>
using namespace std;
int main()
{
	cout<<"changing of variable a"<<endl;
	int a=10, *pa=&a;
	cout<<"*pa="<<*pa<<"; a="<<a<<endl;
	*pa=11;
	cout<<"*pa="<<*pa<<"; a="<<a<<endl;

	cout<<"changing of pointer *pb"<<endl;
	int b=20, *pb=&b;
	cout<<"*pb="<<*pb<<"; b="<<b<<endl;
	pb=&a;
	cout<<"*pb="<<*pb<<"; b="<<b<<endl;
}


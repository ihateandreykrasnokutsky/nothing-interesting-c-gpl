#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
	int i=1, &ri=i;
	cout<<"int &ri="<<ri<<", typeid="<<typeid(ri).name()<<endl;
	auto j=ri;
	cout<<"auto j="<<j<<", typeid="<<typeid(j).name()<<endl;

	const int ci=i, &cr=ci;
	auto e=&ci;
	cout<<"auto e="<<e<<", typeid="<<typeid(e).name()<<endl;
}

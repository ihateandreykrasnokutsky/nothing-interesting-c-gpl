#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
	int i=1, &ri=i;
	cout<<"&ri="<<ri<<", typeid="<<typeid(ri).name()<<endl;
	auto j=ri;
	cout<<"j="<<j<<", typeid="<<typeid(j).name()<<endl;
}

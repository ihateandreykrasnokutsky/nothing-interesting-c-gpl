#include <iostream>
using namespace std;
int main()
{
	const int ci=1024;
	const int &r1=ci;
	cout<<"&r1="<<r1<<endl;
	cout<<"ci="<<ci<<endl;
}

#include <iostream>
using namespace std;
int main()
{
	auto x=0.1;
	for (auto i=0; i<100; i++)
	{
		x+=0.1;
		cout<<x<<"; ";
	}
}

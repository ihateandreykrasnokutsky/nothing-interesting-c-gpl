#include <iostream>
using namespace std;
int main()
{
	const string hw="Hello, world!\n";
	const string &hwr=hw;
	cout<<hwr;
}

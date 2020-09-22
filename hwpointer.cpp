#include <iostream>
using namespace std;
int main()
{
	const string hw="Hello, world!\n";
	const string *const hwp=&hw;
	cout<<*hwp;
}

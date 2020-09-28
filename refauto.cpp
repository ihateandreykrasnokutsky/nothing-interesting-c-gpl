#include <iostream>
using namespace std;
int main()
{
	auto x=2.1, &rx=x;
	cout<<rx<<endl;
	auto y=rx;
	y++;
	cout<<y<<endl;
}

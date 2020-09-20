#include <iostream>
using namespace std;
int main()
{
	int x=8;
	const int *xp=&x;
	cout<<*xp<<endl;
	x=9;
	cout<<*xp<<endl;
}

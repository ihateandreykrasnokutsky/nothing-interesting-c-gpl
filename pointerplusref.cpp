#include <iostream>
using namespace std;
int main()
{
	int a=2, b=3, c;
	int *ap=&a, &br=b;
	c=*ap+br;//pointer plus ref
	cout<<c<<endl;
}

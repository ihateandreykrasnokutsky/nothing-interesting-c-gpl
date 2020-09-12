#include <iostream>
using namespace std;
int main()
{
	double obj=3.14, obj2=3.3, *pd=&obj;
	void *pv=&obj2;
	cout<<*pd<<", ";
	pd=&obj2;
	cout<<*pd<<endl;
}

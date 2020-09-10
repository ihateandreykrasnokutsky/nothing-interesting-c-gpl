#include <iostream>
using namespace std;
int main()
{
	int a=811;
	cout<<"initial a is "<<a<<endl;
	int *pa=&a;
	int &ra=*pa;
	cout<<"a after all transformations is "<<ra<<endl;
}

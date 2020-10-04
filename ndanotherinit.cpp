#include <iostream>
using namespace std;
int main()
{
	double *dval=new double(5.111);
	cout<<"*dval="<<*dval<<endl;
	delete dval;
}

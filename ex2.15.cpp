#include <iostream>
using namespace std;
int main()
{
	int ival=1.01;
	cout<<"a) ival="<<ival<<endl;
	
	int &rval1=ival;
	cout<<"b) &rval1="<<rval1+0.01<<endl;
	
	int &rval3=rval1;
	cout<<"c) &rval3="<<rval3<<endl;
}

#include <iostream>
using namespace std;
int main()
{
	double dval=7.1;
	double *pd1=&dval;
	double *pd2=pd1;
	double *pd3=pd2;
	double *pd4=pd3;
	double *pd5=pd4;
	cout<<"pointer with star="<<*pd5<<endl;
	cout<<"pointer without star="<<pd5<<endl;
	cout<<"star is initial variable, no star is address"<<endl;
	cout<<"variable's address is "<<&dval<<endl;
	cout<<"no star is address of initial variable"<<endl;
}

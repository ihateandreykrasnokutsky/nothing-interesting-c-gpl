#include <iostream>
using namespace std;
int main()
{
	int *ptrvalue=new int;
	*ptrvalue=9;
	cout<<"ptrvalue="<<*ptrvalue<<endl;
	delete ptrvalue;
	return 0;
}

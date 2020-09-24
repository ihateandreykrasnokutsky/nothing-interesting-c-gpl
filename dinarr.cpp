#include <iostream>
using namespace std;
int main()
{
	int *ptrvalue=new int;
	cout<<*ptrvalue<<' '<<ptrvalue<<endl;
	delete ptrvalue;

	string *ptrline=new string;
	cout<<*ptrline<<' '<<ptrline<<endl;
	delete ptrline;
}

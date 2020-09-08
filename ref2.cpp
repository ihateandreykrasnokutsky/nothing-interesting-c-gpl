#include <iostream>
using namespace std;
int main()
{
	int ival=1000;
	int &refVal=ival;
	int &refVal3=refVal;
	int i=refVal3;
	cout<<i<<endl;
}

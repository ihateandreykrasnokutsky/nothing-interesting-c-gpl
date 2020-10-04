#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double *ptrarray=new double[10];
	double n=0;
	int i;
	for (i=0; i<10; i++)
	{
		ptrarray[i]=n/10;
		n++;
	}
	for (i=0; i<10; i++) cout<<setprecision(50)<<ptrarray[i]<<endl;
	delete [] ptrarray;
}


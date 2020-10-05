#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double *darr=new double[20];
	srand(time(NULL));
	for (int i=0; i<20; i++)
	{
		darr[i]=double (rand()%100)/(rand()%100);
		cout<<setprecision(10)<<darr[i]<<endl;
	}
	delete[]darr;
}

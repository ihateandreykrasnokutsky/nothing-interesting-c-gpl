#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout<<"Enter 3 numbers."<<endl;
	double x,y,z,f;
	cout<<"1: "; cin>>x;
	cout<<"2: "; cin>>y;
	cout<<"3: "; cin>>z;

	f=fma(x,y,z);
	cout<<"fmal="<<x<<'*'<<y<<'+'<<z<<'='<<f<<endl;
}
//I guess this function works just "x,y,z" variables

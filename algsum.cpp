#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout<<"Enter quantity of Xs: ";//number of Xs
	int qx;
	cin>>qx;
	double z,b,a,betta,x=0;
	for (int i=0; i<qx; i++)//qx times
	{
		cout<<"Enter value Z, B, A, Betta for X"<<i+1<<":"<<endl;
		cout<<"Z=";//asking for variables
		cin>>z;
		cout<<"B=";
		cin>>b;
		cout<<"A=";
		cin>>a;
		cout<<"Betta=";
		cin>>betta;
		x+=(pow(z,3)-b+pow(a,2)/pow(tan(betta),2));//formula
	}
	double y=x;
	cout<<"Y="<<y<<endl;
}

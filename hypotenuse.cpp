#include <iostream>
#include <cmath>
using namespace std;

float hp, k1, k2;

float hpcount(float k1,float k2)
{
	hp=sqrt(pow(k1,2)+pow(k2,2));
	return hp;
}
int main()
{
	cout<<"Enter 1st cathetus's length: ";
	cin>>k1;
	cout<<"Enter 2nd cathetus's length: ";
	cin>>k2;
	cout<<"Hypotenuse's length equals "<<hpcount(k1,k2)<<'.'<<endl;
}

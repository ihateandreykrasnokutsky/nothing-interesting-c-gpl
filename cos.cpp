#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout<<"Enter angle (degrees) to calculate it's cosinus: ";
	float angle;
	cin>>angle;
	cout<<"Cosinus of "<<angle<<" degrees is "<<cos(angle*0.0174533)<<endl;
}

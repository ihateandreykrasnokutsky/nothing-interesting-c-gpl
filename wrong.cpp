#include <iostream>
using namespace std;
int main()
{
	int i;
	int *pi=0;
	if (pi) cout<<"Your pointer includes some address"<<endl;
	else cout<<"Your pointer includes no address"<<endl;
	cout<<"i address is "<<&i<<endl;
	cout<<"*pi address is "<<pi<<endl;
}

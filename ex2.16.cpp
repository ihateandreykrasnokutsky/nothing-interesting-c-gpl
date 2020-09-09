#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
	int i=0, &r1=i; double d=0, &r2=d;
	cout<<i<<' '<<r1<<' '<<d<<' '<<r2<<endl;
	sleep(1);
	//a
	r2=3.14159;
	cout<<"1) "<<i<<' '<<r1<<' '<<d<<' '<<r2<<endl;
	sleep(1);
	//b
	r2=r1;
	cout<<"2) "<<i<<' '<<r1<<' '<<d<<' '<<r2<<endl;
        sleep(1);
	//c
	i=r2;
	cout<<"3) "<<i<<' '<<r1<<' '<<d<<' '<<r2<<endl;
        sleep(1);
	//d
	cout<<"4) "<<i<<' '<<r1<<' '<<d<<' '<<r2<<endl;
}

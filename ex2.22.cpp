#include <iostream>
using namespace std;
int main()
{
	int a=22;
	int b=0;
	int c;
	int *p1=&a;
	int *p2=&b;
	int *p3=&c;
	int *p4;
	
	cout<<"a=22; b=0; c is uninitialized"
		<<endl<<"*p1=&a; *p2=&b; *p3=&c; *p4 is uninitialized\n"<<endl;

	if (p1) cout<<"(p1)=true"<<endl;
	else cout<<"(p1)=false"<<endl;
	if (*p1) cout<<"(*p1)=true"<<endl;
	else cout<<"(*p1)=false"<<endl;
	cout<<"*p1: "<<p1<<' '<<*p1<<endl;
	
	if (p2) cout<<"(p2)=true"<<endl;
	else cout<<"(p2)=false"<<endl;
	if (*p2) cout<<"(*p2)=true"<<endl;
	else cout<<"(*p2)=false"<<endl;
	cout<<"*p2: "<<p2<<' '<<*p2<<endl;

	if (p3) cout<<"(p3)=true"<<endl;
        else cout<<"(p3)=false"<<endl;
        if (*p3) cout<<"(*p3)=true"<<endl;
        else cout<<"(*p3)=false"<<endl;
	cout<<"*p3: "<<p3<<' '<<*p3<<endl;

	if (p4) cout<<"(p4)=true"<<endl;
        else cout<<"(p4)=false"<<endl;
        if (*p4) cout<<"(*p4)=true"<<endl;
        else cout<<"(*p4)=false"<<endl;
	cout<<"*p4: "<<p4<<' '<<*p4<<endl;
}

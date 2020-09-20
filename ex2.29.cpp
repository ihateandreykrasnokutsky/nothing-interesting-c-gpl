#include <iostream>
using namespace std;
int main()
{
	//ex 2.28
        int i, *const cp=&i;
        int *p1, *const p2=&i;
        const int ic=8, &r=ic;
        const int *const p3=&ic;
        char bs=' ';
        cout<<i<<bs<<*cp<<bs<<*p1<<bs<<*p2<<bs<<ic<<bs<<r<<bs<<*p3<<endl;
	//ex 2.29
	int *pi=&i;
	i=ic;
	cout<<i<<bs<<*cp<<bs<<*p1<<bs<<*p2<<bs<<ic<<bs<<r<<bs<<*p3<<endl;
}


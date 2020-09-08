#include <iostream>
using namespace std;
int main()
{
	int i=1024, i2=2048;//i и i2 - переменные типа int
	int &r=i, r2=i2;//r - ссылка, связанная с переменной i, r2 - переменная типа int
	int i3=1024, &ri=i3;//i3 - переменная типа int; ri - ccылка, связанная с переменной i3
	int &r3=i3, &r4=i2;//r3 и r4 - ссылки
	
	cout<<"i="<<i<<", i2="<<i2<<endl;
	cout<<"&r="<<r<<", r2="<<r2<<endl;
	cout<<"i3="<<i3<<", &ri="<<ri<<endl;
	cout<<"&r3="<<r3<<", &r4="<<r4<<endl;
}

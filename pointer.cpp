#include <iostream>
using namespace std;
int main()
{
	int ival=42;
	int *p=&ival;//p содержит адрес переменной ivalж
	cout<<*p<<endl;
}

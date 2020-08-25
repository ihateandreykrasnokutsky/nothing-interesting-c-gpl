#include <iostream>
using namespace std;

int main()
{
	int a,b;
	string operation;
	cout<<"Калькулятор."<<endl;
	cout<<"Введите первое число: ";
	cin>>a;
	cout<<"Введите второе число: ";
	cin>>b;
	cout<<"Введите операцию (+, -, *, /): ";
	cin>>operation;
	if (operation=="+")
		cout<<a<<"+"<<b<<"="<<a+b<<endl;
	else if (operation=="-")
                cout<<a<<"-"<<b<<"="<<a-b<<endl;
	else if (operation=="*")
                cout<<a<<"*"<<b<<"="<<a*b<<endl;
	else if (operation=="/")
                cout<<a<<"/"<<b<<"="<<a/b<<endl;
}

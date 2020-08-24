#include <iostream>
using namespace std;

int main()
{
	bool a=true; bool b=true;
	bool c=false; bool d=false;
	
	cout<<"Таблица истинности логических операций &&"<<endl;
	cout<<"true&&true="<<(a&&b)<<endl;
	cout<<"true&&false="<<(a&&c)<<endl;
	cout<<"false&&true="<<(c&&b)<<endl;
	cout<<"false&&false="<<(c&d)<<endl;

	cout<<"Таблица истинности логических операций ||"<<endl;
	cout<<"true||true="<<(a||b)<<endl;
	cout<<"true||false="<<(a||c)<<endl;
	cout<<"false||true="<<(c||b)<<endl;
	cout<<"false||false="<<(c||c)<<endl;

	cout<<"Таблица истинности логических операций !"<<endl;
	cout<<"!true="<<(!a)<<endl;
	cout<<"!false="<<(!c)<<endl;
	return 0;
}

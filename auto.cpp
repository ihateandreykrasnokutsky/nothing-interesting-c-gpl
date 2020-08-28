#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
	auto a='r';
	cout<<"Ваша переменная auto: "<<a<<endl;
	cout<<"Тип вашей переменной: "<<typeid(a).name()<<endl;
}

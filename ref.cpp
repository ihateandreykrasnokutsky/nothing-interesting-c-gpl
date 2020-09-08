#include <iostream>
using namespace std;
int main()
{
	int ival=1024;//инициал. ival
	int &refVal=ival;//связывание ссылки refVal с переменной ival
	refVal=5;//присвоение зачения ссылке
	cout<<ival<<endl;//переменная тоже меняется
}

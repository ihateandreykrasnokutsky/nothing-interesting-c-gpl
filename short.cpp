#include <iostream>
using namespace std;
int main()
{
	short a=-10;//-65535 для типа short не подходит, компилятор выдает ошибку
	cout<<a<<endl;
}

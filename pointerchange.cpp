#include <iostream>
using namespace std;

int main()
{
	int i=81;
	cout<<"i="<<i<<endl;

	int *pi=0;//указатель pi инициализирован, но не адресом объекта

	int *pi2=&i;//указатель pi инициализирован адресом объкта i
	cout<<"*pi2="<<*pi2<<endl;

	int *pi3;//если pi3 определен в блоке, pi3 не инициализирован
	cout<<"*pi3="<<*pi3<<endl;
	
	pi3=pi2;//pi2 и pi3 указывают на тот же объект, т.е. на i
	cout<<"*pi3="<<*pi3<<endl;
	
	pi2=0;//теперь pi2 не содержит адреса никакого обеъкта
	cout<<"*pi2="<<*pi2<<endl;

	cout<<"Message after the segmentation fault."<<endl;
}

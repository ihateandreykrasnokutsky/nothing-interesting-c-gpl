#include <iostream>
using namespace std;
int main()
{
	int i=42;
	int &r1=i;//r1 связана с i
	const int &r2=i;//r2 тоже связана с i, но она не может использоваться для изменения i
	r1=0;//r1 неконстантна; i теперь 0
	//r2=0;//ошибка: r2 - ссылка на константу
}

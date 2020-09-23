#include <iostream>
using namespace std;
int get_size()
{
	return 40;
}
int main()
{
	const int max_files=20;//max_files - константное выражение
	const int limit=max_files+1;//limit-константное выражение
	int staff_size=27;//staff_size-неконстантное выражение (т.к. int)
	const int sz=get_size();//sz-неконстантное выражение, т.к хоть и const, но значение инициализатора неизвестно до времени выполнения
}

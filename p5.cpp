//using another syntax for pointers
#include <iostream>
int main()
{
	int num=12;
	int *a;
	a=&num;
	*a=num;
	std::cout<<*a<<' '<<&a<<std::endl;
}

#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item item1, item2;
	std::cin>>item1>>item2;//прочитать две транзакции
	std::cout<<item1+item2<<std::endl;//отобразить их сумму
	return 0;
}

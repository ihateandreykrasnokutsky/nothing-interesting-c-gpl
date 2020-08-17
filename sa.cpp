#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book;
	//прочитать ISBN, количество проданных экземпляров и цену
	std::cin>>book;
	//вывести ISBN, количество проданных экземаляров,
	//лющую сумму и среднюю цену
	std::cout<<book<<std::endl;
	return 0;
}

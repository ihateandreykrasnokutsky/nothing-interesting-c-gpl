#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
	cout<<"Введите ISBN, количество проданных экземпляров и каждой книги:"<<endl;
	Sales_item item_temp, item_sum;
	cout<<item_temp<<' '<<item_sum<<endl;
	while (cin>>item_temp)
	{
		item_sum+=item_temp;
		cout<<"Временная сумма равна "<<item_sum<<endl;
	}
	cout<<"Сумма всех транзакций: "<<item_sum<<endl;
}
//почему-то не выводит ISBN после вввода всех значений

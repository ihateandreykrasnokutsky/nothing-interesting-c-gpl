#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	int i=1;
	Sales_item item;
	while (cin>>item)
	{
		cout<<"Harry Potter part "<<i<<"'s ISBN is "<<item.isbn()<<endl;
		i++;
	}
}

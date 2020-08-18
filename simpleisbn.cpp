#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
	Sales_item item;
	while (cin>>item)
	cout<<"Your item's ISBN is: "<<item.isbn()<<endl;
}

#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
	Sales_item itemcin[100];
	int i=0;
	int sum=0;
	int j=0;

	while (cin>>itemcin[i])
		i++;

	for (j=0; j<i; j++)
		if (itemcin[j+1].isbn()==itemcin[j].isbn())
			sum++;
			
		else if (itemcin[j+1].isbn()!=itemcin[j].isbn())
		{
			sum++;
			cout<<"Sum of transactions with "<<itemcin[j].isbn()<<" is "<<sum<<endl;
			sum=0;
		}
		else
		{
			cout<<"Error"<<endl;
			return 0;
		}
}

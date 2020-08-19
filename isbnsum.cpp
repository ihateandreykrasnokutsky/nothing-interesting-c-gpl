#include<iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
	Sales_item item, sum;
	while (cin>>item)
		sum+=item;
	cout<<"Sum of the entries in the input file is: "<<sum<<endl;
}

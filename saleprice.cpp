#include <iostream>
using namespace std;

double applyDiscount(double price,double discount)
{
	double salePrice=price-discount;
	return salePrice;
}

int main()
{
	double price=109.99, discount=price*0.16;
	double salePrice=applyDiscount(price, discount);
	cout<<"Price: "<<price<<endl;
	cout<<"Discount: "<<discount<<endl;
	cout<<"Sale price: "<<salePrice<<endl;
}


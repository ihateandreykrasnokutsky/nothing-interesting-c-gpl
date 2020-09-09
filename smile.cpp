#include <iostream>
using namespace std;

char c(int number)
{
	char symbol=number;
	return symbol;
}

int main()
{
	cout<<c(42)<<c(32)<<c(32)<<c(32)<<c(42)<<endl;//eyes
	cout<<c(32)<<c(32)<<c(124)<<c(32)<<c(32)<<endl;//nose
	cout<<c(32)<<c(95)<<c(95)<<c(95)<<c(32)<<endl;//mouth
}

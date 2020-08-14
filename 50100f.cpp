#include <iostream>
using namespace std;

int i;
int sum=50;

int main()
{
	for (i=50; i<=100; ++i)
		sum+=i;
	cout<<"Сумма чисел от 50 до 100 включительно равна "<<sum<<endl;
}

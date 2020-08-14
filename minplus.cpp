#include <iostream>
using namespace std;

int sum=0;
int i;

int minplus()
{
	for (i=-100;i<=100;++i)
		sum+=i;
	return sum;
}

int main()
{
	cout<<"Sum of numbers from -100 to 100 inclusive is "<<minplus()<<endl;
}

#include <iostream>
using namespace std;

int fig=1;
int sum=0;

void whale()
{
	while (fig<=10)
	{
		sum=sum+fig;
		fig=fig+1;
	}
	cout<<"Sum of numbers from 1 to 10 is "<<sum<<'\n';
}

int main()
{
	whale();
}

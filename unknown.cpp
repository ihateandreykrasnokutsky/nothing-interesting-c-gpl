#include <iostream>
using namespace std;

int num, sum, i;

void endless()
{
	while(cin>>num)
	{
		sum+=num;
	}
	cout<<"Sum of your numbers is "<<sum<<endl;
}

int main()
{
	endless();
}

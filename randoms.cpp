#include <iostream>
using namespace std;

int main()
{
	int i;
	cout<<"Случайные числа от 10 до 20:"<<endl;
	for (i=0; i<50; i++)
	{
		
		int a=rand()%10+10;
		cout<<a<<" ";
	}
	cout<<endl;
}

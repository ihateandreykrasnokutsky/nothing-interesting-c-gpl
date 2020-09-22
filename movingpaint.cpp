#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
	string plus[20];
	int i,j,length=0;//итераторы, длина каждой строки

	for (i=0; i<20; i++)//для каждой из 20 строк
	{
		for (j=0; j<=length; j++)//прибавить length символов
		{
			plus[i]+="+";
		}
		length++;//длина увеличивается при завершении рассчетов с каждой предыдущей строкой
	}



	for (i=0; i<20; i++)
	{
		cout<<plus[i]<<endl;
	}

	for (i=19; i>=0; i--)
	{
		cout<<plus[i]<<endl;
	}
}

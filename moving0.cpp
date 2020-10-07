#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
	system("clear");
	char a[50];
	int i,j;
	for (i=0;i<50;i++) a[i]='.';
	for (i=0;i<50;i++)
	{
		a[i]='0';//присвоение значения '0' кажому символу массива по очереди
		for (j=0;j<50;j++)
			cout<<a[j]<<flush;//вывод массива с измененным элементом
		a[i]='.';//присвоение элементу со значением '0' обратно значения '.'
		sleep(1);
		system("clear");
	}
}

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	srand(time(NULL));
	int i;
	for (i=0;i<1000;i++) srand(rand());//very random number
	char **letter=new char*[4];//первое измерение массива
	int j;
	for (i=0;i<4;i++) letter[i]=new char[10];//второе измерение массива
	for (i=0;i<4;i++)
	{
		for (j=0;j<10;j++)
		{
			letter[i][j]=65+rand()%26;//присвоение каждому элементу массива
			cout<<letter[i][j]<<'|';
		}
		cout<<endl;
	}
}

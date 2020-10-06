#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	srand(time(NULL));
	double **pta=new double* [4];//4 строки
	int i,j;//строка, ряд
	
	for (i=0; i<4; i++) pta[i]=new double[10];//инициализация 4 строк с памятью под 10 рядов
	
	for (i=0; i<4; i++)
	{
		for (j=0; j<10; j++)
		{
			pta[i][j]=double (rand()%10+1)/double (rand()%10+1);//заполнение случ. числами
			cout<<setprecision(2)<<setw(4)<<pta[i][j]<<'|';//ширина записи=4
		}
		cout<<endl;
	}

	for (i=0; i<4; i++) delete []pta[i];
}

	


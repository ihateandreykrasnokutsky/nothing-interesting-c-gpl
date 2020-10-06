#include <iostream>
using namespace std;
int main()
{
	float **ptrarray=new float* [2];//массив указателей
	ptrarray[1]=new float[5];//под каждый из 2 массивов
	ptrarray[2]=new float[5];//выделяется память по 5 элементов
	ptrarray[1][4]=2.5;
	cout<<ptrarray[1][4]<<endl;
	int i;
	for (i=0; i<2; i++) delete ptrarray[i];
}


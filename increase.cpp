#include <iostream>
using namespace std;
int main()
{
	cout<<"\t\tУвеличение переменных с оператором if"<<endl;
	int a[3], i;
	for (i=0; i<3; i++)
	{
		cout<<"Введите "<<i+1<<" число: ";
		cin>>a[i];
	}
	if (a[0]==a[1] or a[0]==a[2] or a[1]==a[2])
	{
		for (i=0; i<3; i++)
		{
			a[i]+=5;
			cout<<i+1<<" число="<<a[i]<<endl;
		}
	}
	else cout<<"Двух равных переменных не обнаружено"<<endl;
}



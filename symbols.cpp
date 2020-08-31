#include <iostream>
using namespace std;

int main()
{
	cout<<"Оповещение: "<<'\7'<<'.'<<endl;
	cout<<"Новая строка: "<<'\12'<<'.'<<endl;
	cout<<"Символ 'М': "<<'\40'<<'.'<<endl;
	cout<<"Нулевой символ: "<<'\0'<<'.'<<endl;
	cout<<"Символ 'М': "<<'\115'<<'.'<<endl;
	cout<<"Символ 'М': "<<'\x4d'<<'.'<<endl;
	
	cout<<"Hi \x4dO\115!\n";
	cout<<'\115'<<'\n';

	cout<<"\1234"<<endl;
	cout<<"\x010"<<endl;
}

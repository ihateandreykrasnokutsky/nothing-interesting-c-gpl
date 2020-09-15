#include <iostream>
using namespace std;
int main()
{
	int i=42;
	cout<<i<<endl;
	int *p;//p-указатель на тип int
	int *&r=p;//r-ссылка на указатель p
	r=&i;//r ссылается на указатель; присвоение &i ссылке r делает p указателем на i
	*r=0; //обращение к значению r дает i, объект, на который указывает p; изменяет значение i на
	//0
	cout<<i<<endl;
}

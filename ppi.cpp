#include <iostream>
using namespace std;
int main()
{
	int ival=512;//переменная
	int *pi=&ival;//указатель
	int **ppi=&pi;//указатель на указатель
	cout<<ival<<' '<<*pi<<' '<<**ppi<<endl;
}

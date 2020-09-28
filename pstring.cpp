#include <iostream>
using namespace std;
int main()
{
	typedef char *pstring;//aka char* pstring
	const pstring cstr=0;//aka char *const cstr, как ни странно
	const pstring **ps;//char *const *ps, указатель на константный указатель на тип char
	cout<<cstr<<endl;
}

#include <iostream>
using namespace std;
int main()
{
	string *name=new string;
	*name="Andrey";
	cout<<"name is "<<*name<<endl;
	delete name;
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
	string *name=new string;
	cout<<"Enter name: ";
	cin>>*name;
	cout<<"the name is "<<*name<<endl;
	delete name;
	return 0;
}

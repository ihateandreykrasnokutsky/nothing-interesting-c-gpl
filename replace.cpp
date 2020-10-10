#include<iostream>
using namespace std;
int main()
{
	string s;
	cout<<"Enter line: ";
	getline(cin,s);
	s=s.replace(2,4,"fuck");
	cout<<"Your string is: "<<s<<endl;
}

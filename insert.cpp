#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter line: ";
	string s;
	getline(cin,s);
	s=s.insert(s.length()/2,"no way");
	cout<<"Your line is: "<<s<<endl;
}

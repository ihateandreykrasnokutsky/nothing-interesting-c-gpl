#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter a letter int low register: ";
	char l;
	cin>>l;
	l-=32;
	cout<<"Your letter in high register: "<<l<<endl;
}

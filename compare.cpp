#include <iostream>
using namespace std;
int main()
{
	cout<<"Is first number bigger than second?\n";
	cout<<"Enter first number: ";
	int a;
	cin>>a;
	cout<<"Enter second number: ";
	int b;
	cin>>b;
	if (a>b) cout<<"Bigger\n";
	else if (a<b) cout<<"Smaller\n";
	else if (a=b) cout<<"Equal\n";
	else cout<<"Error\n";
}

#include <iostream>
using namespace std;

int main()
{
	char let[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	srand(time(NULL));
	cout<<"Your random letters are: ";
	for (int i=0; i<20; i++)
	{
		cout<<let[rand()%26]<<' ';
	}
	cout<<endl;
}

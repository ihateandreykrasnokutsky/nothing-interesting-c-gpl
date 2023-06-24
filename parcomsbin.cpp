#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	for (int i=0; i<argc; i++)
	{
		int x=atoi(argv[i]);
		cout<<"Argument, converted to number"<<i<<": "<<x<<endl;
	}
}

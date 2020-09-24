#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	cout<<"Number of arguments is: "<<argc<<".\n";
	for (int i=0; i<argc; i++)
	{
		cout<<i+1<<" argument is: "<<argv[i]<<".\n";
	}
}

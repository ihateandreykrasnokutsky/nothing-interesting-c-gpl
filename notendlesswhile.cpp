#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
	unsigned u=11;
	while (u>0)
	{
		--u;
		cout<<u<<endl;
		sleep(1);
	}
}

#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
	unsigned i;
	for (i=5; i>0; i--)
	{
		cout<<i<<' '<<flush;
		sleep(1);
	}
		cout<<endl;
}

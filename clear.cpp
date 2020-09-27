//программа не работает идеально
#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
	using f=int;
	for (f i=0; i<100; i++)
	{
		cout<<i<<flush;
		sleep(1);
		system("clear");
	}
}

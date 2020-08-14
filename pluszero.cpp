#include <iostream>
#include <unistd.h>//for sleep
using namespace std;

int i;
int fig=0;

int main()
{
	for (i=0; i<1; i=i+0)
	{
		cout<<"Part of the cycle "<<fig<<". "<<flush;
		fig++;
		sleep(1);
	}
}

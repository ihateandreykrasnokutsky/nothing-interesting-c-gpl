#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
	for (int i=0; i<20; i++)
	{
		cout<<"time="<<time(NULL)<<' '<<endl;
		sleep(1);
	}
}

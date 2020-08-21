#include <iostream>
#include <unistd.h>
using namespace std;

int random15_25()
{
	return rand()%90+10;
}

int main()
{
	for (int i=0; i<=10; i++)
	{
		srand(time(NULL));
		cout<<"Random number is "<<random15_25()<<endl;
		sleep(1);
	}

}

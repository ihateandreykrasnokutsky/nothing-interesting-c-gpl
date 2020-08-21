#include <iostream>
using namespace std;

int random15_25()
{
	return rand()%10+15;
}

int main()
{
	cout<<"Random number is "<<random15_25()<<endl;
}

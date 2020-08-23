#include <iostream>
using namespace std;

int main()
{
	srand(time(NULL));
	int num=rand()%10;
	cout<<"Guess the number 1-10: ";
	int guess;
	cin>>guess;
	int tries=1;
	while (guess!=num)
	{
		cout<<"Incorrect number, try again: ";
		cin>>guess;
		tries++;
	}
	cout<<"Success! Number of your tries is "<<tries<<'.'<<endl;
}

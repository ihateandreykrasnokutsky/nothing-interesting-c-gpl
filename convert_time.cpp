#include <iostream>
using namespace std;
int main()
{
	time_t timer;
	timer=time(NULL);
	int sec=timer;
	int min=sec/60;
	int h=min/60;
	int d=h/24;
	int y=d/365;
	cout<<"seconds="<<sec<<endl;
	cout<<"minutes="<<min<<endl;
	cout<<"hours="<<h<<endl;
	cout<<"days="<<d<<endl;
	cout<<"years~"<<y<<endl;

	//now total time in one entry
	int restsec=sec%60;
	int restmin=min%60;
	int resth=h%24;
	int restd=d%365;
	int resty=y;
	cout<<"Total time is: ";
	cout<<resty<<" years, "<<restd<<" days, "<<resth<<" hours, "<<restmin<<" minutes, "<<
		restsec<<" seconds."<<endl;
}

#include <iostream>
using namespace std;
int main()
{
	const int buf=0;
	int cnt=0;
	const int sz=cnt;
	++cnt;
	sz;//look at this, it works
	cout<<sz<<endl;
}


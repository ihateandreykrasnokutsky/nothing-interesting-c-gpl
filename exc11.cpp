#include <iostream>
using namespace std;
int main()
{
	using nt=int;//nt - int
	typedef double dbl;//dbl - double
	nt x,y;
	int a,b;
	dbl x1,y1;
	double a1,b1;
	x=1; y=2;
	a=3; b=4;
	x1=y1=a1=b1=0;//cause program has some garbage in them
	for (dbl i=x; i<b+100; i+=y)//completley senseless
	{
		x1+=x;
		y1+=y;
		a1+=a;
		b1+=b;
	}
	cout<<x<<' '<<y<<' '<<a<<' '<<b<<endl;//cout everything
	cout<<x1<<' '<<y1<<' '<<a1<<' '<<b1<<endl;
}

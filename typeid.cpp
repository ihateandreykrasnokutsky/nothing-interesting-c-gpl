#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x=19;//size of first column
	//simple variables
	int i=1;
	float f=22.2;
	double d=33.3;
	long double ld=34.4;
	short sh=456;
	//references
	int &ri=i;
	double &rd=d;
	//pointers
	float *pf=&f;
	long double *const pld=&ld;
	const short *const psh=&sh;
	const short *const *ppsh=&psh;
	const short *const *const *pppsh=&ppsh;
	//cout typeid
	cout<<setw(x)<<"int"<<'|'<<setw(4)<<i<<'|'<<setw(3)<<typeid(i).name()<<endl;
	cout<<setw(x)<<"float"<<'|'<<setw(4)<<f<<'|'<<setw(3)<<typeid(f).name()<<endl;
	cout<<setw(x)<<"double"<<'|'<<setw(4)<<d<<'|'<<setw(3)<<typeid(d).name()<<endl;
	cout<<setw(x)<<"long double"<<'|'<<setw(4)<<ld<<'|'<<setw(3)<<typeid(ld).name()<<endl;
	cout<<setw(x)<<"short"<<'|'<<setw(4)<<sh<<'|'<<setw(3)<<typeid(sh).name()<<endl;
	cout<<setw(x)<<"&int"<<'|'<<setw(4)<<ri<<'|'<<setw(3)<<typeid(ri).name()<<endl;
	cout<<setw(x)<<"&double"<<'|'<<setw(4)<<rd<<'|'<<setw(3)<<typeid(rd).name()<<endl;
	cout<<setw(x)<<"*float"<<'|'<<setw(4)<<*pf<<'|'<<setw(3)<<typeid(*pf).name()<<endl;
	cout<<setw(x)<<"*long double"<<'|'<<setw(4)<<*pld<<'|'<<setw(3)<<typeid(*pld).name()<<endl;
	cout<<setw(x)<<"*const short"<<'|'<<setw(4)<<*psh<<'|'<<setw(3)<<typeid(*psh).name()<<endl;
	cout<<setw(x)<<"con sh *con *"<<'|'<<setw(4)<<**ppsh<<'|'<<setw(3)<<typeid(**ppsh).name()<<endl;
cout<<setw(x)<<"con sh *con *con *"<<'|'<<setw(4)<<***pppsh<<'|'<<setw(3)<<typeid(***pppsh).name()<<endl;
}

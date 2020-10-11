#include<iostream>
using namespace std;
int main()
{
	int i=2;
	int *pi=&i;
	int **ppi=&pi;
	int ***pppi=&ppi;
	cout<<typeid(*pi).name()<<endl;
	cout<<typeid(pi).name()<<endl;
	cout<<typeid(ppi).name()<<endl;
	cout<<typeid(pppi).name()<<endl;
}

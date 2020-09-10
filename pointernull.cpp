#include <iostream>
using namespace std;
int main()
{
	int num=5;
	cout<<"значение num="<<num<<endl;
	int *p=&num;
	*p=0;
	cout<<"после изменения *p на "<<*p<<" значение num="<<*p<<endl;
}

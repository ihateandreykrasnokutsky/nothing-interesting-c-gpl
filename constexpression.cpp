#include <iostream>
using namespace std;
int main()
{
	constexpr int i=42;
	const int x=i;
	cout<<x<<endl;
	const int *const x1=&x;
	cout<<*x1<<endl;
	//x1=&i;
}

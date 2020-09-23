#include <iostream>
using namespace std;

constexpr int size()
{
	return 40;
}

int main()
{
	constexpr int mf=20;//20-константное выражение
	constexpr int limit=mf+1;//mf+1-константное выражение
	constexpr int sz=size();//допустимо, только если size() является функцией constexpr
	cout<<mf<<' '<<limit<<' '<<sz<<endl;
}

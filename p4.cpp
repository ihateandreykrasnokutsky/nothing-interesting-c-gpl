//trying enumerators with string type

#include <iostream>

int main()
{
	enum lnx:char{mint='m', arch='a', debian='d', ubuntu='u'};
	std::cout<<lnx::mint<<' '<<lnx::debian<<std::endl;
	return 0;
}

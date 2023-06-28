//using enumerations
#include <iostream>
int main()
{
	enum a {a1=11, a2, a3, a4=50};
	std::cout<<a::a1<<" "<<a::a2<<" "<<a::a3<<" "<<a::a4<<std::endl;
}

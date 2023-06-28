//trying namespace
#include <iostream>
namespace prints
{
	void hurray()
	{
		std::cout<<"Hurray!"<<std::endl;
	}
	void shit()
	{
		std::cout<<"Shit."<<std::endl;
	}
}
int main()
{
	std::cout<<"Should I write something? (yes/no, 1/0): ";
	std::string answer;
	std::cin>>answer;
	if (answer=="1" or answer=="yes") prints::hurray();
	else if (answer=="0" or answer=="no") prints::shit();
	else
	{
		std::cout<<"Error #1, incorrect input. Try again."<<std::endl;
		main();
	}
}

#include <iostream>
int main()
{
	std::cout<<"Enter a number from 1 to 3: ";
	int num;
	std::cin>>num;
	switch(num)
	{
		case 1: 
		{
			std::cout<<"Your number is 1."<<std::endl;
			break;
		}
		case 2: 
		{
			std::cout<<"Your number is 2."<<std::endl;
			break;
		}
		case 3:
		{
			std::cout<<"Your number is 3."<<std::endl;
			break;
		}
		default:
		{
			std::cout<<"Invalid number, try again."<<std::endl;
			main();
		}
	}
}


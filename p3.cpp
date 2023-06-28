//using enumerated variable in a function
#include <iostream>

void wrdev(char choice)
{
	enum devices:char{phones='a', pcs='b', audioplayers='c', cameras='d', laptops='e'};
	switch (choice)
	{
		case devices::phones:
		{
			std::cout<<"A nice portable device."<<std::endl;
			break;
		}
		case devices::pcs:
		{
			std::cout<<"A powerful option if you don't need a portability."<<std::endl;
			break;
		}
		case devices::audioplayers:
		{
			std::cout<<"Mostly for music."<<std::endl;
			break;
		}
		case devices::cameras:
		{
			std::cout<<"Can be better at capturing than smartphones."<<std::endl;
			break;
		}
		case devices::laptops:
		{
			std::cout<<"A light version of PC."<<std::endl;
			break;
		}
		default:
		{
			std::cout<<"Error #1, incorrect input."<<std::endl;;
		}
	}
}

int main()
{
	std::cout<<"Enter the name of device you want to buy, a)phones, b)pcs, c)audiplayers, d)cameras, e)laptops: ";
	char dev;
	std::cin>>dev;
	wrdev(dev);
	return 0;
}

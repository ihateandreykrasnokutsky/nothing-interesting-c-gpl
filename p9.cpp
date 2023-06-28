//using extern int
#include <iostream>
extern int ex;
int main()
{
	ex=124;
	std::cout<<"external int = "<<::ex<<std::endl;
}

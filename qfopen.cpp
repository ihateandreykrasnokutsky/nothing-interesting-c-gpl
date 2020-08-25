#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream quest("/home/gef711/Documents/Programming/WorkingDirectory/questfile");
	string questoutput;
	getline(quest, questoutput);
	cout<<questoutput<<endl;
}

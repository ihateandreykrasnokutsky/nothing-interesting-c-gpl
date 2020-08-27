#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	cout<<"Enter text to be placed into a directory: ";
	string text;
	getline(cin, text);
	cout<<"Enter a directory name to place text there: ";
	string dir;
	getline(cin, dir);
	ofstream output_file(dir);
	output_file<<text<<endl;
	return 0;
}

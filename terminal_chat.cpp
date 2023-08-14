//1st try is a program that can write and read information to/from a file in the internet
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main()
{
	ifstream file1;
	file1.open("C:/Users/Andrey Krasnokutsky/source/repos/terminal chat/terminal chat/file1.txt");
	ofstream file2;
	file2.open("C:/Users/Andrey Krasnokutsky/source/repos/terminal chat/terminal chat/file2.txt");
	if (file1.fail())
	{
		cout << "File1 failed to open.\n";

	}
	if (file2.fail())
	{
		cout << "File2 failed to open.\n";

	}
	stringstream buffer;
	buffer << file1.rdbuf();
	string file1_contents;
	file1_contents = buffer.str();
	cout << file1_contents << endl;
	file1.close();
	file2 << file1_contents;
	file2.close();
}
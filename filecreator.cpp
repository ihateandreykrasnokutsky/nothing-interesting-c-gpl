#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	cout<<"Enter name of file to create in <dir1> directory: ";
	string newfile;
	getline(cin,newfile);
	newfile="/home/gef711/Documents/Programming/WorkingDirectory/dir1/"+newfile;
	cout<<"Do you want to type anything into the file? (y/n): ";
	string response;
	getline(cin,response);
	string newtext;
	if (response=="y")
	{
		cout<<"Enter text for the file: ";
		getline(cin, newtext);
		ofstream newfile_ofstream(newfile);
		newfile_ofstream<<newtext<<endl;
	}
	else if (response=="n")
	{
		cout<<"Empty file created."<<endl;
	}
	else
		cout<<"Incorrect input."<<endl;
	return 0;
}

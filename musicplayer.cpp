#include <iostream>
using namespace std;
int main()
{
	cout<<"Music Player v. 1.0"<<endl;
	cout<<"Enter a path to music file in a  music folder:"<<endl;
	cout<<"/home/gef711/Музыка/";
	string path;
	cin>>path;
	path="/home/gef711/Музыка/"+path;
	string command;
	command="mpv --audio-display=no "+path;
	system (command.c_str());
}

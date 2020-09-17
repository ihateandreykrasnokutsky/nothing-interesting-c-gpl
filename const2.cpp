#include <iostream>
using namespace std;

string wordGetline(string preword)
{
	string fword;
	fword=preword+" fuckoff";
	return fword;
}

int main()
{
	cout<<"Enter word: ";
	string preword;
	cin>>preword;
	const string word=wordGetline(preword);
	cout<<"Your string is "<<word<<endl;
}

//partial using of namespaces
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	cout<<"2+2=";
	int answer;
	cin>>answer;
	switch (answer)
	{
		case 4:
		cout<<"Right!"<<endl;
		break;

		default:
		cout<<"Incorrect!"<<endl;
	}
}	

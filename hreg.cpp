#include <iostream>
using namespace std;
int main()
{
	cout<<"Enter a letter: ";
	char l;
	cin>>l;
	char letter_high[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};//массив с заглавными буквами алфавита
	char letter_low[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};//массив со строчными буквами алфавита
	for (int i=0; i<26; i++)
		if (letter_low[i]==l)//если элем. массива low соответствует введенной букве
			cout<<letter_high[i]<<endl;//то вывести соотв. элемент массива high
}

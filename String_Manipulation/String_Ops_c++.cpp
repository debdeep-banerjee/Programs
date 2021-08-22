#include<iostream>
#include<string>
using namespace std;
string name="Neils Stroustrup";

int main()
{
	string s=name.substr(7,10);
	s=name.replace(6,10,"Goldsmith");
	s=name.strtok("Gold");
	cout << "The string is" << s << endl;
	return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	cout << "The first string is" <<endl;
	cin >> s1;
	cout << "The second string is" <<endl;
	cin >> s2;
	if(s1.length() > s2.length())
	{
		cout << "The first string is greater in length" << endl;
	}
	else
	{
		cout <<"The second string is greater in length" << endl;
	}
}

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool CheckUnique(string s)
{
	sort(s.begin(), s.end());
	for(int i=0; i < s.length()-1; i++)
	{
		if(s[i] == s[i+1])
		{
			return false;
		}

	}
	return true;
	//cout << s1 << endl;
}
int main()
{
	string s2="Helo";
	bool result;
	result=CheckUnique(s2);
	if(result)
	{
		cout << " The string has unique characters" << endl;
	}
	else
	{
		cout <<  " The string does not have unique characters" << endl;
	}
	return 0;
}	

#include<iostream>
using namespace std;

bool  check_palindrone(string s)
{
	bool result=true;
	for(int i=0; i < s.length()/2; i++)
	{
		if(s[i]==s[s.length()-i-1])
		{
			result=result*true;
		}
		else
		{
			result=result*false;
		}
	}
	return result;
				
}

int main()
{
	string s="1231";
	bool result;
	result=check_palindrone(s);
	if(result)
	{
		cout << " The string is palindrone" << endl;
	}
	else
	{
		cout << " The string is not a palindrome" << endl;
	}
}


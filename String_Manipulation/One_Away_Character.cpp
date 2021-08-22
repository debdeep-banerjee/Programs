#include<iostream>
using namespace std;
bool One_away_character(string s1, string s2)
{
	//cout << "Hello" << endl;
	int count=0;
	if(s1.length() == s2.length())
	{
		for(int i=0; i< s1.length(); i++)
		{
			if(s1[i] != s2[i])
			{
				//Find out why the delta is there(insertion, removal or replacement)
				cout << " The mismatched word is" << s1[i] << endl;
				count++;	
			}
		}
	}
	else
	{
		//Find the number of character missing or added
		int length=s1.length()-s2.length();
		if(length == -1)
		{
			cout << " Additional characters have been added" << endl;
		}
		else if(length ==1)
		{
			cout << " Characters have been removed" << endl;
		}
		else if(length > 1)
		{
			cout << " Not Applicable" << endl;
		}
		else if(length < -1)
		{
			cout << "Not applicable" << endl;
		}
	}
		
			
	if(count > 0)
	{
		cout << "Characters had been changed" << endl;
	}
		
}
int main()
{
	bool result;
	string s1="s";
	string s2="pale";
	result=One_away_character(s1,s2);
	return 0;
}
	

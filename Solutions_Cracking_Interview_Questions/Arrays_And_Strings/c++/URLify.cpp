#include<iostream>
using namespace std;

string Insert_String(string s, string s_insert)
{
	string s2;
	for(int i=0; i< s.length(); i++)
	{
		if(s[i] == ' ')
		{
			/*s2+='%';
			s2+='2';
			s2+='0';*/
			s2+=s_insert;
		}
		else
		{
			s2+=s[i];
		}
	}
	return s2;
}

int main()
{	
	string s="Mr John Smith, 13";
	string s_insert="%20";
	string result;
	result=Insert_String(s,s_insert);
	cout << " The updated string is" << result << endl;
	return 0;
}

#include<iostream>
#include<vector>
#include<string>
using namespace std;

string reverse_words(string s)
{
	vector<string> v;
	string s2;
	for(int i=0; i<=s.length();i++)
	{
		if((s[i] == ' ') || (i==s.length()))
		{
			v.push_back(s2);
			s2.erase();
		}
		else
		{
			s2+=s[i];
		}
	}
	//cout << " The value of s2 is" << s2 << endl;
	reverse(v.begin(), v.end());
	for (std::vector<string>::iterator i = v.begin(); i != v.end(); i++)
	{
    		std::cout << *i << endl; 		
			
	}
	return s2;
}
int main()
{
	string result;
	string s="Hello World";
	result=reverse_words(s);
	//cout << " The reverse string is" << result << endl;
	return 0;
}

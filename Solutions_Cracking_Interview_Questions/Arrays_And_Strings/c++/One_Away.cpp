#include<iostream>
using namespace std;
bool one_edit(string s1, string s2)
{
	bool result;
	int count=0;
	bool first_string_length_greater;
	if(s1.length() > s2.length())
	{
		first_string_length_greater=true;
	}
	if(first_string_length_greater)
	{
		for(int i=0; i < s1.length(); i++)
		{
			for(int j=0; j< s2.length(); j++)
			{
				if(s1[i]==s2[j])
				{
					cout << s1[i] << endl;
					count++;
				}
			}
		}
	}
	cout << "The value of count is" << count << endl;
	if((s1.length()-count==1) || (s1.length()-count==0))
	{
		result=true;
	} 
	return result;	
							
}
int main()
{
	bool result;
	string s1="pale";
	string s2="ple";
	result=one_edit(s1,s2);
	cout << "The One away result is" << result << endl;
	return 0;
}

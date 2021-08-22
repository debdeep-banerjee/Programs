#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
void char_freq(string s)
{
	map<char,int>m;
	map<char,int>::iterator it1;
	map<char,int>::iterator it;
	for(int i=0; i<s.length(); i++)
	{
		/*if(i==0)
		{
			m.insert(std::pair<char,int>(s[0],1));
		}*/
		//map<char,int>::iterator it;
		it=m.find(s[i]);
		if(it==m.end())
		{
			m.insert(std::pair<char,int>(s[i],(1)));
		}
		else
		{
			it->second++;
		}
			
	}
	for(it1=m.begin();it1!=m.end();++it1)
	{
		cout <<"Key/Value pair is"
		<<it1->first<<"->"<<it1->second<<endl;
	}
}
int main()
{
	string s="Hello World";
	char_freq(s);
	return 0;
}			

#include<iostream>
using namespace std;
string compressed_string(string s1)
{	
	string s2;
	int count=1;
	int k=0;
	int j;
	//char s2[100];
	
	for(int i=0; i< s1.length(); i++)
	{
		for(j=i+1; j<s1.length(); j++)
		{
			if(s1[i]!=s1[j])
			{
				break;
			}
			else
				count++;
			
		}
		cout << "The value of s1[i] is" << s1[i] << endl;
		//cout << "The value of s2[k] is" << s2[k] << endl;
		cout << "The value of k is" << k << endl;
		s2+=s1[i];
		s2+='0'+count;
		k++;
		cout << "The value of s2[k] is" << s2[k] << endl;
		count=0;
	}
	for(int m=0;m<k; m++)
	{
		cout << " The element in the array is" << s2[m] << endl;
	}	 
			
}
int main()
{
	string s1="aaaeeerrr";
	compressed_string(s1);
	return 0;	
}

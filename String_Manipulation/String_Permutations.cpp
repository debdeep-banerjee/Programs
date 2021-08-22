#include<iostream>
#include<algorithm>
#include <string>
using namespace std;
string string_permutation(string s, string *arr, int k)
{
	
	do
	{
		//cout << s<< endl;
		arr[k]=s;
		k++;
	}while(next_permutation(s.begin(), s.end()));
	//return arr;
	cout << " The length of k variable is" << k << endl;
	for(int i=0; i< k; i++)
	{
		cout << arr[i] << endl;
	}
}
int main()
{
	string s="abc";
	string arr[100];
	string_permutation(s,arr,0);
	return 0;
}


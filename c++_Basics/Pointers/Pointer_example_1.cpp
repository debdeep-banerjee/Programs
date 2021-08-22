#include<iostream>
using namespace std;
int main()
{
	int *p=nullptr;
	int i=5;
	p=&i;
	int j=*p;
	cout << *p << endl;
	cout << "The value of j is" << j << endl;
	const char* const str="Hello World";
	const int c=1;
	const int* pconst=&c;
	const int c2=2;
	pconst=&c2;
	const int* const pconst2=&c;
	return 0;
}

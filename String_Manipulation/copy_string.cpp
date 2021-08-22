#include<iostream>
#include<string>
using namespace std;

int main()
{
	char s[4]={'T','e','s','t','\0'};
	char t[4]={'D',','e,'s','k','\0'};
	//char z[4];
	//*z=*t;
	char *p1=s;
	char *p2=t;
	while(*p1 != '\0')
	{
		*p1++=*p2++;
	}
	printf("%s",s);
}

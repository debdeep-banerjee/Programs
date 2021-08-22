#include<stdio.h>
#include<string.h>
void atoi_convert(char *c)
{
	//printf("%c",c);
	int res=0;
	int sign=1;
	int i=0;
	if(c[0]=='-')
	{
		sign=-1;
		i++;
	}	
	for(; c[i] != '\0';i++)
	{
		res=res*10+c[i]-'0';
		//printf("%d",res);
	}
	printf("%d",(res*sign));
}	

int main()
{
	char c[100]="-123";
	atoi_convert(c);
	return 0;
}

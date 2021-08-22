#include<stdio.h>
#include<string.h>
int strlen_imp(char *s)
{
	int count=0;
	char *p=s;
	//while(*s !='\0')
	for(int i=0; i<strlen(s);i++)
	{
		count++;
		p++;
	}
	return p-s;
}
void strcpy_imp(char *s, char *t)
{
	char *p=t;
	if(strlen(s) >=strlen(t))
	{
		while(*s !='\0')
		{
			*t=*s;
			s++;
			t++;
		}
	}
	for(int i=0; i<strlen(p);i++)
	{
		printf("Value of arr1 elements are %c\n",p[i]);
	}	
}
int strcmp_imp(char *s,char *t)
{
	int count=0;
	if((strlen(s) ==0) && (strlen(t) ==0)) return 0;
	char *p=s;
	char *k=p;
	/*while(*s != '\0')
	{
		if(*s==*t)
		{
			count++;
			*p=*s;
			p++;
			printf("The value of *p is %c\n",*p);
		}
		s++;
		t++;

	}*/
	for(;*s==*t;s++,t++)
	{
		if(*s=='\0')
			return 0;
		count++;
		
	}
	for(int j=0;j<strlen(k); j++)
	{
		printf("The value of elements are %c\n",k[j]);
	}
	return count;
}
		
	

int main()
{
	char arr[]={'H','e','l','l','o','W','o','r','l','d','\0'};
	char arr1[]={'H','o','r','l','d','\0'};
	int result;
	//result=strlen_imp(arr);
	//strcpy_imp(arr,arr1);
	result=strcmp_imp(arr,arr1);
	printf("The count is %d\n",result);
	/*for(int i=0; i<strlen(arr1);i++)
	{
		printf("Value of arr1 elements are %c\n",arr1[i]);
	}*/
	return 0;
}
	

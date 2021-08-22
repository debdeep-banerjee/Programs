#include<stdio.h>
//#include<conio.h>
#include<string.h>
void squeeze(char *s, char target)
{
	int i,j,k;
	bool result_duplicates=true;
	for(i=j=0; i<strlen(s); i++)
	{
		for(int k=i+1; k<strlen(s);k++)
		{
			if(s[i] ==s[k])
			{
				result_duplicates=false;
				break;
			}	
			printf("s[i] in for loop is  %c\n", s[i]);
			printf("s[k] is %c\n",s[k]);

		}
		if(result_duplicates)
		{
			printf("result_duplicates is %d\n",result_duplicates);
			printf("s[i] is %c\n", s[i]);
			printf("s[j] is %c\n",s[j]);
			s[j++]=s[i];
					
		}	
		result_duplicates=true;
	}
	s[j]='\0';
}
int main()
{
	char str[]="Hello WorlldH";
	char target='l';
	squeeze(str,target);
	for(int i=0;i<strlen(str);i++)
	{
		printf("The elements of the char array is %c\n",str[i]);
	}	
	return 0;
}

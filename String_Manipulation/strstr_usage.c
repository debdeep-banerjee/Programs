//#include<conio.h>
#include<stdio.h>
#include<string.h>
//#define MAXLINE 1000
//int getline(char *line, int max,*stdin);
//Print lines that match from the first argument
int main(int argc, char *argv[])
{
	int found=0;
	size_t MAXLINE=100;
	char line1[MAXLINE];
	char *line=line1;
	if(argc!=2)
	{
		printf("Incorrect arguments\n");
	}
	else
	{
		while(getline(&line,&MAXLINE,stdin) > 0)
		{
			if(strstr(line,argv[1]) != NULL)
			{
				printf("The line with the argument match is %s\n",line);
				found++;
			}
		}
	}
	return found;
}

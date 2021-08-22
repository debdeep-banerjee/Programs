#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
	char line[1024];
	//vector<char*> line;
	FILE* pFile;
	pFile=fopen("/Users/Debdeep/Downloads/Chase2465_Activity_20210531.csv","r");
	if(pFile !=NULL)
	{
		while(fgets(line,1024,pFile))
		{
			printf("%s \n",line);
			
		}
	}
	return 0;
}

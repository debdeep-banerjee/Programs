#include<iostream>
#incluse<cmath>
using namespace std;
void create_subsets(int arr[])
{
	int n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i< pow(2, n);i++)
	{
		
		

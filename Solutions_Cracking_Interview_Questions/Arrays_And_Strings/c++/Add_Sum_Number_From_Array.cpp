#include<iostream>
using namespace std;

void find_sum_numbers(int arr[], int sum)
{
	int sums=[];
	int hashtable={};
	for(int i=0; i< strlen(arr); i++)
	{
		element_subtracted=sum-arr[i];
		if(hashtable[element_subtracted.toString()} != undefined)
		{
			sums.push([arr[i], element_subtracted]);
		}
		hashtable[arr[i].toString()]=arr[i];
	}
	//return sums;
}	

int main()
{
	int arr[5]={1,2,4,4,};
	int sum=3;
	find_sum_numbers(arr,s);
	return 0;
}

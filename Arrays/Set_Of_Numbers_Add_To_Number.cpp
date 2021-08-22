#include<iostream>
#include<iterator>
#include<vector>
#include<cstring>
#include<cctype>
using namespace std;
int Find_Set_of_Numbers_For_Sum(int *arr1,int num)
{
	int sum=0;
	vector<int> arr;
	int length=sizeof(arr1)/sizeof(arr1[0]);
	for(int i=0; i<=length; i++)
	{
		sum=arr1[i];
		for(int j=0; j<=length; j++)
		{
			if(i!=j)
			{
				sum=sum+arr1[j];
			}
			arr.push_back(sum);
		}
		cout << "sum" << sum << endl;
		//arr.push_back(sum);
		sum=0;
	}
	vector<int>::iterator it;
	for(it=arr.begin(); it!=arr.end();++it)
	{
		cout << *it << endl;
		if(*it ==6)
		{
			cout << "Match found" << endl;
		}
	}
}				
	
int main()
{
	int arr1[3]={1,2,3};
	Find_Set_of_Numbers_For_Sum(arr1,6);
	return 0;
}

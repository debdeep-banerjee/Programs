#include <iostream>
//#include<math>
using namespace std;
void merge(int *arr, int start, int end)
{
	int temp[4];
	int mid=(start+end)/2;
	int i=start;
	int j=mid+1;
	int k=start;
	while(i<=mid && j<=end)
	{
		if(arr[i] < arr[k])
		{
			temp[k++]=arr[i++];
		}
		else
		{
			temp[k++]=arr[j++];
		}
	}
	while(i<=mid)
	{
		temp[k++]=arr[i++];
	}
	while(j<=end)
	{
		temp[k++]=arr[j++];
	}
        for(int i=start;i<=end;i++)
	{
		arr[i]=temp[i];
	}
		
}
			
void mergesort(int arr[], int start,int end)
{
	int arr_left[100];
    	int arr_right[100];
    	int mid=(start+end)/2;
    	int k=0;
        if(start==end)
	{
		return;
	}
    	/*for(int i=0; i<mid;i++)
    	{
        	arr_left[i]=arr[i];
    	}
   	for(int j=mid+1; j<end;j++)
    	{
        	arr_right[k]=arr[j];
        	k++;
    	}*/
    	mergesort(arr,start,mid);
    	mergesort(arr,mid+1,end);
	merge(arr,start,end);
}
int main() {
	//int arr[4]={1,5,4};
   	//int n=sizeof(arr)/sizeof(arr[0]);
    	int arr[4];
	int n;
	cin>>n;
	for(int i=0; i<n;i++)
	{
		cin>>arr[i];
	}
   	int start=0;
   	int end=n-1;
    	mergesort(arr,start,end);
    	for(int i=0;i<n;i++)
    	{
    		cout << "The sorted elements are" << arr[i] << endl;
    	}
}


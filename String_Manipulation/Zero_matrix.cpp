#include<iostream>
using namespace std;

void zero_matrix( int arr[][3], int rows, int columns)
{
	//int rows=sizeof(arr)\sizeof(arr[0]);
	//int columns=sizeof(arr[0])\sizeof(int);
	for(int i=0; i< rows; i++)
	{
		for(int j=0; j< columns; j++)
		{
			if(arr[i][j] ==0)
			{
				for(int m=0;m< columns; m++)
				{
					arr[i][m]=0;
				}
				for(int k=0; k < rows; k++)
				{
					arr[k][j]=0;
				}
				//arr[i][]=0;
				//arr[][j]=0;
			}
		}
	}
	//Print array
	for(int h=0;h < rows;  h++)
	{
		for(int s=0; s< columns; s++)
		{
			cout << arr[h][s];
		}
	}
}
int main()
{
	int arr[2][3]= {{1,2,3},
			{3,0,5},
			 // {2,0,1}
			};
	int rows=sizeof(arr)/sizeof(arr[0]);
        int columns=sizeof(arr[0])/sizeof(int);
	zero_matrix(arr, rows, columns);
	return 0;
}

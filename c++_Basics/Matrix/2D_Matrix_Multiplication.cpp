#include<iostream>
using namespace std;
#define M 2
#define N 2
void  Two_Dimension_Multiplication(int mat1[][N], int mat2[][N])
{
	int mat3[M][N];
	for(int i=0; i< M; i++)
	{
		for(int j=0; j< N; j++)
		{
			for(int k=0; k<N; k++)
			{
				mat3[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}
	//Iterate through the array and print the array elements
	for(int m=0;m<N;m++)
	{
		for(int g=0;g<N;g++)
		{
			cout << mat3[m][g];
			cout <<"\n";
		}
	}
					
}
int main()
{
	//int mat1[M][N];
	//int mat2[M][N];
	int mat1[M][N]={{1,2},
		    {3,4}};
	int mat2[M][N]={{3,5},
		    {33,32}};
	Two_Dimension_Multiplication(mat1,mat2);
	return 0;
}

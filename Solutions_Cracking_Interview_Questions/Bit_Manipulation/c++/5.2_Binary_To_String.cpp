#include<iostream>
#include<cmath>
using namespace std;
void double_to_binary(float a)
{
	int binary[100];
	int i=0;
	while(a > 0)
	{
		binary[i]=fmod(a,2);
		a=a/2;
		i++;
	}
	for(int j=0; j < i; j++)
	{
		cout << binary[j] << endl;
	}
}
int main()
{
	double a=0.75;
	double_to_binary(a);
	return 0;
}
	

#include<iostream>
using namespace std;
template<typename T>
T minimum(const T& lhs, const T& rhs)
{
	return lhs<rhs?lhs:rhs;
}
int main()
{
	int lhs=3;
	int rhs=4;
	int i=minimum<int>(lhs,rhs);
	cout << "Min data is" << i << endl;
}

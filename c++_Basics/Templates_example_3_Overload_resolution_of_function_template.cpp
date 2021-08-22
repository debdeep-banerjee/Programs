#include<iostream>
using namespace std;
void f(int,int) { cout << "f(int,int)" << endl;}
void f(char,char) { cout << "f(char, char)" << endl;}

template<class T1,class T2>
void f(T1,T2)
{
	cout << "void f(T1,T2)" << endl;
};
int main()
{
	//T1 t1;
	//T2 t2;
	f(3,2);
	f('s','s');
	f<int,int>(2,2);
}

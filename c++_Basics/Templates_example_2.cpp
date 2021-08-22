#include<iostream>
using namespace std;
template<typename T>
/*T minimum(const T& lhs, const T& rhs)
{
	lhs<rhs?lhs:rhs;
}*/ 
/*class MyClass
{
public:
	int num;
	std::wstring description;
	MyClass(int, std::wstring);
};
MyClass::MyClass(int a, std::wstring s)
{
	lhs=a;
	description=s;
}
int main()
{
	MyClass mc1 {1, L"hello"};
	MyClass mc2 {2, L"goodbye"};
	//auto result=minimun(mc1,mc2);
}*/
class MyClass
{
public:
    int num;
    std::wstring description;
};

int main()
{
    MyClass mc1 {1, L"hello"};
    MyClass mc2 {2, L"goodbye"};
    auto result = minimum(mc1, mc2); // Error! C2678
}

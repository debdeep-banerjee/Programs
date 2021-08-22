#include<iostream>
using namespace std;
template<class T>
class SmartPointer
{
	T *ptr;
public:
	explicit SmartPointer(T *p=NULL) {ptr=p;}
	//Destructor
	~SmartPointer() {cout << "SmartPointer delete called" <<endl; delete(ptr);}
	//Overloading deferencing operator
	T &operator *() { return *ptr;}
	T *operator->() { return *ptr;}
};
int main()
{
	SmartPointer<int> ptr(new int());
	*ptr=20;
	cout << *ptr;
	return 0;
}
 

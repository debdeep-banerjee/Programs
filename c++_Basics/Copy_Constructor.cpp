#include<iostream>
using namespace std;
class Vector{
	private:
		double *elem;
		int sz;
	public:
		Vector(int s);
		~Vector(){delete[] elem;};
		Vector(const Vector &a);
		Vector & operator=(const Vector &a);
		double &operator[](int i);
		const double &operator[](int i)const;
		int size() const;
};
Vector::Vector(int s)
{
	sz=s;
}
Vector::Vector(const Vector &a)
	:elem(new double[sz]),
	sz(a.sz)
{
	for(int i=0;i!=sz;i++)
	{
		elem[i]=a.elem[i];
	}
}
Vector &Vector::operator=(const Vector&a)
{
	double *p=new double[a.sz];
	for(int i=0;i!=a.sz;++i)
		p[i]=a.elem[i];
	delete[] elem;
	elem=p;
	sz=a.sz;
	return *this;
}
int main()
{
	int s=10;
	Vector V1(s);
	Vector V2(s);
	Vector V3=V1;
}

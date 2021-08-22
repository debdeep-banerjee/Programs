#include<iostream>
using namespace std;
class Shape{
	public:
	virtual void area()=0;
	//virtual void area(){cout << " Shape of the base class" << endl;};
};
class Rectangle:public Shape{
	public:
	void area() { cout << "Shape of rectangle" << endl;};
};
int main()
{
	Shape *shape;
	Rectangle *rect=new Rectangle();
	shape=rect;
	shape->area();
}

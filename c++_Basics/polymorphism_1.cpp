#include<iostream>
using namespace std;
class SHAPE{
	public:
		virtual void draw() {cout << " In Base class function" << endl;};
		~SHAPE() {cout << "Calling the base class destructor" <<endl;}; 
};
class CIRCLE:public SHAPE
{
	public:
		int r;
		void draw() {cout << " In draw function of circle class" << endl;};
		~CIRCLE() { cout << " Calling the circle class destructor" << endl;};
};
class SQUARE:public SHAPE
{
	public:
		int a;
		void draw() {cout << "In the draw function of class square" << endl;};
};
int main()
{
	SHAPE *shape1;
	SHAPE *shape2;
	CIRCLE C1;
	SQUARE s1;
	shape1=&C1;
	shape2=&s1;
	shape1->draw();
	shape2->draw();
	return 0;
}

#include<iostream>
#include<vector>
using namespace std;
class Point{
	public:
	//int x;
};
class Shape{
	public:
		virtual Point centre() const=0;
		virtual void move(Point to)=0;
		virtual void draw() const=0;
		virtual void rotate(int angle)=0;
		virtual ~Shape(){};
	
};
class Circle:public Shape
{
	public:
		//Circle(Point p, int rr);
		//Circle();	
		Point centre() const{return x;};
		void move(Point to){x=to;};
		void draw() const {cout << " In Circle's draw function" << endl;};
		void rotate(int){};
	private:
		Point x;
		int r;
};
class Smiley:public Circle
{
	public:
		//Smiley(Point p, int r) : Circle(p,r), mouth(nullptr) { };
		~Smiley()
		{
			delete mouth;
			for (auto p : eyes) delete p;
		}
		void move(Point to);
		void draw() const;
		void rotate(int);
		void add_eye(Shape* s){eyes.push_back(s);};
		void set_mouth(Shape *s);
		virtual void wink(int i);
	private:
		vector<Shape*>eyes;
		Shape* mouth;
};	
//enum class Kind(circle,traingle,smiley);
int main()
{
	Point P1;
	//P1.x=2;
	int r=2;
	Shape *shape1;
	Circle C;
	//Circle C(P1,r);
	shape1=&C;
	shape1->draw();
	//C.draw();
	return 0;
}

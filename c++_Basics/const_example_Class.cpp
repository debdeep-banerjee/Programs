#include<iostream>
using namespace std;
class Date
{
	public:
		Date(int mn, int dy, int yr);
		int getMonth() const; //A read only function
		void setMonth (int mn); //A write function and cannot be const
	private:
		int month;
		int mn,dy,yr;
};
Date::Date(int a, int b, int c)
{
	mn=a;
	dy=b;
	yr=c;
}	
int Date::getMonth() const
{
	return month;
}
void Date::setMonth(int mn)
{
	month=mn;
}
int main()
{
	Date MyDate(7,4,1998);
	MyDate.setMonth(4);
	MyDate.getMonth();
	const Date BirthDate(1,18,1953);
	BirthDate.getMonth();
	BirthDate.setMonth(4);
}
	


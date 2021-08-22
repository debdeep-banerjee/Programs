#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
class Employee
{
	public:
		int salary;
		string Employee_name;
		void set_salary(int s) {salary=s;}
		int get_salary() { return salary;}
		int sort_salary(vector<int> &);
};
int Employee::sort_salary(vector<int> &v)
{
	vector<int>::iterator i;
	int max=0;
	for(i=v.begin();i!=v.end();++i)
	{
		if(*i >max)
		{
			max=*i;
		}
	}
	return max;
}
int main()
{
	Employee E1;
	Employee E2;
	E1.salary=100000;
	E2.salary=150000;
	vector<int> v;
	v.push_back(E1.salary);
	v.push_back(E2.salary);
	int i=E1.sort_salary(v);
	cout << "i=" << i << endl;
	return 0;
}	

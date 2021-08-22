#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void showlist(list <int> g)
{
	list<int>::iterator it;
	for(it=g.begin(); it != g.end(); ++it)
	{
		cout << '\t' << *it;
		cout << '\n';
	}
}
void sort1(list <int> g)
{
	int temp;
	list<int>::iterator it;
	list<int>::iterator it1;
	for(it=g.begin(); it !=g.end();++it)
	{
		for(it1=g.begin(); it1 !=  g.end(); ++it1)
		{
			if(*it > *it1)
			{	
				temp=*it;
				*it=*it1;
				*it1=temp;
			}
		}
	}
}
int main()
{
	list<int> list1;
	list1.push_back(35);
	list1.push_front(5);
	list1.push_back(35);
	list1.push_front(5);
	sort1(list1);
	//list1.reverse();
	showlist(list1);
	return 0;
}





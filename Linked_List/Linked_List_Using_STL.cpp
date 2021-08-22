#include<iostream>
#include<list>
using namespace std;
void print(list<int> L1)
{
	list<int>::iterator it;
	for(it=L1.begin();it!=L1.end();++it)
	{
		cout << *it<<endl;
	}
}
void search(list<int>L1,int data)
{
	list<int>::iterator it=L1.begin();
	while(it!=L1.end())
	{
		if(*it==data)
		{
			cout<<"Found data" <<*it <<endl;
		}
		it++;
	}
}	
	
int main(){
	list<int>L1;
	L1.push_front(34);
	L1.push_back(350);
	L1.push_front(1000);
	L1.sort();
	L1.reverse();
	search(L1,350);
	print(L1);	
}

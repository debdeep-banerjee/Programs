#include<iostream>
#include<stack>
using namespace std;
void showstack (stack<int> S1)
{
	//if(top ==NULL) return;	
	while(!S1.empty())
	{
		cout << S1.peek()<< endl;
		S1.pop();
	}
	cout << "\n";
}
int main()
{
	int data;
	stack<int> S1;
	S1.push(45);
	S1.push(48);
	//S1.pop();
	showstack(S1);
	return 0;
}

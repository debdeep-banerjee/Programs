#include<iostream>
using namespace std;
int main(){
	int i=1, j=2;
	int *p;
	p=&j;
	//printf("0x%p\n",p);
	printf("0x%p %d\n",p, *p);
	j=7;
	printf("0x%p %d\n",p, *p);
	*p=10;
	printf("0x%p %d\n",p, *p);
	p=new int(5);
	printf("0x%p %d\n",p,*p);
	
}

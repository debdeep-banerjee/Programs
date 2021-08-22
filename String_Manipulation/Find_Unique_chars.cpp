#include<iostream>
using namespace std;
char* find_unique(char *str, char target)
{
	char out[6];
	int count=1;
	char *p=&out[0];
	*p=*str;
	while(*str != '\0')
	//for(int i=0; i<5; i++)
	{
		if(*str == target)
		{
			//cout << " In the match subroutine" << endl;
			if(count == 1)
			{	
				*p=*str;
				cout << "The value of *str is" << *str << endl;
                        	cout << " The value of *p is" << *p << endl;
			}
			count++;
			p++;
                        str++;
				
		}
		else
		{
			*p=*str;
			cout << "The value of *str is" << *str << endl;
                        cout << " The value of *p is" << *p << endl;
			p++;
			str++;
			//cout << "The value of *str is" << *str << endl;
			//cout << " The value of *p is" << *p << endl;
		}
		/*cout << "The value of *str is" << *str << endl;
		cout << "The value of *p is" << *p << endl;
		str++;
		p++;*/

	}
	return str;	
}



int main()
{
	char arr[6]={'H','e','l','l','o','\0'};
	char target='l';
	find_unique(arr,target);
	return 0;
}

#include<iostream>
using namespace std;
/*void remove_dups(char *str)
{
	while(*str != '\0')
	{
		cout << "In the subroutine \n";	
		if(*str=='l')
		{
			cout << " Duplicate found" << *str << endl;
			
		}
		*str++;
	}	
}*/
void redundant(char *str,char *target) {
    int lastch = -1;         /* last read character */
    char* inpp = str;        /* pointer to input location */
    char* outp = str;        /* pointer to output location */
    while (*inpp != '\0') {
        if (*inpp != *target) {
            *outp++ =  *inpp;
        }
	cout << " The value of *inpp is" << *inpp << endl;
        inpp++;
    }
    *outp = '\0';
    printf("String after removing duplicates : %s\n", str);
}
int main()
{
	char str[100]={'H','e','l','l','o','\0'};
	//remove_dups(str);
	char target[100]={'l'};
	redundant(str,target);
	return 0;
}

#include <iostream>
#include <string>
#include <cstring>
#include<list>
#include<math.h>
using namespace std;
void reverse_char(char name[])
{
    //cout << "Array sent to subroutine is" << name << endl;
    int count;
    //count=sizeof(name)/sizeof(name[0]);
    count=strlen(name);
    for(int j=0;j<count;j++)
    {
	cout << "The elements of the char array is" << name[j] <<endl;
    }
    cout << "The value of count is" << count << endl;
    for(int i=0; i< (count/2); i++)
    {
        char temp;
        temp=name[i];
        name[i]=name[(count)-i-1];
        name[(count)-i-1]=temp;
        //cout << "name[i] value is" << name[i] << endl;
    }
    //cout << "The value of count is" << count << endl;
    //cout << "Reversed array is" << name << endl;
    for(int k=0;k<count;k++)
    {
	cout << "The elements of the reversed char array is" << name[k] <<endl;
    }    
}
void reverse_char_pointer(char *names)
{
    //cout << "Array sent to subroutine is" << name << endl;
    int count=0;
    //count=sizeof(name)/sizeof(name[0]);
    count=strlen(names);
    for(int j=0;j<count;j++)
    {
	cout << "The elements of the char array is" << names[j] <<endl;
    }
    cout << "The value of count is" << count << endl;
    for(int i=0; i<round (count)/2; i++)
    {
        char temp;
        temp=names[i];
        names[i]=names[(count)-i-1];
        names[(count)-i-1]=temp;
        //cout << "names[i] value is" << names[i] << endl;
    }
    //cout << "The value of count is" << count << endl;
    //cout << "Reversed array is" << names << endl;
    for(int k=0;k<count;k++)
    {
	cout << "The elements of the char array is" << names[k] <<endl;
    }

}
void reverse_string(string names2)
{
	string *start_pointer;
	start_pointer=&names2;
	for(int i=names2.size(); i>=0;i--)
	{
		cout << "The reversed string element is" << names2[i] << endl;
	}
}
	
int main()
{
  //std::string name[100];
  //std::cout << "What is your name? ";
  //getline (std::cin, name);
  //char* name[100] = {"D","e","b","d","e","e","p"};
  //char name[50] = "Debdeep";

  //for( int i = 0 ; i < strlen(name) ; i ++ ){
  //	cout << name[i]; 
  //}
  //reverse_char(name);
  cout << endl;
  char names1[100] = {'a', 'e','e'};
  //char *names = names1;
  string names2="Debdeep";
  //char names1[] = "add";
  //char* names = &names1;
  cout << "The value of the pointer names is" << &names1 << endl;
  const size_t len = sizeof(names1);
  reverse_char_pointer(names1);
  //reverse_string(names2);
  //cout << "Array size is" << len << endl;
  //std::cout << "Hello, " << name[50] << "!\n";
}



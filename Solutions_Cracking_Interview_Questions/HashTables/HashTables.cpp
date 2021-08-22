#include<iostream>
#include<stdlib.h>
#include<stdbool.h>
using namespace std;
#define SIZE 20
struct DataItem{
	int value;	
	int key;
};
struct DataItem * hashArray[SIZE];
struct DataItem *dummyitem;
struct DataItem *item;
int hashcode(int key)
{
	return key % SIZE;
}
struct DataItem  *search(int key)
{
	//if(key == NULL) return;
	int hashIndex=hashcode(key);
	while(hashArray[hashIndex] !=NULL)
	//for(int i=0; i<SIZE;i++)
	{
		//cout << "Value of hashArray[i]->key is" << hashArray[i]->value << endl;
		if((hashArray[hashIndex]->key)==key)
		{
			cout << "Entry found" << endl;	
			return hashArray[hashIndex];
		}
		++hashIndex;
		hashIndex=hashIndex%SIZE;
	}
	return NULL;
}
void insert(int key, int value)
{
	//Create a new DataItem
	struct DataItem *item=new DataItem();
	item->value=value;
	item->key=key;
	//Get the hash
	int hashIndex=hashcode(key);
	//Move it to the array until empty or deleted cell
	while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1)
	{
		++hashIndex;
		hashIndex %=SIZE;
	}
	hashArray[hashIndex]=item;
}
struct DataItem *delete_data(struct DataItem *item)
{
	int key=item->key;
	//Get the Hashindex of the key
	int hashIndex=hashcode(key);
	while(hashArray[hashIndex] !=NULL)
	{
		if(hashArray[hashIndex]->key==key)
		{
			DataItem *temp=new DataItem();
			hashArray[hashIndex]=dummyitem;
			return temp;
		}
		++hashIndex;
		hashIndex =hashIndex%SIZE;
	}
	return NULL;	
}	 
void Show_HashTable()
{
	for(int i=0; i<SIZE; i++)
	{
		if(hashArray[i] != NULL)
		{
			cout << "Key is" << hashArray[i]->key;
			cout << "Value is" << hashArray[i]->value;
			cout << endl;
		}
	}
}
		
	
int main()
{
	struct DataItem *dummyitem=new DataItem();
	dummyitem->value=1;
	dummyitem->key=1;
	insert(1,20);
	insert(2,3000);
	item=search(2);
	delete_data(item);
	Show_HashTable();
}	
	


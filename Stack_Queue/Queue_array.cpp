#include<iostream>
using namespace std;
class Queue{
	public:
	int arr[100];
	int front;
	int rear;
	Queue();
	void Enqueue(int);
	void Dequeue();
	void Show();
};
Queue::Queue()
{
	front=0;
	rear=-1;
}
void Queue::Enqueue(int data)
{
	rear++;
	arr[rear]=data;
}
void Queue::Dequeue()
{
	int data;
	front++;
	data=arr[front];
	
}
void Queue::Show()
{
	for(int i=front;i<=rear;i++)
	{
		cout << "The elements in the Queue are" << arr[i] << endl;
	}
}
int main()
{
	Queue Q1;
	Q1.Enqueue(23);
	Q1.Enqueue(45);
	Q1.Dequeue();
	//Q1.Dequeue();
	Q1.Show();
	return 0;
}

	
	

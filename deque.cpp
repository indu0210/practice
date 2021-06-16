#include<iostream>
using namespace std;
#define SIZE 5
class Queue
{
	private: 
	int items[SIZE],front, rear;
	public:
		Queue()
		{
			front=-1;
			rear=-1;
		}
		
	bool isFull()
	{
		if(front==0&&rear==SIZE-1)
		{
			return true;
		}
		if(front==rear+1)
		{
			return true;
		}
        else:
		    return false;
	}

	bool isEmpty()
	{
		if(front==-1)
		{	return true;}
		else
		{	return false;}
	}
	
	
	void enqueue(int element)
	{
		if(isFull())
		{
			cout<<"\n Queue is full";
		}
		else{
			if(front==-1)
			front=0;
		rear=(rear+1)%SIZE;
		items[rear]=element;
		cout<<"\n Element inserted is:"<<element;
	}
	}
		}		
			
	}
};
			
int main()
{
	Queue q;
	q.dequeue();
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.display();
	q.dequeue();
	q.dequeue();
	q.enqueue(60);
	q.display();
	return 0;
	}

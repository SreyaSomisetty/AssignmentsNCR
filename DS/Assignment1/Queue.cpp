#include<iostream>
using namespace std;
struct _queue_
{
	int rear,front;
	int  size;
	int *q;
};
class Queue
{
	struct _queue_ que;
	public:
	Queue();
	void getsize(int);
	void Enqueue(int);
	int Dequeue();
	bool Overflow();
	bool Underflow();
	void display();
	~Queue();
};
void Queue::getsize(int n)
{
	que.size=n;
	que.q=new int[n];
}
Queue::Queue()
{
	que.rear=-1;
	que.front=-1;
	que.size=0;
}
bool Queue::Underflow()
{
	return (que.front==-1||que.rear==-1|| que.front>que.rear);
}
bool Queue::Overflow()

{
	return (que.rear==que.size-1);
}
		
void Queue::Enqueue(int ele)
{
	if(!Overflow())
	{
		if(que.front==-1)
			que.front=0;
		  que.q[++que.rear]=ele;
    }
	else
		cout<<"Queue is full";
}
int Queue::Dequeue()

{
	if(!Underflow())
	{
		int n=que.q[que.front];
		que.front++;
		return n;
	}
     else
      cout<<"Queue is empty";
}
  void Queue::display()
  {
	  for(int i=que.front;i<=que.rear;i++)
	  {
		  cout<<que.q[i]<<endl;
	  }
  }
  Queue::~Queue()
  {
	  delete que.q;
  }
  int main()
  {
	  Queue a;
	  int ele,k,n;
	  cout<<"Enter size:";
	  cin>>n;
	  a.getsize(n);
	  int ch;
	  cout<<"Enter an operation to perform\n1.Enqueue\n2.Dequeue\n3.Display\n";
	  cin>>ch;
	  
	  while(ch<=3 && ch!=0)
	  {
		  switch(ch)
	   {
		  case 1: cout<<"Enter an element to insert:";
		           cin>>ele;
				   a.Enqueue(ele);
				   break;
		  case 2: k=a.Dequeue();
		          cout<<"\nDeleted element is:"<<k;
				  break;
		   case 3:a.display();
		          break;
	   }
	   cout<<"\nEnter an operation to be performed:";
	   cin>>ch;
	  }
	 return 0;
  }
      	  
		


	
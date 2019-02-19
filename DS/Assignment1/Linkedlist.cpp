#include<iostream>
using namespace std;
struct node 
{
	int data;
	struct node *next;
};
class LL
{
	struct node *start;
	public:
	LL();
	void Insert_first(int);
	void Insert_last(int);
	void Insert_before(int,int);
	void Insert_after(int,int);
	int Delete_first();
	int Delete_last();
	void Delete_ele(int);
	void Travel_forward();
	void Travel_backward();
	void reverse();
	friend void print(struct node *);
	~LL();
};
LL::LL()
{
	start=NULL;
}
void LL::Insert_first(int ele)
{
	struct node *temp;
	temp=new node;
	temp->data=ele;
	temp->next=start;
	start=temp;
}
void LL::Insert_last(int ele)
{
	struct node *temp,*curr;
	temp=new node;
	temp->data=ele;
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		curr=start;
		while(curr->next!=NULL)
		{
			curr=curr->next;
		}
		curr->next=temp;
	}
}
void LL::Insert_after(int ele,int sele)
{
	struct node *temp;
	temp=new node;
	temp->data=ele;
	temp->next=NULL;
	if(start!=NULL)
	{
		struct node *curr;
		curr=start;
		while(curr!=NULL && curr->data!=sele)
			curr=curr->next;
		   if(curr!=NULL)
		   {
			   struct node *temp;
			   temp=new node;
			   temp->data=ele;
			   temp->next=curr->next;
			   curr->next=temp;
		   }
		   else
		     cout<<"Element nt found";
	}
		else
			cout<<"List is empty";
}
	
void LL::Insert_before(int ele,int sele)
{
	struct node *curr;
	curr=start;
	if(start->data=sele)
	{
		struct node *temp;
		temp=new node;
		temp->data=ele;
		temp->next=start;
		start=temp;
	}
	else
	{
		while(curr->next!=NULL && curr->next->data!=sele)
		 curr=curr->next;
	    if(curr->next!=NULL)
		{
			struct node *temp;
			temp=new node;
			temp->data=ele;
			temp->next=curr->next;
			curr->next=temp;
		}
		else
			cout<<"Element not found";
	}
}
int LL::Delete_first()
{
	int x=-999;
	if(start!=NULL)
	{
		struct node *temp;
		temp=start;
		start=start->next;
		x=temp->data;
		delete temp;
	}
	else
		cout<<"List is empty";
	return x;
}
int LL::Delete_last()
{
	int x=-999;
	if(start!=NULL)
	{
		if(start->next==NULL)
		{
			x=start->data;
			delete start;
			start=NULL;
		}
		else
		{
			struct node *curr;
			curr=start;
			while(curr->next->next!=NULL)
			curr=curr->next;
			x=curr->next->data;
			delete curr->next;
			curr->next=NULL;
		}
	}
	else
	cout<<"List is empty";
   return x;
}
void LL::Delete_ele(int ele)
{
	struct node *curr,*temp;
	if(start!=NULL)
	{
		if(start->data==ele)
		{
			temp=start;
			start=temp->next;
			delete temp;
		}
		else
		{
			curr=start;
			while(curr->next!=NULL && curr->next->data!=ele)
			 curr=curr->next;
		 if(curr->next!=NULL)
		 {
			 temp=curr->next;
			 curr->next=temp->next;
			 delete temp;
		 }
		 else
			 cout<<"Element not found";
		}
	}
	else
		cout<<"List empty";
}
void LL::Travel_forward()
{
	struct node *curr;
	curr=start;
	while(curr!=NULL)
	{
		cout<<curr->data;
		curr=curr->next;
	}
}
void LL::Travel_backward()
{
	if(start!=NULL)
	{
		print(start);
	}
}
void print(struct node *curr)
{
	if(curr!=NULL)
	{
		print(curr->next);
		cout<<curr->data;
	}
}
void LL::reverse()
{
	struct node *rev;
	rev=NULL;
	if(start!=NULL || start->next!=NULL)
	{
		while(start!=NULL)
		{
			struct node *temp;
			temp=start;
			start=temp->next;
			temp->next=rev;
			rev=temp;
		}
		start=rev;
	}
}
LL::~LL()
{
	struct node *temp;
	while(start!=NULL)
	{
		temp=start;
		start=temp->next;
		delete temp;
	}
}
int main()

{
	cout<<"Enter an operation to perform. \n1.Insert_first\n2.Insert_last\n3.Insert_after\n4.Insert_before\n";
	cout<<"5.Delete_first\n 6.Delete_last\n7.Delete_ele\n8.Travel_forward\n9.Travel_backward\n10.reverse\n";
	int ch;
	LL a;
	int ele,e1;
	cin>>ch;
	while(ch<=10)
	{
		switch(ch)
	{
		case 1:cout<<"\nEnter an element";
		        cin>>ele;
				a.Insert_first(ele);
				break;
	     case 2: cout<<"\nEnter an element";
		        cin>>ele;
				a.Insert_last(ele);
				break;
	     case 3: cout<<"Enter an element";
		         cin>>ele;
				 a.Insert_after(ele,3);
				 break;
		case 4: cout<<"Enter an element";
		         cin>>ele;
				 a.Insert_before(ele,3);
				 break;
       case 5: e1=a.Delete_first();
	            cout<<"\nDeleted element is:"<<e1;
				break;
		case 6: e1=a.Delete_last();
	            cout<<"\nDeleted element is:"<<e1;
				break;
		case 7: a.Delete_ele(7);
				break;
		
		
	case 8: a.Travel_forward();
	        break;
	case 9: a.Travel_backward();
	          break;
	case 10:cout<<"After reversing\n";
	         a.reverse();
	        a.Travel_forward();
			break;
	}
	cout<<"\nEnter an operation to perform:";
	cin>>ch;
	}
	return 0;
}
	
		
			
			
	
	

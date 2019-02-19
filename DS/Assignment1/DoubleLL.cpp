#include<iostream>
using namespace std;
struct node 
{
	int data;
	struct node *prev;
	struct node *next;
};
class DLL
{
	struct node *start;
	public:
	DLL();
	void Insert_first(int);
	void Insert_last(int);
	void Insert_before(int,int);
	void Insert_after(int,int);
	int Delete_first();
	int Delete_last();
	void Delete_ele(int);
	void Travel_forward();
	void Travel_backward();
	~DLL();
};
DLL::DLL()
{
	start=NULL;
}
void DLL::Insert_first(int ele)
{
	struct node *temp;
	temp=new node;
	temp->data=ele;
	temp->prev=NULL;
	temp->next=start;
	if(start!=NULL)
		start->prev=temp;
	start=temp;
}
void DLL::Insert_last(int ele)
{
	struct node *temp,*curr;
	temp=new node;
	temp->data=ele;
	temp->next=NULL;
	if(start==NULL)
	{
		temp->prev=NULL;
		start=temp;
	}
	else
	{
		curr=start;
		while(curr->next!=NULL)
		{
			curr=curr->next;
		}
		temp->prev=curr;
		curr->next=temp;
	}
}
void DLL::Insert_after(int ele,int sele)
{
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
			   temp->prev=curr;
			   temp->next=curr->next;
			   if(curr->next!=NULL)
				   curr->next->prev=temp;
			   curr->next=temp;
		   }
		   else
		     cout<<"Element nt found";
	}
		else
			cout<<"List is empty";
}
	
void DLL::Insert_before(int ele,int sele)
{
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
			   temp->prev=curr->prev;
			   temp->next=curr;
			   if(curr->prev!=NULL)
				   curr->prev->next=temp;
			   else
				   start=temp;
				curr->prev=temp;
		   }
		   else
		     cout<<"Element nt found";
	}
		else
			cout<<"List is empty";
}
int DLL::Delete_first()
{
	int x=-1;
	if(start!=NULL)
	{
		struct node *temp;
		temp=start;
		if(temp->next!=NULL)
			temp->next->prev=NULL;
		start=temp->next;
		x=temp->data;
		delete temp;
	}
	else
		cout<<"List is empty";
	return x;
}
int DLL::Delete_last()
{
	int x=-1;
	if(start!=NULL)
	{
		struct node *curr;
		curr=start;
		while(curr->next!=NULL)
		 curr=curr->next;
	 x=curr->data;
	 if(curr->prev!=NULL)
		 curr->prev->next=NULL;
	  else
		  start=NULL;
	  delete curr;
	}
	else
	cout<<"List is empty";
   return x;
}
void DLL::Delete_ele(int ele)
{
	struct node *curr,*temp;
	if(start!=NULL)
	{
		struct node *curr;
		curr=start;
		while(curr!=NULL && curr->data!=ele)
		 curr=curr->next;
	 if(curr!=NULL)
	 {
       if(curr->prev!=NULL)
         curr->prev->next=curr->next;
        else
          start=curr->next;
	  if(curr->next!=NULL)
		  curr->next->prev=curr->prev;
	  delete curr;
     
	}
	else
		cout<<"Element not found";
	}
	else
		cout<<"List empty";
}
void DLL::Travel_forward()
{
	struct node *curr;
	curr=start;
	while(curr!=NULL)
	{
		cout<<curr->data;
		curr=curr->next;
	}
}
void DLL::Travel_backward()
{
	struct node *curr;
	if(start!=NULL)
	 curr=start;
    while(curr->next!=NULL)
		curr=curr->next;
	while(curr!=NULL)
	{
		cout<<curr->data;
		curr=curr->prev;
	}
}

DLL::~DLL()
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
	cout<<"5.Delete_first\n 6.Delete_last\n7.Delete_ele\n8.Travel_forward\n9.Travel_backward\n";
	int ch;
	DLL a;
	int ele,e1;
	cin>>ch;
	while(ch<10)
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
	
	}
	cout<<"\nEnter an operation to perform:";
	cin>>ch;
	}
	return 0;
}
	
		
			
			
	
	

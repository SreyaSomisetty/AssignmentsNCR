#include<iostream>
#define Max(a,b) a>b?a:b
using namespace std;
struct node 
{
int data;
struct node *left;
struct node *right;	
};
class BST
{
	struct node* start;
	public:
	BST();
	node* Insert(int,node*);
	node* Delete_ele(int,node*);
	void Inorder();
	void Preorder();
	void Postorder();
	int FindMax(node *);
	int FindMin(node *);
	int height(node *);
	int NLN(node *);
	int NNLN(node *);
	void deletenode(node*);
	friend void print1(node *);
	friend void print2(node *);
	friend void print3(node *);
	~BST();
};
int BST ::NLN(struct node* curr)
{
	if(curr==NULL)
	 return 0;
 if(curr->left==NULL && curr->right==NULL)
	 return 1;
 return (NLN(curr->left)+NLN(curr->right));
}
BST::BST()
{
	start=NULL;
}
BST::~BST()
{
	
	    node* curr;
    for (node* temp = start; temp != NULL; temp = curr) 
	{
        if (temp->left == NULL) {
            curr = temp->right;
            delete temp;
        }
        else {
            // Rotate the left link into a right link
            curr = temp->left;
            temp->left = curr->right;
            curr->right = temp;
        }
    }

}
int BST::NNLN(struct node *curr)
{
	if(curr==NULL)
	 return 0;
 if(curr->left==NULL && curr->right==NULL)
	 return 0;
 return (NNLN(curr->left)+NNLN(curr->right)+1);
}
int BST::FindMin(struct node *curr)
{
	if(curr!=NULL)
	{
		while(curr->left!=NULL)
			curr=curr->left;
		return (curr->data);
	}
    else
         return -1;
}
int BST::FindMax(struct node *curr)
{
	if(curr!=NULL)
	{
		while(curr->right!=NULL)
			curr=curr->right;
		return (curr->data);
	}
    else
         return -1;
}

int BST::height(struct node *curr)
{
	if(curr==NULL)
	return -1; 
    else
		return(Max(height(curr->left),height(curr->right))+1);
}
void print1(struct node *curr)
{
	if(curr!=NULL)
	{
		print1(curr->left);
	   cout<<curr->data;
	   print1(curr->right);
	}
}
void print2(struct node *curr)
{
	if(curr!=NULL)
	{

	   cout<<curr->data;
	   print2(curr->left);
	   print2(curr->right);
	}
}
void print3(struct node *curr)
{
	if(curr!=NULL)
	{

	   
	   print3(curr->left);
	   print3(curr->right);
	   cout<<curr->data;
	}
}
void BST:: Inorder()
{
	if(start!=NULL)
		print1(start);
}	
void BST:: Preorder()
{
	if(start!=NULL)
		print2(start);     
}	
void BST:: Postorder()
{
	if(start!=NULL)
		print3(start);
}	
void BST:: deletenode(node *curr)
{
if(curr!=NULL)
{
	deletenode(curr->left);
	deletenode(curr->right);
	delete curr;
}
}
node*  BST::Insert(int ele, node *curr)
{
	if(curr==NULL)
	{
		struct node *temp;
		temp=new node;
		temp->data=ele;
		return temp;
	}
	else
	{
		if(ele<curr->data)
		 curr->left=Insert(ele,curr->left);
	    else
			curr->right=Insert(ele,curr->right);
		return curr;
	}
}
node* BST::Delete_ele(int ele,node* curr)
{
	if(curr!=NULL)
	{
		if(ele>curr->data)
			curr->right=Delete_ele(ele,curr->right);
		else if(ele<curr->data)
			curr->left=Delete_ele(ele,curr->left);
		else
		{
			if(curr->left!=NULL && curr->right!=NULL)
			{
				curr->data=FindMax(curr->left);
				curr->left=Delete_ele(curr->data,curr->left);
			}
			else
			{
				struct node *temp;
				temp=curr;
				if(curr->left==NULL)
					curr=curr->right;
				else
					curr=curr->left;
				delete temp;
			}
		}
	}
	return curr;
}
int main()
{
	BST bin;
	int ch;
	struct node *curr;
	curr=NULL;
	cout<<"Enter an operation to perform\n1.Insert\n2.Delete_ele\n3.Inorder\n4.Postorder\n5.Preorder\n6.No of leaf nodes\n7.No of non-leaf nodes";
	cout<<"\n8.FindMax\n9.FindMin";
	//cin>>ch;
	/*while(ch<=9)
	{
		switch(ch)
		{
			case 1: 
		}
	}*/
	bin.Insert(3,curr);
	bin.Preorder();
	bin.Insert(4,curr);
	bin.Insert(5,curr);
	bin.Inorder();
	
	
	return 0;
}


	
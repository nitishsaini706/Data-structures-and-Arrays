#include<iostream>
#define nullptr NULL
using namespace std;
struct node 
{
	int info;
	node *link;
}*tail=nullptr,*temp,*nn,*ptr,*loc;
struct node *search(int x);
void insert();
void choice();
void traverse();
void in_loc();
void dloc();
void reverse();
void del();
struct node *search(int x)
{
	ptr=tail->link;                       //setting value of head 
	while(ptr->link!=tail->link)  
	{
		if(ptr->info==x)
		{
			return ptr;
		}
		ptr=ptr->link;
	}
}
void del()
{
	int n;
	cout<<"\nenter 1 to delete from start , 2 for end and 3 for location ";
	cin>>n;
	switch(n)
	{
		case 1:
			nn=tail->link;
			nn=nn->link;
			tail->link=nn;
		    break;
		case 2:
		  ptr=tail->link;
		  while(ptr->link!=tail)
		  {ptr=ptr->link;}
		  nn=tail->link;
		  tail=ptr;
		  tail->link=nn;
		  break;
		case 3:
			dloc();
			break;
			
	}
}
void insert()
{
	temp=new node;
	temp->link=nullptr;
	cout<<"\n enter the info : ";
	cin>>temp->info;
	cout<<"\nenter 1 to insert in start ,2 for end and 3 for location : ";
	int n;
	cin>>n;
	switch(n)
	{
		case 1 :
			if(tail==nullptr)
			{
				tail=temp;
				tail->link=temp;
			}
			else
			{
				temp->link=tail->link;
				tail->link=temp;
			}
			break;
			case 2:
					if(tail==nullptr)
				{
				tail=temp;
				tail->link=temp;
				}
				else
				{
				temp->link=tail->link;
				tail->link=temp;
				tail=temp;
				}
			break;
			case 3 : 
				in_loc();
				break;
	}
		
}
void traverse()
{
	ptr=tail->link;
	if(ptr==nullptr)
	{
		cout<<"\nunderflow";
		exit(0);
	}
	else
	{
		while(ptr->link!=tail->link)
		{
			cout<<"\nthe info is : "<<ptr->info;
			ptr=ptr->link;
		}
		cout<<"\nthe info is : "<<ptr->info;
	}
}

int main()
{
	int i=0,n,q=0;
	cout<<"\nenter the number of nodes you want to create : ";
	cin>>n;
	while(i!=n)
	{
		temp=new node();
		cout<<"\nenter the info : ";
		cin>>temp->info;
		temp->link=nullptr;
		if(tail==nullptr)
		{
			tail=temp;
			tail->link=temp;
		}
		else
		{
			nn=tail->link;
			tail->link=temp;
			tail=temp;
			tail->link=nn;
		}
		i++;
	}
	traverse();
	do
	{
		choice();
		cout<<"\n enter 1 to exit else continue  :";
		cin>>q;
	}while(q!=1);
}

void choice()
{
	int n;
	cout<<"\n\n  1 to insert ,2 to delete , 3 to traverse and 4 to reverse : ";
	cin>>n;
    switch(n)
    {
    	case 1:
    		insert();
    		traverse();
    		break;
    	case 2:
    		del();
    		traverse();
    		break;
    	case 3:
    		traverse();
    		break;
    	case 4:
    		reverse();
    		traverse();
    		break;
	}
}
void dloc()
{
	int x;
			cout<<"\nenter the info you want to insert:  ";
			cin>>x;
			loc=search(x);
			if(loc==nullptr)
			{
				cout<<"\n list is empty underflow  ";
			}
			else if (loc==tail->link)
			{
				nn=tail->link;
				nn=nn->link;
				tail->link=nn;
			}
			else if (loc==tail)
			{
				ptr=tail->link;
		  while(ptr->link!=tail)
		  {ptr=ptr->link;}
		     nn=tail->link;
		     tail=ptr;
		     tail->link=nn;
			}
			else
	        {
	        	ptr=tail->link;
	        	while(ptr->link!=loc)
	        	{ptr=ptr->link;}
	        	ptr->link=loc->link;
			}
}
void in_loc()
{
			int x;
			cout<<"\nenter the info you want to insert after :  ";
			cin>>x;
			loc=search(x);
			if(loc==nullptr)
			{
				tail=temp;
				tail->link=temp;
			}
			else if (loc==tail)
			{
				nn=tail->link;
				tail->link=temp;
				temp->link=nn;
				tail=temp;
			}
			else if(loc=tail->link)
			{
				temp->link=tail->link;
				tail->link=temp;
			}
			else 
			{
				temp->link=loc->link;
				loc->link=temp;
			}
}
void reverse()
{
	struct node *cn,*pn,*nn;
	cn=tail->link;
	nn=cn->link;
	while(cn!=tail)
	{
		pn=cn;
		cn=nn;
		nn=cn->link;
		cn->link=pn;
	}
	nn->link=tail;
	tail=nn;
}

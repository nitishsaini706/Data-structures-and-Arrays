#include<iostream>
using namespace std;

struct dll
{
int info;
dll *link,*prev;	
};
struct dll *head=NULL,*tail,*temp,*ptr,*loc,*save,*savin;
struct dll insert();
void traverse();
struct dll del();
struct dll *search(int x);

struct dll insert()
{
	int n;
	temp=new dll();
	cout<<"\nenter the info : ";
	cin>>temp->info;
	temp->link=NULL;
	cout<<"\nenter 1 to insert at start \n 2 to insert at end \n 3 for insertion at location wrt to info : ";
	cin>>n;
	if(n==1)
	{
		temp->prev=NULL;
		if(head==NULL)
		{
			temp->link=NULL;
			head=tail=temp;
		}
		else
		{
			temp->link=head;
			head->prev=temp;
			head=temp;
		}
	}
	else if(n==2)
	{
		temp->link=NULL;
		if(head==NULL)
		{
			temp->prev=NULL;
			head=tail=temp;
		}
		else
		{
			temp->prev=tail;
			tail->link=temp;
			tail=temp;
		}
	}
	else
	{
		int x;
		cout<<"\nenter the info to enter : ";
		cin>>x;
		loc=search(x);
		if(loc==head)
		{
			temp->link=head;
			head->prev=temp;
			temp->prev=NULL;
			head=temp;
		}
		else if (loc==tail)
		{
			temp->prev=tail;
			tail->link=temp;
			tail=temp;
		}
		else if (loc==NULL)
		{
			temp->prev=NULL;
			head=tail=temp;
		}
		else
		{			
		   temp->link=loc->link;
           savin=loc->link;
           temp->prev=loc;
           loc->link=temp;
           save->prev=temp;
		}
	}
}
struct dll *search(int x)
{
	ptr=head;
	while(ptr->link!=NULL)
	{
		if(ptr->info==x)
		{
			return loc;
		}
		ptr=ptr->link;
	}
	cout<<"\nitem not found ";
}

void traverse()
{
	ptr=head;
	if(head==NULL)
	{
		cout<<"\n list is empty ";
	}
	else
	{
		while(ptr!=NULL)
		{
			cout<<"\n"<<ptr->info;
			ptr=ptr->link;
		}
	}
	
		}
		
struct dll del()
{
	int n;
	cout<<"\nenter 1 to delete from start ,2 to delete from end ,3 to delete from specified location : ";
	cin>>n;
	if(n==1)
	{
		ptr=head;
		if(head==tail)
		{
			head=tail=NULL;
		}
		else
		{
			head=head->link;
			head->prev=NULL;
		}
	}
	else if(n==2)
	{
		ptr=tail;
		if(head->link==NULL)
		{
			head=tail=NULL;
		}
		else
		{
			tail=tail->prev;
			tail->link=NULL;
		}
	}
	else 
	{
		int x;
		cout<<"\nenter the info to delete ";
		cin>>x;
		loc=search(x);
		if(loc==head)
		{
			head=head->link;
			head->prev=NULL;
		}
		else if (loc==tail)
		{
			tail=tail->prev;
			tail->link=NULL;
		}
		else
		{
			loc->link->prev=loc->prev;
			loc->prev->link=loc->link;
		}
	}
}
void reverse()
{
	struct dll *cn,*nn;
	cn=head;
	while(cn!=0)
	{
		nn=cn->link;
		cn->link=cn->prev;
		cn->prev=nn;
		cn=nn;
	}
	cn=head;
	head=tail;
	tail=cn;
}
int main()
{
	int a,i=0,w;
	cout<<"\nenter the number of nodes you want to create : ";
	cin>>w;
	while(i!=w)
	{
		temp =new dll();
		cout<<"\nenter the info : ";
		cin>>temp->info;
		temp->link=NULL;
		if(head==NULL)
		{
			temp->prev=NULL;
			head=tail=temp;
		}
		else
		{
			tail->link=temp; 
			temp->prev=tail;                     
			tail=temp;
		}
		i++;
	}
	cout <<"\nwelcome to data structure double linked list \n press 1 to insert ";
	cout <<"\n press 2 to delete \n press 3 to just traverse \n press 4 to reverse the list \n enter the choice  : ";
	cin>>a;
	if(a==1)
	{
		insert();
		traverse();
	}
	else if (a==2 )
	{
		del ();
		traverse();
	}
	else if (a==3)
	{
		traverse();
	}
	else
	{
		reverse();
		traverse();
	}
}
	

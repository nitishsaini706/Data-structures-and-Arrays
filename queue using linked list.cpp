#include<iostream>
#include<cstdlib>
#define nullptr NULL
using namespace std ;

struct node 
{
	int info;
	node *link;
}*f=nullptr,*r=nullptr,*temp,*ptr,*g;

void traverse();
void push();
void pop();
void push()
{
	temp=new node;
	temp->link=nullptr;
	cout<<"\n enter the value : ";
	cin>>temp->info;
	if(f==nullptr && r==nullptr)
	{
		f=r=temp;
	}
	else
	{       
	r->link=temp;
	r=temp;
	}
}
void pop()
{
	if(f==nullptr)
	{
		cout<<"\n underflow  ";
		exit(0);
	}
	else
	{
		g=f;
		f=f->link;
		delete (g);   // free v use kita c           
	}
}
void traverse()
{
	if(f==nullptr)
	{
		cout<<"\nunderflow ";
		exit(0);
	}
	else
	{
	ptr=f;
	while(ptr!=nullptr)
	    {
		cout<<ptr->info<<endl;
		ptr=ptr->link;
	    }
    }
}
int main()
{
	int i=0,n;
	cout<<"\n enter the number of elements in queue : ";
	cin>>n;
	while(i!=n)
	{
		temp=new node();
		temp->link=nullptr;
		cout<<"\n enter the element  : ";
		cin>>temp->info;
		if(f==nullptr)
		{
			f=temp;
			r=temp;
		}
		else
		{   
		    ptr=r;
			ptr->link=temp;
			ptr=ptr->link;
			r=ptr;
		}
		i++;
	}
	int m;
	cout<<"\n enter 1 for push ,2 for pop ,3 for traverse : ";
	cin>>m;
		switch (m)
	{
		case 1:
			push();
		    traverse();
		    break;
		case 2 :
			pop();
			traverse();
			break;
		case 3:
			traverse();
			break;
	}
}

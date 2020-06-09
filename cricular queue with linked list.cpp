#include<iostream>
#include<iomanip>
#define nullptr NULL
using namespace std;

struct node{
	int info;
	node *link;
}*f,*r,*temp,*ptr;

void traverse();
void insert();
void del();
void create();

void create()
{
	int i=0,n;
	cout<<"\n enter the number of nodes ";
	cin>>n;
	while(i!=n)
	{
	temp=new node;
	cout<<"\n enter the info : ";
	cin>>temp->info;
	temp->link=nullptr;
	if(r==nullptr)
	{
		f=r=temp;
		temp->link=f;
	}
	else
	{
		r->link=temp;
		r=temp;
		r->link=f;
	}i++;
}
}
void del()
{
	ptr=f;
	if(f==nullptr)
	{
		cout<<"\nunderflow";
	}
	else if (f==r)
	{
		f=r=0;
		delete ptr;
	}
	else
	{
		 
	}
}
int main()
{
 int n,q;
    do
	{
    cout<<"\n";
    cout<<"1.create"<<setw(15)<<"2.insert"<<setw(15)<<"3.delete"<<setw(15)<<"4.traverse\n";
	cout<<"\n enter the choice : ";
	cin>>n;
	switch(n)
	{
		case 1:
			create();
			traverse();
			break;
		case 2:
			insert();
			traverse();
			break;
		case 3:
			del();
			traverse();
			break;
		case 4:
			traverse();
			break;
	}
	cout<<"\n enter 1 to exit else 2 to continue :  ";
	cin>>q;
}
while(q!=1);
}


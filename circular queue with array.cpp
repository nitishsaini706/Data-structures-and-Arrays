#include<iostream>
#include<iomanip>
using namespace std ;
int a[5],f=-1,r=-1;
void create ();
void insert();
void del();
void traverse();

void del()
{
	if(f==-1)
	{
		cout<<"\n underflow ";
	}
	else if(f==r)
	{
		cout<<"\nthe element deleted is "<<a[r];
		f=r=-1;
	}
	else
	{
		f=(f+1)%5;    // its f=(f+1)%n where n is no of elements 
	}
}
void create()
{
	int n;
	cout<<"\n enter the number of elements you want to insert : ";
	cin>>n;
	if(n>5)
	{
		cout<<"\n overflow";
		exit(0);
	}
	else 
	{   f=(f+1)%5;   
        
		for(int i=0;i<n;i++)
		{   
           cout<<"\n enter the "<<i<< " element ";
			cin>>a[i];
			r=(r+1)%5;
		}
	}
}
void insert()
{
	int x;
	cout<<"\n enter the element : ";
	cin>>x;
	if(f==-1&&r==-1)
	{
	   	a[f]=x;
	   	f=(f+1)%5;
	   	r=(r+1)%5;
	}
	else if(f==((r+1)%5))
	{
	  cout<<"\n overflow ";
	  	exit(0);
	}
	else 
	{
		r=(r+1)%5;
	    a[r]=x;
	}
}
void traverse()
{
	if(f==-1 &&r==-1)
	{
		cout<<"\n list is empty ";
		exit(0);
	}
	else
	{ int j=f;
	
		while(j!=r)
		{
		cout<<"\n the "<<j<<" element is :- "<<a[j];
		j=(j+1)%5;
	 }
		cout<<"\n the "<<r<<" element is :- "<<a[r];
	}
}
int main ()
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


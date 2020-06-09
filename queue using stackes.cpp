#include<iostream>
using namespace std;
int s1[5],s2[5],top1=-1,top2=-1;
void create();
void traverse();
void insert();
void del();

void create()
{
	int n;
	cout<<"\n enter the number of elements you wannt to insert : ";
	cin>>n;
	if(n>5)
	{
		cout<<"\noverflow ";
			exit(0);
	}
	else
	{
	  for(int j=0;j<n;j++)
	   {   
		top1+=1;
		cout<<"\n enter the "<<j<< " element : ";
		cin>>s1[j];
	   }
    }
}
void traverse()
{
	if(top1==-1)
	{
		cout<<"\n underflow ";
			exit(0);
	}
	else
	{
		for(int j=0;j<=top1;j++)
		{
			cout<<"\n"<<s1[j];
		}
	}
}
void insert ()
{
	if(top1==4)
	{
		cout<<"\n overflow ";
			exit(0);
	}
	else
	{
		int x;
		cout<<"\n enter the element : ";
		cin>>x;
		top1+=1;
		s1[top1]=x;
	}
}
void del()
{
	if(top1==-1)
	{
		cout<<"\nlist is empty ,underflow ";
		exit(0);
	}
	else
	{
		while(top1!=-1)
		{
			top2+=1;
			s2[top2]=s1[top1];
			top1-=1;
		}
		int item;
		item=s2[top2];
		top2=top2-1;
	 while(top2!=-1)
		{
			top1+=1;
			s1[top1]=s2[top2];
			top2-=1;
		}	
		cout<<"\n the elements deleted  is :  "<<item;
	}
}
int main()
{
	int n,q=0;
	do
	{
	cout<<"\n1.create \n 2.insert \n 3.delete \n 4.traverse \n  :  ";
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
		default :
			traverse();
			break;
	}
	cout<<"\nenter 1 to exit else any button to continue : ";
	cin>>q;
}while(q!=1);
}

#include<iostream>
#include<stdlib.h>
using namespace std;
struct node 
{
	int info ;
	node *link;
};
node *temp,*start,*ptr,*save;
int main()
{
	int i=0,n,b;
	cout<<"enter the number of nodes you want to create : \t";
	cin >>n;
	while(i!=n)
	{
		temp =new node;
		cout<<"\n enter the info of the node : \t ";
		cin>>temp->info;
		temp->link=NULL;
		if (start==NULL)
		{
			start=temp;
			ptr=start;
		}
		else
		{
			ptr->link=temp;
			ptr=ptr->link;
		}
		++i;
	}
	if(ptr==NULL)
	{
		cout<<" \n overflow no list present  \n";
		return 0;
	}
	else 
	{
		ptr=start;
		while (ptr!=NULL)
		{
			cout<<"\n"<<ptr->info;
			ptr=ptr->link;
		}
	}
	cout <<" \n now if you want to enter new node at the begin press 1 else press 2 : \t ";
	cin>>b;
	if(b==1)
	{
		temp=new node;
		cout<<" \n enter the info of the node : \t ";
		cin>>temp->info;
		temp->link=start;
		start=temp;

	
	
		ptr=start;
		while (ptr!=NULL)
		{
			cout<<"\n"<<ptr->info;
			ptr=ptr->link;
		}
	
}
else 
{
		temp=new node;
		cout<<" \n enter the info of the node : \t ";
		cin>>temp->info;
	if(start==NULL)
	{
		start=temp;
		temp->link=NULL;
		exit (0);
	}
	else
	{
		save=start;
		ptr=start->link;
		while(ptr!=NULL)
		{
			save=ptr;
			ptr=ptr->link;
		}
			temp->link=NULL;
			save->link=temp;
	
		}
	
	}
		ptr=start;
		while (ptr!=NULL)
		{
			cout<<"\n"<<ptr->info;
			ptr=ptr->link;
		}
	
}


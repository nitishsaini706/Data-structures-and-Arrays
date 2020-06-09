#include<iostream>
#include<stdlib.h>
using namespace std;
struct node 
{
 int info;
 node *link;	
};
node *start,*ptr,*temp,*loc=NULL;
struct node *search(int x);
struct node *search(int x)
{
	ptr=start;
	while (ptr!=NULL)
	{
		loc=ptr;
		if(ptr->info==x)
		   {
		    return loc;
     	   }
     	ptr=ptr->link;
    } 
};
int main()
{
	int i=0,n,x;
	cout<<"enter the number of nodes \n ";
	cin>>n;
	while (i!=n)
	{
		temp=new node ;
		cout<<"enter the info of the node \n ";
		cin>>temp->info;
		temp->link=NULL;
		if (start==NULL)
		{
			start=temp;
			ptr=start;
		}
		else
		{
			ptr=temp;
			ptr=ptr->link;
		}
		++i;		
	}
	if (ptr==NULL)
	{
		cout<<"overflow no list presernt \n";
		return 0;
	}
	else
	{
		ptr=start;
		while(ptr!=NULL)
		{
			cout<<"\n"<<ptr->info;
			ptr=ptr->link;
		}
	}
	cout<<" \n enter the index where you want to insert new node \n";
	cin>>x;
	temp=new node;
	loc=search(x);
	cout<<" \n enter the info ";
	cin>>temp->info;
	if(loc==NULL)
	{
		temp->link=start;
		start=temp;
	}
	else
	{
		temp->link=loc->link;
		loc->link=temp;
	}
		if (ptr==NULL)
	{
		cout<<"overflow no list presernt \n";
		return 0;
	}
	else
	{
		ptr=start;
		while(ptr!=NULL)
		{
			cout<<"\n"<<ptr->info;
			ptr=ptr->link;
		}
	}
}



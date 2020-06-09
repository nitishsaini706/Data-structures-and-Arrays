#include<iostream>
#include<stdlib.h>
using namespace std;
struct node 
{
	int info ;
	node *link;
};
node *temp,*start,*ptr;
int main()
{
	int i=0,n;
	cout<<"enter the number of node you want to create \n";
	cin>>n;
	while(i!=n)
	{
		temp=new node;         //creating a new node 
		cout<<"enter the info for the node \n";
		cin>>temp->info;   //entering a info of the node 
		temp->link=NULL;
		if(start==NULL)       //check if the linked list is empty .
		{
			start=temp;       //if yes then adding the new node at the start .
			ptr=start;
		}
		else
		{
			ptr->link=temp;        // if not then storing the link of new node in the ptr.
			ptr=ptr->link;         //and storing the temp in the ptr.
		}
		++i;                       
	}
	if(ptr==NULL)                   
	{
		cout<<"overflow no list found \n";
		return 0;
	}
	else
	{
		ptr=start;        //traversing the linked list .
		while(ptr!=NULL)  
		{
			cout<<"\n"<<ptr->info;
		    ptr=ptr->link;
		}
	}
}

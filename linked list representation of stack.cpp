#include<iostream>
#include<stdlib.h>
using namespace std;
struct node {
	int info;
	node *link;
};
node *temp,*top,*ptr,*store;
void traverse()
{
	ptr=top;
	if(top==NULL)
	{
		cout<<"\n the list is empty :";
	}
	else
	{
		while(ptr!=NULL)
		{
			cout<<"\n the info is :  "<<ptr->info;
			ptr=ptr->link;
		}
	}
}
int main ()
{
	//push---------------------------- from the head as time constant will be O(1) 
	temp =new node();
	cout<<"\n enter the info : ";
	cin>>temp->info;
	temp->link=top;                         // head =top 
	top=temp;
	traverse();
	//pop-----------------------------
	temp =new node();
	int iteml;
	item=top->info;
	store=top;
	top=top->link;          //deleting from the end and assigning the new value to top like we assign to head 
	traverse();
}

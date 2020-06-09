#include<iostream>
#include<string>
using namespace std;
void reverse();
void display();
 struct node  // definig thenew data type 
 {
  int info;           //info part
  node *link;	//  link part
 };
 struct node  *start,*temp,*ptr;     //decalring pointers for start , temp node and ptr for current node;
 int main()
 {
 	int i=0,n;
 	cout<<"enter the number of nodes you want to create \n";
 	cin>>n;
 	while(i!=n)
 	{
 		temp =new node;              //creating new node;
 		cout<<"enter the info \n";
 		cin>>temp->info;
 		temp->link=NULL;                   // setting the link of new node as null 
 		if(start==NULL)                    //checking if list is empty 
 		{
 			start=temp;                     // if yes then set the new node as start 
 			ptr=start; 
		 }
		 else
		 {
		 	ptr->link=temp; //if not then insert the temp in the existing list 
		 	ptr=ptr->link;  //set the link to the link of the temp which is inseterd recently 
		 }
		 i++;   //increasing the value to insert the number of list entered 
	 }
	 reverse();
	 display();
 }
 void reverse()
 {
 	struct node *cn,*pn,*nn;         //cn=current node,pn= previous node .nn=new node 
 	pn=NULL;                         //setting pn as null to set the 1 node link as null
 	cn=start; 
 	nn=start;                         //setting nn and cn to the 1 node
 	while(nn!=NULL)                  //run till the next node is null 
 	{
 		nn=nn->link;       // setting the nn as the next node stored in the link of the 1st node 
 		cn->link=pn;       // setting cn link as the 0 
 		pn=cn;              //setting pn as the cn 
 		cn=nn;               // moving the current node to next node 
 	}
	 start=pn;            //when nn=null , we need to redefine the start which will be the last node of the list .
 }
 void display()
 {
 	if(ptr==NULL)
 	{
 		cout<<"the list is empty overflow \n";
 		exit(0);
	 }
	 else
	 {
 	ptr=start;
 	while(ptr!=NULL)
 	   {
 		cout<<ptr->info <<"\n";
 		ptr=ptr->link;
	   }
    }
 }

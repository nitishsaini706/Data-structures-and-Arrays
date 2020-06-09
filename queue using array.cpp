#include<iostream>
using namespace std ;
int a[20],f=-1,r;
void pop();
void push();
void traverse();
void traverse()
{
	if(f==-1)
	{
		cout<<"\n list is empty underflow ";
		exit(0);
	}
	else
	{
	for(int j=f;j<=r;j++)
    	{
		cout<<a[j]<<endl;
     	}
    }
}
void pop()
{
	if(f==-1)
	{
		cout<<"\n queue is empty ";
		exit(0);
	}
	else 
	{   int item;
		item=a[f];
		f+=1;
	}
}
void push()
{
   int x;
   cout<<"\nenter the element : ";
   cin>>x;
   if(r>=20)
   {
   	cout<<"\n overflow ";
   }
   else if (f==-1)
   {
   	f+=1;
   	r=r+1;
   	a[r]=x;
   }
   else
   {
   	r=r+1;
   	a[r]=x;
   }
}

int main()
{
	int n;
	cout<<"\n enter the number of elements you want to add to queue : ";
	cin>>n;
	f+=1;
	r=n-1;
	if(n>20)
	{
		cout<<"\n overflow ";
	}
	cout<<"\n enter the elements " ;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int m;
	cout<<"\n enter 1 for push and 2 for pop or 3 for traverse : ";
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

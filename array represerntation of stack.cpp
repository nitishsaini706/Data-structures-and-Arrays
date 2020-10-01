#include <iostream>
// defined max value for the size of stack
#define max 10
using namespace std;
int stack[max],top=-1,item,item1;
int main()
{
	void traverse();
	void pop();
	void push();
	
}
void traverse ()
{
	if (top==-1)
	{
		cout<<"\nthe stack is empty ///// underflow  ";
	}
	else
	{
		for (int i=top;i>=0;i--)
		{
			cout<<"stack [ "<<i<<" ] is "<<stack[i] <<"\n";
		}
	}
}
void push()
{
	if(top==max-1)
	{
		cout<<"\n list is full : OVERFLOW ";
	}
	else
	{
		cout<<"\n enter the item : ";
		cin>>item;
		stack[top]=item;
		++top;
		traverse();
	}
}
void pop()
	// to delete the button 
{
	if(top==0)
	{
		cout<<" \n no list is present ";
	}
	else
	{
	item1=stack[top];
	--top;
	cout<<" \n the stack removerd is :\t"<<item;
	traverse();
}
}


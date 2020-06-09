#include<iostream>
using namespace std;
int main()
{
	int n,y;
	cout<<"enter the number of elements you want in you array"<<endl;
	cin >> n ;
	int ar[n];
	cout<<"now enter the elements with spaces in between : " <<endl;
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	cout<<"these are the elements : \t";
	for(int j=0;j<n;j++)
	{
		cout<<ar[j]<<"\t";
	}
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
			  y=ar[j];
			 ar[j]=ar[j+1];
			 ar[j+1]=y;
			}
		
		}
	}
	cout<<"\n the elements after sorting by bubble sort are \n \t";
		for(int j=0;j<n;j++)
	{
		cout<<ar[j]<<"\t";
	}
}


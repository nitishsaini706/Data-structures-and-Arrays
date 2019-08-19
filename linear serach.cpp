#include<iostream>
using namespace std;
int main()
{
		int n;
	cout<<"enter the number of elements you want in you array"<<endl;
	cin >> n ;
	int arr[n];
	cout<<"now enter the elements with spaces in between : " <<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"these are the elements  : \t";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\n now enter the element you want to search"<<endl;
	int a ;
	cin >> a;
	for (int i=0;i<n;i++)
	{
		if (arr[i]!=a)
		{
	      continue;
			
		}
		else 
		{
		
			cout<<"your number is present at index "<<i<<endl;
		}
		
	
	}
	
	
		
		
	}


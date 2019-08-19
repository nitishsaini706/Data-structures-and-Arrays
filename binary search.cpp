#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number of elements you want in you array"<<endl;
	cin >> n ;
	int arr[n];
	cout<<"now enter the elements with spaces in between in ascending order  : " <<endl;
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
	int c;
	int l =0;
	int h=n-1; 
	c=l+h/2;
	if (arr[c]==a)
	{
		cout<<"your number is present at index  "<< c <<endl;
	}
	else if(arr[c]>a)
	{
		for (int i=c-1;i>0;i--)
		{
		
		if(arr[i]==a)
		{
			cout<<"your number is present at index  "<< i<<endl;
			break;
		}
		
	}
	}
	else if(arr[c]<a)
	{
	    for (int i=c+1;i<n;i++)
	    {
	        if(arr[i]==a)
	        {
	            	cout<<"your number is present at index  "<< i<<endl;
			break;
	        }
	    }
	}
	else 
	{
	    cout<<"your number is not present "<<endl;
	}
}

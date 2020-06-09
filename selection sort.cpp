#include<iostream>
using namespace std;
int main()
{
	int n,min,temp;
	cout<<"enter the number of elements you want in you array"<<endl;
	cin >> n ;
	int arr[n];
	cout<<"now enter the elements with spaces in between : " <<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"these are the elements : \t";
	for(int j=0;j<n;j++)
	{
		cout<<arr[j]<<"\t";
	}
	for (int i=0;i<n-1;i++)       //n-2 comparisons or to select the element to be compared and last ko nhi consider kiya coz already voh khud ho jaega
	{
		min=i;
		for (int j=i+1;j<n;j++)
		{
			if (arr[min]>arr[j])
			{
				min=j;
				temp =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
//			min=arr[j];
		}
	}
	cout<<"the array after sorting is \n";
	for(int j=0;j<n;j++)
	{
		cout<<arr[j]<<"\t";
	}
}

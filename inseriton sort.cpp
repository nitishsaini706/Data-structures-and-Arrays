#include<iostream>
using namespace std;
int main ()
{
	int n,j,temp;
	cout<<"\nenter the number of elements ";
	cin>>n;
	int a[n];
	cout<<"\n enter the elements : ";
	for(int i=0;i<n;i++ )
	{
		cin>>a[i];
	}
	cout<<"\n your array is : ";
	for (int i=0;i<n;i++)
	{
		cout<<"\t "<<a[i];
	}
	cout<<"\n now we'll sort the array : ";
	for (int step = 1; step < n; step++)
  {
    j=i
    while (a[j] < a[j-1] && j > 0)
    {
      temp=a[j];// For descending order, change key<array[j] to key>array[j].
      a[j] = a[j-1];
      a[j-1]=temp;
      j--;
    }
  }
	cout<<"\n the array after sorting is : ";
	for(int i=0;i<n;i++)
	{
		cout<<"\t"<<a[i];
	}
}

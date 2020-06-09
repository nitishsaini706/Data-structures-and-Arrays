#include<iostream>
using namespace std;
int partion(int a[],int l,int h);
void quick(int a[],int l,int h);
void display(int a[],int n);
int main()
{
	int n,c=1,l=0,h=n;
	cout<<"\n enter the number of elemets in your array : ";
	cin>>n;
	int a[n];
	cout<<"\n enter the elements : ";
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\n now we will sort the elements by quick sort ";
	cout<<"\n enter the 1 to select starting element as pivot else 2 for end element : ";
	cin>>c;
	if(c==1)
	{
	quick(a,l,h);
	display(a,n);
}
else
{
	#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
}
void printArray(int array[], int size)
{
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}
int partition(int array[], int low, int high)
{
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++)
  {
    if (array[j] <= pivot)
    {
      i++;
      swap(&array[i], &array[j]);
    }
  }
  printArray(array, 7);
  cout << "........\n";
  swap(&array[i + 1], &array[high]);
  return (i + 1);
}
void quickSort(int array[], int low, int high)
{
  if (low < high)
  {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}
c
}
}
int partion(int a[],int l,int h)
{
		int q=l,w=h,temp;
		int pivot=a[l];
		while(q<w)
		{
			do{
			q++;
		}
		while(a[q]<pivot);
		do{
			w--;
		}while(a[w]>pivot);
		if(q<w)
		{
			temp=a[q];
			a[q]=a[w];
			a[w]=temp;
		}
		temp=a[l];
		a[l]=a[w];
		a[w]=temp;
		return w;
	}
}
void quick(int a[],int l,int h)
{
	if(l<h)
	{
		int z=partion(a,l,h);
		quick(a,l,z-1);
		quick(a,z+1,h);
	}
}
void display(int a[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<"\t"<<a[i];
	}
}

#include <stdio.h>
#include <iostream>

using namespace std;

void insertionSort(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1]=temp;
	}
}

int main()
{
	int a[]={2,9,10,7,5,0,3,6,4};
	int n=9;
	insertionSort(a,n);

	int i = 0;
	while(i<n)
	{
		cout<<a[i];
		i++;
	}
	return 0;
}

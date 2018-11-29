#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void selectionsort(int arr[],int n)
{
	int i,j;
	for(j=0;j<n-1;j++)
	{
	int small = arr[j];
	for(i=j+1;i<n;i++)
	{
		if(arr[i] < small)
		small = arr[i];
	}
	if(arr[j] > small)
	swap(&arr[j],&small);
}
}
void print(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	cout << arr[i] << " ";
}
int main()
{
	int arr[] = {5,10,8,25,30};
	int n = sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr,n);
	cout<< "sorted array is\n";
	print(arr,n);
	return 0;
}

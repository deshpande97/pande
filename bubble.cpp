#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void bubblesort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		if(arr[j] > arr[j+1])
		swap(&arr[j],&arr[j+1]);
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
	int arr[] = {5,10,8,25,0};
	int n = sizeof(arr)/sizeof(arr[0]);
	bubblesort(arr,n);
	cout<< "sorted array is\n";
	print(arr,n);
	return 0;
}

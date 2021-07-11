#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int partition(int arr[],int l,int h)
{
	int pivot=arr[h];
	int i=l-1;
	for(int j=l;j<h;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[h]);
	return (i+1);
	
}
int main()
{
	int arr[7]={3,6,8,1,2,5,4};
	int k=3,low=0,high=6;
	while(low<=high)
	{
		int pos=partition(arr,low,high);
		if(pos==(k-1))
		{
		cout<<arr[pos];
		break;}
		else if(pos<(k-1))
		low=pos+1;
		else
		high=pos-1;
	}
}


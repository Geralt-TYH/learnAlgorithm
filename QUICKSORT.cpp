#include <stdio.h>
void swap(int a[],int i,int j);
void quicksort(int a[],int p,int r);
int partition(int a[],int p,int r);
int main(void)
{
	int a[10]={12,32,13,14,21,34,5,6,21,2};
	quicksort(a,0,10);
	for(int i=0;i<10;i++)
	printf("%d ",a[i]);
	return 0;
	
} 
/**
p:从P下标开始排序
r:数组的长度  
*/
void quicksort(int a[],int p,int r)
{
	if(p<r)
	{
		int q=partition(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r); 
	}
} 
int partition(int a[],int p,int r)
{
	int x=a[r];
	int i=p-1;
	int j;
	for(j=p;j<=r-1;j++)
	{
		if(a[j]<=x)
		{
			i++;
			swap(a,i,j);
		}
	}
	swap(a,i+1,r);
	return i+1;
}
void swap(int a[],int i,int j)
{
	int t;
	t=a[i];
	a[i]=a[j];
	a[j]=t;
}

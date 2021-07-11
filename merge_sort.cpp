#include<stdio.h>
void Merge(int *a,int low,int mid,int high)
{
	int c[20];
	int i=low,j=mid+1,k=0;
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else
		{
			c[k]=a[j];
			k++;
			j++;
		}
	}
	while(i<=mid)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<=high)
	{
		c[k]=a[j];
		k++;
		j++;
	}
	k=0;
	for(i=low;i<=high;i++)
	{
		a[i]=c[k];
		k++;
	}
	
	
	
}
void MergeSort(int *a,int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		MergeSort(a,low,mid);
		MergeSort(a,mid+1,high);
		Merge(a,low,mid,high);
	}
}
int main()
{
	int a[]={10,8,6,4,2,1};
	int n=sizeof(a)/sizeof(a[0]);
	MergeSort(a,0,n-1);
}

#include<stdio.h>
void FindProduct(int *a,int n)
{
	int left[n],right[n];
	left[0]=1;
	rught[n-1]=1;
	
	for(int i=1;i<n;i++)
	{
		left[i]=a[i-1]*left[i-1];
	}
	for(int i=n-1;i>=0;i--)
	{
		right[i]=a[i+1]*right[i+1];
	}
	for(int i=0;i<n;i++)
	{
		a[i]=left[i]*right[i];
	}
}
int main()
{
	int a[]={5,3,2,4,6,8,9};
	int n=sizeof(a)/sizeof(a[0]);
	FindProduct(a,n);
}


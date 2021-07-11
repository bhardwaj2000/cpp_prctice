#include<stdio.h>
int main()
{
	int a[]={3,8,6,7,5,9};
	int n=sizeof(a)/sizeof(a[0]);
	int x=-1,y=-1,prev=a[0];
	
	for(int i=1;i<n;i++)
	{
		if(prev>a[i])
		{
			if(x==-1)
			{
				x=i-1;
				y=i;
			}
			else
			{
				y=i;
			}
		}
		prev=a[i];
	}
	int t=a[x];
	a[x]=a[y];
	a[y]=t;

}

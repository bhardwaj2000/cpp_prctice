int HasQuardruplet(int *a,int n,int sum,int count)
{
	if(sum==0 && count == 4)
	{
		return 1;
	}
	
	if(count >4 || n==0)
	return 0;
	
	return HasQuardruplet(a,n-1,sum-a[n-1],count+1) || HasQuardruplet(a,n-1,sum,count);
	
}
int main()
{
	int a[]={2,7,4,0,9,5,1,3};
	int sum=20;
	
	int n=sizeof(a)/sizeof(a[0]);
	
	if(HasQuardruplet(a,n,sum,0))
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}

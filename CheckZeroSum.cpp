#include<iostream>
#include<unordered_set>
using namespace std;
bool CheckZeroSum(int *a,int n)
{
	unordered_set<int> set;
	set.insert(0);
	
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(set.find(sum)!=set.end())
		{
			return true;
		}
		else
		{
			set.insert(sum);
		}
	}
	return false;
}
int main()
{
	int a[]={1,2,3,-2,-3,4,-1};
	int n=sizeof(a)/sizeof(a[0]);
	
	if(CheckZeroSum(a,n))
	cout<<"Yes";
	else
	cout<<"No";
}

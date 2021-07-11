#include<iostream>
#include<unordered_map>
using namespace std;
void CheckZeroSum(int *a,int n)
{
	unordered_multimap<int,int> map;
	map.insert(pair<int,int>(0,-1));
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];
		if(map.find(sum)!=map.end())
		{
			
		}
		map.insert(pair<int,int>(sum,i));
	}
	return false;
}
int main()
{
	int a[]={1,2,3,-2,-3,4,-1};
	int n=sizeof(a)/sizeof(a[0]);
	CheckZeroSum(a,n);
}

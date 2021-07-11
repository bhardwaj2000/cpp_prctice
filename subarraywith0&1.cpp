#include<iostream>
#include<unordered_map>
using namespace std;
void LargestSubArraywihtsumzero(int *a,int n)
{
	unordered_map<int,int> map;
	map[0]=-1;
	int len=0;
	int end_index=-1;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=(a[i]==0?-1:1);
		
		if(map.find(sum)!=map.end())
		{
			if(len<i-map[sum])
			{
				len=i-map[sum];
				end_index=i;
			}
		}
		else
		{
			map[sum]=i;
		}
	}
	if(end_index!=-1)
	{
		cout<<end_index-len+1<<" "<<end_index;
	}
	else
	{
		cout<<"No Sub Array Found";
	}
}
int main()
{
	int a[]={0,0,1,0,1,0,0};
	int n=sizeof(a)/sizeof(a[0]);
	LargestSubArraywihtsumzero(a,n);
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int> > triplets(vector<int> arr,int targetSum){
	//Logic 
	int n = arr.size();
	sort(arr.begin(),arr.end());
	vector<vector<int> > result;

	// Pick every a[i], pair sum for remaining part
	for(int i=0; i<=n-3;i++){

		int j = i + 1;
		int k = n - 1;

		//two pointer approach
		while(j < k){
			int current_sum = arr[i];
			current_sum += arr[j];
			current_sum += arr[k];

			if(current_sum==targetSum){
				result.push_back({arr[i],arr[j],arr[k]});
				j++;
				k--;
			}
			else if(current_sum > targetSum){
				k--;
			}
			else{
				j++;
			}
		}

	}
	return result;

}

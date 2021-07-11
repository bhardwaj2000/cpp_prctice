#include<vector>
#include<algorithm>
#include<climits>
using namespace std;


pair<int,int> minDifference(vector<int> a,vector<int> b){
    //Complete this method
    int n1=a.size(), n2=b.size(), minabs=INT_MAX;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            minabs=min(minabs, abs(a[i]-b[j]));
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(minabs == abs(a[i]-b[j]))
                return make_pair(a[i],b[j]);
        }
    }
}

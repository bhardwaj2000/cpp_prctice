// solve using unorder set
//Given an array A[] and a number x, check for pair in A[] with sum as x
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
vector<int>pairsum(vector<int>a,int Sum){
    unordered_set<int>s;
    vector<int>result;
    for(int i=0;i<a.size();i++){
        int x=Sum-a[i];
        if(s.find(x)!=s.end()){
            result.push_back(x);
            result.push_back(a[i]);
            return result;
        }
        s.insert(a[i]);
    }
    return {};
    
}
int main(){
    vector<int> a{10,5,2,3,-6,9,11};
    int s=4;
    auto p=pairsum(a,s);
    if(p.size()==0){
        cout<<"no such pair";
    }
    else{
        cout<<p[0]<<","<<p[1]<<endl;
    }
    return 0;
}

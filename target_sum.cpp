//Given an array A[] and a number x, check for pair in A[] with sum as x
// solve using two pointer technique
#include<bits/stdc++.h>
//#include<vector>
using namespace std;
void findsum(int arr[],int n,int s){
    int l,r;
    sort(arr,arr+n);
    l=0;
    r=n-1;
    while(l<r){
        if(arr[l]+arr[r]==s)
        {cout<<arr[r]<<" "<<arr[l];
            break;
        }
        else if(arr[l]+arr[r]<s)
            l++;
        else
            r--;
    }
}
int main(){
    int arr[]={10,5,2,3,-6,9,11};
    int s=4;
    int n=sizeof(arr)/sizeof(int);
    //cout<<n;
    findsum(arr,n,s);
}

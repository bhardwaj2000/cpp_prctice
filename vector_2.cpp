#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>arr={
        {1,2,3},{4,5,6},{7,8,6,5},{23,34}};
    arr[0][0]+=10;//update 1 to 11
    for(int i=0;i<arr.size();i++){
        for(int number:arr[i]){
            cout<<number<<",";
        }
        cout<<endl;
    }
}

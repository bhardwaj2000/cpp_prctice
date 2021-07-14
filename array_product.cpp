#include<vector>
using namespace std;

//Expected Complexity O(N)
vector<int> productArray(vector<int> arr){
    
    //Create an output Array
    int n = arr.size();
    vector<int> output(n,1);
    
    //update the output array and return
    //complete the code
     vector<int> left(n),right(n);
    left[0]=1;right[n-1]=1;
    for(int i=1;i<n;i++){
        left[i]=arr[i-1]*left[i-1];
    }
    for(int i=n-2;i>=0;i--){
        right[i]=arr[i+1]*right[i+1];
    }
    for(int i=0;i<n;i++){
        output[i]=left[i]*right[i];
    }
    return output;
}

#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> arr = {1,2,30,12,25};
	//push_back o(1)
	arr.push_back(16);
	//print all the element of vector
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<endl;
	}
	cout<<arr.capacity()<<"cpacity"<<endl;
	cout<<arr.size()<<"size"<<endl;
	arr.pop_back();
	cout<<arr.size()<<"after pop"<<endl;
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<endl;
	}
	cout<<arr.capacity()<<"cpacity"<<endl;
	cout<<arr.size()<<"size"<<endl;
	
	//fill constuctor- set all element to zero-vector<int>setallzero(10,0),one-vector<int>setallzero(10,1).
	vector<int>setallzero(10,0);
	for(int i=0;i<setallzero.size();i++){
		cout<<setallzero[i]<<endl;
	}
}
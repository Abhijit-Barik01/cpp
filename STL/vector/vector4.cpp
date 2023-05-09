#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>v={10,212,30,40,569};
	vector<int>::iterator itr;
	for(itr=v.begin(); itr!=v.end();itr++)
		cout<<(*itr)<<endl;
	cout<<"Araay"<<endl;
	int arr[]={22,40,50,90};
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int>v2(arr,arr+n);
	for(auto x:v2)
		cout<<x<<endl;
}

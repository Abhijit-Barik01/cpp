#include<bits/stdc++.h>
using namespace std;

vector<int>fun(int arr[],int n,int k){
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<k)
		{
			v.push_back(arr[i]);
		}
	}
	return v;
}
int main(){
	int arr[]={10,20,30,40,50,60};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=30;
	vector<int>v=fun(arr,n,k);
	for(auto x:v)
		cout<<x<<endl;

}
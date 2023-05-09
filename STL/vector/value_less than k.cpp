#include<bits/stdc++.h>
using namespace std;
 
 vector<int>fun(int arr[],int k,int n)
 {
 	vector<int> v;
 	for (int i = 0; i <n; ++i)
 	{
 		if(arr[i]<k)
 			v.push_back(arr[i]);
 	}
 	return v;
 }
 int main(){
 	int arr[]={10,12,15,16,9,8,7};
 	int n=sizeof(arr)/sizeof(arr[0]);
 	int k=12;
 	vector<int> v=fun(arr,k,n);
 	for(int x:v)
 		cout<<x<<" ";
 	return 0;

 }
#include<bits/stdc++.h>
using namespace std;
int* move_zeroend(int arr[],int n){
	int count=0;
	for (int i=0;i<n;i++){
		if(arr[i]!=0){
			swap(arr[i],arr[count]);
			count++;
		}
	}
	return arr;
}
int main(){
	int arr[]={10,8,0,0,12,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	move_zeroend(arr,n);
	for(auto i:arr)//for each loop
		cout<<i<<",";
}
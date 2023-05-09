//find maximum value of arr[j]-arr[i] such that j>i.so i and j are indexes.complexity O(N)
#include <iostream>
using namespace std;
int max_diff(int arr[],int n){
	int res=arr[1]-arr[0];
	int minvalue=arr[0];
	for (int i = 1; i < n; ++i)
	{
		res=max(res,arr[i]-minvalue);
		minvalue=min(minvalue,arr[i]);
	}
	return res;

}
int main(){
	int arr[]={2,3,1,10,6,4,8,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=max_diff(arr,n);
	cout<<"maximum difference"<<x<<endl;

}


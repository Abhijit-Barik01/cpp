//Find maximum sum of subarray.Complexity O(n)
#include<iostream>
using namespace std;
int maxsum(int arr[],int n){
	int maxending=arr[0];
	int res=arr[0];
for (int i = 1; i < n; ++i)
{
	maxending=max(maxending+arr[i],arr[i]);
	res=max(res,maxending);
}
return res;
 }
int main(){
	int arr[]={-3,8,-2,4,-5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=maxsum(arr,n);
	cout<<"maximum  sum of subarray"<<x<<endl;

}
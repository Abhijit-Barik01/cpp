//given a fixed and multiple queries of types on array how to efficiently perform the queries
//complexity->O(1)
#include <iostream>
#include <climits>
#include <cmath>
using namespace std;
int prefix_sum[1000];
void presum(int arr[],int n){
	for (int i = 0; i < n; ++i)
	{
		prefix_sum[i]=prefix_sum[i-1]+arr[i];
	}
	
}
int get_sum(int prefix_sum[],int left_index ,int right_index){
	if(left!=0)
		return (prefix_sum[right_index]-prefix_sum[left_index-1]);
	else
		return prefix_sum[right_index];
}
int main()
{
	int arr[]={2, 8, 3, 9, 6, 5, 4};
	int n=sizeof(arr)/sizeof(arr[0]);
	presum(arr,n);
	cout<<get_sum(prefix_sum,1,3)<<endl;
	cout<<get_sum(prefix_sum,0,2)<<endl;
	return 0;
}
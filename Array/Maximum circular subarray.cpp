//Maximum circular subarray
#include<iostream>
using namespace std;
int  normalmax_sum(int arr[],int n){
	int res=arr[0];
	int maxEnding=arr[0];
	for (int i = 1; i < n; ++i)
	{
		maxEnding=max(maxEnding+arr[i], arr[i]);
		res=max(res,maxEnding);
	}
	return res;


}
int overmaxscan(int arr[],int n){
	int maxscan=normalmax_sum(arr,n);
	if (maxscan<0)
		return maxscan;
	int arr_sum=0;
	for (int i = 0; i <n; ++i)
	{
		arr_sum=arr_sum+arr[i];
		arr[i]=-arr[i]; // reverse the array
	}
	int max_circular_sub_array=arr_sum+normalmax_sum(arr, n);
	 return  max(max_circular_sub_array,maxscan);
	
}
int main(){
	int arr[]={8,-4,3,-5,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=overmaxscan(arr,n);
	cout<<"maximum circular sum of subarray"<<x<<endl;

}
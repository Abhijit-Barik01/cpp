//window sliding Teachnique.Given an array of integers and a number which is denoted by k.Find maximum sum of k consecutive 
//complexity ->O(n)

#include <iostream>
using namespace std;
int window_slide(int arr[],int n, int k){
	int arr_sum=0;
	for (int i = 0; i < k; ++i)
	{
		arr_sum=arr_sum+arr[i];
	}
	int max_sum=arr_sum;
	for (int i = k; i < n; ++i)
	{
		arr_sum+=arr[i]-arr[i-k];
		max_sum=max(max_sum,arr_sum);

	}
	return max_sum;

}
int main()
{	int arr[]={1,8,30,-5,20,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=3;
	int x=window_slide(arr,n,k);
	cout<<x<<endl;
	return 0;
}
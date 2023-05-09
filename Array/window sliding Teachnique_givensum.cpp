//maximum_sum and k is given in array.check given maximum sum is present or not
#include <iostream>
using namespace std;
void window_slide(int arr[],int n, int k,int given_sum){
	int arr_sum=0;
	for (int i = 0; i < k; ++i)
	{
		arr_sum=arr_sum+arr[i];
		
	}
	if (arr_sum==given_sum)
	{
		// cout<<"given_sum present in array"<<endl;


	}
	else{
	int max_sum=arr_sum;
	for (int i = k; i < n; ++i)
	{
		arr_sum+=(arr[i]-arr[i-k]);
		max_sum=max(max_sum,arr_sum);
		if (max_sum==given_sum)
		{
			cout<<"given_sum present in array"<<endl;
		}
		else
			cout<<"not present"<<endl;
		
}
}

}
int main()
{	int arr[]={1,8,30,-5,20,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int k=3;
	int given_sum=45;
	window_slide(arr,n,k,given_sum);
	
	return 0;
}
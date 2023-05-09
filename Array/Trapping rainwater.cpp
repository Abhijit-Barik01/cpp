//Trapping Rainwater .complexity O(N)

#include <iostream>
using namespace std;
int getwater(int arr[], int n){
	int left_max[n],right_max[n], res=0;
	left_max[0]=arr[0];
	right_max[n-1]=arr[n-1];
	for (int i = 1; i < n; ++i)
	{
		left_max[i]=max(left_max[i-1],arr[i]);
	}
	for (int i = n-2; i>=0; --i)
	{
		right_max[i]=max(right_max[i+1],arr[i]);
	}
	for (int i = 1; i < n-1; ++i)
	{
		res=res+(min(left_max[i],right_max[i])-arr[i]);
	}
	return res;

}
int main()
{
	int arr[]={3,0,1,2,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=getwater(arr,n);
	cout<<"Total Trapping water"<<x;
	return 0;
}
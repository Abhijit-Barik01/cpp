#include <iostream>
using namespace std; //left rotate an  array element.Time complexity=O(n) and space complexity=O(1)
int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	int temp=arr[0];
	for (int i = 0; i < n; ++i)
	{
		arr[i-1]=arr[i];

	}
	arr[n-1]=temp;
	for (auto x:arr)
	{
		cout<<x<<" ";
	}
}

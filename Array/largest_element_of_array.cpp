//finnd largest element of array.complexity O(N)
#include <iostream>
using namespace std;
int largest(int n, int arr[]){
	int res=0;
	for (int i = 1; i < n; ++i)
	{
		if (arr[i]>arr[res])
		{
			res=i;
		}
		
	}
	return res;
}

int main()
{
	int arr[]={100,9,12,6,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int result=largest(n,arr);
	cout<<" index of largest number is->"<<result;
	return 0;
}

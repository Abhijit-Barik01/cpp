//Given an unsorted array of non negative integers.find if there is a subarray  with given sum 
/*#include <bits/stdc++.h>//complexity O(n)
using namespace std;
int sumsubArray(int arr[],int n, int sum)
{
	int i,j,curr_sum;
	for (int i = 0; i < n; ++i)
	{
		curr_sum=arr[i];
		for(int j=i+1;j<=n;j++){
			if(curr_sum==sum)
			{
				cout<< "Sum found between indexes "<< i << " and " << j-1; 
				return 1;
			}
			if (curr_sum>sum|| j==n)
			{
				break;
			}
			curr_sum=curr_sum+arr[j];
		}
	}
	cout<<"no subarray sum found"<<endl;
	return 0;
}
int main() 
{ 
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int sum = 23; 
    sumsubArray(arr, n, sum); 
    return 0; 
} */
#include <bits/stdc++.h>
using namespace std;
int sumsubArray(int arr[],int n, int sum)
{
	int curr_sum=arr[0];
	int start=0;
	for (int end = 1; end < n; end++)
	{
		while(curr_sum>sum && start<end-1){
			curr_sum=curr_sum-arr[0];
			start++;
		}
		if(curr_sum==sum){
			cout<<"sum subarray found at  index"<<start<<" and"<<end-1;
			return 1;
		}


		if(end<n)
			curr_sum+=arr[end];

	}
	cout << "No subarray found";
	return 0;
}
int main() 
{ 
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int sum = 23; 
    sumsubArray(arr, n, sum); 
    return 0; 
}
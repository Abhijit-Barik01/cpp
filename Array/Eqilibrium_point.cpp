#include<bits/stdc++.h>
using namespace std;
 bool checkEqilibrium(int arr[],int n)
 {
 int sum=0;
 for(int i=0;i<n;i++)
 	sum+=arr[i];
 int left_sum=0;
 for(int i=0;i<n;i++)
 {
 	if(left_sum==sum-arr[i])
 		return true;
 	left_sum=left_sum+arr[i];
 	sum=sum-arr[i];

 }
 return false;

 }
 int main()
 {
 	int arr[]={2,-2,4};
 	int n=sizeof(arr)/sizeof(arr[0]);
 	cout<<"is there any equlibrium point"<<endl;
 cout<<(checkEqilibrium(arr, n)? "true" : "false");
}

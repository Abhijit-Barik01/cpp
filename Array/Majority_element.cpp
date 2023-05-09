//find majority element of array
#include<iostream>
using namespace std;
int find_majority_element(int arr[], int n){
	int res=0;
	int count=1;
	for (int i = 1; i < n; ++i)
	{
		if(arr[res]==arr[i])
		{
			count++;
		}
		else 
			count--;
		if(count==0){
			res=i;
			count=1;

	}
		
	}

	
	for (int i = 0; i < n; ++i)
	{
		if (arr[res]=arr[i])
		{
			count++;
		}
	}
	if (count>n/2)
	{
		return res;
	}
	else
		return -1;

}
int main(){
	int arr[]={8,3,4,8,8};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=find_majority_element(arr,n);
	cout<<"index of majority element"<<x<<endl;

}
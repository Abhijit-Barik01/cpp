//Find maximum consecutive 1 in binary array
#include<iostream>
using namespace std;
int max_consecutiveone(int arr[],int n)
{	int curr=0,res=0;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]==0)
		{

			curr=0;
		}
		else
		{	curr++;
			res=max(curr,res);
			


		}
	}
	return res;
}
int main()
{
	int arr[]={0,1,1,0,1,1,0,1,1,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=max_consecutiveone(arr,n);
	cout<<x<<endl;

	return 0;
}
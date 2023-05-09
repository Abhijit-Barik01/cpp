#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[],int l,int h)
{
	if(l>=h)
		return;
	swap(arr[l],arr[h]);
	 l=l+1;
	 h=h-1;
	reverse(arr,l,h);
}
int main()
{
	int arr[]={1,2,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	reverse(arr,0,n-1);

	for (int i = 0; i <4; ++i)
	{
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
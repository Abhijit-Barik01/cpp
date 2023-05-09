//check if array is sorted in assending order.1,2,3,4
#include <iostream>
using namespace std;

bool issorted(int arr[],int n){
	for (int i = 1; i < n; ++i)
	{
		if(arr[i]<arr[i-1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int arr[]={1,9,3,6,9,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	int result=issorted(arr,n);
	cout<<"is this array is sorted? "<<endl;
	if (result==1)
	{
		cout<<"yes"<<endl;
	}
	else
		cout<<"no"<<endl;


	return 0;
}

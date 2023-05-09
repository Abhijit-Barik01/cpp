//Find Leaders element  in the array.Time complexity=O(N).AUXILARY SPACE COMPLEXITY=O(N)
#include<iostream>
using namespace std;
int main(){
	int arr[]={1,2,10,5,13,10,6,4,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int last_element=arr[n-1];
	cout<<"Leaders elements are:"<<last_element<<" ";
	for (int i = n-2; i>=0; --i)
	{
		if (arr[i]>last_element)
		{
			last_element=arr[i];
			cout<<arr[i]<<" ";
		}
	}
	return 0;
}
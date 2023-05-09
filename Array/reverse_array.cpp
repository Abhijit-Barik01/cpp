//reverse the aray
#include <iostream>
using namespace std;
int* reverse(int arr[],int n){
	int low=0;
	int high=n-1;
	while(low<high){
		int temp=arr[low];
		arr[low]=arr[high];
		arr[high]=temp;
		low++;
		high--;
	}
	return arr;

}
int main(){
	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	reverse(arr,n);
	cout<<"after  the reverse array"<<endl;
	for (int i = 0; i <n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
//count  the frequency of each element in  sorted array
#include <iostream>
using namespace std;
void print_frequency(int arr[], int n){
	
	int i=1;
	int frequency=1;
	while(i<n){
		while(i<n && arr[i]==arr[i-1])
		{
			frequency++;
			i++;
		}
		cout<<"frequency of array element"<<arr[i-1]<<"is"<<frequency<<endl;
		i++;
		frequency=1;

	}
}
int main()
{
	int arr[]={1,3,4,4,4,6,6,6,9,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	print_frequency(arr,n);
	return 0;
}
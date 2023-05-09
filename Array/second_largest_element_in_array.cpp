//Index of Second largest element in array
#include<bits/stdc++.h>
using namespace std;
int Second_largest(int arr[],int n){
	int second_largest=-1;
	int largest=0;
	for (int i = 1; i < n; ++i)
	{
		if(arr[i]>arr[largest]){
			second_largest=largest;
			largest=i;
			
		}
		else if(arr[i]!=arr[largest]){
			if(second_largest==-1||arr[i]>arr[second_largest])
				second_largest=i;

		}
	}
	return second_largest;
}

int main(){
	int arr[]={12,4,12,-7};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"index of second_largest is"<<Second_largest(arr,n)<<endl;

	
}
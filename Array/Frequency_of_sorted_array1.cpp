#include <bits/stdc++.h>
using namespace std;

void remove(int arr[],int n)
{

int frequency=1;
int f=1;
int i=1;
for( i=1;i<n;i++){

	if(arr[i]==arr[i-1]){

		frequency++;
		f=1;

	}
	else{
		cout<<arr[i-1]<<"frequency"<<frequency<<endl;
		frequency=1;
		f=0;
	}

}
if(f!=0){
	cout<<arr[i-1]<<"frequency"<<frequency<<endl;
}
if( n>1 && arr[n-1]!=arr[n-2])
{
	cout<<arr[n-1]<<"frequency"<<1<<endl;
}
}

int main(){
	int arr[]={20,10,10,20};
	int n=sizeof(arr)/sizeof(arr[0]);
	remove(arr,n);

	

	return 0;
}
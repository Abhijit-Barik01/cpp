#include<iostream>
using namespace std;
template<typename T>
T maxarr(T arr[], int n){
	T res=arr[0];
	for (int i=1;i<n;i++){
		if (arr[i]>res)
			res=arr[i];
	}
	return res;
}
int main(){
	
	float arr[]={10.5,3.5,1.5,30.5};
	cout<<maxarr<float>(arr,4);
	return 0;
}
#include <bits/stdc++.h> 
using namespace std;

void reverse(int arr[], int low, int high);
//void reverse(int arr[],int low,int high);
int* left_rotated(int arr[],int n,int d){
	
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);

	return arr;
}
void  reverse(int arr[], int start, int end){
	
	while (start < end) { 
        int temp = arr[start]; 
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
}

}
/*void printArray(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
}*/

int main(){
	int arr[]={0,1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);

	int d=n-1;
	//d = d % n;
	left_rotated(arr,n,d);
	for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
	//printArray(arr,n);
	return 0;
}

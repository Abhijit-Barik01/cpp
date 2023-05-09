#include<bits/stdc++.h>
using namespace std;
 
 struct intervals
 {
 	int s;
 	int e;
 };
 bool compare(intervals a, intervals b){
 	return  a.s < b.s;
 }
 void merge(intervals arr[],int n){
 sort(arr,arr+n,compare);
 int index=0;
 for(int i=1;i<n;i++){
 	if(arr[index].e >= arr[i].s){
 		arr[index].e=max(arr[index].e,arr[i].e);
 		arr[index].s=min(arr[index].s,arr[i].s);
 	}
 	else{
 		index++;
 		arr[index]=arr[i];
 	}
 }
cout << "\n The Merged Intervals are: ";  
    for (int i = 0; i <= index; i++)  
        cout << "[" << arr[i].s << ", " << arr[i].e << "] ";  

 }
 int main(){
 	intervals arr[]={{6,8},{1,9},{2,4},{10,18}};
 	int n=sizeof(arr)/sizeof(arr[0]);
 	merge(arr,n);
 	return 0;
 }
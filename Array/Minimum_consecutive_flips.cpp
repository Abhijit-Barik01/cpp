/*Find minimum number of groups flips to make all elements same.We can flip any set of consecutive 1's or 0's in binary array
complexity 0(n)*/
#include <iostream>
using namespace std;
 void flips_number(int arr[], int n)
 {	int zero=0;
 	for (int i = 1; i < n; ++i)
 	{
 		if (arr[i]!=arr[i-1])
 		{
 			if (arr[zero]!=arr[i])
 			{
 				cout<<"from array index "<<i<<"to" ;
 			}
 			else
 				cout<<(i-1)<<endl;
 		}

 	}
 	if(arr[n-1]!=arr[zero])
 		cout<<(n-1)<<endl;
 }
 int main()
 {
 	int arr[]={0,0,1,1,0,0,1,1,0,1};
 	int n=sizeof(arr)/sizeof(arr[0]);
 	flips_number(arr,n);
 	return 0;
 }
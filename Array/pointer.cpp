#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=5;
	int *p=&a;
	cout<<*p<<endl;
	cout<<p<<endl;
	int arr[]={5,6,7,8};
	int  *q=arr;
	cout<<*q<<endl;
	int n=sizeof(arr)/sizeof(arr[0]);

	for(int i=0;i<n;i++)
	{
		cout<<*(arr+i);
	}
	int x=12;
	int *c=&x;
	int **y=&c;
	cout<<**y<<endl;

}
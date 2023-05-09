#include<bits/stdc++.h>
using namespace std;
void sorting(char b[], int a[],int n)
{
	pair<int, char>p1[n];
	for (int i=0;i<n;i++)
	{
		p1[i].first=a[i];
		p1[i].second=b[i];
	}
	sort(p1,p1+6);
	for (int i = 0; i < n; ++i)
	{
		cout<<"(" <<p1[i].first<<" ," <<p1[i].second<<")"<<endl;

	}


}
int main(){
	char b[]={'a','b','c','d','f','g'};
	  int a[]={1,2,3,4,5,6};
	sorting(b,a,6);
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>v1;
	int x;
	cout<<"enter the input"<<endl;
	for (int i=0;i<6;i++){
		cin>>x;
		v1.push_back(x);
	}
	for(auto x:v1)
		cout<<x<<endl;
}
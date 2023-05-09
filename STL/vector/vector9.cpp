#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v{10,20,30,40,50,60,70,80,90};
v.resize(3);
for(auto x:v)
	cout<<x<<endl;
cout<<"resize11"<<endl;
v.resize(11);
for(auto x:v)
	cout<<x<<endl;
cout<<"resize(13,100)"<<endl;
v.resize(13,100);
for(auto x:v)
	cout<<x<<endl;

}
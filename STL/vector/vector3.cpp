#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	for(int i=0; i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
	for( int x:v)
		cout<<x<<" ";
	for(auto &x:v) //we can modify the element of vector
		x=5;
	vector<int>:: iterator itr;
	for(itr=v.begin(); itr!=v.end();itr++)
		cout<<*itr<<" ";
}
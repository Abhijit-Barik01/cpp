#include<iostream>
#include<vector>
using namespace std;
int main(){             
	vector<int>v{1,2,3,4,5,6};
	v.erase(v.begin());
	for(auto x:v)
		cout<<x<<endl;
	cout<<"erase the  array"<<endl;
	v.erase(v.begin(),v.end()-1);
	for(auto x:v)
		cout<<x<<endl;
	cout<<"erase the whole array"<<endl;
	v.erase(v.begin(),v.end());
	for(auto x:v)
		cout<<x<<endl;


	return 0;
}
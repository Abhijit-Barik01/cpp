//passing vector in fuunction in efficient way.
#include<iostream>
#include<vector>
using namespace std;
void  fun(vector<int>v){
	//passing by value.changes of vector in fun() happen localy.it can not modify orginal vector.for modification of original we need passing by reference
	v.push_back(100);
	v.push_back(200);
	
}
void fol(vector<int>&v){
	//it is passing by reference and it is efficient.we can modify orginal vector
	v.push_back(600);
	v.push_back(700);
	
}
void printvec( vector<int>v){
	//const tells that u can not modify the array.u can acces the array
	for( const auto &x:v)
	{
		//x=5;
		cout<<x<<endl;
	}
	
}
int main(){
	vector<int> v{10,6,7,8};
	cout<<"after applying pass by reference"<<endl;
	fun(v);
	for(auto x:v)
		cout<<x<<endl;
	cout<<"after call by reference"<<endl;
	fol(v);
	for(auto x:v)
		cout<<x<<endl;
	cout<<"after const appalying"<<endl;
	printvec(v);
return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v={10,20,30,4,556,890};
	vector<int>:: iterator i=v.begin();//v.begin() returns adress
	cout<<(*i)<<"\n ";
	i++;
	cout<<(*i)<<"\n";

	advance(i,3);
	cout<<(*i)<<"\n";
	i=v.end();
	i--;
	cout<<(*i)<<" ";

	return 0;
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v={10,20,30,40,50};
	vector<int>::iterator i=v.begin();
	i=next(i);
	cout<<(*i)<<"\n";
	i=next(i,2);
	cout<<(*i)<<"\n";
	i=prev(i);
	cout<<(*i)<<"\n";		
	i=prev(i,3);
	cout<<(*i)<<"\n";
	return 0;
}
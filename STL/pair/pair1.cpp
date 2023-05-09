#include<iostream>
#include<utility>
using namespace std;
int main(){
	pair<char, int>p1=make_pair('e',120);
	pair<char, int>p2('A',10);
	pair<char,int>p3;
	p3=make_pair('d',100);
	pair<string ,int>p4("gfg",1001);
	pair<string,int>p5(p4);
	cout<<p1.first<<"\n";
	cout<<p1.second<<endl;
	cout<<p5.first<<endl;
	cout<<p5.second<<endl;
	cout<<p4.first<<endl;
	cout<<p4.second<<endl;
	p1.swap(p2);
	cout<<"content of p1"<<"( "<<p1.first<<" ,"<<p1.second<<" )";

	return 0;
}